using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class FollowCameraCollider : MonoBehaviour
{
    public Transform mainCamera;  // Reference to the main camera

    public CapsuleCollider body;
    public GameObject upJB;
    public GameObject forwardJB;
    public GameObject leftJB;
    public GameObject rightJB;

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
        
        
        
        upJB.transform.localPosition = new Vector3(offset.x, upJB.transform.localPosition.y, offset.z);
        forwardJB.transform.localPosition = new Vector3(offset.x, forwardJB.transform.localPosition.y, offset.z);
        leftJB.transform.localPosition = new Vector3(offset.x, leftJB.transform.localPosition.y, offset.z);
        rightJB.transform.localPosition = new Vector3(offset.x, rightJB.transform.localPosition.y, offset.z);

        float yRotation = mainCamera.transform.eulerAngles.y;
        // JBContainer.transform.eulerAngles = new Vector3(0, yRotation, 0);

        upJB.transform.eulerAngles = new Vector3(0, yRotation, 0);
        forwardJB.transform.eulerAngles = new Vector3(0, yRotation, 0);
        leftJB.transform.eulerAngles = new Vector3(0, yRotation, 0);
        rightJB.transform.eulerAngles = new Vector3(0, yRotation, 0);
        
        // upJB.transform.rotation = new Quaternion(0.0f, yRotation, 0.0f, 0.0f);
        // forwardJB.transform.rotation =  new Quaternion(0.0f, yRotation, 0.0f, 0.0f);
        // leftJB.transform.rotation =  new Quaternion(0.0f, yRotation, 0.0f, 0.0f);
        // rightJB.transform.rotation =  new Quaternion(0.0f, yRotation, 0.0f, 0.0f);



        // JBContainer.transform.rotation.Set(JBContainer.transform.rotation.x, mainCamera.rotation.y, JBContainer.transform.rotation.z, JBContainer.transform.rotation.w);


        // transform.position = originalPosition + offset;

        // Directly set the position of the collider to the camera's position
        // transform.position = new Vector3(mainCamera.position.x, transform.position.y, mainCamera.position.z);
        // transform.position = mainCamera.position;
    }
}
