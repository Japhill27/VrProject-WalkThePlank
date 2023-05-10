using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shoot : MonoBehaviour
{
    [SerializeField] private float timer = 5;
    private float bulletTime;
    public float speed = 40;

   public GameObject enemyBullet;
   public Transform spawnPoint;

    // Update is called once per frame
    void Update()
    {
        ShootProjectile();
    }

    void ShootProjectile(){
        bulletTime -= Time.deltaTime;
        if (bulletTime > 0) return;
        bulletTime = timer;
        GameObject bulletObj = Instantiate(enemyBullet, spawnPoint.transform.position, spawnPoint.transform.rotation) as GameObject;
        Rigidbody bulletRig = bulletObj.GetComponent<Rigidbody>();
        bulletRig.AddForce(bulletRig.transform.forward * speed);

    }
}
