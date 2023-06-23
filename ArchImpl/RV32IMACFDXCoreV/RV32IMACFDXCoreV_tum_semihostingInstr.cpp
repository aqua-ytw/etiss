/**
 * Generated on Fri, 23 Jun 2023 12:53:13 +0200.
 *
 * This file contains the instruction behavior models of the tum_semihosting
 * instruction set for the RV32IMACFDXCoreV core architecture.
 */

#include "RV32IMACFDXCoreVArch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV32IMACFDXCoreVFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// EBREAK ----------------------------------------------------------------------
static InstructionDefinition ebreak_ (
	ISA32_RV32IMACFDXCoreV,
	"ebreak",
	(uint32_t) 0x100073,
	(uint32_t) 0xffffffff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//EBREAK\n");

// -----------------------------------------------------------------------------
{
cp.code() += "{\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4ULL) + "ULL;\n";
cp.code() += "}\n";
}
{
cp.code() += "{\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMACFDXCoreV*)cpu)->lpend_0 && ((RV32IMACFDXCoreV*)cpu)->lpcount_0 != 0ULL) {\n";
{
cp.code() += "{\n";
cp.code() += "cpu->nextPc = ((RV32IMACFDXCoreV*)cpu)->lpstart_0;\n";
cp.code() += "((RV32IMACFDXCoreV*)cpu)->lpcount_0 = ((RV32IMACFDXCoreV*)cpu)->lpcount_0 - 1ULL;\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "}\n";
}
{
cp.code() += "{\n";
cp.code() += "if (etiss_semihost_enabled()) {\n";
{
cp.code() += "{\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, " + std::to_string(ic.current_address_ - 4ULL) + "ULL, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) {\n";
{
cp.code() += "{\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "etiss_uint32 pre = (etiss_uint32)(mem_val_0);\n";
cp.code() += "etiss_uint32 mem_val_1;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, " + std::to_string(ic.current_address_ + 0ULL) + "ULL, (etiss_uint8*)&mem_val_1, 4);\n";
cp.code() += "if (cpu->exception) {\n";
{
cp.code() += "{\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "etiss_uint32 ebreak = (etiss_uint32)(mem_val_1);\n";
cp.code() += "etiss_uint32 mem_val_2;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, " + std::to_string(ic.current_address_ + 4ULL) + "ULL, (etiss_uint8*)&mem_val_2, 4);\n";
cp.code() += "if (cpu->exception) {\n";
{
cp.code() += "{\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "etiss_uint32 post = (etiss_uint32)(mem_val_2);\n";
cp.code() += "if (pre == 32509971ULL && ebreak == 1048691ULL && post == 1081102355ULL) {\n";
{
cp.code() += "{\n";
cp.code() += "etiss_uint32 operation = *((RV32IMACFDXCoreV*)cpu)->X[10ULL];\n";
cp.code() += "etiss_uint32 parameter = *((RV32IMACFDXCoreV*)cpu)->X[11ULL];\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[10ULL] = (etiss_int32)(etiss_semihost(cpu, system, plugin_pointers, 32ULL, operation, parameter));\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "else {\n";
{
cp.code() += "{\n";
{
cp.code() += "{\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 3LL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "else {\n";
{
cp.code() += "{\n";
{
cp.code() += "{\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 3LL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[10ULL], 32);
		cp.getRegisterDependencies().add(reg_name[11ULL], 32);
		cp.getAffectedRegisters().add(reg_name[10ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//EBREAK\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending | cpu->exception | cpu->nextPc != " + std::to_string(ic.current_address_ + 4) + "ULL) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "ebreak" << " # " << ba << (" []");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
