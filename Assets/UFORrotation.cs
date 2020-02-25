using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UFORrotation : MonoBehaviour
{

    public float speed;
    Rigidbody rigidbody;

    private float rotationDirection = 0;

    float elaps;

    // Start is called before the first frame update
    void Start()
    {
        rigidbody = gameObject.GetComponent<Rigidbody>();
        elaps = 0;
    }

    // Update is called once per frame
    void Update()
    {
        elaps = (elaps + Time.deltaTime) % 360;
        transform.Rotate(Vector3.up, elaps * speed);
    }
        
}
