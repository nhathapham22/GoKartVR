using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MusicControl : MonoBehaviour
{
    public AudioSource musicAudio;
    private bool isMusicMuted = false;

    void Update()
    {
        int toggleState = PlayerPrefs.GetInt("MusicAudioMuted", 1);
        if (toggleState == 0)
        {
            if (!isMusicMuted)
            {
                musicAudio.mute=true;
                isMusicMuted = true;
            }
        }
        else
        {
            float volume = PlayerPrefs.GetFloat("MusicVolume", 1f);           
            if (isMusicMuted)
            {
                musicAudio.mute = false;
                isMusicMuted = false;
            }
            musicAudio.volume = volume;
        }
    }
}
