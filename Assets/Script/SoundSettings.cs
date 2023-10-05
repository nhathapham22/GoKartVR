using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class SoundSettings : MonoBehaviour
{
    public Slider masterVolumeSlider;
    string masterSliderKey = "MasterSlider";
    float defaultMasterVolume = 0.5f;

    void Start()
    {
        Load();
    }
    public void changeVolume()
    {
        PlayerPrefs.SetFloat("MasterSlider", masterVolumeSlider.value);
        PlayerPrefs.SetFloat("MasterVolume", masterVolumeSlider.value);
        PlayerPrefs.Save();
        Save();
    }
    private void Load()
    {
        if (!PlayerPrefs.HasKey(masterSliderKey))
        {
            PlayerPrefs.SetFloat(masterSliderKey, defaultMasterVolume);
        }
        masterVolumeSlider.value = PlayerPrefs.GetFloat("MasterSlider");
        PlayerPrefs.SetFloat("MasterVolume", masterVolumeSlider.value);
    }
    private void Save()
    {
        PlayerPrefs.SetFloat("MasterSlider", masterVolumeSlider.value);
    }

    
}
