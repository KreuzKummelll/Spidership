using Unity.Entities;
using Unity.Jobs;
using Unity.Physics;
using Unity.Mathematics;
using UnityEngine;


[AlwaysSynchronizeSystem]
public class MovementSystem : JobComponentSystem
{
    protected override JobHandle OnUpdate(JobHandle inputDeps)
    {
        float deltaTime = Time.DeltaTime;

        float3 currentInput = new float3(Input.GetAxis("Horizontal"), -Input.GetAxis("Mouse Y"), Input.GetAxis("Vertical"));

        Entities
            .ForEach((ref PhysicsVelocity vel, in Speed_Player_Ship_Component speedData) => {

            float3 newVel = vel.Linear.xyz;
            if (Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift))
            {
                newVel += currentInput * speedData.speed * deltaTime;
            }
                
            vel.Linear.xyz = newVel;

        })
            .WithName("MovementJob")
            .Run();
        return default;
    }
}
