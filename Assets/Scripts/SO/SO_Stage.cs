using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[CreateAssetMenu(fileName = "SO_Stage", menuName = "SO/Stage", order = int.MaxValue)]
public class SO_Stage : ScriptableObject
{
    [SerializeField] string sceneName = null;
    public string SceneName { get { return sceneName; } }
    [SerializeField] AudioClip bgm = null;
    public AudioClip BGM { get { return bgm; } }
    [SerializeField] bool isBeforeBGMOff = true;
    public bool IsBeforeBGMOff { get { return isBeforeBGMOff; } }
    [SerializeField] string fadeInEffectName = "NormalFadeEffect";
    public string FadeInEffectName { get { return fadeInEffectName; } }

    [SerializeField] float fadeInDuration = 2;
    public float FadeInDuration { get { return fadeInDuration; } }

    [SerializeField] bool isNormalJoin = false;
    public bool IsNormalJoin { get { return isNormalJoin; } }
    [SerializeField] bool isLoop = true;
    public bool IsLoop { get { return isLoop; } }
    public bool IsJoin = false;
    public void Init() {
        IsJoin = isNormalJoin;
    }
}
