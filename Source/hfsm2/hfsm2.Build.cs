using System;
using Flax.Build;
using Flax.Build.NativeCpp;

public class HFSM2 : ThirdPartyModule
{
    public HFSM2()
    {
        BuildCSharp = true;
        BuildNativeCode = true;
        LicenseType = LicenseTypes.MIT;
        LicenseFilePath = "LICENSE.txt";
    }

    /// <inheritdoc />
    public override void Setup(BuildOptions options)
    {
        base.Setup(options);

        options.PublicIncludePaths.Add(FolderPath);
        options.PublicDependencies.Add("Engine");
    }
}
