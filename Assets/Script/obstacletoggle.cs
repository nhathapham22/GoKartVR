using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class obstacletoggle : MonoBehaviour
{
    private Slider slider;

    private void Awake()
    {
        slider = GetComponent<Slider>();
        slider.onValueChanged.AddListener(OnSliderValueChanged);
    }

    private void OnSliderValueChanged(float value)
    {
        PlayerPrefs.SetInt("ObstacleToggleState", (int)value);
        PlayerPrefs.Save();
    }

    private void Start()
    {
        int toggleState = PlayerPrefs.GetInt("ObstacleToggleState", 1);
        slider.value = toggleState;
    }
}
