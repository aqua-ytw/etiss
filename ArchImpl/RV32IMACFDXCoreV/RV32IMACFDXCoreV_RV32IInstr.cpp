/**
 * Generated on Fri, 16 Jun 2023 15:27:33 +0200.
 *
 * This file contains the instruction behavior models of the RV32I
 * instruction set for the RV32IMACFDXCoreV core architecture.
 */

#include "RV32IMACFDXCoreVArch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV32IMACFDXCoreVFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// LUI -------------------------------------------------------------------------
static InstructionDefinition lui_rd_imm (
	ISA32_RV32IMACFDXCoreV,
	"lui",
	(uint32_t) 0x000037,
	(uint32_t) 0x00007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint32 imm = 0;
static BitArrayRange R_imm_12(31, 12);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//LUI\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = " + std::to_string((etiss_uint32)(((etiss_int32)(imm)))) + "ULL;\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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
etiss_uint32 imm = 0;
static BitArrayRange R_imm_12(31, 12);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "lui" << " # " << ba << (" [rd=" + std::to_string(rd) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// AUIPC -----------------------------------------------------------------------
static InstructionDefinition auipc_rd_imm (
	ISA32_RV32IMACFDXCoreV,
	"auipc",
	(uint32_t) 0x000017,
	(uint32_t) 0x00007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint32 imm = 0;
static BitArrayRange R_imm_12(31, 12);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//AUIPC\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = " + std::to_string(ic.current_address_ + (etiss_int32)(imm)) + "LL;\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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
etiss_uint32 imm = 0;
static BitArrayRange R_imm_12(31, 12);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "auipc" << " # " << ba << (" [rd=" + std::to_string(rd) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// JAL -------------------------------------------------------------------------
static InstructionDefinition jal_rd_imm (
	ISA32_RV32IMACFDXCoreV,
	"jal",
	(uint32_t) 0x00006f,
	(uint32_t) 0x00007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint32 imm = 0;
static BitArrayRange R_imm_12(19, 12);
imm += R_imm_12.read(ba) << 12;
static BitArrayRange R_imm_11(20, 20);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(30, 21);
imm += R_imm_1.read(ba) << 1;
static BitArrayRange R_imm_20(31, 31);
imm += R_imm_20.read(ba) << 20;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//JAL\n");

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
if (imm % 4ULL) {
{
cp.code() += "{\n";
{
cp.code() += "{\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 0ULL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
}
}
else {
{
cp.code() += "{\n";
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = " + std::to_string(ic.current_address_ + 4ULL) + "ULL;\n";
}
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + ((etiss_int32)(((etiss_int32)imm) << (11)) >> (11))) + "LL;\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//JAL\n");

// -----------------------------------------------------------------------------
cp.code() += "return cpu->exception;\n";
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
etiss_uint32 imm = 0;
static BitArrayRange R_imm_12(19, 12);
imm += R_imm_12.read(ba) << 12;
static BitArrayRange R_imm_11(20, 20);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(30, 21);
imm += R_imm_1.read(ba) << 1;
static BitArrayRange R_imm_20(31, 31);
imm += R_imm_20.read(ba) << 20;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "jal" << " # " << ba << (" [rd=" + std::to_string(rd) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// JALR ------------------------------------------------------------------------
static InstructionDefinition jalr_rd_rs1_imm (
	ISA32_RV32IMACFDXCoreV,
	"jalr",
	(uint32_t) 0x000067,
	(uint32_t) 0x00707f,
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//JALR\n");

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
cp.code() += "etiss_uint32 new_pc = (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL) & -2LL;\n";
cp.code() += "if (new_pc % 4ULL) {\n";
{
cp.code() += "{\n";
{
cp.code() += "{\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 0ULL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "else {\n";
{
cp.code() += "{\n";
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = " + std::to_string(ic.current_address_ + 4ULL) + "ULL;\n";
}
cp.code() += "cpu->nextPc = new_pc & -2LL;\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
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

		cp.code() = std::string("//JALR\n");

// -----------------------------------------------------------------------------
cp.code() += "return cpu->exception;\n";
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "jalr" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BEQ -------------------------------------------------------------------------
static InstructionDefinition beq_imm_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"beq",
	(uint32_t) 0x000063,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_11(7, 7);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(11, 8);
imm += R_imm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(30, 25);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_12(31, 31);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BEQ\n");

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
cp.code() += "if (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] == *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]) {\n";
{
cp.code() += "{\n";
if (imm % 4ULL) {
{
cp.code() += "{\n";
{
cp.code() += "{\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 0ULL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
}
}
else {
{
cp.code() += "{\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + ((etiss_int16)(((etiss_int16)imm) << (3)) >> (3))) + "LL;\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//BEQ\n");

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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_11(7, 7);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(11, 8);
imm += R_imm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(30, 25);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_12(31, 31);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "beq" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BNE -------------------------------------------------------------------------
static InstructionDefinition bne_imm_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"bne",
	(uint32_t) 0x001063,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_11(7, 7);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(11, 8);
imm += R_imm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(30, 25);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_12(31, 31);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BNE\n");

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
cp.code() += "if (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] != *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]) {\n";
{
cp.code() += "{\n";
if (imm % 4ULL) {
{
cp.code() += "{\n";
{
cp.code() += "{\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 0ULL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
}
}
else {
{
cp.code() += "{\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + ((etiss_int16)(((etiss_int16)imm) << (3)) >> (3))) + "LL;\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//BNE\n");

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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_11(7, 7);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(11, 8);
imm += R_imm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(30, 25);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_12(31, 31);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "bne" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BLT -------------------------------------------------------------------------
static InstructionDefinition blt_imm_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"blt",
	(uint32_t) 0x004063,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_11(7, 7);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(11, 8);
imm += R_imm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(30, 25);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_12(31, 31);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BLT\n");

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
cp.code() += "if ((etiss_int32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]) < (etiss_int32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL])) {\n";
{
cp.code() += "{\n";
if (imm % 4ULL) {
{
cp.code() += "{\n";
{
cp.code() += "{\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 0ULL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
}
}
else {
{
cp.code() += "{\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + ((etiss_int16)(((etiss_int16)imm) << (3)) >> (3))) + "LL;\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//BLT\n");

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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_11(7, 7);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(11, 8);
imm += R_imm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(30, 25);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_12(31, 31);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "blt" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BGE -------------------------------------------------------------------------
static InstructionDefinition bge_imm_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"bge",
	(uint32_t) 0x005063,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_11(7, 7);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(11, 8);
imm += R_imm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(30, 25);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_12(31, 31);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BGE\n");

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
cp.code() += "if ((etiss_int32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]) >= (etiss_int32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL])) {\n";
{
cp.code() += "{\n";
if (imm % 4ULL) {
{
cp.code() += "{\n";
{
cp.code() += "{\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 0ULL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
}
}
else {
{
cp.code() += "{\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + ((etiss_int16)(((etiss_int16)imm) << (3)) >> (3))) + "LL;\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//BGE\n");

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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_11(7, 7);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(11, 8);
imm += R_imm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(30, 25);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_12(31, 31);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "bge" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BLTU ------------------------------------------------------------------------
static InstructionDefinition bltu_imm_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"bltu",
	(uint32_t) 0x006063,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_11(7, 7);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(11, 8);
imm += R_imm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(30, 25);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_12(31, 31);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BLTU\n");

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
cp.code() += "if (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] < *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]) {\n";
{
cp.code() += "{\n";
if (imm % 4ULL) {
{
cp.code() += "{\n";
{
cp.code() += "{\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 0ULL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
}
}
else {
{
cp.code() += "{\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + ((etiss_int16)(((etiss_int16)imm) << (3)) >> (3))) + "LL;\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//BLTU\n");

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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_11(7, 7);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(11, 8);
imm += R_imm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(30, 25);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_12(31, 31);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "bltu" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BGEU ------------------------------------------------------------------------
static InstructionDefinition bgeu_imm_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"bgeu",
	(uint32_t) 0x007063,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_11(7, 7);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(11, 8);
imm += R_imm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(30, 25);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_12(31, 31);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BGEU\n");

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
cp.code() += "if (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] >= *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]) {\n";
{
cp.code() += "{\n";
if (imm % 4ULL) {
{
cp.code() += "{\n";
{
cp.code() += "{\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 0ULL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
}
}
else {
{
cp.code() += "{\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + ((etiss_int16)(((etiss_int16)imm) << (3)) >> (3))) + "LL;\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//BGEU\n");

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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_11(7, 7);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(11, 8);
imm += R_imm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(30, 25);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_12(31, 31);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "bgeu" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// LB --------------------------------------------------------------------------
static InstructionDefinition lb_rd_rs1_imm (
	ISA32_RV32IMACFDXCoreV,
	"lb",
	(uint32_t) 0x000003,
	(uint32_t) 0x00707f,
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//LB\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL;\n";
cp.code() += "etiss_uint8 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 1);\n";
cp.code() += "if (cpu->exception) {\n";
{
cp.code() += "{\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "etiss_int8 res = (etiss_int8)(mem_val_0);\n";
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)(res);\n";
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

		cp.code() = std::string("//LB\n");

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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "lb" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// LH --------------------------------------------------------------------------
static InstructionDefinition lh_rd_rs1_imm (
	ISA32_RV32IMACFDXCoreV,
	"lh",
	(uint32_t) 0x001003,
	(uint32_t) 0x00707f,
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//LH\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL;\n";
cp.code() += "etiss_uint16 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 2);\n";
cp.code() += "if (cpu->exception) {\n";
{
cp.code() += "{\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "etiss_int16 res = (etiss_int16)(mem_val_0);\n";
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)(res);\n";
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

		cp.code() = std::string("//LH\n");

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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "lh" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// LW --------------------------------------------------------------------------
static InstructionDefinition lw_rd_rs1_imm (
	ISA32_RV32IMACFDXCoreV,
	"lw",
	(uint32_t) 0x002003,
	(uint32_t) 0x00707f,
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//LW\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL;\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) {\n";
{
cp.code() += "{\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "etiss_int32 res = (etiss_int32)(mem_val_0);\n";
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)(res);\n";
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

		cp.code() = std::string("//LW\n");

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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "lw" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// LBU -------------------------------------------------------------------------
static InstructionDefinition lbu_rd_rs1_imm (
	ISA32_RV32IMACFDXCoreV,
	"lbu",
	(uint32_t) 0x004003,
	(uint32_t) 0x00707f,
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//LBU\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL;\n";
cp.code() += "etiss_uint8 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 1);\n";
cp.code() += "if (cpu->exception) {\n";
{
cp.code() += "{\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "etiss_uint8 res = (etiss_uint8)(mem_val_0);\n";
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)(res);\n";
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

		cp.code() = std::string("//LBU\n");

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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "lbu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// LHU -------------------------------------------------------------------------
static InstructionDefinition lhu_rd_rs1_imm (
	ISA32_RV32IMACFDXCoreV,
	"lhu",
	(uint32_t) 0x005003,
	(uint32_t) 0x00707f,
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//LHU\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL;\n";
cp.code() += "etiss_uint16 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 2);\n";
cp.code() += "if (cpu->exception) {\n";
{
cp.code() += "{\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "etiss_uint16 res = (etiss_uint16)(mem_val_0);\n";
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)(res);\n";
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

		cp.code() = std::string("//LHU\n");

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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "lhu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SB --------------------------------------------------------------------------
static InstructionDefinition sb_imm_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"sb",
	(uint32_t) 0x000023,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(11, 7);
imm += R_imm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(31, 25);
imm += R_imm_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SB\n");

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
cp.code() += "etiss_uint32 store_address = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL;\n";
cp.code() += "etiss_uint8 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_int8)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, store_address, (etiss_uint8*)&mem_val_0, 1);\n";
cp.code() += "if (cpu->exception) {\n";
{
cp.code() += "{\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//SB\n");

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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(11, 7);
imm += R_imm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(31, 25);
imm += R_imm_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sb" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SH --------------------------------------------------------------------------
static InstructionDefinition sh_imm_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"sh",
	(uint32_t) 0x001023,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(11, 7);
imm += R_imm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(31, 25);
imm += R_imm_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SH\n");

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
cp.code() += "etiss_uint32 store_address = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL;\n";
cp.code() += "etiss_uint16 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_int16)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, store_address, (etiss_uint8*)&mem_val_0, 2);\n";
cp.code() += "if (cpu->exception) {\n";
{
cp.code() += "{\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//SH\n");

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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(11, 7);
imm += R_imm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(31, 25);
imm += R_imm_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sh" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SW --------------------------------------------------------------------------
static InstructionDefinition sw_imm_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"sw",
	(uint32_t) 0x002023,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(11, 7);
imm += R_imm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(31, 25);
imm += R_imm_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SW\n");

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
cp.code() += "etiss_uint32 store_address = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL;\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_int32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, store_address, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) {\n";
{
cp.code() += "{\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "}\n";
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//SW\n");

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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(11, 7);
imm += R_imm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(31, 25);
imm += R_imm_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sw" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// ADDI ------------------------------------------------------------------------
static InstructionDefinition addi_rd_rs1_imm (
	ISA32_RV32IMACFDXCoreV,
	"addi",
	(uint32_t) 0x000013,
	(uint32_t) 0x00707f,
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//ADDI\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL;\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "addi" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SLTI ------------------------------------------------------------------------
static InstructionDefinition slti_rd_rs1_imm (
	ISA32_RV32IMACFDXCoreV,
	"slti",
	(uint32_t) 0x002013,
	(uint32_t) 0x00707f,
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SLTI\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (((etiss_int32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]) < " + std::to_string(((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL)) ? (1ULL) : (0ULL);\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "slti" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SLTIU -----------------------------------------------------------------------
static InstructionDefinition sltiu_rd_rs1_imm (
	ISA32_RV32IMACFDXCoreV,
	"sltiu",
	(uint32_t) 0x003013,
	(uint32_t) 0x00707f,
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SLTIU\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = ((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] < " + std::to_string((etiss_uint32)((((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))))) + "ULL)) ? (1ULL) : (0ULL);\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sltiu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// XORI ------------------------------------------------------------------------
static InstructionDefinition xori_rd_rs1_imm (
	ISA32_RV32IMACFDXCoreV,
	"xori",
	(uint32_t) 0x004013,
	(uint32_t) 0x00707f,
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//XORI\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] ^ " + std::to_string((etiss_uint32)((((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))))) + "ULL;\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "xori" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// ORI -------------------------------------------------------------------------
static InstructionDefinition ori_rd_rs1_imm (
	ISA32_RV32IMACFDXCoreV,
	"ori",
	(uint32_t) 0x006013,
	(uint32_t) 0x00707f,
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//ORI\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] | " + std::to_string((etiss_uint32)((((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))))) + "ULL;\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "ori" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// ANDI ------------------------------------------------------------------------
static InstructionDefinition andi_rd_rs1_imm (
	ISA32_RV32IMACFDXCoreV,
	"andi",
	(uint32_t) 0x007013,
	(uint32_t) 0x00707f,
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//ANDI\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] & " + std::to_string((etiss_uint32)((((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))))) + "ULL;\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "andi" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SLLI ------------------------------------------------------------------------
static InstructionDefinition slli_rd_rs1_shamt (
	ISA32_RV32IMACFDXCoreV,
	"slli",
	(uint32_t) 0x001013,
	(uint32_t) 0xfe00707f,
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
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(24, 20);
shamt += R_shamt_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SLLI\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] << " + std::to_string(shamt) + "ULL;\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(24, 20);
shamt += R_shamt_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "slli" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | shamt=" + std::to_string(shamt) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SRLI ------------------------------------------------------------------------
static InstructionDefinition srli_rd_rs1_shamt (
	ISA32_RV32IMACFDXCoreV,
	"srli",
	(uint32_t) 0x005013,
	(uint32_t) 0xfe00707f,
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
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(24, 20);
shamt += R_shamt_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SRLI\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] >> " + std::to_string(shamt) + "ULL;\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(24, 20);
shamt += R_shamt_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "srli" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | shamt=" + std::to_string(shamt) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SRAI ------------------------------------------------------------------------
static InstructionDefinition srai_rd_rs1_shamt (
	ISA32_RV32IMACFDXCoreV,
	"srai",
	(uint32_t) 0x40005013,
	(uint32_t) 0xfe00707f,
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
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(24, 20);
shamt += R_shamt_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SRAI\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_int32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]) >> " + std::to_string(shamt) + "ULL;\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(24, 20);
shamt += R_shamt_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "srai" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | shamt=" + std::to_string(shamt) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// ADD -------------------------------------------------------------------------
static InstructionDefinition add_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"add",
	(uint32_t) 0x000033,
	(uint32_t) 0xfe00707f,
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

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//ADD\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] + *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL];\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "add" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SUB -------------------------------------------------------------------------
static InstructionDefinition sub_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"sub",
	(uint32_t) 0x40000033,
	(uint32_t) 0xfe00707f,
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

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SUB\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] - *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL];\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sub" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SLL -------------------------------------------------------------------------
static InstructionDefinition sll_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"sll",
	(uint32_t) 0x001033,
	(uint32_t) 0xfe00707f,
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

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SLL\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] << (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL] & 31ULL);\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sll" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SLT -------------------------------------------------------------------------
static InstructionDefinition slt_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"slt",
	(uint32_t) 0x002033,
	(uint32_t) 0xfe00707f,
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

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SLT\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = ((etiss_int32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]) < (etiss_int32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL])) ? (1ULL) : (0ULL);\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "slt" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SLTU ------------------------------------------------------------------------
static InstructionDefinition sltu_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"sltu",
	(uint32_t) 0x003033,
	(uint32_t) 0xfe00707f,
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

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SLTU\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] < *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]) ? (1ULL) : (0ULL);\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sltu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// XOR -------------------------------------------------------------------------
static InstructionDefinition xor_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"xor",
	(uint32_t) 0x004033,
	(uint32_t) 0xfe00707f,
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

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//XOR\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] ^ *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL];\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "xor" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SRL -------------------------------------------------------------------------
static InstructionDefinition srl_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"srl",
	(uint32_t) 0x005033,
	(uint32_t) 0xfe00707f,
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

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SRL\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] >> (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL] & 31ULL);\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "srl" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SRA -------------------------------------------------------------------------
static InstructionDefinition sra_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"sra",
	(uint32_t) 0x40005033,
	(uint32_t) 0xfe00707f,
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

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SRA\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_int32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]) >> (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL] & 31ULL);\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sra" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// OR --------------------------------------------------------------------------
static InstructionDefinition or_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"or",
	(uint32_t) 0x006033,
	(uint32_t) 0xfe00707f,
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

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//OR\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] | *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL];\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "or" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// AND -------------------------------------------------------------------------
static InstructionDefinition and_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"and",
	(uint32_t) 0x007033,
	(uint32_t) 0xfe00707f,
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

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//AND\n");

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
if ((rd % 32ULL) != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] & *((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL];\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32ULL], 32);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32ULL], 32);
		cp.getAffectedRegisters().add(reg_name[rd % 32ULL], 32);
		cp.getAffectedRegisters().add("instructionPointer", 32);
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "and" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FENCE -----------------------------------------------------------------------
static InstructionDefinition fence_rd_rs1_succ_pred_fm (
	ISA32_RV32IMACFDXCoreV,
	"fence",
	(uint32_t) 0x00000f,
	(uint32_t) 0x00707f,
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
etiss_uint8 succ = 0;
static BitArrayRange R_succ_0(23, 20);
succ += R_succ_0.read(ba) << 0;
etiss_uint8 pred = 0;
static BitArrayRange R_pred_0(27, 24);
pred += R_pred_0.read(ba) << 0;
etiss_uint8 fm = 0;
static BitArrayRange R_fm_0(31, 28);
fm += R_fm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FENCE\n");

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
cp.code() += "((RV32IMACFDXCoreV*)cpu)->FENCE[0ULL] = " + std::to_string(pred << 4ULL | succ) + "ULL;\n";
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
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
etiss_uint8 succ = 0;
static BitArrayRange R_succ_0(23, 20);
succ += R_succ_0.read(ba) << 0;
etiss_uint8 pred = 0;
static BitArrayRange R_pred_0(27, 24);
pred += R_pred_0.read(ba) << 0;
etiss_uint8 fm = 0;
static BitArrayRange R_fm_0(31, 28);
fm += R_fm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fence" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | succ=" + std::to_string(succ) + " | pred=" + std::to_string(pred) + " | fm=" + std::to_string(fm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// ECALL -----------------------------------------------------------------------
static InstructionDefinition ecall_ (
	ISA32_RV32IMACFDXCoreV,
	"ecall",
	(uint32_t) 0x000073,
	(uint32_t) 0xffffffff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//ECALL\n");

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
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 11ULL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//ECALL\n");

// -----------------------------------------------------------------------------
cp.code() += "return cpu->exception;\n";
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
ss << "ecall" << " # " << ba << (" []");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// WFI -------------------------------------------------------------------------
static InstructionDefinition wfi_ (
	ISA32_RV32IMACFDXCoreV,
	"wfi",
	(uint32_t) 0x10500073,
	(uint32_t) 0xffffffff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//WFI\n");

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
cp.code() += "wait(1ULL);\n";
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
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
ss << "wfi" << " # " << ba << (" []");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
