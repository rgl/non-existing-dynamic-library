using System.Runtime.InteropServices;

[DllImport("non-existing-dynamic-library-dotnet-cs-link-lib")]
extern static void Lib();

Lib();
