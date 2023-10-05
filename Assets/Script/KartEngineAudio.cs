using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KartEngineAudio : MonoBehaviour
{
    public AudioSource gokartIdleAudio;
    public AudioSource gokartIdle2Audio;
    public AudioSource turboBoostAudio;

    public float fadeDuration = 1f;  // Duration in seconds for the volume to fade

    private bool isMoving;
    private bool isForwardPressed;
    private bool isSpacePressed;

    private float idle2Volume;
    private float turboBoostVolume;

    private float fadeTimer;

    private Rigidbody kartRigidbody;

    private float minPitch = 1f;
    private float maxPitch = 3f;

    private float minSpeed = 0f;
    private float maxSpeed = 50f;

    private float speedToPitchRatio;

    void Start()
    {
        kartRigidbody = transform.parent.GetComponent<Rigidbody>();
        idle2Volume = 0f;
        turboBoostVolume = 0f;
        speedToPitchRatio = (maxPitch - minPitch) / (maxSpeed - minSpeed);

        //gokartIdle2Audio.Stop();
    }

    void Update()
    {
        // Play GoKartIdle throughout the game
        if (!gokartIdleAudio.isPlaying)
        {
            gokartIdleAudio.Play();
        }

        // Check if the kart is moving
        isMoving = kartRigidbody.velocity.magnitude > 0.1f;

        // Gradually increase volume for gokartIdle2Audio when moving
        if (isMoving)
        {
            if (!isForwardPressed)
            {
                StartCoroutine(FadeInIdle2Volume());
                isForwardPressed = true;
            }
        }
        else
        {
            if (isForwardPressed)
            {
                StartCoroutine(FadeOutIdle2Volume());
                isForwardPressed = false;
            }
        }




        // Play gokartIdle2Audio when the volume is greater than zero
        if (idle2Volume > 0f && !gokartIdle2Audio.isPlaying)
        {
            gokartIdle2Audio.Play();
        }

        // Check for space bar input
        
        if (Input.GetKeyDown(KeyCode.Joystick2Button0))
        {
            // Play turboBoost when the space bar is pressed
            if (!isSpacePressed)
            {
                turboBoostAudio.Play();
                isSpacePressed = true;
            }
        }
        else if (Input.GetKeyUp(KeyCode.Joystick2Button0))
        {
            // Stop turboBoost when the space bar is released
            if (isSpacePressed)
            {
                //turboBoostAudio.Stop();
                isSpacePressed = false;
            }
        }

        // Adjust engine pitch based on car speed
        float carSpeed = kartRigidbody.velocity.magnitude;
        float targetPitch = minPitch + (carSpeed - minSpeed) * speedToPitchRatio;
        gokartIdleAudio.pitch = targetPitch;
        gokartIdle2Audio.pitch = targetPitch;
        turboBoostAudio.pitch = targetPitch;
    }

    IEnumerator FadeInIdle2Volume()
    {
        float timer = 0f;
        while (timer < fadeDuration)
        {
            timer += Time.deltaTime;
            idle2Volume = Mathf.Lerp(0f, 0.2f, timer / fadeDuration);
            gokartIdle2Audio.volume = idle2Volume;
            yield return null;
        }
    }

    IEnumerator FadeOutIdle2Volume()
    {
        float timer = 0f;
        float originalVolume = idle2Volume;
        while (timer < fadeDuration)
        {
            timer += Time.deltaTime;
            idle2Volume = Mathf.Lerp(originalVolume, 0f, timer / fadeDuration);
            gokartIdle2Audio.volume = idle2Volume;
            yield return null;
        }

        gokartIdle2Audio.Stop();
        idle2Volume = 0f;
        gokartIdle2Audio.volume = idle2Volume;
    }
}