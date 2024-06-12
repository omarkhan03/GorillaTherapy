using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

[RequireComponent(typeof(InputData))]

public class JumpController : MonoBehaviour
{
    private InputData _inputData;
    
    public Collider upJB;
    public Collider forwardJB;
    public Collider rightJB;
    public Collider leftJB;

    
    public Collider leftHand;
    public Collider rightHand;
    
    // [SerializeField] private GameObject MainCamera;
    [SerializeField] private GameObject ForwardDirection;

    
    public Vector3 jumpDir;
    public float jumpForce = 2.0f;

    public bool isGrounded;
    public Rigidbody rb;

    private float leftVel = 1;
    private float rightVel = 1;
    
    void Start(){
        // rb = GetComponent<Rigidbody>();
        // jump = new Vector3(0.0f, 2.0f, 0.0f);
        _inputData = GetComponent<InputData>();

    }

    private void Update()
    {

        if (upJB.bounds.Intersects(leftHand.bounds) && upJB.bounds.Intersects(rightHand.bounds) && isGrounded)
        {
            jumpDir = new Vector3(0, 5.0f, 0);
            Jump();
        }
        else if (forwardJB.bounds.Intersects(leftHand.bounds) && forwardJB.bounds.Intersects(rightHand.bounds) && isGrounded)
        {
            jumpDir = new Vector3(ForwardDirection.transform.forward.x, 3.0f, ForwardDirection.transform.forward.z);
            Jump();
        }
        else if (rightJB.bounds.Intersects(rightHand.bounds) && isGrounded)
        {
            jumpDir = new Vector3(ForwardDirection.transform.right.x, 3.0f, ForwardDirection.transform.right.z);
            Jump();
        }
        else if (leftJB.bounds.Intersects(leftHand.bounds) && isGrounded)
        {
            jumpDir = new Vector3(-ForwardDirection.transform.right.x, 3.0f, -ForwardDirection.transform.right.z);

            Jump();
        }

    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name.Equals("Ground")) isGrounded = true;
    }

    void Jump(){
        if (_inputData._leftController.TryGetFeatureValue(CommonUsages.deviceVelocity, out Vector3 leftVelocity))
            leftVel = leftVelocity.magnitude;

        if (_inputData._rightController.TryGetFeatureValue(CommonUsages.deviceVelocity, out Vector3 rightVelocity))
            rightVel = rightVelocity.magnitude;

        jumpForce = Mathf.Clamp(((leftVel + rightVel) / 3), 1.0f, 2.5f);
        rb.AddForce(jumpDir * jumpForce, ForceMode.Impulse);
        
        isGrounded = false;
    }
    
    
    
}
