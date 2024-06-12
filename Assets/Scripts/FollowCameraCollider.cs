using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class FollowCameraCollider : MonoBehaviour
{
    public Transform mainCamera;  // Reference to the main camera

    public CapsuleCollider body;
    public BoxCollider upJB;
    public BoxCollider forwardJB;
    public BoxCollider leftJB;
    public BoxCollider rightJB;

    public GameObject JBContainer;
    
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

        body.center = new Vector3(offset.x, body.center.y, offset.z);
        upJB.center = new Vector3(offset.x, upJB.center.y, offset.z);
        forwardJB.center = new Vector3(offset.x, forwardJB.center.y, offset.z);
        leftJB.center = new Vector3(offset.x, leftJB.center.y, offset.z);
        rightJB.center = new Vector3(offset.x, rightJB.center.y, offset.z);
        
        float yRotation = mainCamera.transform.eulerAngles.y;
        JBContainer.transform.eulerAngles = new Vector3(0, yRotation, 0);


        // JBContainer.transform.rotation.Set(JBContainer.transform.rotation.x, mainCamera.rotation.y, JBContainer.transform.rotation.z, JBContainer.transform.rotation.w);


        // transform.position = originalPosition + offset;

        // Directly set the position of the collider to the camera's position
        // transform.position = new Vector3(mainCamera.position.x, transform.position.y, mainCamera.position.z);
        // transform.position = mainCamera.position;
    }
}
