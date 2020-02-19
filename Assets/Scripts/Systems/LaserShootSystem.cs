using Unity.Burst;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Mathematics;
using Unity.Transforms;
using Unity.Physics;
using static Unity.Mathematics.math;

[AlwaysSynchronizeSystem]
public class LaserShootSystem : JobComponentSystem
{
    public EntityCommandBuffer.Concurrent ECB;

    [ReadOnly] public ComponentDataFromEntity<Position> PositionData;


    protected override JobHandle OnUpdate(JobHandle inputDeps)
    {
       
        float deltaTime = Time.DeltaTime;

        Entities
   
            .ForEach((ref PhysicsVelocity vel, ref Translation trans, in Speed_Laser_Component speedData) =>
                {
                    float3 newVel = vel.Linear.xyz;
                    float3 curTrans = float3(0, 0, 1);
                
                    newVel += curTrans * speedData.speed * deltaTime;
                    vel.Linear.xyz = newVel;

                }).Run();
        return default;
    }

    
}