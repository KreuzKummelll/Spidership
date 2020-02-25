using UnityEngine;


namespace Smalli.Spidership
{
    public class PowerupBehavior : MonoBehaviour
    {

        GameManager gameManager;


        private void Start()
        {
            gameManager = FindObjectOfType<GameManager>();

        }

        private void OnTriggerEnter(Collider collision)
        {
            if (collision.gameObject.CompareTag("Player"))
            {
                print("Player picked up power up");
                CannonManager.instance.lasersPerShot += 5;
                gameManager.eventMessages.Add("Player gained 100 lasers per shot. Value is now " + CannonManager.instance.lasersPerShot.ToString());
                gameManager.scoreText.text += gameManager.eventMessages;
            }
        }


    }
}