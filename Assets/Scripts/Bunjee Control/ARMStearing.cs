using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class ARMStearing : MonoBehaviour
{
    //private ReactiveProperty<float> inputZ;
    private float inputH;
    private float inputV;
    private float inputZ;
    
    private Vector3 inputT;
    private Quaternion inputQ;

    private float lerpPercent = 1f;

    private Vector3 centerObjectPosition;

    [SerializeField] private GameObject centerObject;
    
    public int advanceRange;
    public AnimationCurve Curve = AnimationCurve.Linear(0, 0, 1, 1);

    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        // contains methods changeZPosition() and centerWheel()
        Stearing();
    }


    private void Stearing()
    {

      
        if (Input.GetKey(KeyCode.RightShift) || Input.GetKey(KeyCode.LeftShift))
        {

            inputH = Input.GetAxis("Horizontal");
            inputV = Input.GetAxis("Vertical");

            centerWheel();

            inputT = new Vector3(inputH, -inputV, inputZ);
            //inputQ = new Quaternion(0, 0, inputH * 25f, 0);
            //Debug.Log("Input " + inputT);
            //Debug.Log("Input " + inputQ);
            this.transform.Translate(inputT);
        }
        
        
        //this.transform.rotation = Quaternion.Lerp(centerObject.transform.rotation, inputQ, Curve.Evaluate(lerpPercent));
        //this.transform.position = inputT;
    }

  

    private void centerWheel()
    {
        if (Input.GetKeyDown(KeyCode.C))
        {
            this.transform.position = centerObject.transform.position;
            this.transform.rotation = Quaternion.identity;
        }
    }

    void createWheelObservables()
    {

    }
}