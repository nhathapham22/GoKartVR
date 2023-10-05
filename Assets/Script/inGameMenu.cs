using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class inGameMenu : MonoBehaviour
{
    public int playagain;
    public int nextlevel;

    public void Replay()
    {
        SceneManager.LoadScene(playagain);
    }

    public void MainMenu()
    {
        SceneManager.LoadScene(0);
    }

    public void NextLevel()
    {
        SceneManager.LoadScene(nextlevel);
    }
}
