using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Entities;
using Unity.Physics;
using Unity.Transforms;
using Unity.Mathematics;


namespace Smalli.Spidership
{
    public class AstroidSpawner : MonoBehaviour
    {

        public int maxAstroidsPerSpawn;
        public GameObject[] _astroidPrefabs;

        public GameManager gameManager;

        public Vector3 offsetFromPlayer;


        private Entity[] astroidEntities;



        private EntityManager manager;
        private BlobAssetStore blobAssetStore;

        private void Awake()
        {
            manager = World.DefaultGameObjectInjectionWorld.EntityManager;
            blobAssetStore = new BlobAssetStore();
            GameObjectConversionSettings settings = GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, blobAssetStore);

            astroidEntities = new Entity[_astroidPrefabs.Length];

            for (int i = 0; i < _astroidPrefabs.Length; i++)
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
            Entity newAstroidEntity = manager.Instantiate(astroidEntities[(int)UnityEngine.Random.Range(0, 2)]);
            Vector3 direction = -Vector3.forward;
            //Vector3 speed = ;

            PhysicsVelocity velocity = new PhysicsVelocity()
            {
                Linear = direction * UnityEngine.Random.Range(UnityEngine.Random.Range(-5, 10), UnityEngine.Random.Range(-5, 10)),
                Angular = float3.zero
            };
            Translation translation = new Translation
            {
                Value = new float3(transform.position.x + UnityEngine.Random.Range(-1000f, 1000f), transform.position.y + UnityEngine.Random.Range(-500f, 500f), transform.position.z + (UnityEngine.Random.Range(-50f, 100f)))
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
}