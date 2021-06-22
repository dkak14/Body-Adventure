using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PressNextScene : MonoBehaviour
{
    [SerializeField] string nextScene = null;
    bool press = false;
    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
            if (!press) {
                SceneUtilityManager.Instance.FadeAndSceneChange(nextScene, "NormalFadeEffect", 2);
                press = true;
            }
    }
}
