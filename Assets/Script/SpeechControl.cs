using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpeechControl : MonoBehaviour
{
    public AudioSource speechAudio;
    private bool isSpeechMuted = false;

    void Update()
    {
        int toggleState = PlayerPrefs.GetInt("SpeechAudioMuted", 1);
        if (toggleState == 0)
        {
            if (!isSpeechMuted)
            {
                speechAudio.mute = true;
                isSpeechMuted = true;
            }
        }
        else
        {
            float volume= PlayerPrefs.GetFloat("SpeechVolume", 1f);          
            if (isSpeechMuted)
            {
                speechAudio.mute = false;
                isSpeechMuted = false;
            }
            speechAudio.volume = volume;
        }
    }
}
