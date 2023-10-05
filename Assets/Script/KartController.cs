using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.UI;

[RequireComponent(typeof(Rigidbody))] // Require a Rigidbody component on this GameObject
public class KartController : MonoBehaviour
{
    public float speed = 5.0f;
    public float turnSpeed = 10.0f;
    public float turboBoost = 2.0f;
    public bool isTurboBoosting = false;
    public float turboDuration = 3.0f;
    public float turboCooldown = 3.0f;

    //haptic feedback for kart acceleration
    public XRBaseController leftController;
    public XRBaseController rightController;
    public float defaultAmplitude = 0.5f;
    public float defaultDuration = 0.5f;

    public AudioSource boostReady;
    public AudioSource gameMusic;
    public AudioSource boostPadAudio;
    public AudioSource startingAudio; // Audio source for the starting 321 audio
    //public AudioSource turboAvailableSoundClip;

    private Rigidbody rb;
    private bool isBoostPadSoundPlaying = false;
    private bool canMove = false; // Flag to control kart movement
    private bool raceOver = false; // Flag to track the race status
    private int lapCount = 0; // Lap count

    [SerializeField] GameObject TurboIndicatorRed;
    [SerializeField] GameObject TurboIndicatorGreen;

    private Coroutine turboCoroutine;


    [SerializeField] UnityEngine.UI.Text three;
    [SerializeField] UnityEngine.UI.Text two;
    [SerializeField] UnityEngine.UI.Text one;
    [SerializeField] UnityEngine.UI.Text go;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.angularDrag = 0.5f;

        // Play the starting audio and enable movement after a delay
        StartCoroutine(EnableMovementAfterDelay());

    }
  


    public void SendHaptics()
    {
        leftController.SendHapticImpulse(defaultAmplitude, defaultDuration);
        rightController.SendHapticImpulse(defaultAmplitude, defaultDuration);
    }
    IEnumerator EnableMovementAfterDelay()
    {
        yield return new WaitForSeconds(2.15f);
        three.gameObject.SetActive(true);
        yield return new WaitForSeconds(1.1f);
        three.gameObject.SetActive(false);

        two.gameObject.SetActive(true);
        yield return new WaitForSeconds(1.1f);
        two.gameObject.SetActive(false);

        one.gameObject.SetActive(true);
        yield return new WaitForSeconds(1.5f);
        one.gameObject.SetActive(false);

        go.gameObject.SetActive(true);
        yield return new WaitForSeconds(1.25f);

        go.gameObject.SetActive(false);
        canMove = true; // Enable kart movement

        // Ha put game sound here
        gameMusic.Play();
    }

    public void EnableTurboBoost()
    {
        if (isTurboBoosting)
            return;

        SendHaptics();
        isTurboBoosting = true;
        //if (!isBoostPadSoundPlaying)
        //{
        //    boostPadAudio.PlayOneShot(boostPadAudio.clip); // Play the boost pad sound
        //    isBoostPadSoundPlaying = true;
        //}

        if (turboCoroutine != null)
            StopCoroutine(turboCoroutine);

        turboCoroutine = StartCoroutine(DisableTurboBoostAfterDelay());
    }

    public void DisableTurboBoost()
    {
        if (!isTurboBoosting)
            return;

        isTurboBoosting = false;
        //if (isBoostPadSoundPlaying)
        //{
        //    boostPadAudio.Stop(); // Stop the boost pad sound
        //    isBoostPadSoundPlaying = false;
        //}

        if (turboCoroutine != null)
        {
            StopCoroutine(turboCoroutine);
            turboCoroutine = StartCoroutine(EnableTurboCooldownAfterDelay());
        }
    }

    IEnumerator DisableTurboBoostAfterDelay()
    {
        yield return new WaitForSeconds(turboDuration); // Wait for the turbo duration
        isTurboBoosting = false;
        turboCoroutine = StartCoroutine(EnableTurboCooldownAfterDelay());
    }


    IEnumerator EnableTurboCooldownAfterDelay()
    {
        TurboIndicatorRed.SetActive(true); // Show red indicator
        TurboIndicatorGreen.SetActive(false); // Hide green indicator
        yield return new WaitForSeconds(turboCooldown); // Wait for the turbo cooldown duration
        TurboIndicatorRed.SetActive(false); // Hide red indicator
        TurboIndicatorGreen.SetActive(true); // Show green indicator
        boostReady.Play();
        //audioSource.PlayOneShot(turboAvailableSoundClip);
    }

    void FixedUpdate()
    {
        if (!canMove || raceOver) // Disable movement if canMove is false or raceOver is true
        {
            rb.velocity = Vector3.Lerp(rb.velocity, Vector3.zero, 0.1f); // Gradually decrease the kart's speed until it comes to a stop
            return;
        }

        float horizontalInput = Input.GetAxis("Horizontal");
        float forwardInput = Input.GetAxis("Vertical");

        // Check for turbo boost input
        if (Input.GetKeyDown(KeyCode.Joystick2Button0))
        {
            EnableTurboBoost();
            TurboIndicatorRed.SetActive(true); 
            TurboIndicatorGreen.SetActive(false);
           // yield return new WaitForSeconds(turboCooldown);
            //TurboIndicatorRed.SetActive(false); // Hide red indicator
            //TurboIndicatorGreen.SetActive(true);
        }
        //if (Input.GetKeyUp(KeyCode.Space))
        //{
        //    DisableTurboBoost();
        //}

        // Move kart
        Vector3 force = transform.forward * speed * forwardInput;
        if (isTurboBoosting)
        {
            force *= turboBoost;
        }
        rb.AddForce(force, ForceMode.Acceleration);

        // Rotate kart
        if (rb.velocity.magnitude > 0.1f)
        {

            transform.Rotate(Vector3.up, Time.deltaTime * turnSpeed * horizontalInput); 
            
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("StartFinish") && lapCount == 2) // Check for the finish line and lap count
        {
            // Race over, disable movement
            raceOver = true;
            canMove = false;
        }
        else if (other.CompareTag("CheckpointObject")) // Checkpoint reached, increment lap count
        {
            lapCount++;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("StartFinish") && lapCount == 2) // Check for the finish line and lap count
        {
            // Race over, disable movement
            raceOver = true;
            canMove = false;
            rb.velocity = Vector3.zero; // Set velocity to zero to bring the kart to a halt
        }
    }
}