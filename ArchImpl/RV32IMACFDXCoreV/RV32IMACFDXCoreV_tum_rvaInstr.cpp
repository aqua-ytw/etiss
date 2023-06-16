/**
 * Generated on Fri, 16 Jun 2023 15:27:33 +0200.
 *
 * This file contains the instruction behavior models of the tum_rva
 * instruction set for the RV32IMACFDXCoreV core architecture.
 */

#include "RV32IMACFDXCoreVArch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV32IMACFDXCoreVFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// LRW -------------------------------------------------------------------------
static InstructionDefinition lrw_rd_rs1_rl_aq (
	ISA32_RV32IMACFDXCoreV,
	"lrw",
	(uint32_t) 0x1000202f,
	(uint32_t) 0xf9f0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rl = 0;
static BitArrayRange R_rl_0(25, 25);
rl += R_rl_0.read(ba) << 0;
etiss_uint8 aq = 0;
static BitArrayRange R_aq_0(26, 26);
aq += R_aq_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//LRW\n");

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
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4ULL) + "ULL;\n";
{
cp.code() += "{\n";
cp.code() += "etiss_uint32 offs = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL];\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, offs, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) {\n";
{
cp.code() += "{\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "etiss_int32 res = (etiss_int32)(mem_val_0);\n";
cp.code() += "((RV32IMACFDXCoreV*)cpu)->RES_ADDR = offs;\n";
if (rd) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_int32)(res);\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//LRW\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending | cpu->exception) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rl = 0;
static BitArrayRange R_rl_0(25, 25);
rl += R_rl_0.read(ba) << 0;
etiss_uint8 aq = 0;
static BitArrayRange R_aq_0(26, 26);
aq += R_aq_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "lrw" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rl=" + std::to_string(rl) + " | aq=" + std::to_string(aq) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SCW -------------------------------------------------------------------------
static InstructionDefinition scw_rd_rs1_rs2_rl_aq (
	ISA32_RV32IMACFDXCoreV,
	"scw",
	(uint32_t) 0x1800202f,
	(uint32_t) 0xf800707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rl = 0;
static BitArrayRange R_rl_0(25, 25);
rl += R_rl_0.read(ba) << 0;
etiss_uint8 aq = 0;
static BitArrayRange R_aq_0(26, 26);
aq += R_aq_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SCW\n");

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
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4ULL) + "ULL;\n";
{
cp.code() += "{\n";
cp.code() += "etiss_uint32 offs = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL];\n";
cp.code() += "if (((RV32IMACFDXCoreV*)cpu)->RES_ADDR == offs) {\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_int32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, offs, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) {\n";
{
cp.code() += "{\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "}\n";
if (rd) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = ((RV32IMACFDXCoreV*)cpu)->RES_ADDR != offs;\n";
}
cp.code() += "((RV32IMACFDXCoreV*)cpu)->RES_ADDR = -1LL;\n";
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//SCW\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending | cpu->exception) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rl = 0;
static BitArrayRange R_rl_0(25, 25);
rl += R_rl_0.read(ba) << 0;
etiss_uint8 aq = 0;
static BitArrayRange R_aq_0(26, 26);
aq += R_aq_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "scw" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + " | rl=" + std::to_string(rl) + " | aq=" + std::to_string(aq) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
