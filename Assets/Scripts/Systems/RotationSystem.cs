using Unity.Entities;
using Unity.Jobs;
using Unity.Mathematics;
using Unity.Physics;
using Unity.Transforms;
using UnityEngine;

[AlwaysSynchronizeSystem]
public class RotationSystem : JobComponentSystem
{
    protected override JobHandle OnUpdate(JobHandle inputDeps)
    {
        float deltaTime = Time.DeltaTime;
        float3 currentInput = new float3(Input.GetAxis("Horizontal"), Input.GetAxis("Mouse X"), Input.GetAxis("Vertical"));


        Entities
            .ForEach((ref Rotation rot, in RotationSpeed_Player_Ship_Component rotationSpeed) => {

                if (Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift))
                {
                    rot.Value = math.mul(rot.Value, quaternion.RotateX(math.radians(currentInput.z * rotationSpeed.speed * deltaTime)));
                    rot.Value = math.mul(rot.Value, quaternion.RotateY(math.radians(currentInput.y * rotationSpeed.speed * deltaTime)));
                    rot.Value = math.mul(rot.Value, quaternion.RotateZ(math.radians(-currentInput.x * rotationSpeed.speed * deltaTime)));
                }

        }).Run();

        return default;
    }
}



