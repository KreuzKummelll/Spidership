
using Unity.Entities;


[GenerateAuthoringComponent]
public struct Cannon_Component : IComponentData
{
    public float pershotCount;
    public Entity parent;
    public Position position;
}
