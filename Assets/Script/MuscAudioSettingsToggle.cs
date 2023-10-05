using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MuscAudioSettingsToggle : MonoBehaviour
{
    public Slider musicAudioSlider;
    public AudioSource audioSourceoff;
    public AudioSource audioSourceon;

    void Start()
    {
        musicAudioSlider = GetComponent<Slider>();
        // Check if the slider component exists
        if (musicAudioSlider != null)
        {
            int toggleState = PlayerPrefs.GetInt("MusicAudioMuted", 1);
            musicAudioSlider.value = toggleState;
            musicAudioSlider.onValueChanged.AddListener(ToggleMusicAudio);
        }
        else
        {
            Debug.LogError("Slider component not found on the same game object as MusicAudioSettingsToggle script.");
        }
    }

    void ToggleMusicAudio(float value)
    {

        if (value == 0f)
        {
            ToggleAudioOff();
        }
        else
        {
            ToggleAudioOn();
        }

        StartCoroutine(ChangeMuteStatus(value));
    }

    void ToggleAudioOff()
    {
        audioSourceoff.Play();
    }

    void ToggleAudioOn()
    {
        audioSourceon.Play();
    }

    IEnumerator ChangeMuteStatus(float value)
    {
        if (value < .5f)
        {
            yield return new WaitForSeconds(2);
        }
        PlayerPrefs.SetInt("MusicAudioMuted", (int)value);
        PlayerPrefs.Save();
    }
}
