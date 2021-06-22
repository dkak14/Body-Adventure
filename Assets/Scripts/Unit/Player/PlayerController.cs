using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float StartMaxSpeedDst;
    PlayerBase playerBase;
    Rigidbody2D rigid;
    void Start()
    {
        playerBase = GetComponent<PlayerBase>();
        rigid = GetComponent<Rigidbody2D>();
    }
    private void FixedUpdate() {
        Vector3 Target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        if (!playerBase.stun && Input.GetMouseButton(0)) {
            float dstTarget = Vector2.Distance(transform.position, Target);
            float minSpeed = playerBase.Speed / 10;
            float dstSpeed = dstTarget >= StartMaxSpeedDst ? playerBase.Speed : Mathf.Lerp(0, playerBase.Speed, Mathf.Clamp(dstTarget / StartMaxSpeedDst, 0, 1));
            float speed = Mathf.Clamp(dstSpeed, minSpeed, playerBase.Speed);
            Vector2 mouseDIr = ((Vector2)Target - (Vector2)transform.position).normalized;
            Vector2 movePos = (Vector2)transform.position + mouseDIr * (speed * Time.deltaTime);
            rigid.MovePosition(movePos);
        }
        if(CameraController.Instance != null)
        CameraController.Instance.Speed = playerBase.Speed + 1;
    }
    
}
