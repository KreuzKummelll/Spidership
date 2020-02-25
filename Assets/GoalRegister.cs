using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Smalli.Spidership
{
    public class GoalRegister : MonoBehaviour
    {


        private void OnTriggerEnter(Collider other)
        {
            GameManager.instance.IncreaseScore();
        }

    }
}