using System.Collections.Generic;
using UnityEngine;

public class PositionRecorder : MonoBehaviour
{
    private class PositionData
    {
        public Vector3 position;
        public Quaternion rotation;

        public PositionData(Vector3 pos, Quaternion rot)
        {
            position = pos;
            rotation = rot;
        }
    }

    private List<Dictionary<Transform, PositionData>> positionData;
    private bool isRecording = false;
    private bool isPlayingBack = false;
    private int playbackIndex = 0;

    void Start()
    {
        positionData = new List<Dictionary<Transform, PositionData>>();
    }

    void Update()
    {
        if (isRecording)
        {
            RecordPositions();
        }

        if (isPlayingBack)
        {
            PlaybackPositions();
        }
    }

    private void RecordPositions()
    {
        Dictionary<Transform, PositionData> frameData = new Dictionary<Transform, PositionData>();
        RecordTransform(transform, frameData);
        positionData.Add(frameData);
    }

    private void RecordTransform(Transform parent, Dictionary<Transform, PositionData> frameData)
    {
        frameData[parent] = new PositionData(parent.position, parent.rotation);
        foreach (Transform child in parent)
        {
            RecordTransform(child, frameData);
        }
    }

    private void PlaybackPositions()
    {
        if (playbackIndex < positionData.Count)
        {
            Dictionary<Transform, PositionData> frameData = positionData[playbackIndex];
            foreach (var kvp in frameData)
            {
                kvp.Key.position = kvp.Value.position;
                kvp.Key.rotation = kvp.Value.rotation;
            }
            playbackIndex++;
        }
        else
        {
            isPlayingBack = false; // Stop playback when finished
        }
    }

    public void StartRecording()
    {
        isRecording = true;
    }

    public void StopRecording()
    {
        isRecording = false;
    }

    public void StartPlayback()
    {
        isPlayingBack = true;
        playbackIndex = 0;
    }

    public void StopPlayback()
    {
        isPlayingBack = false;
    }
}
