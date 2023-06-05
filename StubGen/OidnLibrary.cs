using CppSharp;
using CppSharp.AST;
using CppSharp.Generators;

namespace StubGen;

public class OidnLibrary : ILibrary
{
    public void Setup(Driver driver)
    {
        var options = driver.Options;
        options.GeneratorKind = GeneratorKind.CSharp;
        var module = options.AddModule("OpenImageDenoise");
        module.IncludeDirs.Add(@"C:\Users\S4D\Downloads\oidn-2.0.0.x64.windows\include\OpenImageDenoise");
        module.Headers.Add(@"oidn.h");
        module.LibraryDirs.Add(@"C:\Users\S4D\Downloads\oidn-2.0.0.x64.windows\lib");
        module.Libraries.Add("OpenImageDenoise.lib");
        options.OutputDir = "../../../../OpenImageDenoiseNET";
    }

    public void SetupPasses(Driver driver)
    {
        //NOP
    }

    public void Preprocess(Driver driver, ASTContext ctx)
    {
        //NOP
    }

    public void Postprocess(Driver driver, ASTContext ctx)
    {
        //NOP
    }
}