using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SliderValue : MonoBehaviour
{
    public Slider slider;
    public TextMeshProUGUI Text;

    // Update is called once per frame
    void Update()
    {
        float value = Mathf.Round(slider.value * 100f); // Map value to range of 0-100
        Text.text = value.ToString() + "%";

    }
}
