﻿using Unity.Entities;
using Unity.Jobs;
using Unity.Collections;

namespace Smalli.Spidership
{
    //[AlwaysSynchronizeSystem]
    [UpdateAfter(typeof(LaserDeletionSystem))]
    public class DeleteEntitySystem : JobComponentSystem
    {
        protected override JobHandle OnUpdate(JobHandle inputDeps)
        {
            EntityCommandBuffer commandBuffer = new EntityCommandBuffer(Allocator.TempJob);

            Entities
                .WithAll<DeleteTag>()
                .WithoutBurst()
                .ForEach((Entity entity) =>
                 {
                 //GameManager.instance.IncreaseScore();
                 commandBuffer.DestroyEntity(entity);
                 }).Run();

            commandBuffer.Playback(EntityManager);
            commandBuffer.Dispose();

            return default;
        }
    }
}