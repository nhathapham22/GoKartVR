using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class Countdown : MonoBehaviour
{
    public GameObject countDown; // GameObject with the countdown UI text
    public AudioSource audioSource; // AudioSource to play sound effects
    public AudioClip[] countdownSounds; // Audio clips for countdown sounds
    public float countdownDuration = 3.0f; // Countdown duration in seconds
    public bool startGameOnCountdownEnd = true; // Whether to start the game automatically after the countdown

    private void Start()
    {
        // Start the countdown coroutine on Start()
        StartCoroutine(CountdownCoroutine());
    }

    private IEnumerator CountdownCoroutine()
    {
        // Disable the GameObject with the countdown UI text initially
        countDown.SetActive(false);

        // Wait for 1 second before starting the countdown
        yield return new WaitForSeconds(1.0f);

        // Play the "3" countdown sound effect
        audioSource.PlayOneShot(countdownSounds[0]);

        // Enable the GameObject with the countdown UI text
        countDown.SetActive(true);

        // Set the text of the countdown UI to "3"
        countDown.GetComponent<Text>().text = "3";

        // Wait for 1 second before playing the next countdown sound effect
        yield return new WaitForSeconds(1.0f);

        // Play the "2" countdown sound effect
        audioSource.PlayOneShot(countdownSounds[1]);

        // Set the text of the countdown UI to "2"
        countDown.GetComponent<Text>().text = "2";

        // Wait for 1 second before playing the next countdown sound effect
        yield return new WaitForSeconds(1.0f);

        // Play the "1" countdown sound effect
        audioSource.PlayOneShot(countdownSounds[2]);

        // Set the text of the countdown UI to "1"
        countDown.GetComponent<Text>().text = "1";

        // Wait for 1 second before playing the final countdown sound effect
        yield return new WaitForSeconds(1.0f);

        // Play the "Go" countdown sound effect
        audioSource.PlayOneShot(countdownSounds[3]);

        // Set the text of the countdown UI to "Go!"
        countDown.GetComponent<Text>().text = "Go!";

        // Wait for the remaining duration of the countdown
        yield return new WaitForSeconds(countdownDuration - 3.0f);

        // Disable the GameObject with the countdown UI text
        countDown.SetActive(false);

        // Start the game automatically if specified
        if (startGameOnCountdownEnd)
        {
            // Call the StartGame() method on the game object this script is attached to
            gameObject.SendMessage("StartGame");
        }
    }
}
