﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class EventManager<T> : Singleton<EventManager<T>> where T : Enum
{
    Dictionary<T, Action<T, Component, object>> Listeners = new Dictionary<T, Action<T, Component, object>>();

    public void AddListener(T eventType, Action<T, Component, object> callback) {
        if (callback == null)
            return;
        if (!Listeners.ContainsKey(eventType)) {
            Action<T, Component, object> dic = null;
            Listeners.Add(eventType, dic);
            Listeners[eventType] += callback;
        }
        else
        Listeners[eventType] += callback;
    }

    public void PostEvent(T eventType, Component sender, object param = null) {
        if (Listeners.ContainsKey(eventType)) {
            Listeners[eventType](eventType, sender, param);
        }
        else
            Debug.Log("이벤트 리스너 없따");
    }

}
