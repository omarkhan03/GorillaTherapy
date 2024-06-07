using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JumpController : MonoBehaviour
{
    public Collider leftHand;
    public Collider rightHand;
    public Collider jumpBox;
    
    // [SerializeField] private GameObject MainCamera;
    [SerializeField] private GameObject ForwardDirection;

    
    public Vector3 jump;
    public float jumpForce = 2.0f;

    public bool isGrounded;
    public Rigidbody rb;
    
    void Start(){
        // rb = GetComponent<Rigidbody>();
        // jump = new Vector3(0.0f, 2.0f, 0.0f);
    }

    private void Update()
    {
        jump = new Vector3(ForwardDirection.transform.forward.x, 3.0f, ForwardDirection.transform.forward.z);

        if (jumpBox.bounds.Intersects(leftHand.bounds) && jumpBox.bounds.Intersects(rightHand.bounds) && isGrounded)
        {
            Jump();
        }
    }

    private void OnTriggerEnter(Collider other)
    {

        if (other == leftHand || other == rightHand)
        {
            if (jumpBox.bounds.Intersects(leftHand.bounds) && jumpBox.bounds.Intersects(rightHand.bounds) && isGrounded)
                Jump();
        }
    }


    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name.Equals("Ground")) isGrounded = true;
    }

    void Jump(){
        rb.AddForce(jump * jumpForce, ForceMode.Impulse);
        isGrounded = false;
    }
    
    
}
