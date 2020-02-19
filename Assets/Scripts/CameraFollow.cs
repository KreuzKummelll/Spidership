using Unity.Entities;
using Unity.Transforms;
using Unity.Mathematics;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    public static CameraFollow instance;
    
    public GameObject _playerShipPrefab;
    public Entity playerShipEntity;
    public float3 offset;

    public GameManager gameManager;

    private EntityManager manager;

    


    private void Awake()
    {
        if (instance != null && instance != this)
        {
            Destroy(gameObject);
            return;
        }

        instance = this;
        manager = World.DefaultGameObjectInjectionWorld.EntityManager;

   
    }

    private void Start()
    {
        gameManager = FindObjectOfType<GameManager>();

    }

    private void LateUpdate()
    {
        if (gameManager.spawnPlayerAsEntity)
        {
            if (playerShipEntity == null)
            {
                return;
            }
            Translation playerPosition = manager.GetComponentData<Translation>(playerShipEntity);
            transform.position = playerPosition.Value + offset;
        }
        else
        {
            transform.position = _playerShipPrefab.transform.position + (Vector3)offset;
        }
        
    }
}
