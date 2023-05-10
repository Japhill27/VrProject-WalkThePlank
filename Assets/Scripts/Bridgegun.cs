using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bridgegun : MonoBehaviour
{
    // public float speed = 40;
    // public GameObject bullet;
    // public Transform barrel;
    // public AudioSource source;
    // public AudioClip sound;

public GameObject plankPrefab;
    public Transform gunTip;
    public float plankForce = 10f;
    
    public void Fire(){
        // source.PlayOneShot(sound);
        //GameObject spawnedBullet = Instantiate(bullet, barrel.position, barrel.rotation);
                 GameObject newPlank = Instantiate(plankPrefab, gunTip.position, gunTip.rotation);
                Rigidbody plankRigidbody = newPlank.GetComponent<Rigidbody>();
                plankRigidbody.AddForce(gunTip.forward * plankForce, ForceMode.Impulse);

        //spawnedBullet.GetComponent<Rigidbody>().velocity = speed * barrel.forward;
        // Destroy(spawnedBullet,2);

    }
}
