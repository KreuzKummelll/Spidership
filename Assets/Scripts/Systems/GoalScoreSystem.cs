using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Physics;
using Unity.Physics.Systems;
using UnityEngine;

namespace Smalli.Spidership
{

    [AlwaysSynchronizeSystem]
    public class PickupSystem : JobComponentSystem
    {
        private BeginInitializationEntityCommandBufferSystem bufferSystem;
        private BuildPhysicsWorld buildPhysicsWorld;
        private StepPhysicsWorld stepPhysicsWorld;
        protected override void OnCreate()
        {
            bufferSystem = World.GetOrCreateSystem<BeginInitializationEntityCommandBufferSystem>();
            buildPhysicsWorld = World.GetOrCreateSystem<BuildPhysicsWorld>();
            stepPhysicsWorld = World.GetOrCreateSystem<StepPhysicsWorld>();
        }

        protected override JobHandle OnUpdate(JobHandle inputDeps)
        {
            TriggerJob triggerJob = new TriggerJob
            {
                goalEntities = GetComponentDataFromEntity<GoalNetTag>(),
                laserEntities = GetComponentDataFromEntity<Speed_Laser_Component>(),
                commandBuffer = bufferSystem.CreateCommandBuffer()
            };
            return triggerJob.Schedule(stepPhysicsWorld.Simulation, ref buildPhysicsWorld.PhysicsWorld, inputDeps);
        }

        private struct TriggerJob : ITriggerEventsJob
        {
            [ReadOnly]
            public ComponentDataFromEntity<GoalNetTag> goalEntities;
            [ReadOnly] public ComponentDataFromEntity<Speed_Laser_Component> laserEntities;
            public EntityCommandBuffer commandBuffer;

            public void Execute(TriggerEvent triggerEvent)
            {
                TestEntityTrigger(triggerEvent.Entities.EntityA, triggerEvent.Entities.EntityB);
                TestEntityTrigger(triggerEvent.Entities.EntityB, triggerEvent.Entities.EntityA);
            }
            private void TestEntityTrigger(Entity entity1, Entity entity2)
            {
                if (goalEntities.HasComponent(entity1))
                {
                    if (laserEntities.HasComponent(entity2))
                    {
                        //Debug.Log("Laser Hit Target");
                       
                        //GameManager.instance.IncreaseScore();
                        
                    }

                }
            }
        }
    }
}