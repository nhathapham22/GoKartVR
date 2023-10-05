using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class SpeechScript : MonoBehaviour
{
    float mastervolume;
    public Slider speechVolumeSlider;
    string speechSliderKey = "SpeechSlider";
    float defaultSpeechVolume = 0.5f;
    // Start is called before the first frame update
    void Start()
    {
        
        Load();
    }

    public void changeVolume()
    {
        mastervolume = PlayerPrefs.GetFloat("MasterVolume");
        float speechVolume = mastervolume * speechVolumeSlider.value;
        PlayerPrefs.SetFloat("SpeechVolume", speechVolume);//goes to a different script
        PlayerPrefs.SetFloat("SpeechSlider", speechVolumeSlider.value);
        PlayerPrefs.Save();
        Save();
    }

    private void Load()
    {
        if (!PlayerPrefs.HasKey(speechSliderKey))
        {
            PlayerPrefs.SetFloat(speechSliderKey, defaultSpeechVolume);
        }
        speechVolumeSlider.value = PlayerPrefs.GetFloat("SpeechSlider");
        mastervolume = PlayerPrefs.GetFloat("MasterVolume");//playerprefs
    }

    private void Save()
    {
        PlayerPrefs.SetFloat("SpeechSlider", speechVolumeSlider.value);
    }

    private void Update()
    {
        mastervolume = PlayerPrefs.GetFloat("MasterVolume");//playerprefs
        float speechVolume = mastervolume * speechVolumeSlider.value;
        PlayerPrefs.SetFloat("SpeechVolume", speechVolume);//goes to a different script
        PlayerPrefs.SetFloat("SpeechSlider", speechVolumeSlider.value);
        PlayerPrefs.Save();
        Save();
    }
}
