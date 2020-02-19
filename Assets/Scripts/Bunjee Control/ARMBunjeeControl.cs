using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARMBunjeeControl : MonoBehaviour
{

    public GameObject wheel;
    public GameObject shipModel;
    public AnimationCurve Curve = AnimationCurve.Linear(0, 0, 1, 1);
    public AnimationCurve CurveRotation = AnimationCurve.Linear(0, 0, 1, 1);

    [SerializeField] [Range(0, 1)] private float lerpPercent = 0.0f;
    [SerializeField] [Range(0, 1)] private float rotationLerpPercent = 0.0f;


    // Update is called once per frame
    void Update()
    {
        this.transform.position = Vector3.Lerp(transform.position, wheel.transform.position, Curve.Evaluate(lerpPercent));
        this.transform.rotation = Quaternion.Lerp(transform.rotation, shipModel.transform.rotation, Curve.Evaluate(rotationLerpPercent));
    }
}
