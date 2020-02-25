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
    public float forwardMotionMultiplier = 5;
    public float horizontalMotionMultiplier = 5;
    public float verticalMotionMultiplier = 5;

    // Start is called before the first frame update
    void Start()
    {
        inputH = 0;
        inputV = 0;
        inputZ = 0;
    }

    // Update is called once per frame
    void Update()
    {
        // contains methods changeZPosition() and centerWheel()
        Stearing();
    }


    private void Stearing()
    {

        

        if (Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift))
        {
            inputZ = Input.GetAxis("Vertical") * 2 * forwardMotionMultiplier;
            inputH = Input.mouseScrollDelta.x * 2 * horizontalMotionMultiplier;
            inputV = -Input.mouseScrollDelta.y * 2 * verticalMotionMultiplier;
        } else
        {
            inputZ = Input.GetAxis("Vertical") * 2;
            inputH = Input.mouseScrollDelta.x * 2;
            inputV = -Input.mouseScrollDelta.y * 2;
        }
        

        centerWheel();

        inputT = new Vector3(inputH, -inputV, inputZ);
        
        this.transform.Translate(inputT);
 
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