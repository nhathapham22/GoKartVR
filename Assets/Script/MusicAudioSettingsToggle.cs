using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MusicAudioSettingsToggle : MonoBehaviour
{
    public Slider musicAudioSlider;
    public AudioSource audioSourceoff;
    private string toggle=null;

    void Start()
    {
        musicAudioSlider = GetComponent<Slider>();
        // Check if the slider component exists
        if (musicAudioSlider != null)
        {
            int toggleState = PlayerPrefs.GetInt("MusicAudioMuted", 1);
            musicAudioSlider.value = toggleState;
            musicAudioSlider.onValueChanged.AddListener(ToggleMusicAudio);
            toggle = toggleState.ToString();
            PlayerPrefs.SetInt("toggle",1);
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
        PlayerPrefs.SetInt("MusicAudioMuted", (int)value);
        PlayerPrefs.Save();
        //StartCoroutine(ChangeMuteStatus(value));
    }

    void ToggleAudioOff()
    {
        audioSourceoff.Play();
    }

    //IEnumerator ChangeMuteStatus(float value)
    //{
    //    if (value < .5f)
    //    {
    //        yield return new WaitForSeconds(2);
    //    }
    //    PlayerPrefs.SetInt("MusicAudioMuted", (int)value);
    //    PlayerPrefs.Save();
    //}
}
