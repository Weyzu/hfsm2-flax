using Flax.Build;

public class HFSM2EditorTarget : GameProjectEditorTarget
{
    /// <inheritdoc />
    public override void Init()
    {
        base.Init();

        Modules.Add("HFSM2");
    }
}

