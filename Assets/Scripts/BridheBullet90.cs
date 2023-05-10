using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BridheBullet90 : MonoBehaviour
{
    public GameObject bridgePrefab;
    Quaternion desiredRotation = Quaternion.Euler(0f, 90f, 0f);

    void OnCollisionEnter(Collision collision){
        Instantiate(bridgePrefab, transform.position, desiredRotation);
        Destroy(this.gameObject);
    }
    

}
