// CPPBaseLibraryWrapper.h

#pragma once

#include "CPPBaseLibrary.h"

using namespace System;

namespace CPPBaseLibraryWrapper {

	// This is the base class...
	public ref class ClassWrapper
	{
	public:
		/// Calls into the DLL to get the number.
		int GetValue()
		{
			return fnCPPBaseLibrary();
		}
	};
}
