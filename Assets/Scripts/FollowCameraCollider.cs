using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowCameraCollider : MonoBehaviour
{
    public Transform mainCamera;  // Reference to the main camera

    public CapsuleCollider body;

    private Vector3 offset;  // Offset between the camera and the collider

    private Vector3 originalPosition; 

    void Start()
    {
        // offset = new Vector3(0,0,0);
    }

    void Update()
    {

        // originalPosition = transform.position - offset;

        offset = mainCamera.localPosition;
        
        // Debug.Log(offset);

        body.center = offset;

        // transform.position = originalPosition + offset;

        // Directly set the position of the collider to the camera's position
        // transform.position = new Vector3(mainCamera.position.x, transform.position.y, mainCamera.position.z);
        // transform.position = mainCamera.position;
    }
}
