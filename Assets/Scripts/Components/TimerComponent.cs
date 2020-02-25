using Unity.Entities;

namespace Smalli.Spidership
{
    [GenerateAuthoringComponent]
    public class TimerComponent : IComponentData
    {
        public float currentLifeTime;
        public float maxLifeTime;
    }
}