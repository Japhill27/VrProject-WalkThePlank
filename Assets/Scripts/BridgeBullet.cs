using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BridgeBullet : MonoBehaviour
{
    public GameObject bridgePrefab;
    // public Vector3 plankPosition;
    // public Quaternion plankRotation;
    Quaternion desiredRotation = Quaternion.Euler(0f, 180f, 0f);

    void OnCollisionEnter(Collision collision){
        Instantiate(bridgePrefab, transform.position, desiredRotation);
        Destroy(this.gameObject);
    }
}
