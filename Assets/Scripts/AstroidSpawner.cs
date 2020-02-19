using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Entities;
using Unity.Physics;
using Unity.Transforms;
using Unity.Mathematics;

public class AstroidSpawner : MonoBehaviour
{

    public int maxAstroidsPerSpawn;
    public GameObject[] _astroidPrefabs;

    public GameManager gameManager;

    public Vector3 offsetFromPlayer;
    

    private Entity[] astroidEntities = new Entity[3];



    private EntityManager manager;
    private BlobAssetStore blobAssetStore;

    private void Awake()
    {
        manager = World.DefaultGameObjectInjectionWorld.EntityManager;
        blobAssetStore = new BlobAssetStore();
        GameObjectConversionSettings settings = GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, blobAssetStore);

        for (int i = 0; i <_astroidPrefabs.Length; i++)
        {
          
            Entity newAstroid = GameObjectConversionUtility.ConvertGameObjectHierarchy(_astroidPrefabs[i], settings);
            astroidEntities.SetValue(newAstroid, i);
        }
        
    }
    private void Start()
    {
        transform.position = gameManager.playerShipPrefabGO.transform.position + offsetFromPlayer;
        StartCoroutine(SpawnLotsOfAstroids());

    }
    private void LateUpdate()
    {
        
    }

    void SpawnAstroid()
    {
        Entity newAstroidEntity = manager.Instantiate(astroidEntities[(int)UnityEngine.Random.Range(0,2)]);
        Vector3 direction = -Vector3.right;
        Vector3 speed = direction * UnityEngine.Random.Range(UnityEngine.Random.Range(-5, 10), UnityEngine.Random.Range(-5, 5));

        PhysicsVelocity velocity = new PhysicsVelocity()
        {
            Linear = speed,
            Angular = float3.zero
        };
        Translation translation = new Translation
        {
            Value = new float3(transform.position.x + UnityEngine.Random.Range(-500f, 500f), transform.position.y + UnityEngine.Random.Range(-100f, 100f), transform.position.z + (UnityEngine.Random.Range(-500f, 500f)))
        };

        manager.AddComponentData(newAstroidEntity, velocity);
        manager.AddComponentData(newAstroidEntity, translation);

        //manager.SetSharedComponentData(newAstroidEntity, new RenderMesh { mesh = meshObject, material = materialObject });
    }

    IEnumerator SpawnLotsOfAstroids()
    {
        for (int i = 0; i < maxAstroidsPerSpawn; i++)
        {
            SpawnAstroid();
        }
        yield return null;
    }

    private void OnDestroy()
    {
        blobAssetStore.Dispose();
    }
}
