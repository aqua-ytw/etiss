/**
 * Generated on Fri, 23 Jun 2023 12:53:13 +0200.
 *
 * This file contains the library interface for the RV32IMACFDXCoreV core architecture.
 */

// define a name for this library. this will be used to avoid name clashes with other libraries. in this example the library is named "X".
// IMPORTANT this name MUST match the library name: e.g. X -> libX.so

#define ETISS_LIBNAME RV32IMACFDXCoreV
#include "etiss/helper/CPUArchLibrary.h" // defines the following functions
#include "RV32IMACFDXCoreVArch.h"
extern "C" {

	ETISS_LIBRARYIF_VERSION_FUNC_IMPL

	ETISS_PLUGIN_EXPORT unsigned RV32IMACFDXCoreV_countCPUArch()
	{
//TODO
		return 1; // number of cpu architectures provided
	}
	ETISS_PLUGIN_EXPORT const char * RV32IMACFDXCoreV_nameCPUArch(unsigned index)
	{
//TODO
		switch (index)
		{
		case 0:
			return "RV32IMACFDXCoreV";
		default:
			return "";
		}
	}
	ETISS_PLUGIN_EXPORT etiss::CPUArch* RV32IMACFDXCoreV_createCPUArch(unsigned index,std::map<std::string,std::string> options)
	{
//TODO
		switch (index)
		{
		case 0:
			return new RV32IMACFDXCoreVArch();
		default:
			return 0;
		}
	}
	ETISS_PLUGIN_EXPORT void RV32IMACFDXCoreV_deleteCPUArch(etiss::CPUArch* arch)
	{
		delete arch;
	}
}
