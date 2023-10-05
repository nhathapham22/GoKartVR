using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour
{
    public int menuoption;
    public GameObject GameMusic;
    public GameObject GameFinishMusic;
    public GameObject MainMenuMusic;
    



    public void QuitGame()
    {
        Application.Quit();
    }

    public void MainMenu()
    {
        if (GameFinishMusic != null)
            Destroy(GameFinishMusic);
        SceneManager.LoadScene(menuoption);
    }

    public void StartGame()
    {
        if (GameFinishMusic != null)
            Destroy(GameFinishMusic);
        if (MainMenuMusic != null)
            Destroy(MainMenuMusic);
        SceneManager.LoadScene(menuoption);
    }

    public void howToplay()
    {
        SceneManager.LoadScene(menuoption);
    }
    public void settings()
    {
        SceneManager.LoadScene(menuoption);
    }
    public void Gameover()
    {
        SceneManager.LoadScene(menuoption);
    }
    public void Credits()
    {
        SceneManager.LoadScene(menuoption);
    }
}