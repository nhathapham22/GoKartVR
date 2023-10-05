using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class MusicScript : MonoBehaviour
{
    float mastervolume;
    public Slider musicVolumeSlider;
    string musicSliderKey = "MusicSlider";
    float defaultMusicVolume = 0.5f;
    // Start is called before the first frame update
    void Start()
    {
        Load();
    }

    public void changeVolume()
    {
        float musicVolume = mastervolume * musicVolumeSlider.value;
        PlayerPrefs.SetFloat("MusicVolume", musicVolume);//goes to a different script
        PlayerPrefs.SetFloat("MusicSlider", musicVolumeSlider.value);
        PlayerPrefs.Save();
        Save();
    }

    private void Load()
    {
        if (!PlayerPrefs.HasKey(musicSliderKey))
        {
            PlayerPrefs.SetFloat(musicSliderKey, defaultMusicVolume);
        }
        musicVolumeSlider.value = PlayerPrefs.GetFloat("MusicSlider");
        mastervolume = PlayerPrefs.GetFloat("MasterVolume");//playerprefs
    }

    private void Save()
    {
        PlayerPrefs.SetFloat("MusicSlider", musicVolumeSlider.value);
    }

    private void Update()
    {
        mastervolume = PlayerPrefs.GetFloat("MasterVolume");//playerprefs
        float musicVolume = mastervolume * musicVolumeSlider.value;
        PlayerPrefs.SetFloat("MusicVolume", musicVolume);//goes to a different script
        PlayerPrefs.SetFloat("MusicSlider", musicVolumeSlider.value);
        PlayerPrefs.Save();
        Save();
    }
}
