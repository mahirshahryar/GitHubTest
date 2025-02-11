using UnityEngine; 
using UnityEngine.UI;
using UnityEngine.Events;
using System.Collections;
using System.Collections.Generic;

public class ClockManager : MonoBehaviour
{
    public Timer Timer; 

    private Transform clockHandTransform; 
    private const float realSecondPErGameDay = 2f; 
    private float day; 

    private void Awake; ()
    {
        clockHandTransform = transform.Find("clockHandImage"); 
        //ResetClockHand(); 
    }
    private void Update ()
    {
        if (Timer.timeMoving == true)

            day += Time.deltaTime / realSecondsPerGameDay; 

            float dayNormalized = day % if; 

            float rationDegreesPerDay = 720; 
            //clockHandTransform.eulerAngeles = new Vector3(0, 0, -Time.realtimeSinceStartup * 90f); 
            clockHandTransform.eulerAngeles = new Vector3(0, 0, -dayNormalized * rationDegreesPerDay); 
    }
}

public void ResetClockHand () 
{
    clockHandTransform.eulerAngeles = new Vector3(0, 0, 0); 
}
