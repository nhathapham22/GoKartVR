using UnityEngine;
using UnityEngine.UI;

public class RaceResultDisplay : MonoBehaviour
{
    public Text raceTimeText;
    public Text lapTimeText;
    public Text countdownText;

    private float countdownDuration = 3f;
    private float countdownTimer;

    private bool isCountdownActive;

    private void Start()
    {
        // Hide the countdown text initially
        countdownText.gameObject.SetActive(false);
    }

    private void Update()
    {
        if (isCountdownActive)
        {
            countdownTimer -= Time.deltaTime;

            if (countdownTimer <= 0f)
            {
                // Countdown has finished, start the race
                StartRace();
            }
            else
            {
                // Update the countdown text
                int countdownValue = Mathf.CeilToInt(countdownTimer);
                countdownText.text = countdownValue.ToString();
            }
        }
    }

    public void StartCountdown()
    {
        // Show the countdown text
        countdownText.gameObject.SetActive(true);

        // Set the countdown timer
        countdownTimer = countdownDuration;

        // Start the countdown
        isCountdownActive = true;
    }

    private void StartRace()
    {
        // Hide the countdown text
        countdownText.gameObject.SetActive(false);

        // Start the race logic here
        // ...
    }
}
