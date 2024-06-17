using UnityEngine;
using UnityEngine.UI;

public class PositionController : MonoBehaviour
{
    public PositionRecorder positionRecorder;
    public Collider startRecordingButton;
    public Collider stopRecordingButton;
    public Collider startPlaybackButton;
    
    public Collider leftHand;
    public Collider rightHand;
    
    public void Update()
    {
        if (startRecordingButton.bounds.Intersects(leftHand.bounds) || startRecordingButton.bounds.Intersects(rightHand.bounds))
        {
            Debug.Log("detected, start recording");
            StartRecording();
        }
        
        if (stopRecordingButton.bounds.Intersects(leftHand.bounds) || stopRecordingButton.bounds.Intersects(rightHand.bounds))
        {
            Debug.Log("detected, stop recording");
            StopRecording();
        }
        
        if (startPlaybackButton.bounds.Intersects(leftHand.bounds) || startPlaybackButton.bounds.Intersects(rightHand.bounds))
        {
            Debug.Log("detected, start playback");
            StartPlayback();
        }
    }

    void StartRecording()
    {
        positionRecorder.StartRecording();
    }

    void StopRecording()
    {
        positionRecorder.StopRecording();
    }

    void StartPlayback()
    {
        positionRecorder.StartPlayback();
    }
}