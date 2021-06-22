using System.Collections;
using UnityEngine;
public class TeamLogo : MonoBehaviour
{
    [SerializeField] float FadeOutStart = 2;
    [SerializeField] float FadeOut = 2;
    [SerializeField] string nextScene = "Title";
    private void Awake() {
        StartCoroutine(LogoEvent());
    }
    IEnumerator LogoEvent() {
        yield return new WaitForSeconds(FadeOutStart);
        SceneUtilityManager.Instance.FadeAndSceneChange(nextScene, "NormalFadeEffect", FadeOut);
    }
}
