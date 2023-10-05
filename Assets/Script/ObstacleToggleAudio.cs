using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ObstacleToggleAudio : MonoBehaviour
{
    public Slider obstacleAudioSlider;
    public AudioSource audioSourceoff;
    public AudioSource audioSourceon;
    // Start is called before the first frame update
    void Start()
    {
        //int togglestate;
        obstacleAudioSlider = GetComponent<Slider>();
        //obstacleAudioSlider.value = toggleState;
        obstacleAudioSlider.onValueChanged.AddListener(ToggleObstacleState);
    }

    void ToggleObstacleState(float value)
    {

        if (value == 0f)
        {
            ToggleAudioOff();
        }
        if (value>=.5f)
        {
            ToggleAudioOn();
        }

        StartCoroutine(ChangeStatus(value));
    }

    void ToggleAudioOff()
    {
        audioSourceoff.Play();
    }

    void ToggleAudioOn()
    {
        audioSourceon.Play();
    }

    IEnumerator ChangeStatus(float value)
    {
        if (value < .5f)
        {
            yield return new WaitForSeconds(2);
        }
    }
}
