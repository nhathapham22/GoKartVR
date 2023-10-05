using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class materialchange : MonoBehaviour
{
    private GameObject cart;

    // Set the original material for the objects
    public Material BaseMaterial;

    // Set the material to apply when the player is close
    public Material ChangeMaterial;

    // The distance threshold to trigger the material change
    public float distanceThreshold = 5f;

    private void Awake()
    {
        // Reference to the player object
        GameObject gameObject1 = GameObject.Find("GoCart");
        cart = gameObject1;
    }

    // Reference to the objects to change the material of
    public GameObject[] objectsToChange;

    void Update()
    {
        // Get the distance between the player and each object, and change the material if the player is close enough
        foreach (GameObject obj in objectsToChange)
        {
            float distance = Vector3.Distance(cart.transform.position, obj.transform.position);
            Renderer rend = obj.GetComponent<Renderer>();

            if (distance < distanceThreshold)
            {
                rend.material = ChangeMaterial;

            }
            else
            {
                rend.material = BaseMaterial;
            }
        }
    }
}
