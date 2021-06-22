using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System;
using UnityEngine.UI;
using UnityEngine.Experimental.Rendering.Universal;
[Serializable]
public class PlayerSprite {
    public Sprite sprite = null;
    public Vector2 PlayerScale = new Vector2(1, 1);
    [SerializeField] float beatCul = 1;
    public float BeatCul { get { return beatCul; } }
    [SerializeField, Range(0,1)] float beatVolume = 1;
    public float BeatVolume { get { return beatVolume; } }
}
class SpeedDeBuff {
    PlayerBase Target;
    int id;
    public int ID { get { return id; } }
    int maxStack;
    public int MaxStack { get { return maxStack; } }
    int buffStack;
    public int BuffStack { get { return buffStack; } }
    float percentPerStack;
    public float PercentPerStack { get { return percentPerStack; } }

    public float TotalPercent { get { return Mathf.Min(1, percentPerStack * buffStack); } }
    float duration;
    public float Duration { get { return duration; } }
    public float LastDuration;

    public float Value(float calculateSpeed) {
        return calculateSpeed * (1 - TotalPercent);
    }
    public SpeedDeBuff(PlayerBase target,int _id,int _maxStack,int _stack,float _percentPerStack, float _duration) {
        id = _id;
        Target = target;
        maxStack = _maxStack;
        buffStack = Mathf.Clamp(_stack, 0, maxStack);
        percentPerStack = Mathf.Clamp(_percentPerStack, 0, 1);
        duration = _duration;
        LastDuration = _duration;
    }
    public void AddStack(int value) {
        LastDuration = duration;
        buffStack = Mathf.Clamp(buffStack + value, 0, maxStack);
    }
}
public class PlayerBase : UnitBase
{
    [Header("0(기본) ~ 4(죽는 모션)")]
    public List<PlayerSprite> PlayerSprites = new List<PlayerSprite>(5);
    [SerializeField] float speed = 2; public float Speed { get { return TotalSpeed(); } }
    [SerializeField] float MinSpeed = 0.2f;
    float TotalSpeed() {
        float totalSpeed = speed;
        foreach(SpeedDeBuff debuff in BuffList) {
            totalSpeed = debuff.Value(totalSpeed);
        }
        return Mathf.Max(MinSpeed, totalSpeed);
    }
    List<SpeedDeBuff> BuffList = new List<SpeedDeBuff>();
    int hp = 0;
    public ParticleSystem DieParticle;
    [SerializeField] Color NormalColor = new Color(1,1,1,1);
    [Header("피격시 무적 시간")]
    public float InvincibilityDuration = 1;
    [Header("피격시 스턴 시간")]
    public float StunDuration = 0.5f;

    protected override void Start() {
        base.Start();
        StartCoroutine(SpeedBuffTimer());
        StartCoroutine(HeartBeat());
        EventManager<PlayerEvent>.Instance.AddListener(PlayerEvent.KillPlayer, this, asdf);
        EventManager<GameEvent>.Instance.AddListener(GameEvent.ChangeStageStart,this, ChangeStageStart);
    }
    void asdf(PlayerEvent eventType, Component sender, object param = null) {
        Die();
    }
    void ChangeStageStart(GameEvent eventType, Component sender, object param = null) {
        gameObject.tag = "Invincibility";
        gameObject.layer = LayerMask.NameToLayer("Invincibility");
    }
    private void OnDisable() {
        EventManager<PlayerEvent>.Instance.RemoveEvent(PlayerEvent.KillPlayer, asdf);
    }
    IEnumerator HeartBeat() {
        while (true) {
            float beatCul = PlayerSprites[hp].BeatCul;
            yield return new WaitForSeconds(beatCul);
            SoundManager.Instance.PlayEffect("HeartBeat", PlayerSprites[hp].BeatVolume);
        }
    }

    #region 스피드 버프
    public void GetSpeedBuff(int id,int maxStack,float percent, float duration) {
        foreach(SpeedDeBuff debuff in BuffList) {
            if (debuff.ID == id) {
                debuff.AddStack(1);
                return;
            }
        }
        SpeedDeBuff speedBuff = new SpeedDeBuff(this, id, maxStack, 1, percent, duration);
        BuffList.Add(speedBuff);
    }
    IEnumerator SpeedBuffTimer() {
        while (true) {
            if (BuffList.Count > 0 && BuffList != null) {
                for (int i = 0; i < BuffList.Count; i++) {
                    BuffList[i].LastDuration -= Time.deltaTime;
                    if (BuffList[i].LastDuration <= 0) {
                        BuffList.Remove(BuffList[i]);
                    }
                }
            }
            yield return null;
        }
    }
    #endregion
    public override void OnDamaged(UnitBase attacker, float power) {
        hp++;
            transform.localScale = PlayerSprites[hp].PlayerScale;
            spriteRenderer.sprite = PlayerSprites[hp].sprite;
        if (hp == PlayerSprites.Count - 1) {
            Die();
        } else {
            DamagedEffect(attacker, power);
        }
    }
    void DamagedEffect(UnitBase attacker, float power) {
        SoundManager.Instance.PlayEffect("Collision");
        Vector2 Recoilvec = (transform.position - attacker.transform.position).normalized;
        PushPlayer(Recoilvec, 1);
        spriteRenderer.DOKill();
        CameraController.Instance.ShakeCamera(transform, 0.5f, 1f, 0.03f);
        StartCoroutine(C_Invincibility());
        EventManager<PlayerEvent>.Instance.PostEvent(PlayerEvent.Damaged, this, power);
    }
    public void PushPlayer(Vector2 dir, float power) {
        rigid.AddForce(dir * power, ForceMode2D.Impulse);
        Stun(StunDuration);
    }
    IEnumerator C_Invincibility() {
        float invincibilityDuration = InvincibilityDuration;
        gameObject.tag = "Invincibility";
        gameObject.layer = LayerMask.NameToLayer("Invincibility");
        while (invincibilityDuration > 0) {
            Color spriteColor = spriteRenderer.color;
            spriteRenderer.color = new Color(spriteColor.r, spriteColor.g, spriteColor.b, 0.2f);
            invincibilityDuration -= Time.deltaTime;
            yield return null;
        }
        gameObject.tag = "Player";
        gameObject.layer = LayerMask.NameToLayer("Player");
        spriteRenderer.color = NormalColor;
    }
    protected override void Die() {
        stun = true;
        spriteRenderer.sprite = PlayerSprites[PlayerSprites.Count - 1].sprite;
        gameObject.tag = "Invincibility";
        gameObject.layer = LayerMask.NameToLayer("Invincibility");
        CameraController.Instance.ShakeCamera(1, 1.5f, 0.03f);
        StartCoroutine(DieEffect(2));
    }
    IEnumerator DieEffect(float waitTime) {
        yield return new WaitForSeconds(waitTime);
        Instantiate(DieParticle, transform.position, Quaternion.identity);
        //EventManager<PlayerEvent>.Instance.PostEvent(PlayerEvent.Die, this, null);
        EventManager<GameEvent>.Instance.PostEvent(GameEvent.StageRestart, this, null);
        SoundManager.Instance.PlayEffect("GameOver");
        Debug.Log("사망");
        spriteRenderer.color = new Color(1, 1, 1, 0);
    }
}

