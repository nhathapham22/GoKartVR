using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SpeechAudioSettingsToggle : MonoBehaviour
{
    public Slider speechAudioSlider;
    public AudioSource audioSourceoff;
    private string toggle = null;

    void Start()
    {
        speechAudioSlider = GetComponent<Slider>();
        // Check if the slider component exists
        if (speechAudioSlider != null)
        {
            int toggleState = PlayerPrefs.GetInt("SpeechAudioMuted", 1);
            speechAudioSlider.value = toggleState;
            speechAudioSlider.onValueChanged.AddListener(ToggleSpeechAudio);
            toggle = toggleState.ToString();
            PlayerPrefs.SetInt("toggle", 1);
        }
        else
        {
            Debug.LogError("Slider component not found on the same game object as SpeechAudioSettingsToggle script.");
        }
    }

    void ToggleSpeechAudio(float value)
    {

        if (value==0f)
        {
            ToggleAudioOff();
        }

        StartCoroutine(ChangeMuteStatus(value));
    }

    void ToggleAudioOff()
    {
        audioSourceoff.Play();
    }

    IEnumerator ChangeMuteStatus(float value)
    {
        if (value<.5f)
        {
            yield return new WaitForSeconds(2);
        }
        PlayerPrefs.SetInt("SpeechAudioMuted", (int)value);
        PlayerPrefs.Save();
    }
}
