using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Reflection;
using DG.Tweening;
using System.Linq;
public class SceneUtilityManager : DontDestroySingletonBehaviour<SceneUtilityManager>
{
    Dictionary<string, Image> FadeImageDIc = new Dictionary<string, Image>();
    Transform canvas;
    Image ActiveImage;
    public override void Awake() {
        base.Awake();
        Image[] fadeImage = Resources.LoadAll<Image>("Fade/FadeImage");
        foreach (Image FadeImage in fadeImage) {
            if (!FadeImageDIc.ContainsKey(FadeImage.name)) {
                FadeImageDIc.Add(FadeImage.name, FadeImage);
                Debug.Log(FadeImage.name + " 추가");
            }
        }
        if (canvas == null)
            canvas = GameObject.Find("Canvas").transform;
    }
    #region 페이드 아웃
    public void FadeOut(string fadeEffectName, float duration) {
        InvokeFadeEffect("FadeOut", fadeEffectName, duration, null);
    }
    public void FadeOut(string fadeEffectName, float duration, params Action[] callback) {
        InvokeFadeEffect("FadeOut", fadeEffectName, duration, () => { Destroy(ActiveImage.gameObject); foreach (Action Callback in callback) Callback(); });
    }
    #endregion
    #region 페이드 인
    public void FadeIn(string fadeEffectName, float duration) {
        InvokeFadeEffect("FadeIn", fadeEffectName, duration, null);
    }
    public void FadeIn(string fadeEffectName, float duration, params Action[] callback) {
        InvokeFadeEffect("FadeIn", fadeEffectName, duration, () => { Destroy(ActiveImage.gameObject); foreach (Action Callback in callback) Callback(); });
    }
    #endregion
    public void InvokeFadeEffect(string mathodName, string fadeEffectName, float duration, params Action[] callback) {
        Type type = Type.GetType(fadeEffectName);
        MethodInfo method = type.GetMethod(mathodName, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
        object fadeEffect = Activator.CreateInstance(type);
        object[] parameter = new object[2];
        parameter[0] = duration;
        parameter[1] = callback;
        method.Invoke(fadeEffect, parameter);
    }
    public void FadeAndSceneChange(string sceneName, string fadeEffectName, float duration)  {
        if (!IsGetScene(sceneName)) {
            Debug.LogWarning(sceneName + " 해당 씬은 존재하지 않습니다,");
            return;
        }
        Type type = Type.GetType(fadeEffectName);
        MethodInfo methodFadeOut = type.GetMethod("FadeOut");
        MethodInfo methodFadeIn = type.GetMethod("FadeIn");
        object fadeEffect = Activator.CreateInstance(type);
        object[] fadeOutParameter = new object[2];
        fadeOutParameter[0] = duration;
        fadeOutParameter[1] = new Action[] { () => { SceneChange(sceneName); Time.timeScale = 1; } };
        methodFadeOut.Invoke(fadeEffect, fadeOutParameter);
        EventManager<GameEvent>.Instance.PostEvent(GameEvent.ChangeStageStart, this, sceneName);
    }
    public bool IsGetScene(string sceneName) {
        return SceneManager.GetSceneByName(sceneName) != null ? true : false;
    }

    public Image CreateFadeImage(string name,float widthScale, float heightScale, Color color, float duration) {
        Image image = GetImage(name, widthScale, heightScale);
        if (image != null) {
            image.color = color;
            if (canvas == null || canvas.gameObject.activeSelf == false) {
                canvas = GameObject.Find("Canvas").transform;
                Debug.Log("캔버스 재설정");
            }
            if (canvas == null) {
                Debug.LogError("캔버스가 없습니다.");
                return null; 
            }
            Image createImage = Instantiate(image, canvas);
            StartCoroutine(DestroyImage(createImage.gameObject, duration + 1));
            ActiveImage = createImage;
            Debug.Log("이미지 생성 완료");
            return createImage;
        }
        return null;
    }
    IEnumerator DestroyImage(GameObject image, float duration) {
        yield return new WaitForSeconds(duration);
        if (image != null) {
            image.transform.DOKill();
            image.SetActive(false);
           // Destroy(image);
        }
    }
    public void SceneChange(string sceneName) {
        if (SceneManager.GetSceneByName(sceneName) != null) {
            StartCoroutine(MoveScene(sceneName));
            Debug.Log(sceneName + " 씬으로 이동했습니다.");
        } else
            Debug.LogError(sceneName + " 해당 씬은 존재하지 않습니다.");
    }

    // 비동기 로딩
    IEnumerator MoveScene(string sceneName) {
        AsyncOperation op = SceneManager.LoadSceneAsync(sceneName);
        op.allowSceneActivation = false;
        float progress = op.progress;
        while (progress < 0.9f) {
            yield return null;
            progress = op.progress;
        }
        op.allowSceneActivation = true;
    }
    public Image GetImage(string name, float widthScale, float heightScale) {
        if (FadeImageDIc.ContainsKey(name)){
            Image cloneImage = FadeImageDIc[name];
            cloneImage.rectTransform.anchoredPosition = new Vector2(0, 0);
            cloneImage.rectTransform.localScale = new Vector3(widthScale, heightScale, 1);
            cloneImage.sprite = FadeImageDIc[name].sprite;
            cloneImage.color = FadeImageDIc[name].color;
            return cloneImage;   
        }
        return null;
    }

    void OnSceneLoaded(Scene scene, LoadSceneMode level) {
        if (GameObject.Find("Canvas")) {
            canvas = GameObject.Find("Canvas").transform;
        }
        else
            Debug.LogWarning("해당씬에는 캔버스가 없습니다.");
    }

    private void OnEnable() {
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    private void OnDisable() {
        SceneManager.sceneLoaded -= OnSceneLoaded;
    }
}
