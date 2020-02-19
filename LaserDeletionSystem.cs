using Unity.Entities;
using Unity.Collections;
using Unity.Jobs;

[AlwaysSynchronizeSystem]
public class LaserDeletionSystem : JobComponentSystem
{

    protected override JobHandle OnUpdate(JobHandle inputDeps)
    {

        float deltaTime = Time.deltaTime;
        EntityCommandBuffer commandBuffer = new EntityCommandBuffer(Allocator.TempJob);
   


        Entities
            .WithAll<TimerComponent>()
            .ForEach((Entity entity, ref TimerComponent timer) =>
            {
                if (timeAlive >= timer.maxLifeTimer)
				{
                    commandBuffer.AddComponent(eneity, new DeleteTag());
				}

                timer.currentLifeTime += deltaTime;
            }).Run();

        return default;
    }
}
