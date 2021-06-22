using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
public class EndScene : MonoBehaviour
{
    [SerializeField] float FadeOutDuration = 5;
    [SerializeField] float StartMoveTime = 5;
    [SerializeField] Transform ArrivalPos = null;
    [SerializeField] Transform EndingCredit = null;
    [SerializeField] float TextMoveDuration = 10;
    [SerializeField] AudioClip EndAudio = null;
    void Start()
    {
        StartCoroutine(Next());
    }

    IEnumerator Next() {
        yield return new WaitForSeconds(StartMoveTime);
        SoundManager.Instance.PlayBGM(EndAudio, 1, false);
        EndingCredit.transform.DOMove(ArrivalPos.position, TextMoveDuration).SetEase(Ease.Linear).
            OnComplete(() => { SceneUtilityManager.Instance.FadeAndSceneChange("Title", "NormalFadeEffect", FadeOutDuration); });
        
    }
}
