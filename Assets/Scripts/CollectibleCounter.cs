using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollectibleCounter : MonoBehaviour
{
TMPro.TMP_Text text;
int count;

void Awake(){
    text = GetComponent<TMPro.TMP_Text>();
}

void Start() => UpdateCount();

void OnEnable()=> Collectible.OnCollected += OnCollectibleCollected;
void OnDisable()=> Collectible.OnCollected -= OnCollectibleCollected;

    void OnCollectibleCollected()
    {
        count++;
        UpdateCount();
    }

    // Update is called once per frame
    void UpdateCount()
    {
        text.text = $"Treasure Looted: {count} / {Collectible.total}";
    }
}
