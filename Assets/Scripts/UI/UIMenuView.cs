using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIMenuView : UIView
{
    [SerializeField] bool EffectOff = true;
    private void Update() {
        if (Input.GetKeyDown(KeyCode.Escape)) {
            if (PageStack.Count == 0) {
                Push("Menu");
                if (EffectOff) {
                    SoundManager.Instance.SoundStop(Sound.Effect);
                }
                Time.timeScale = 0;
            } else
                Pop();
        }
    }
    public override void Pop() {
        base.Pop();
        if (PageStack.Count == 0) {
            Time.timeScale = 1;
            SoundManager.Instance.SoundStart(Sound.Effect);
        }
    }
    public void OnChangeSceneCilck(string sceneName) {
        SceneUtilityManager.Instance.FadeAndSceneChange(sceneName, "NormalFadeEffect", 2);
    }
}
