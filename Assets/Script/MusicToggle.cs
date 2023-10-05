using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MusicToggle : MonoBehaviour
{
    public AudioSource audioSourceon;
    public Slider slider;

    void Start()
    {
        slider = GetComponent<Slider>();
        slider.onValueChanged.AddListener(OnSliderValueChanged);
    }

    void OnSliderValueChanged(float value)
    {

        if (value > 0f)
        {
            ToggleAudioOn();
        }
    }

    void ToggleAudioOn()
    {
        audioSourceon.Play();
    }
}
