// CPPBaseLibrary.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "CPPBaseLibrary.h"


// This is an example of an exported variable
CPPBASELIBRARY_API int nCPPBaseLibrary=0;

// This is an example of an exported function.
CPPBASELIBRARY_API int fnCPPBaseLibrary(void)
{
	return 44;
}

// This is the constructor of a class that has been exported.
// see CPPBaseLibrary.h for the class definition
CCPPBaseLibrary::CCPPBaseLibrary()
{
	return;
}
