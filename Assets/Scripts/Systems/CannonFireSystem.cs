using Unity.Physics;
using Unity.Entities;
using Unity.Jobs;


//public class CannonFireSystem : JobComponentSystem
//{

//    protected override JobHandle OnUpdate(JobHandle inputDeps)
//    {
//        float deltaTime = Time.DeltaTime;

//        Entities.ForEach((ref PhysicsVelocity vel, in Cannon_Component cannonData) =>
//        {
//            //float3 newVel = vel.Linear.xyz;
//            //float3 curTrans = float3(0, 0, 1);

//            ////newVel += curTrans * cannonData. * deltaTime;
//            //vel.Linear.xyz = newVel;

//        }).Run();
//        return default;
//    }
//}