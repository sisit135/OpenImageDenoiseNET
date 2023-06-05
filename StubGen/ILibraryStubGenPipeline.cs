using CppSharp;
using CppSharp.AST;

namespace StubGen;

public interface ILibraryStubGenPipeline
{
    /// Setup the driver options here.
    void Setup(Driver driver);

    /// Setup your passes here.
    void SetupPasses(Driver driver);

    /// Do transformations that should happen before passes are processed.
    void Preprocess(Driver driver, ASTContext ctx);

    /// Do transformations that should happen after passes are processed.
    void Postprocess(Driver driver, ASTContext ctx);
}