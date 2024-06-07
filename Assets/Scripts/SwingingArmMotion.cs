using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.InputSystem;

public class SwingingArmMotion : MonoBehaviour
{
    // Game Objects
    [SerializeField] private GameObject LeftHand;
    [SerializeField] private GameObject RightHand;
    [SerializeField] private GameObject MainCamera;
    [SerializeField] private GameObject ForwardDirection;

    //Vector3 Positions
    [SerializeField] private Vector3 PositionPreviousFrameLeftHand;
    [SerializeField] private Vector3 PositionPreviousFrameRightHand;
    [SerializeField] private Vector3 PlayerPositionPreviousFrame;
    [SerializeField] private Vector3 PlayerPositionCurrentFrame;
    [SerializeField] private Vector3 PositionCurrentFrameLeftHand;
    [SerializeField] private Vector3 PositionCurrentFrameRightHand;

    //Speed
    [SerializeField] private float Speed = 70;
    [SerializeField] private float HandSpeed;
    
    public VRInputActions inputActions;


    void Start()
    {
        PlayerPositionPreviousFrame = transform.position; //set current positions
        PositionPreviousFrameLeftHand = LeftHand.transform.position; //set previous positions
        PositionPreviousFrameRightHand = RightHand.transform.position;
    }
    
    private void Awake()
    {
        inputActions = new VRInputActions();
    }

    private void OnEnable()
    {
        inputActions.Enable();
    }

    private void OnDisable()
    {
        inputActions.Disable();
    }


    // Update is called once per frame
    void Update()
    {
        // Read the value of the grip buttons
        bool leftGripPressed = inputActions.Player.LeftGrip.ReadValue<float>() > 0.5f;
        bool rightGripPressed = inputActions.Player.RightGrip.ReadValue<float>() > 0.5f;

        Vector2 joystickValue = inputActions.Player.Joystick.ReadValue<Vector2>();
        
        // set forward direction (if joystick not used, default to the direction the player's head is facing)
        float yRotation = MainCamera.transform.eulerAngles.y;

        if (joystickValue == Vector2.zero)
        {
            ForwardDirection.transform.eulerAngles = new Vector3(0, yRotation, 0);
        }
        else
        {
            // ForwardDirection.transform.eulerAngles = new Vector3(joystickValue.x, yRotation, joystickValue.y);
            ForwardDirection.transform.forward = MainCamera.transform.right * joystickValue.x + MainCamera.transform.forward * joystickValue.y;
        }
        
        // Debug.Log(ForwardDirection.transform.eulerAngles);


        // get positons of hands
        PositionCurrentFrameLeftHand = LeftHand.transform.position;
        PositionCurrentFrameRightHand = RightHand.transform.position;

        // position of player
        PlayerPositionCurrentFrame = transform.position;

        // get distance the hands and player has moved from last frame
        var playerDistanceMoved = Vector3.Distance(PlayerPositionCurrentFrame, PlayerPositionPreviousFrame);
        var leftHandDistanceMoved = Vector3.Distance(PositionPreviousFrameLeftHand, PositionCurrentFrameLeftHand);
        var rightHandDistanceMoved = Vector3.Distance(PositionPreviousFrameRightHand, PositionCurrentFrameRightHand);

        // aggregate to get hand speed
        HandSpeed = ((leftHandDistanceMoved - playerDistanceMoved) + (rightHandDistanceMoved - playerDistanceMoved));

        if(Time.timeSinceLevelLoad > 1f)
        {

            if (leftGripPressed && rightGripPressed)
            {
                transform.position += ForwardDirection.transform.forward * HandSpeed * Speed * Time.deltaTime;

            }
            
        }
        

        // set previous position of hands for next frame
        PositionPreviousFrameLeftHand = PositionCurrentFrameLeftHand;
        PositionPreviousFrameRightHand = PositionCurrentFrameRightHand;
        // set player position previous frame
        PlayerPositionPreviousFrame = PlayerPositionCurrentFrame;
        
        
    }
}