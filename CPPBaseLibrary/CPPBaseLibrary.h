// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the CPPBASELIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// CPPBASELIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef CPPBASELIBRARY_EXPORTS
#define CPPBASELIBRARY_API __declspec(dllexport)
#else
#define CPPBASELIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the CPPBaseLibrary.dll
class CPPBASELIBRARY_API CCPPBaseLibrary {
public:
	CCPPBaseLibrary(void);
	// TODO: add your methods here.
};

extern CPPBASELIBRARY_API int nCPPBaseLibrary;

CPPBASELIBRARY_API int fnCPPBaseLibrary(void);
