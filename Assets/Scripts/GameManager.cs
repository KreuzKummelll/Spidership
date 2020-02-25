using System.Collections.Generic;
using UnityEngine;
using Unity.Entities;
using Unity.Mathematics;
using UnityEngine.UI;
using Unity.Transforms;


namespace Smalli.Spidership
{
    public class GameManager : MonoBehaviour
    {
        public static GameManager instance;

        public bool spawnPlayerAsEntity;

        public GameObject playerShipPrefabGO;
        public GameObject playerShipPrefabDOTS;
        public GameObject wheel;
        public Transform playerLaserLPrefab;
        public Transform playerLaserRPrefab;

        public List<string> eventMessages;
        public Text scoreText;

        public int maxScore;
  
        public int maxAstroids = 1000;
        public int spreadAmount = 20;

        private int currentScore;
        private Entity playerShipEntityPrefab;


        private EntityManager manager;
        private BlobAssetStore blobAssetStore;

        private bool insaneMode;
  

        private Entity astroidEntityPrefab;

        private bool spiderControllsEnabled = false;


        private string eventMessagesString = "";


        private void Awake()
        {
            if (instance != null && instance != this)
            {
                Destroy(gameObject);
                return;
            }

            instance = this;
            manager = World.DefaultGameObjectInjectionWorld.EntityManager;
            blobAssetStore = new BlobAssetStore();
            GameObjectConversionSettings settings = GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, blobAssetStore);
            playerShipEntityPrefab = GameObjectConversionUtility.ConvertGameObjectHierarchy(playerShipPrefabDOTS, settings);
           
        }

        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                Application.Quit();
            }

        }

        private void Start()
        {
            currentScore = 0;
            DisplayScore();

            if (spawnPlayerAsEntity)
            {
                SpawnPlayer();
                Destroy(playerShipPrefabGO);
                Destroy(wheel);

            }
            else
            {

                if (playerShipPrefabGO == null) { Instantiate(playerShipPrefabGO); }
                if (wheel == null) { Instantiate(wheel); };

                playerShipPrefabGO.GetComponent<ARMBunjeeControl>().wheel = wheel;
            }

        }
        public void IncreaseScore()
        {
            currentScore++;
            DisplayScore();
        }
        private void DisplayScore()
        {
            scoreText.text = "Use mouse to move up/down.\nUse S,W or up-arrow,down-arrow to move forward/back\nUse shift to apply the speed mulipliers.\nPress X to shoot\nHold down X to shoot constantly.\n\nScore is " + currentScore;
        }

        void SpawnPlayer()
        {
            Entity newPlayerEntity = manager.Instantiate(playerShipEntityPrefab);
            Translation playerTrans = new Translation
            {
                Value = new float3(0f, 0.5f, 0f)
            };
            manager.AddComponentData(newPlayerEntity, playerTrans);
            CameraFollow.instance.playerShipEntity = newPlayerEntity;
        }


        private void OnDestroy()
        {
            blobAssetStore.Dispose();
        }
    }
}