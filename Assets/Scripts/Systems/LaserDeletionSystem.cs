using Unity.Entities;
using Unity.Collections;
using Unity.Jobs;


namespace Smalli.Spidership
{
    [AlwaysSynchronizeSystem]
    public class LaserDeletionSystem : JobComponentSystem
    {

        protected override JobHandle OnUpdate(JobHandle inputDeps)
        {

            float deltaTime = Time.DeltaTime;
            EntityCommandBuffer commandBuffer = new EntityCommandBuffer(Allocator.TempJob);



            Entities
                .WithoutBurst()
                .ForEach((Entity entity, TimerComponent timer) =>
                {
                    if (timer.currentLifeTime >= timer.maxLifeTime)
                    {
                        commandBuffer.AddComponent(entity, new DeleteTag());
                    }

                    timer.currentLifeTime += deltaTime;
                }).Run();

            commandBuffer.Playback(EntityManager);
            commandBuffer.Dispose();

            return default;
        }
    }
}