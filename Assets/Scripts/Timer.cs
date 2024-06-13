using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Timer : MonoBehaviour
{
    public Collider body;
    public Collider startBlock;
    public Collider endBlock;

    private float startTime;
    private float endTime;
    private float timeTaken;

    private bool raceOn = false;

    private void Update()
    {
        if (startBlock.bounds.Intersects(body.bounds))
        {
            Debug.Log("race started");
            startTime = Time.fixedTime;
            raceOn = true;
        }


        if (endBlock.bounds.Intersects(body.bounds) && raceOn)
        {
            endTime = Time.fixedTime;
            timeTaken = endTime - startTime;
            Debug.Log("Time taken = " + timeTaken + ". Scene = " + SceneManager.GetActiveScene().name);
            raceOn = false;
        }

    }
    

}
