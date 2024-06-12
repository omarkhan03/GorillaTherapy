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


    
    public Collider leftHand;
    public Collider rightHand;
    
    // [SerializeField] private GameObject MainCamera;
    [SerializeField] private GameObject ForwardDirection;

    
    public Vector3 jump;
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
        
        jump = new Vector3(ForwardDirection.transform.forward.x, 3.0f, ForwardDirection.transform.forward.z);

        if (upJB.bounds.Intersects(leftHand.bounds) && upJB.bounds.Intersects(rightHand.bounds) && isGrounded)
        {
            Jump();
        }
        
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name.Equals("Ground")) isGrounded = true;
    }

    void Jump(){
        if (_inputData._leftController.TryGetFeatureValue(CommonUsages.deviceVelocity, out Vector3 leftVelocity))
        {
            leftVel = leftVelocity.magnitude;
        }
        if (_inputData._rightController.TryGetFeatureValue(CommonUsages.deviceVelocity, out Vector3 rightVelocity))
        {
            rightVel = rightVelocity.magnitude;
        }
        // Debug.Log("left velocity = " + leftVel);
        // Debug.Log("right velocity = " + rightVel);

        jumpForce = Mathf.Clamp(((leftVel + rightVel) / 3), 1.0f, 2.5f);

        
        // Debug.Log(jumpForce);
        
        rb.AddForce(jump * jumpForce, ForceMode.Impulse);
        isGrounded = false;
    }
    
    
    
}
