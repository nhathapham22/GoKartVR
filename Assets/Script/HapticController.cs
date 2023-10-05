using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class HapticController : MonoBehaviour
{

    public XRBaseController leftController;
    public XRBaseController rightController;
    public float defaultAmplitude = 0.2f;
    public float defaultDuration = 0.2f;

    [ContextMenu(itemName: "Send Haptics")]
    public void SendHaptics()
    {
        leftController.SendHapticImpulse(defaultAmplitude, defaultDuration);
        rightController.SendHapticImpulse(defaultAmplitude, defaultDuration);
    }

    void OnCollisionEnter(Collision collision)
    {
        // Check if the collision involves an obstacle
        if (collision.gameObject.tag == "Obstacle" || collision.gameObject.tag == "rumbleStrip")
        {
            // Send a stronger haptic impulse to both controllers
            SendHaptics();
        }
    }
}
