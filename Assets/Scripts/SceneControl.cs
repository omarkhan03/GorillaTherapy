using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR;

public class SceneControl : MonoBehaviour
{
    public Collider button;
    public Collider leftHand;
    public Collider rightHand;
    public bool gorilla = false;
    
    private void OnTriggerEnter(Collider other)
    {
        if (other != leftHand && other != rightHand) return;
        Debug.Log("detected");
        SceneManager.LoadScene(gorilla ? "ArmSwing" : "Gorilla");
    }

    public void Update()
    {
        if (button.bounds.Intersects(leftHand.bounds) || button.bounds.Intersects(rightHand.bounds))
        {
            Debug.Log("detected");
            SceneManager.LoadScene(gorilla ? "ArmSwing" : "Gorilla");
        }
}
}
