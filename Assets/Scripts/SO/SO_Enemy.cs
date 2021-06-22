using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
[CreateAssetMenu(fileName = "SO_Enemy", menuName = "SO/Enemy", order = int.MaxValue)]
public class SO_Enemy : ScriptableObject
{
    [SerializeField, Header("몬스터 아이디")]
    int Id = 0;
    public int ID { get { return Id; } }
    [SerializeField, Header("플레이어 충돌시 몸 커지게 할건지")]
    bool attackPlayer = false;
    public bool AttackPlayer { get { return attackPlayer; } }
    [SerializeField, Header("데미지 안주면 밀칠건지")]
    bool pushPlayer = false;
    public bool PushPlayer { get { return pushPlayer; } }
    [SerializeField, Header("플레이어 충돌시 밀어내는 힘")]
    float power = 1;
    public float Power { get { return power; } }
    [SerializeField, Header("디버프 줄건지 준다면 체크 아니면 해제")]
    bool isDebuff = false;
    public bool IsDebuff { get { return isDebuff; } }
    [SerializeField, Header("디버프 최대 스택"), Range(0, 100)]
    int maxStack = 1;
    public int MaxStack { get { return maxStack; } }
    [SerializeField, Header("디버프 스택1당 감소시킬 속도 퍼센트"),Range((float)0,1)]
    float slowPower = 0.2f;
    public float SlowPower { get { return slowPower; } }
    [SerializeField, Header("디버프 지속시간")]
    float slowDuration = 1;
    public float SlowDuration { get { return slowDuration; } }
}

