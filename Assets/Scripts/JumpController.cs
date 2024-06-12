using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

[RequireComponent(typeof(InputData))]

public class JumpController : MonoBehaviour
{
    private InputData _inputData;    
    public Transform mainCamera;  // Reference to the main camera

    public GameObject JumpDirection;

    
    public Collider upJB;
    public Collider forwardJB;
    public Collider rightJB;
    public Collider leftJB;

    
    public Collider leftHand;
    public Collider rightHand;
    
    // [SerializeField] private GameObject MainCamera;
    // [SerializeField] private GameObject ForwardDirection;

    
    public Vector3 jumpDir;
    public float jumpForce = 2.0f;

    public bool isGrounded;
    public bool readyToGo;
    public Rigidbody rb;

    private float leftVel = 1;
    private float rightVel = 1;
    
    float yRotation;
    
    void Start(){
        // rb = GetComponent<Rigidbody>();
        // jump = new Vector3(0.0f, 2.0f, 0.0f);
        _inputData = GetComponent<InputData>();
        
    }

    private void Update()
    {
        yRotation = mainCamera.transform.eulerAngles.y;
        JumpDirection.transform.eulerAngles = new Vector3(0, yRotation, 0);

        if (isGrounded &&
            !upJB.bounds.Intersects(leftHand.bounds) &&
            !upJB.bounds.Intersects(rightHand.bounds) &&
            !forwardJB.bounds.Intersects(leftHand.bounds) &&
            !forwardJB.bounds.Intersects(rightHand.bounds) &&
            !rightJB.bounds.Intersects(rightHand.bounds) &&
            !leftJB.bounds.Intersects(leftHand.bounds)
           )
        {
            readyToGo = true;
        }

        if (upJB.bounds.Intersects(leftHand.bounds) && upJB.bounds.Intersects(rightHand.bounds) && readyToGo)
        {
            jumpDir = new Vector3(0, 3.0f, 0);
            Jump();
        }
        else if (forwardJB.bounds.Intersects(leftHand.bounds) && forwardJB.bounds.Intersects(rightHand.bounds) && readyToGo)
        {
            jumpDir = new Vector3(JumpDirection.transform.forward.x, 3.0f, JumpDirection.transform.forward.z) / 1.1f;
            Jump();
        }
        else if (rightJB.bounds.Intersects(rightHand.bounds) && readyToGo)
        {
            jumpDir = new Vector3(JumpDirection.transform.right.x, 3.0f, JumpDirection.transform.right.z);
            Jump("right");
        }
        else if (leftJB.bounds.Intersects(leftHand.bounds) && readyToGo)
        {
            jumpDir = new Vector3(-JumpDirection.transform.right.x, 3.0f, -JumpDirection.transform.right.z);
            Jump("left");
        }

    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name.Equals("Ground")) isGrounded = true;
    }

    void Jump(string side = null){
        if (_inputData._leftController.TryGetFeatureValue(CommonUsages.deviceVelocity, out Vector3 leftVelocity))
            leftVel = leftVelocity.magnitude;

        if (_inputData._rightController.TryGetFeatureValue(CommonUsages.deviceVelocity, out Vector3 rightVelocity))
            rightVel = rightVelocity.magnitude;

        float realVel;
        if (side == null) realVel = leftVel + rightVel;
        else if (side == "right") realVel = rightVel;
        else realVel = leftVel;

        jumpForce = Mathf.Clamp((realVel / 4.0f), 1.0f, 2.5f);
        rb.AddForce(jumpDir * jumpForce, ForceMode.Impulse);
        
        isGrounded = false;
        readyToGo = false;
    }
    
    
    
}
