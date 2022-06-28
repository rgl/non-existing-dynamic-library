all: bin/Release/net6.0/non-existing-dynamic-library-dotnet-cs-link

clean:
	rm -rf bin obj

bin/Release/net6.0/non-existing-dynamic-library-dotnet-cs-link: Program.cs
	dotnet build --configuration Release -warnAsError
	ldd $@
