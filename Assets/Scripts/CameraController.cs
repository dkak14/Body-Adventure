using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    public static CameraController Instance;
    public Transform Target;
    public Transform Criteria;
    public float Duration;
    public float Power;
    public float UpdateTIme;
    public float Speed;
    public float ChasingDst;
    Vector2 Offset = new Vector2(0, 0);
    private void Awake() {
        GameObject criteria = new GameObject(name = "CameraCriteria");
        Criteria = Instantiate(criteria, transform.position, Quaternion.identity).transform;
        ChasingTarget(ChasingDst);
        Instance = this;
    }
    private void Update() {
        transform.position = new Vector3(Criteria.position.x + Offset.x, Criteria.position.y + Offset.y, -10);
    }
   
    #region ChasingTarget
    public void ChasingTarget(float speed, Transform target, float chasingDst) {
        Target = target;
        Speed = speed;
        ChasingDst = chasingDst;
        StartCoroutine(C_ChasingTarget());
    }
    public void ChasingTarget(Transform target, float chasingDst) {
        Target = target;
        ChasingDst = chasingDst;
        StartCoroutine(C_ChasingTarget());
    }
    public void ChasingTarget(float chasingDst) {
        ChasingDst = chasingDst;
        StartCoroutine(C_ChasingTarget());
    }
    IEnumerator C_ChasingTarget() {
        if (Target != null) {
            while (true) {
                if (Target == null)
                    break;
                float dstTarget = Vector2.Distance(Criteria.position, Target.position);

                float minSpeed = Speed / 8;
                float dstSpeed = dstTarget >= ChasingDst ? Speed : Mathf.Lerp(0, Speed, Mathf.Clamp(dstTarget / ChasingDst, 0, 1));
                float speed = Mathf.Clamp(dstSpeed, minSpeed, Speed);
                Criteria.position = Vector2.MoveTowards(Criteria.position, Target.position, speed * Time.deltaTime);

                yield return null;
            }
        }
    }
    #endregion
    #region ShakeCamera
    public void ShakeCamera(Transform target,float duration, float power, float updateTime) {
        Target = target;
        StartCoroutine(C_ShakeCamera(duration, power, updateTime));
    }
    public void ShakeCamera(float duration, float power, float updateTime) {
        StartCoroutine(C_ShakeCamera(duration, power, updateTime));
    }
    IEnumerator C_ShakeCamera(float duration, float power, float updateTime) {
        float Duration = duration;
        float UpdateTime = updateTime;
        float Power = power;
        if (duration <= updateTime)
            UpdateTime = duration;
        if (UpdateTime <= 0) 
            UpdateTime = 0.01f;
        

        WaitForSeconds waitSeconds = new WaitForSeconds(UpdateTime);
        while (Duration >= 0) {
            float Xpower = Random.Range(-Power, Power);
            float Ypower = Random.Range(-Power, Power);
            Offset = new Vector2(Xpower, Ypower);
            //transform.localPosition = new Vector3(Criteria.transform.position.x + Xpower, Criteria.transform.position.y + Ypower, -10);
            yield return waitSeconds;
            Duration -= UpdateTime;
            Power = Mathf.Lerp(0, power, Duration / duration);
        }
        Offset = new Vector2(0, 0);
    }
    public void NotReduceShakeCamera(float duration, float power, float updateTime) {
        StartCoroutine(C_NotReduceShakeCamera(duration, power, updateTime));
    }
    IEnumerator C_NotReduceShakeCamera(float duration, float power, float updateTime) {
        float Duration = duration;
        float UpdateTime = updateTime;
        float Power = power;
        if (duration <= updateTime)
            UpdateTime = duration;
        if (UpdateTime <= 0)
            UpdateTime = 0.01f;

        CameraController mainCamera = Camera.main.GetComponent<CameraController>();

        WaitForSeconds waitSeconds = new WaitForSeconds(UpdateTime);
        while (Duration >= 0) {
            float Xpower = Random.Range(-Power, Power);
            float Ypower = Random.Range(-Power, Power);
            mainCamera.transform.localPosition = new Vector3(mainCamera.transform.position.x + Xpower, mainCamera.transform.position.y + Ypower, -10);
            yield return waitSeconds;
            Duration -= UpdateTime;
            //Power = Mathf.Lerp(0, power, Duration / duration);
        }
        mainCamera.transform.localPosition = mainCamera.transform.position;
    }
    #endregion
    public bool IsInSideCamera(Vector2 pos, float allowDst) {
        float height = Camera.main.orthographicSize * 2 ;
        float width = height * Camera.main.aspect;
        float halfWidth = width / 2 + allowDst;
        float halfHeight = height / 2 + allowDst;
        float cameraX = CameraController.Instance.transform.position.x;
        float cameraY = CameraController.Instance.transform.position.y;
        if (-halfWidth + cameraX <= pos.x && pos.x <= halfWidth + cameraX && -halfHeight + cameraY <= pos.y && pos.y <= halfHeight + cameraY) {
            return true;
        }
        return false;
    }
}
