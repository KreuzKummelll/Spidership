using Unity.Entities;


[GenerateAuthoringComponent]
public struct TimerComponent : IComponentData
{
    public float currentLifeTime;
    public float maxLifeTime;
}
