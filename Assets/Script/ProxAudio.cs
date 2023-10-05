using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProxAudio : MonoBehaviour
{
    // Reference to the player object
    public GameObject player;

    // Reference to the obstacle object
    public GameObject obstacle;

    // Reference to the audio source for the "approaching" clip
    public AudioSource approachingAudio;

    // Reference to the audio source for the "nearby" clip
    public AudioSource nearbyAudio;

    // The distance threshold to trigger the "approaching" clip
    public float approachingThreshold = 20f;

    // The distance threshold to trigger the "nearby" clip
    public float nearbyThreshold = 5f;

    // A flag to track whether the player is currently near the obstacle
    private bool isNearby = false;

    void Update()
    {
        // Get the vector from the player to the obstacle
        Vector3 toObstacle = obstacle.transform.position - player.transform.position;

        // Get the dot product of the player's forward vector and the vector to the obstacle
        float dotProduct = Vector3.Dot(player.transform.forward, toObstacle.normalized);

        // Get the distance between the player and the obstacle
        float distance = toObstacle.magnitude;

        // Check if the obstacle is in front of the player
        if (dotProduct > 0f)
        {
            // Check if the player is approaching the obstacle
            if (distance < approachingThreshold && !approachingAudio.isPlaying)
            {
                // Play the "approaching" clip if it's not already playing
                approachingAudio.Play();
            }

            // Check if the player is nearby the obstacle
            if (distance < nearbyThreshold)
            {
                // Play the "nearby" clip if it's not already playing
                if (!isNearby)
                {
                    nearbyAudio.Play();
                    isNearby = true;
                }
            }
            else
            {
                // Stop the "nearby" clip if it's playing and the player is no longer nearby
                if (isNearby)
                {
                    nearbyAudio.Stop();
                    isNearby = false;
                }
            }
        }
        else
        {
            approachingAudio.Stop();
        }

        // Debug draw the vector to the obstacle
        Debug.DrawRay(player.transform.position, toObstacle, Color.red);
    }
}