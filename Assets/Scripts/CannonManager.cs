using System.Collections.Generic;
using System.Collections;
using Unity.Collections;
using UnityEngine;
using Unity.Entities;
using Unity.Physics;
using Unity.Transforms;



namespace Smalli.Spidership
{
    public class CannonManager : MonoBehaviour
    {

        public static CannonManager instance;

        public GameObject playerPrefab;
        public int spreadAmount;
        public GameObject[] lasers;
        public KeyCode singleFireKey;
        public KeyCode constantFireKey;
        public KeyCode buckShotKey;

        private GameManager gameManager;
        private EntityManager manager;
        private BlobAssetStore blobAssetStore;

        public float laserSpeed = 3f;
        public float laserScale = 1f;
        public int lasersPerShot;

        private bool insaneMode;
        private Entity laserEntityPrafab;
        private Entity ballLaserEntityPrefab;

        private void Awake()
        {
            if (instance != null && instance != this)
            {
                Destroy(gameObject);
                return;
            }

            manager = World.DefaultGameObjectInjectionWorld.EntityManager;
            blobAssetStore = new BlobAssetStore();
            GameObjectConversionSettings settings = GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, blobAssetStore);
            laserEntityPrafab = GameObjectConversionUtility.ConvertGameObjectHierarchy(lasers[0], settings);
            ballLaserEntityPrefab = GameObjectConversionUtility.ConvertGameObjectHierarchy(lasers[1], settings);
        }

        void SpawnNewLaser(int index, Vector3 position, float forcedScale, int  laserIndex)
        {
            Entity newCubeEntity = manager.Instantiate(laserIndex == 0 ? laserEntityPrafab : ballLaserEntityPrefab);
            Vector3 currentInput = Vector3.forward; // Was trying to alter the forward velocity of the lasers based on a vector3 of current vhz inputs. Didn't work
            Vector3 direction = currentInput;
            Vector3 speed = direction * laserSpeed;
            Translation spawnPoint = new Translation();
            Rotation spawnRot = new Rotation();

            if (index % 2 == 0)
            {
                Translation pos = new Translation()
                {
                    Value = playerPrefab.transform.position + position
                };
                spawnPoint = pos;

                Rotation rot = new Rotation()
                {
                    Value = transform.rotation
                };
                spawnRot = rot;
            }
            else
            {
                Translation pos = new Translation()
                {
                    Value = playerPrefab.transform.position
                };
                spawnPoint = pos;

                Rotation rot = new Rotation()
                {
                    Value = playerPrefab. transform.rotation
                };
                spawnRot = rot;

            }
            PhysicsVelocity velocity = new PhysicsVelocity()
            {
                Linear = speed,
                Angular = Vector3.zero
            };
            Scale scale = new Scale()
            {
                Value = forcedScale
            };
            manager.AddComponentData(newCubeEntity, scale);
            manager.AddComponentData(newCubeEntity, spawnPoint);
            manager.AddComponentData(newCubeEntity, spawnRot);
            manager.AddComponentData(newCubeEntity, velocity);
        }
        // Update is called once per frame
        void Update()
        {
            if (Input.GetKeyDown(singleFireKey))
            {
                Debug.Log("X Pressed");
                StartCoroutine(FireLotsOfLasers());

            } else if (Input.GetKey(constantFireKey))
            {
                StartCoroutine(FireLotsOfLasers());
            }
            else if (Input.GetKey(buckShotKey)) {
                StartCoroutine(FireLotsOfLasersMatrix());
            } 
        }
        IEnumerator FireLotsOfLasers()
        {
            var half = lasersPerShot / 2;
            var min = -half;
            var max = half;

            for (int i = min; i < max; i++)
            {
                SpawnNewLaser(index: i, position: new Vector3(i + 1, 0, 0), 0.5f, 0);
            }

            yield return null;
        
        }
        IEnumerator FireLotsOfLasersMatrix()
        {
            var quarter = lasersPerShot / 4;
            var minX = -quarter;
            var maxX = quarter;
            var minY = -quarter;
            var maxY = quarter;

            for (int x = minX; x < maxX; x++)
            {
                for (int y = minY; y < maxY; y++)
                {
                    SpawnNewLaser(index: x + y, position: new Vector3(x, y, 0), 0.1f, 1);

                }
            }

            yield return null;

        }


        private void OnDestroy()
        {
            blobAssetStore.Dispose();
        }
    }
}