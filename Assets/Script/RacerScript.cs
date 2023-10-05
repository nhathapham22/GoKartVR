using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.Interaction.Toolkit;

public class RacerScript : MonoBehaviour
{
    public float laptime = 0;// present lap time.
    public float besttime = 0;// best lap time overall.
    public float totalTime = 0;// overall total time for the run.

    public int laps = 0;// laps counter
    public int checkpoint1Counter = 0;//checkpoint 1 counter
    public int checkpoint2Counter = 0;//checkpoint 2 counter
    private bool startTimer = false;// startTimer off until triggered
    public int finishedRace = 4;
    public int lapCount;
    private bool enableObstalces;

    public GameObject leftControllerObject; // Reference to the left controller object
    public GameObject rightControllerObject; // Reference to the right controller object

    // vars for top bar
    public UnityEngine.UI.Text Ltime;// LapTime UI Text
    public UnityEngine.UI.Text Btime;// Best Time UI Text
    public UnityEngine.UI.Text LapsText;// Laps Text
    public UnityEngine.UI.Text Ttime;// Total Time Text

    // vars for GameEndDisplay
    [SerializeField] UnityEngine.UI.Text BtimePullThrough;// Best Time UI Text 
    [SerializeField] UnityEngine.UI.Text TtimePullThrough;// Total Time Text
    public GameObject raceResultDisplay;
    public GameObject TimerBackground;
    public GameObject BoostBackground;
    public GameObject Obstacles;

    private int checkpointCount = 0; // 
    private bool checkpoint1 = false;// checkpoint 1 verification
    private bool checkpoint2 = false;//checkpoint 2 verification
    private bool checkpoint3 = false;//checkpoint 3 verification
    private bool checkpoint4 = false;//checkpoint 4 verification
    private bool checkpoint5 = false;//checkpoint 5 verification
    private bool checkpoint6 = false;//checkpoint 6 verification
    private bool checkpoint7 = false;//checkpoint 7 verification
    private bool checkpoint8 = false;//checkpoint 8 verification
    private bool checkpoint9 = false;//checkpoint 9 verification
    private bool checkpoint10 = false;//checkpoint 10 verification
    private bool checkpoint11 = false;//checkpoint 11 verification
    private bool canTrigger = true;
    private bool raceFinished = false; // Flag to indicate if the race is finished
    private int requiredLaps = 4; // The number of laps required to finish the race




    // Start is called before the first frame update
    void Start()
    {
        int toggleState = PlayerPrefs.GetInt("ObstacleToggleState", 1);

        if (toggleState == 1)
        {
            enableObstalces = true;
            Obstacles.SetActive(false);
        }
        else
        {
            enableObstalces = false;
            Obstacles.SetActive(false);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (laps == 2)
        {
            if (enableObstalces == true)
            {
                Obstacles.SetActive(true);
            }
        }
        if (startTimer == true && !raceFinished)
        {

            laptime = laptime + Time.deltaTime;// this is the timer running deltaTime
            totalTime = totalTime + Time.deltaTime;// this is the total time for the run

            Ttime.text = totalTime.ToString("F2");// this is the time for the total 
            Ltime.text = "Lap Time: " + laptime.ToString("F2");// this is the print out for the text in the corner of the canvas
            LapsText.text = "Lap: " + laps.ToString();// this is the laps text on the canvas

            if (laps == requiredLaps) // If the required number of laps is completed, stop the race
            {
                raceFinished = true;
                startTimer = false;

                TtimePullThrough.text = "Total Race Time: " + totalTime.ToString("F2") + "s";// this is the time for the total 
                BtimePullThrough.text = "Best Lap Time: " + besttime.ToString("F2") + "s";

                raceResultDisplay.gameObject.SetActive(true); // enable/show race results
                TimerBackground.gameObject.SetActive(false); // disable/hide race stats available during game play
                BoostBackground.gameObject.SetActive(false); // disable/hide race stats available during game play
                //TimerBackground.gameObject.SetActive(false);
                //TtimePullThrough.text = "Total Race Time: " + totalTime.ToString("F2") + "s";
                //BtimePullThrough.text = "Total Lap Time: " + besttime.ToString("F2") + "s";


                // Add any additional code to execute after the race is finished here like text and images

            }
        }
    }

    void OnTriggerEnter(Collider other)
    {
        //Debug.Log("Trigger test");

        if (other.gameObject.name == "StartFinish")// find game object with the name StartFinish
        {
            if (startTimer == false)//start the timer in the stopped position awaiting start
            {
                startTimer = true;// start the timer here

                laptime = 0;
                //start lap time here
                if (canTrigger == true)
                {
                    laps++;//add laps to counter here
                }
                checkpoint1 = false;// start with checkpoint 1 as false
                checkpoint2 = false;// start with chechpoint 2 as false
                checkpoint3 = false;
                checkpoint4 = false;
                checkpoint5 = false;
                checkpoint6 = false;
                checkpoint7 = false;
                checkpoint8 = false;
                checkpoint9 = false;
                checkpoint10 = false;
                checkpoint11 = false;

                canTrigger = false;
            }
            if (checkpoint1 == true && checkpoint2 == true && checkpoint3 == true && checkpoint4 == true && checkpoint5 == true && checkpoint6 == true && checkpoint7 == true && checkpoint8 == true && checkpoint9 == true && checkpoint10 == true && checkpoint11 == true)
            {
                startTimer = false;


                if (besttime == 0)
                {
                    besttime = laptime;
                }

                if (laptime < besttime)
                {
                    besttime = laptime;
                }

                Btime.text = "Best Time: " + besttime.ToString("F2");
 

                // check if race is finished after completing lap 3
                if (laps == finishedRace)
                {
                    startTimer = false;
                    laptime = 0;
                    Ltime.text = "Lap Time: " + laptime.ToString("F2");
                    LapsText.text = "Race Over" + laps.ToString();
                    leftControllerObject.GetComponent<XRRayInteractor>().enabled = true;
                    rightControllerObject.GetComponent<XRRayInteractor>().enabled = true;
                }
            }
        }

        if (other.gameObject.name == "checkpoint1")
        {
            checkpoint1 = true;
            Debug.Log("checkpoint1");
        }
        if (other.gameObject.name == "checkpoint2")
        {
            checkpoint2 = true;
            Debug.Log("checkpoint2");
            
        }
        if (other.gameObject.name == "checkpoint3")
        {
            checkpoint3 = true;
            Debug.Log("checkpoint3");
        }
        if (other.gameObject.name == "checkpoint4")
        {
            checkpoint4 = true;
            Debug.Log("checkpoint4");
        }
        if (other.gameObject.name == "checkpoint5")
        {
            checkpoint5 = true;
            Debug.Log("checkpoint5");
        }

        if (other.gameObject.name == "checkpoint6")
        {
            checkpoint6 = true;
            Debug.Log("checkpoint6");
        }

        if (other.gameObject.name == "checkpoint7")
        {
            checkpoint7 = true;
            Debug.Log("checkpoint7");
        }

        if (other.gameObject.name == "checkpoint8")
        {
            checkpoint8 = true;
            Debug.Log("checkpoint8");
        }

        if (other.gameObject.name == "checkpoint9")
        {
            checkpoint9 = true;
            Debug.Log("checkpoint9");
        }

        if (other.gameObject.name == "checkpoint10")
        {
            checkpoint10 = true;
            Debug.Log("checkpoint10");
        }

        if (other.gameObject.name == "checkpoint11")
        {
            checkpoint11 = true;
            Debug.Log("checkpoint11");
        }

        if (other.gameObject.name == "StartFinish")
        {
            //checkpoint11 = true;
            Debug.Log("Start Finish Line Crossed");
        }
    }

    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.name == "StartFinish")
        {
            canTrigger = true;

            if (laps == lapCount)
            {
                // Stop the timer after completing 3 laps
                startTimer = false;
                StopTotalTime();
                finishedRace = 1;
                //SceneManager.loadScene("Level 2 Selector");// Arron check for level
                //if gamescene it is in, move to next level
                //SceneManager.loadScene("Level 3 Selector");// Arron check for level  
                //if gamescene it is in, move to game finish
            }
        }
    }


    void StopTotalTime()
    {
        totalTime = totalTime - laptime;
        laptime = 0;
    }
}