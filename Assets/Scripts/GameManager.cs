using System.Collections;
using Unity.Collections;
using UnityEngine;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Physics;
using UnityEngine.UI;
using Unity.Transforms;
using Unity.Rendering;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    public bool spawnPlayerAsEntity;

    public GameObject playerShipPrefabGO;
    public GameObject playerShipPrefabDOTS;
    public GameObject wheel;
    public Transform playerLaserLPrefab;
    public Transform playerLaserRPrefab;


    public Text scoreText;

    public int maxScore;
    public int lasersPerShot;
    public GameObject laserPrefab;
    public float laserSpeed = 3f;
    public int maxAstroids = 1000;

    private int currentScore;
    private Entity playerShipEntityPrefab;


    private EntityManager manager;
    private BlobAssetStore blobAssetStore;

    private bool insaneMode;
    private Entity laserEntityPrafab;

    private Entity astroidEntityPrefab;

    private bool spiderControllsEnabled = false;



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
        laserEntityPrafab = GameObjectConversionUtility.ConvertGameObjectHierarchy(laserPrefab, settings);       
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Z) || Input.GetKey(KeyCode.Period))
        {
            Debug.Log("Z Pressed");
            StartCoroutine(FireLotsOfLasers());
        }
    }


    IEnumerator FireLotsOfLasers()
    {

        for (int i = 0; i < lasersPerShot; i++)
        {
            SpawnNewLazer(index: i); ;
        }

        yield return null;

    }
   
    void SpawnNewLazer(int index)
    {
        Entity newCubeEntity = manager.Instantiate(laserEntityPrafab);
        Vector3 direction = Vector3.forward;
        Vector3 speed = direction * laserSpeed;
        Translation spawnPoint = new Translation();

        //Translation playerPosition = manager.GetComponentData<Translation>(playerShipEntityPrefab);

        if (index % 2 == 0)
        {
            Translation pos = new Translation()
            {
                Value = playerLaserLPrefab.transform.position
            };
            spawnPoint = pos;
        }
        else
        {
            Translation pos = new Translation()
            {
                Value = playerLaserRPrefab.transform.position
            };
            spawnPoint = pos;
        }
        

        PhysicsVelocity velocity = new PhysicsVelocity()
        {
            Linear = speed,
            Angular = Vector3.zero
        };


        manager.AddComponentData(newCubeEntity, spawnPoint);
        manager.AddComponentData(newCubeEntity, velocity);

        
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

        } else {
           
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
        scoreText.text = "Press Shift to allow instructions.\nUse arrows or AWSD to move up/down/forward/back\nUse the mouse to move up and down.\nPress Z to shoot\nHold down period (.) to shoot constantly." + currentScore;
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
