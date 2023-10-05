using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionAudioControl : MonoBehaviour
{
    public AudioClip defaultClip;
    public AudioClip obstacleClip;
    public AudioClip wallClip;
    public AudioClip rumbleStripClip;
    public AudioClip boostPad;

    private AudioSource audioSource;

    void Start()
    {
        audioSource = GetComponent<AudioSource>();
        if (audioSource == null)
        {
            Debug.LogError("1 AudioSource component not found on object: " + gameObject.name);
        }

    }

    void OnCollisionEnter(Collision collision)
    {
        if (audioSource == null)
        {
            Debug.LogError("2 AudioSource component not found on object: " + gameObject.name);
            return;
        }
        if (collision.gameObject.CompareTag("Obstacle"))
        {
            audioSource.PlayOneShot(obstacleClip);
        }
        else if (collision.gameObject.CompareTag("rumbleStrip"))
        {
            audioSource.PlayOneShot(rumbleStripClip);
        }
        else if (collision.gameObject.CompareTag("Wall"))
        {
            audioSource.PlayOneShot(wallClip);
        }

        
        else
        {
            audioSource.PlayOneShot(defaultClip);
        }
    }
}