using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading;
public class Gastrin : MonoBehaviour
{
    [Header("소환시킬 덩어리 종류")]
    [SerializeField] List<Lump> LumpObjectList = new List<Lump>();

    [SerializeField] float ShotLumpCulTime = 1;
    [Header("벽 감지 거리")]
    [SerializeField] float WallSensingRange = 5;
    [Header("벽으로 부터 소환할 덩어리 거리")]
    [SerializeField] float SpawnLumpToWall = 2;
    [SerializeField] Color SensingLineColor = Color.red;
    [SerializeField] Color SpawnLumpToWallColor = Color.blue;
    [Header("덩어리 발사 각도 설정")]
    [SerializeField, Range(0, 360)]  float ShotLumpAngle = 90;
    [SerializeField, Range(0, 360)]  float AngleRange = 90;
    [SerializeField, Range(0, 25)] int CircleRadius = 5;
    [SerializeField, Range(1, 50)] int SmoothCircle = 20;
    [SerializeField] Color GastrinDirColor = Color.magenta;
    [SerializeField] Color LineColor = Color.green;
    [SerializeField] bool isShotLump = true;
    [SerializeField] float SoundCul = 6;
    [SerializeField] float LumpSpeed = 5;
    Vector2 RightWallPos = Vector2.zero;
    Vector2 LeftWallPos = Vector2.zero;
    Vector2 RightSpawnRange = Vector2.zero;
    Vector2 LeftSpawnRange = Vector2.zero;
    private void Start() {
        StartCoroutine(ShotLump());
        StartCoroutine(Sound());
    }

    IEnumerator ShotLump() {
        while (true) {
            yield return null;
            if (!isShotLump)
                continue;
            yield return new WaitForSeconds(ShotLumpCulTime);
            Vector2 spawnPos = Vector2.Lerp(RightSpawnRange, LeftSpawnRange, Random.Range((float)0, 1));
            float angle1 = ShotLumpAngle + AngleRange / 2;
            float angle2 = ShotLumpAngle - AngleRange / 2;
            if (angle2 <= transform.eulerAngles.z && transform.eulerAngles.z <= angle1) {
                Lump randomLump = LumpObjectList[Random.Range(0, LumpObjectList.Count)];
                randomLump.SetLump(transform.eulerAngles.z, LumpSpeed);
                Instantiate(randomLump, spawnPos, Quaternion.identity);
            }
        }
    }
    public float GetTransformTheta(float angle) {
        float transAngle = transform.eulerAngles.z + angle;
        transAngle *= Mathf.Deg2Rad;
        return transAngle;
    }
    void SensingWall() {
        float righttheta = GetTransformTheta(90);
        float lefttheta = GetTransformTheta(-90);

        Vector2 rightDir = new Vector2(Mathf.Cos(righttheta), Mathf.Sin(righttheta));
        Vector2 lefttDir = new Vector2(Mathf.Cos(lefttheta), Mathf.Sin(lefttheta));

        int layerMask = 1 << LayerMask.NameToLayer("Wall");
        RaycastHit2D rightRay = Physics2D.Raycast(transform.position, rightDir, WallSensingRange, layerMask);
        if (rightRay.collider != null) {
            RightWallPos = rightRay.point;
        } else
            RightWallPos = (Vector2)transform.position + rightDir * WallSensingRange;
        RaycastHit2D lefttRay = Physics2D.Raycast(transform.position, lefttDir, WallSensingRange, layerMask);
        if (lefttRay.collider != null) {
            LeftWallPos = lefttRay.point;
        } else
            LeftWallPos = (Vector2)transform.position + lefttDir * WallSensingRange;


        Vector2 transformPosition = (Vector2)transform.position;
        float rightDst = Mathf.Max(Vector2.Distance(transformPosition, RightWallPos) - SpawnLumpToWall, 0);
        RightSpawnRange = transformPosition + rightDir * rightDst;
        float leftDst = Mathf.Max(Vector2.Distance(transformPosition, LeftWallPos) - SpawnLumpToWall, 0);
        LeftSpawnRange = transformPosition + lefttDir * leftDst;
    }
    public void FixedUpdate() {
        SensingWall();
    }
    private void OnDrawGizmos() {
        // 덩어리 소환 각도
        Gizmos.color = LineColor;
        float angle = ShotLumpAngle;
        float range = AngleRange;
        float totalAngle1 = angle + range / 2;
        float totalAngle2 = angle - range / 2;
        totalAngle1 *= Mathf.Deg2Rad;
        totalAngle2 *= Mathf.Deg2Rad;

        float radius = CircleRadius;
        Vector2 transformPosition = (Vector2)transform.position;
        Vector2 pos1 = transformPosition + new Vector2(Mathf.Cos(totalAngle1), Mathf.Sin(totalAngle1)) * radius;
        Vector2 pos2 = transformPosition + new Vector2(Mathf.Cos(totalAngle2), Mathf.Sin(totalAngle2)) * radius;
        Gizmos.DrawLine(transformPosition, pos1);
        Gizmos.DrawLine(transformPosition, pos2);

        float[] circleAngles = new float[SmoothCircle];
        Vector2[] circlePos = new Vector2[SmoothCircle];
        float startAngle = angle - range / 2;
        circleAngles[0] = startAngle;
        circleAngles[0] *= Mathf.Deg2Rad;
        circlePos[0] = transformPosition + new Vector2(Mathf.Cos(circleAngles[0]), Mathf.Sin(circleAngles[0])) * radius;
        for (int i = 1; i < circleAngles.Length; i++) {
            circleAngles[i] = startAngle + (AngleRange * i / circleAngles.Length);
            circleAngles[i] *= Mathf.Deg2Rad;
            circlePos[i] = transformPosition + new Vector2(Mathf.Cos(circleAngles[i]), Mathf.Sin(circleAngles[i])) * radius;
            Gizmos.DrawLine(circlePos[i - 1], circlePos[i]);
        }
        Gizmos.DrawLine(circlePos[circlePos.Length - 1], pos1);
        float dir = transform.eulerAngles.z;
        dir *= Mathf.Deg2Rad;
        Vector2 frontDir = transformPosition + new Vector2(Mathf.Cos(dir), Mathf.Sin(dir)) * radius;
        Gizmos.color = GastrinDirColor;
        Gizmos.DrawLine(transformPosition, frontDir);

        // 벽감지
        Gizmos.color = SensingLineColor;
        float righttheta = transform.eulerAngles.z + 90;
        righttheta *= Mathf.Deg2Rad;
        float lefttheta = transform.eulerAngles.z - 90;
        lefttheta *= Mathf.Deg2Rad;


        if(RightWallPos != Vector2.zero) {
            Gizmos.DrawLine(transformPosition, RightWallPos);
        } else {

            Vector2 rightDir = transformPosition + new Vector2(Mathf.Cos(righttheta), Mathf.Sin(righttheta)) * WallSensingRange;
            Gizmos.DrawLine(transformPosition, rightDir);
        }

        if (LeftWallPos != Vector2.zero) {
            Gizmos.DrawLine(transformPosition, LeftWallPos);
        } else {

            Vector2 leftDir = transformPosition + new Vector2(Mathf.Cos(lefttheta), Mathf.Sin(lefttheta)) * WallSensingRange;
            Gizmos.DrawLine(transformPosition, leftDir);
        }

        // 스폰 가능 거리
        Gizmos.color = SpawnLumpToWallColor;
        if (RightSpawnRange != Vector2.zero) 
            Gizmos.DrawLine(transformPosition, RightSpawnRange);
        else {
            float Dst = Mathf.Clamp((WallSensingRange - SpawnLumpToWall), 0, WallSensingRange);
            Vector2 rightDir = transformPosition + new Vector2(Mathf.Cos(righttheta), Mathf.Sin(righttheta)) * Dst;
            Gizmos.DrawLine(transformPosition, rightDir);
        }
        if (LeftSpawnRange != Vector2.zero)
            Gizmos.DrawLine(transformPosition, LeftSpawnRange);
        else {
            float Dst = Mathf.Clamp((WallSensingRange - SpawnLumpToWall), 0, WallSensingRange);
            Vector2 leftDir = transformPosition + new Vector2(Mathf.Cos(lefttheta), Mathf.Sin(lefttheta)) * Dst;
            Gizmos.DrawLine(transformPosition, leftDir);
        }
    }
    IEnumerator Sound() {
        bool startSound = false;
        while (true) {
            while (!startSound) {
                startSound = SoundManager.Instance.PlayEffect("Gastrin", transform.position, 4);
                yield return null;
                Debug.Log("안됨");
            }
            Debug.Log("대기중");
            yield return new WaitForSeconds(SoundCul);
            startSound = false;
            Debug.Log("됨");
        }
    }
    public void OnTriggerEnter2D(Collider2D collision) {
        if(collision.tag == "Player") {
            EventManager<PlayerEvent>.Instance.PostEvent(PlayerEvent.KillPlayer, this, null);
        }
    }
}
