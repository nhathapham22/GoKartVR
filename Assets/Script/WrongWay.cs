using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WrongWay : MonoBehaviour
{
    private bool startTimer = false;// startTimer off until triggered
    private bool canTrigger = true;
    private bool drivingWrongWay = false; 

    // Vars for wrong direction
    [SerializeField] int id = 11; // current checkpoint id
    [SerializeField] GameObject wrongWay; // GameObject with the countdown UI text
    [SerializeField] AudioSource audioSource; // AudioSource to play sound effects
    [SerializeField] AudioClip wrongWayAduio; // Audio clips for countdown sounds

    void OnTriggerEnter(Collider other)
    {
        //Debug.Log("Trigger test");

        if (other.gameObject.name == "StartFinish")// find game object with the name StartFinish
        {
            if (startTimer == false)//start the timer in the stopped position awaiting start
            {
                startTimer = true;// start the timer here

                id = 11; // set id to start the tracker

                canTrigger = false;
            }
        }

        if (other.gameObject.name == "checkpoint1")
        {
            wrongWay.SetActive(false);

            // check if the checkpoint equals current number otherwise: wrong way
            Debug.Log("id should be 11: " + id);
            if (id == 11)
            {
                id = 1;
                Debug.Log("id should be 1: " + id);
                RightWay();
                drivingWrongWay = false;
            }
            else
            {
                Debug.Log("Wrong Way!");
                //StartCoroutine(WrongWayCoroutine());
                WrongWay();
                audioSource.PlayOneShot(wrongWayAduio);
                drivingWrongWay = true;
            }

        }
        if (other.gameObject.name == "checkpoint2")
        {
            wrongWay.SetActive(false);

            Debug.Log("id should be 1: " + id);
            if (id == 1)
            {
                id = 2;
                Debug.Log("id should be 2: " + id);
                RightWay();
            }
            else
            {
                Debug.Log("Wrong Way!");
                //StartCoroutine(WrongWayCoroutine());
                WrongWay();
            }
        }
        if (other.gameObject.name == "checkpoint3")
        {
            wrongWay.SetActive(false);

            Debug.Log("id should be 2: " + id);
            if (id == 2)
            {
                id = 3;
                Debug.Log("id should be 3: " + id);
                RightWay();
            }
            else
            {
                Debug.Log("Wrong Way!");
                //StartCoroutine(WrongWayCoroutine());
                WrongWay();
            }

        }
        if (other.gameObject.name == "checkpoint4")
        {
            wrongWay.SetActive(false);

            Debug.Log("id should be 3: " + id);
            if (id == 3)
            {
                id = 4;
                Debug.Log("id should be 4: " + id);
                RightWay();
            }
            else
            {
                Debug.Log("Wrong Way!");
                //StartCoroutine(WrongWayCoroutine());
                WrongWay();
            }
        }
        if (other.gameObject.name == "checkpoint5")
        {
            wrongWay.SetActive(false);

            Debug.Log("id should be 4: " + id);
            if (id == 4)
            {
                id = 5;
                Debug.Log("id should be 5: " + id);
                RightWay();
            }
            else
            {
                Debug.Log("Wrong Way!");
                //StartCoroutine(WrongWayCoroutine());
                WrongWay();
            }
        }

        if (other.gameObject.name == "checkpoint6")
        {
            wrongWay.SetActive(false);

            Debug.Log("id should be 5: " + id);
            if (id == 5)
            {
                id = 6;
                Debug.Log("id should be 6: " + id);
                RightWay();
            }
            else
            {
                Debug.Log("Wrong Way!");
                //StartCoroutine(WrongWayCoroutine());
                WrongWay();
            }
        }

        if (other.gameObject.name == "checkpoint7")
        {
            wrongWay.SetActive(false);

            Debug.Log("id should be 6: " + id);
            if (id == 6)
            {
                id = 7;
                Debug.Log("id should be 7: " + id);
                RightWay();
            }
            else
            {
                Debug.Log("Wrong Way!");
                //StartCoroutine(WrongWayCoroutine());
                WrongWay();
            }
        }

        if (other.gameObject.name == "checkpoint8")
        {
            wrongWay.SetActive(false);

            Debug.Log("id should be 7: " + id);
            if (id == 7)
            {
                id = 8;
                Debug.Log("id should be 8: " + id);
                RightWay();
            }
            else
            {
                Debug.Log("Wrong Way!");
                //StartCoroutine(WrongWayCoroutine());
                WrongWay();
            }
        }

        if (other.gameObject.name == "checkpoint9")
        {
            wrongWay.SetActive(false);

            Debug.Log("id should be 8: " + id);
            if (id == 8)
            {
                id = 9;
                Debug.Log("id should be 9: " + id);
                RightWay();
            }
            else
            {
                Debug.Log("Wrong Way!");
                //StartCoroutine(WrongWayCoroutine());
                WrongWay();
            }
        }

        if (other.gameObject.name == "checkpoint10")
        {
            wrongWay.SetActive(false);

            Debug.Log("id should be 9: " + id);
            if (id == 9)
            {
                id = 10;
                Debug.Log("id should be 10: " + id);
                RightWay();
            }
            else
            {
                Debug.Log("Wrong Way!");
                //StartCoroutine(WrongWayCoroutine());
                WrongWay();
            }
        }
        if (other.gameObject.name == "checkpoint11")
        {
            wrongWay.SetActive(false);

            Debug.Log("id should be 10: " + id);
            if (id == 10)
            {
                id = 11;
                Debug.Log("id should be 11: " + id);
                RightWay();
            }
            else
            {
                Debug.Log("Wrong Way!");
                //StartCoroutine(WrongWayCoroutine());
                WrongWay();
            }
        }


        void WrongWay()
        {
            wrongWay.SetActive(true);
            wrongWay.GetComponent<Text>().text = "Wrong Way!";
        }

        void RightWay()
        {
            wrongWay.SetActive(false);
            wrongWay.GetComponent<Text>().text = "";
        }
    }
}