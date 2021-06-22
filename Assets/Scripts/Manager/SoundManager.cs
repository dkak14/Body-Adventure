using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using GameSave;
using System.Threading;
public enum Sound {
    BGM,
    Effect,
    MaxCount
}

public class SoundManager : DontDestroySingletonBehaviour<SoundManager> {
    [SerializeField] AudioSource[] _audioSources = new AudioSource[(int)Sound.MaxCount];
    float[] _audioVolume = new float[(int)Sound.MaxCount];
    Dictionary<string, AudioClip> _audioClips = new Dictionary<string, AudioClip>();
    Coroutine c_BGMFadeOut = null;
    public override void Awake() {
        base.Awake();
        Init();
        Load();
        EventManager<GameEvent>.Instance.AddListener(GameEvent.ChangeStage, this, ChangeSceneEvent);
    }
    void ChangeSceneEvent(GameEvent eventType, Component sender, object param) {
        if (c_BGMFadeOut != null) 
            StopCoroutine(c_BGMFadeOut);
        AudioSource audioSource = _audioSources[(int)Sound.Effect];
        audioSource.Stop();
    }
    public void Init() {
        string[] soundNames = Enum.GetNames(typeof(Sound));
        for (int i = 0; i < soundNames.Length - 1; i++) {
            if (_audioSources[i] != null)
                continue;
            GameObject go = new GameObject { name = soundNames[i] };
            _audioSources[i] = go.AddComponent<AudioSource>();
            SetVolume(i, 0.4f);
            go.transform.parent = transform;
        }
        _audioSources[(int)Sound.BGM].loop = true; //
        string audioPath = "Audio";

        AudioClip[] audios = Resources.LoadAll<AudioClip>(audioPath);
        _audioClips = new Dictionary<string, AudioClip>();
        for (int i = 0; i < audios.Length; i++) {
            Debug.Log(audios[i].name);
            _audioClips.Add(audios[i].name, audios[i]);
        }
    }

    public void SoundStop(Sound type) {
        AudioSource audioSource = _audioSources[(int)type];
        audioSource.Stop();
        Debug.Log("퍼즈");
    }
    Thread thread;
    public void SoundStart(Sound type) {
        AudioSource audioSource = _audioSources[(int)type];
        audioSource.Play();
        Debug.Log("스타트");
    }
    void rund() {

    }
    public void Clear() {
        // 재생기 전부 재생 스탑, 음반 빼기
        foreach (AudioSource audioSource in _audioSources) {
            audioSource.clip = null;
            audioSource.Stop();
        }
        // 효과음 Dictionary 비우기
        _audioClips.Clear();
    }
    public float GetVolume(Sound soundType) {
        return _audioVolume[(int)soundType];
    }
    float GetVolume(int index) {
        return _audioVolume[index];
    }
    public void SetVolume(Sound soundType, float volume) {
        _audioSources[(int)soundType].volume = volume;
        _audioVolume[(int)soundType] = volume;
    }
    void SetVolume(int index, float volume) {
        _audioSources[(int)index].volume = volume;
        _audioVolume[(int)index] = volume;
    }
    public void PlayBGM(AudioClip clip, float pitch, bool loop) {
        if (clip == null)
            return;
        Sound soundType = Sound.BGM;
        AudioSource audioSource = _audioSources[(int)soundType];
        if (audioSource.isPlaying)
            audioSource.Stop();

        audioSource.volume = _audioVolume[(int)soundType];
        audioSource.loop = loop;
        audioSource.pitch = pitch;
        audioSource.clip = clip;
        audioSource.Play();
    }
    public void BGMOff() {
        Sound soundType = Sound.BGM;
        AudioSource audioSource = _audioSources[(int)soundType];
        audioSource.Stop();
    }
    public void BGMFadeOut(float duration) {
        c_BGMFadeOut = StartCoroutine(C_BGMFadeOut(duration));
    }
    IEnumerator C_BGMFadeOut(float duration) {
        Sound soundType = Sound.BGM;
        AudioSource audioSource = _audioSources[(int)soundType];
        audioSource.volume = _audioVolume[(int)soundType];
        Debug.Log("볼륨 " + audioSource.volume);
        float value = duration;
        while (value > 0) {
            audioSource.volume = _audioVolume[(int)soundType] * value / duration;
            value -= Time.deltaTime;
            yield return null;
        }
    }
    public void PlayEffect(string effectName) {
        PlayEffect(effectName, 1);
    }
    public void PlayEffect(string effectName, float volume) {
        if (!_audioClips.ContainsKey(effectName)) {
            Debug.LogWarning(effectName + " 이라는 오디오는 없습니다.");
            return;
        }
        Sound soundType = Sound.Effect;
        AudioSource audioSource = _audioSources[(int)soundType];
        audioSource.PlayOneShot(_audioClips[effectName], volume);
    }
    public bool PlayEffect(string effectName, Vector2 pos, float dst) {
        if (!_audioClips.ContainsKey(effectName)) {
            Debug.LogWarning(effectName + " 이라는 오디오는 없습니다.");
            return false;
        }
        AudioClip clip = _audioClips[effectName];
        return PlayEffect(clip, pos, dst);
    }
    public bool PlayEffect(AudioClip clip, Vector2 pos, float dst) {
        if (clip == null)
            return false;
        if (!CameraController.Instance.IsInSideCamera(pos, dst)) {
            return false;
        }
        Sound soundType = Sound.Effect;
        AudioSource audioSource = _audioSources[(int)soundType];
        audioSource.PlayOneShot(clip);
        return true;
    }
    private bool Load() {
        SaveData soundData = SaveManager.LoadDeSerailizedData("Option", "OptionData");
        if (soundData != null) {
            string[] soundNames = Enum.GetNames(typeof(Sound));
            for (int i = 0; i < soundNames.Length - 1; i++) {
                SaveData volumeData = soundData.GetData(soundNames[i]);
                float volume = volumeData.GetFloat();
                SetVolume(i, volume);
            }
            SaveManager.SaveSerailizeData("Option", "OptionData", soundData);
            return true;
        }
        return false;
    }
    void Save() {
        SaveData soundData = new SaveData();
        string[] soundNames = Enum.GetNames(typeof(Sound));
        for (int i = 0; i < soundNames.Length - 1; i++) {
            if (_audioSources[i] == null)
                continue;
            SaveData volumeData = new SaveData(GetVolume(i));
            soundData.AddData(soundNames[i], volumeData);
        }
        SaveManager.SaveSerailizeData("Option", "OptionData", soundData);
    }
    private void OnApplicationQuit() {
        Save();
    }
}
