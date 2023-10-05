using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Audio : MonoBehaviour
{
    // Reference to the AudioManager instance
    private static Audio instance;

    // Reference to the AudioSource component
    public AudioSource mainMenuMusic;

    private void Awake()
    {
        // Check if an instance already exists
        if (instance != null && instance != this)
        {
            // If an instance already exists and it's not this, destroy this instance
            Destroy(gameObject);
            return;
        }

        // Set the instance to this if it doesn't exist
        instance = this;

        // Get the AudioSource component on this game object
        mainMenuMusic = GetComponent<AudioSource>();

        // Make the Audio game object a child of the "DontDestroyOnLoad" game object
        DontDestroyOnLoad(gameObject);
    }

    // Method to start playing the music
    public void PlayMusic()
    {
        mainMenuMusic.Play();
    }

    private void Update()
    {
        if (SceneManager.GetActiveScene().name.Equals("Test"))
        {
            // Stop playing the music in the Test scene
            mainMenuMusic.Stop();
        }
    }
}
