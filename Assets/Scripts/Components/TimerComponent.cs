using Unity.Entities;


[GenerateAuthoringComponent]
public class TimerComponent : IComponentData
{
    public float currentLifeTime;
    public float maxLifeTime;
}
