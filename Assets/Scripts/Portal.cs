using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Reflection;

public class Portal : MonoBehaviour
{
    [Header("다음 스테이지 씬 이름")]
    [SerializeField] string SceneName = null;
    [Header("페이드 이펙트")]
    [SerializeField] string FadeEffectName = "NormalFadeEffect";
    [SerializeField] float FadeEffectDuration = 2;
    [SerializeField] Vector2 ColliderSize = new Vector2(1, 1);
    [SerializeField,Range(0.1f,10)] float ShakeCameraCul = 1;
    [SerializeField] float ShakeDuration = 0;
    [SerializeField] float ShakePower = 0;
    [SerializeField] float ShakePowerPlus = 0;
    bool GoStage = false;
    private void Update() {
        Collider2D[] colliders = Physics2D.OverlapBoxAll(transform.position, ColliderSize, 0);
        foreach(Collider2D collider in colliders) {
            if (GoStage == false) {
                if (collider.tag == "Player" || collider.tag == "Invincibility") {
                    SceneUtilityManager.Instance.FadeAndSceneChange(SceneName, FadeEffectName, FadeEffectDuration);
                    Shake();
                    GoStage = true;
                }
            }
        }
    }
    void Shake() {
        if (ShakeDuration == 0 || ShakePower == 0)
            return;

        StartCoroutine(C_Shake());
    }
    IEnumerator C_Shake() {
        SoundManager.Instance.BGMFadeOut(FadeEffectDuration - 1f);
        float Power = ShakePower;
        while (true) {
            CameraController.Instance.ShakeCamera(ShakeDuration, Power, 0.03f);
            Power += ShakePowerPlus;
            yield return new WaitForSeconds(ShakeCameraCul);
        }
    }
    public void OnDrawGizmos() {
        Gizmos.color = Color.magenta;
        Gizmos.DrawWireCube(transform.position, ColliderSize);
    }
}
