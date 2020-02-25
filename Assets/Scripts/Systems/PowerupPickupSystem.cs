//using Unity.Collections;
//using Unity.Entities;
//using Unity.Jobs;
//using Unity.Physics;
//using Unity.Physics.Systems;
//using UnityEngine;

//[AlwaysSynchronizeSystem]
//public class PowerupPickupSystem : JobComponentSystem
//{
//    private BeginInitializationEntityCommandBufferSystem bufferSystem;
//    private BuildPhysicsWorld buildPhysicsWorld;
//    private StepPhysicsWorld stepPhysicsWorld;


//    private struct TriggerJob: ITriggerEventsJob
//    {
//        public ComponentDataFromEntity<PickupComponent> pickupEntities;
//        [ReadOnly] public ComponentDataFromEntity<PlayerComponent> playerEntities;
//        public EntityCommandBuffer ecb;

//        public void Execute(TriggerEvent triggerEvent)
//        {
            
//        }
//        public void TestEntityTrigger(Entity entity1, Entity entity2)
//        {
//            if (pickupEntities.HasComponent(entity1))
//            {
//                if (playerEntities.HasComponent(entity2))
//                {
//                    ecb.AddComponent(entity2, new PickupComponent()); 
//                }
//            }
//        }
//    }

//    protected override void OnCreate()
//    {
//        bufferSystem = World.GetOrCreateSystem<BeginInitializationEntityCommandBufferSystem>();
//        buildPhysicsWorld = World.GetOrCreateSystem<BuildPhysicsWorld>();
//        stepPhysicsWorld = World.GetOrCreateSystem<StepPhysicsWorld>();
//    }

//    protected override JobHandle OnUpdate(JobHandle inputDeps)
//    {
//        TriggerJob triggerJob = new TriggerJob
//        {
//            pickupEntities = GetComponentDataFromEntity<PickupComponent>(),
//            playerEntities = GetComponentDataFromEntity<PlayerComponent>(),
//            ecb = bufferSystem.CreateCommandBuffer()
//        };
//        return triggerJob.Schedule(stepPhysicsWorld.Simulation, ref buildPhysicsWorld.PhysicsWorld, inputDeps);
//    }
//}
