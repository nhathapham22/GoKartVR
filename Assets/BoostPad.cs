using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoostPad : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("Kart entered boost pad trigger");

        KartController kartController = other.GetComponent<KartController>();
        if (kartController != null)
        {
            kartController.EnableTurboBoost();
            Debug.Log("Turbo boost enabled for the kart");
        }
    }

    private void OnTriggerExit(Collider other)
    {
        Debug.Log("Kart exited boost pad trigger");

        KartController kartController = other.GetComponent<KartController>();
        if (kartController != null)
        {
            kartController.DisableTurboBoost();
            Debug.Log("Turbo boost disabled for the kart");
        }
    }
}
