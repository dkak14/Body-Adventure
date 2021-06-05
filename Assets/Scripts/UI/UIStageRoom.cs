﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;

[Serializable]
public class StageButton {
    public Button button;
    public string StageName;
}
public class UIStageRoom : MonoBehaviour
{
    [SerializeField] List<StageButton> StageButtonList = new List<StageButton>();
    private void Start() {
        foreach (StageButton stageButton in StageButtonList) {
            StageData stageData = StageDataManager.Instance.GetStageData(stageButton.StageName);
            if (stageData != null) {
                if (!stageData.isJoin) {
                    ColorBlock cb = stageButton.button.colors;
                    cb.normalColor = Color.black;
                    cb.selectedColor = Color.black;
                    stageButton.button.colors = cb;
                } else
                    stageButton.button.onClick.AddListener(() => { OnStageButtonClick(stageData.SceneName); });
                continue;
            } else {
                stageButton.button.onClick.AddListener(() => { OnStageButtonClick(stageButton.StageName); });               
                ColorBlock cb = stageButton.button.colors;
                cb.normalColor = Color.black;
                stageButton.button.colors = cb;
            }
        }
    }
    void OnStageButtonClick(string stageName) {
        SceneUtilityManager.Instance.FadeAndSceneChange(stageName, "NormalFadeEffect", 2);
    }
}
