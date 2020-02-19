using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Controllwheel : MonoBehaviour
{


    public int moveSpeed = 200;
    public int rotateSpeed = 90;

    // Update is called once per frame
    void Update()
    {

        if (Mathf.Abs(Input.GetAxis("Horizontal")) > 0)
        {
            float moveHorizontal = -Input.GetAxis("Horizontal") * moveSpeed;
            moveHorizontal *= Time.deltaTime;
            transform.Translate(Vector3.right * moveHorizontal);


        }

        //if (Mathf.Abs(Input.GetAxis("Vertical")) > 0)
        //{
        //    float move = Input.GetAxis("Vertical") * moveSpeed;
        //    move *= Time.deltaTime;
        //    transform.Translate(x: 0, y: move, z: 0);

        //    float rotate = Input.GetAxis("Vertical") * rotateSpeed;
        //    rotate *= Time.deltaTime;
        //    transform.Rotate(Vector3.forward * rotate);
        //}


    }
}
