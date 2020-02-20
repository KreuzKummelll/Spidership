using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARMShipModel : MonoBehaviour
{
    CharacterController CharCtrl;
    Rigidbody rb;

    bool accelerate;
    float speed;

    private void Start()
    {
        CharCtrl = this.GetComponent<CharacterController>();
        //rb = gameObject.GetComponent<Rigidbody>();
        //rb.useGravity = false;
     

        accelerate = false;
    }

    private void Update()
    {
        
            Vector3 NextDir = new Vector3((Input.GetAxis("Vertical")), 0, -Input.GetAxis("Horizontal"));
            if (NextDir != Vector3.zero) 
                transform.rotation = Quaternion.AngleAxis(40, NextDir);
            else
            {
                transform.rotation = Quaternion.identity;
            }
        
    }
    private void LateUpdate()
    {

    }
}

