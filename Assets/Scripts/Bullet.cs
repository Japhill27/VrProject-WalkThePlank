using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
   [SerializeField] Transform destination;

   void OnTriggerEnter(Collider other){
    if (other.CompareTag("Player") && other.TryGetComponent<ContinuousMovement>(out var player)){
        player.Teleport(destination.position, destination.rotation);
        
    }
        Destroy(gameObject);
   }

}