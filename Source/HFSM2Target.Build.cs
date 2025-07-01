using Flax.Build;

public class HFSM2Target : GameProjectTarget
{
    /// <inheritdoc />
    public override void Init()
    {
        base.Init();

        Modules.Add("HFSM2");
    }
}

