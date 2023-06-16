/**
 * Generated on Fri, 16 Jun 2023 15:27:33 +0200.
 *
 * This file contains the instruction behavior models of the XCoreVSimd
 * instruction set for the RV32IMACFDXCoreV core architecture.
 */

#include "RV32IMACFDXCoreVArch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV32IMACFDXCoreVFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// CV_ADD_H --------------------------------------------------------------------
static InstructionDefinition cv_add_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_add_h",
	(uint32_t) 0x00007b,
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

		cp.code() = std::string("//CV_ADD_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_add_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_ADD_SC_H -----------------------------------------------------------------
static InstructionDefinition cv_add_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_add_sc_h",
	(uint32_t) 0x00407b,
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

		cp.code() = std::string("//CV_ADD_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_add_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_ADD_SCI_H ----------------------------------------------------------------
static InstructionDefinition cv_add_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_add_sci_h",
	(uint32_t) 0x00607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_ADD_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) + " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) + " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_add_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_ADD_B --------------------------------------------------------------------
static InstructionDefinition cv_add_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_add_b",
	(uint32_t) 0x00107b,
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

		cp.code() = std::string("//CV_ADD_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255))) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255))) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255))) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_add_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_ADD_SC_B -----------------------------------------------------------------
static InstructionDefinition cv_add_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_add_sc_b",
	(uint32_t) 0x00507b,
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

		cp.code() = std::string("//CV_ADD_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_add_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_ADD_SCI_B ----------------------------------------------------------------
static InstructionDefinition cv_add_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_add_sci_b",
	(uint32_t) 0x00707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_ADD_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) + " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) + " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) + " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) + " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_add_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_ADD_DIV2 -----------------------------------------------------------------
static InstructionDefinition cv_add_div2_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_add_div2",
	(uint32_t) 0x5c00207b,
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

		cp.code() = std::string("//CV_ADD_DIV2\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> 1ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> 1ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_add_div2" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_ADD_DIV4 -----------------------------------------------------------------
static InstructionDefinition cv_add_div4_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_add_div4",
	(uint32_t) 0x5c00407b,
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

		cp.code() = std::string("//CV_ADD_DIV4\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> 2ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> 2ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_add_div4" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_ADD_DIV8 -----------------------------------------------------------------
static InstructionDefinition cv_add_div8_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_add_div8",
	(uint32_t) 0x5c00607b,
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

		cp.code() = std::string("//CV_ADD_DIV8\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> 3ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> 3ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_add_div8" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SUB_H --------------------------------------------------------------------
static InstructionDefinition cv_sub_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sub_h",
	(uint32_t) 0x800007b,
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

		cp.code() = std::string("//CV_SUB_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sub_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SUB_SC_H -----------------------------------------------------------------
static InstructionDefinition cv_sub_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sub_sc_h",
	(uint32_t) 0x800407b,
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

		cp.code() = std::string("//CV_SUB_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sub_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SUB_SCI_H ----------------------------------------------------------------
static InstructionDefinition cv_sub_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sub_sci_h",
	(uint32_t) 0x800607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SUB_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) - " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) - " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sub_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SUB_B --------------------------------------------------------------------
static InstructionDefinition cv_sub_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sub_b",
	(uint32_t) 0x800107b,
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

		cp.code() = std::string("//CV_SUB_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255))) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255))) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255))) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sub_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SUB_SC_B -----------------------------------------------------------------
static InstructionDefinition cv_sub_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sub_sc_b",
	(uint32_t) 0x800507b,
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

		cp.code() = std::string("//CV_SUB_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sub_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SUB_SCI_B ----------------------------------------------------------------
static InstructionDefinition cv_sub_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sub_sci_b",
	(uint32_t) 0x800707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SUB_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) - " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) - " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) - " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) - " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sub_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SUB_DIV2 -----------------------------------------------------------------
static InstructionDefinition cv_sub_div2_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sub_div2",
	(uint32_t) 0x6400207b,
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

		cp.code() = std::string("//CV_SUB_DIV2\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> 1ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> 1ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sub_div2" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SUB_DIV4 -----------------------------------------------------------------
static InstructionDefinition cv_sub_div4_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sub_div4",
	(uint32_t) 0x6400407b,
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

		cp.code() = std::string("//CV_SUB_DIV4\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> 2ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> 2ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sub_div4" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SUB_DIV8 -----------------------------------------------------------------
static InstructionDefinition cv_sub_div8_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sub_div8",
	(uint32_t) 0x6400607b,
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

		cp.code() = std::string("//CV_SUB_DIV8\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> 3ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> 3ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sub_div8" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AVG_H --------------------------------------------------------------------
static InstructionDefinition cv_avg_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_avg_h",
	(uint32_t) 0x1000007b,
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

		cp.code() = std::string("//CV_AVG_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> 1ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> 1ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_avg_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AVG_SC_H -----------------------------------------------------------------
static InstructionDefinition cv_avg_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_avg_sc_h",
	(uint32_t) 0x1000407b,
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

		cp.code() = std::string("//CV_AVG_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> 1ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> 1ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_avg_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AVG_SCI_H ----------------------------------------------------------------
static InstructionDefinition cv_avg_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_avg_sci_h",
	(uint32_t) 0x1000607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_AVG_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) + " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)) >> 1ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) + " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)) >> 1ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_avg_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AVG_B --------------------------------------------------------------------
static InstructionDefinition cv_avg_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_avg_b",
	(uint32_t) 0x1000107b,
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

		cp.code() = std::string("//CV_AVG_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> 1ULL)) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255))) >> 1ULL)) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255))) >> 1ULL)) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255))) >> 1ULL)) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_avg_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AVG_SC_B -----------------------------------------------------------------
static InstructionDefinition cv_avg_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_avg_sc_b",
	(uint32_t) 0x1000507b,
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

		cp.code() = std::string("//CV_AVG_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> 1ULL)) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> 1ULL)) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> 1ULL)) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> 1ULL)) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_avg_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AVG_SCI_B ----------------------------------------------------------------
static InstructionDefinition cv_avg_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_avg_sci_b",
	(uint32_t) 0x1000707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_AVG_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) + " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> 1ULL)) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) + " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> 1ULL)) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) + " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> 1ULL)) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) + " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> 1ULL)) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_avg_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AVGU_H -------------------------------------------------------------------
static InstructionDefinition cv_avgu_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_avgu_h",
	(uint32_t) 0x1800007b,
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

		cp.code() = std::string("//CV_AVGU_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((etiss_uint16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> 1ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((etiss_uint16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> 1ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_avgu_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AVGU_SC_H ----------------------------------------------------------------
static InstructionDefinition cv_avgu_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_avgu_sc_h",
	(uint32_t) 0x1800407b,
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

		cp.code() = std::string("//CV_AVGU_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((etiss_uint16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> 1ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((etiss_uint16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> 1ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_avgu_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AVGU_SCI_H ---------------------------------------------------------------
static InstructionDefinition cv_avgu_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_avgu_sci_h",
	(uint32_t) 0x1800607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_AVGU_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((etiss_uint16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) + " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)) >> 1ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((etiss_uint16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) + " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)) >> 1ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_avgu_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AVGU_B -------------------------------------------------------------------
static InstructionDefinition cv_avgu_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_avgu_b",
	(uint32_t) 0x1800107b,
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

		cp.code() = std::string("//CV_AVGU_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((etiss_uint8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> 1ULL)) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((etiss_uint8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255))) >> 1ULL)) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((etiss_uint8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255))) >> 1ULL)) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((etiss_uint8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255))) >> 1ULL)) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_avgu_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AVGU_SC_B ----------------------------------------------------------------
static InstructionDefinition cv_avgu_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_avgu_sc_b",
	(uint32_t) 0x1800507b,
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

		cp.code() = std::string("//CV_AVGU_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((etiss_uint8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> 1ULL)) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((etiss_uint8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> 1ULL)) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((etiss_uint8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> 1ULL)) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((etiss_uint8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) + (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> 1ULL)) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_avgu_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AVGU_SCI_B ---------------------------------------------------------------
static InstructionDefinition cv_avgu_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_avgu_sci_b",
	(uint32_t) 0x1800707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_AVGU_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((etiss_uint8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) + " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> 1ULL)) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((etiss_uint8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) + " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> 1ULL)) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((etiss_uint8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) + " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> 1ULL)) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((etiss_uint8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) + " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> 1ULL)) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_avgu_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MIN_H --------------------------------------------------------------------
static InstructionDefinition cv_min_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_min_h",
	(uint32_t) 0x2000007b,
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

		cp.code() = std::string("//CV_MIN_H\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_min_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MIN_SC_H -----------------------------------------------------------------
static InstructionDefinition cv_min_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_min_sc_h",
	(uint32_t) 0x2000407b,
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

		cp.code() = std::string("//CV_MIN_SC_H\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_min_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MIN_SCI_H ----------------------------------------------------------------
static InstructionDefinition cv_min_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_min_sci_h",
	(uint32_t) 0x2000607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_MIN_SCI_H\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_min_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MIN_B --------------------------------------------------------------------
static InstructionDefinition cv_min_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_min_b",
	(uint32_t) 0x2000107b,
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

		cp.code() = std::string("//CV_MIN_B\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_min_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MIN_SC_B -----------------------------------------------------------------
static InstructionDefinition cv_min_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_min_sc_b",
	(uint32_t) 0x2000507b,
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

		cp.code() = std::string("//CV_MIN_SC_B\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_min_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MIN_SCI_B ----------------------------------------------------------------
static InstructionDefinition cv_min_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_min_sci_b",
	(uint32_t) 0x2000707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_MIN_SCI_B\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_min_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MINU_H -------------------------------------------------------------------
static InstructionDefinition cv_minu_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_minu_h",
	(uint32_t) 0x2800007b,
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

		cp.code() = std::string("//CV_MINU_H\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_minu_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MINU_SC_H ----------------------------------------------------------------
static InstructionDefinition cv_minu_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_minu_sc_h",
	(uint32_t) 0x2800407b,
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

		cp.code() = std::string("//CV_MINU_SC_H\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_minu_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MINU_SCI_H ---------------------------------------------------------------
static InstructionDefinition cv_minu_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_minu_sci_h",
	(uint32_t) 0x2800607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_MINU_SCI_H\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_minu_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MINU_B -------------------------------------------------------------------
static InstructionDefinition cv_minu_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_minu_b",
	(uint32_t) 0x2800107b,
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

		cp.code() = std::string("//CV_MINU_B\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_minu_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MINU_SC_B ----------------------------------------------------------------
static InstructionDefinition cv_minu_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_minu_sc_b",
	(uint32_t) 0x2800507b,
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

		cp.code() = std::string("//CV_MINU_SC_B\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_minu_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MINU_SCI_B ---------------------------------------------------------------
static InstructionDefinition cv_minu_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_minu_sci_b",
	(uint32_t) 0x2800707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_MINU_SCI_B\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_minu_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MAX_H --------------------------------------------------------------------
static InstructionDefinition cv_max_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_max_h",
	(uint32_t) 0x3000007b,
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

		cp.code() = std::string("//CV_MAX_H\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_max_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MAX_SC_H -----------------------------------------------------------------
static InstructionDefinition cv_max_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_max_sc_h",
	(uint32_t) 0x3000407b,
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

		cp.code() = std::string("//CV_MAX_SC_H\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_max_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MAX_SCI_H ----------------------------------------------------------------
static InstructionDefinition cv_max_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_max_sci_h",
	(uint32_t) 0x3000607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_MAX_SCI_H\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_max_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MAX_B --------------------------------------------------------------------
static InstructionDefinition cv_max_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_max_b",
	(uint32_t) 0x3000107b,
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

		cp.code() = std::string("//CV_MAX_B\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_max_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MAX_SC_B -----------------------------------------------------------------
static InstructionDefinition cv_max_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_max_sc_b",
	(uint32_t) 0x3000507b,
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

		cp.code() = std::string("//CV_MAX_SC_B\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_max_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MAX_SCI_B ----------------------------------------------------------------
static InstructionDefinition cv_max_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_max_sci_b",
	(uint32_t) 0x3000707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_MAX_SCI_B\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_max_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MAXU_H -------------------------------------------------------------------
static InstructionDefinition cv_maxu_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_maxu_h",
	(uint32_t) 0x3800007b,
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

		cp.code() = std::string("//CV_MAXU_H\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_maxu_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MAXU_SC_H ----------------------------------------------------------------
static InstructionDefinition cv_maxu_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_maxu_sc_h",
	(uint32_t) 0x3800407b,
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

		cp.code() = std::string("//CV_MAXU_SC_H\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_maxu_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MAXU_SCI_H ---------------------------------------------------------------
static InstructionDefinition cv_maxu_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_maxu_sci_h",
	(uint32_t) 0x3800607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_MAXU_SCI_H\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_maxu_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MAXU_B -------------------------------------------------------------------
static InstructionDefinition cv_maxu_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_maxu_b",
	(uint32_t) 0x3800107b,
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

		cp.code() = std::string("//CV_MAXU_B\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_maxu_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MAXU_SC_B ----------------------------------------------------------------
static InstructionDefinition cv_maxu_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_maxu_sc_b",
	(uint32_t) 0x3800507b,
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

		cp.code() = std::string("//CV_MAXU_SC_B\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_maxu_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MAXU_SCI_B ---------------------------------------------------------------
static InstructionDefinition cv_maxu_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_maxu_sci_b",
	(uint32_t) 0x3800707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_MAXU_SCI_B\n");

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
cp.code() += "}\n";
}
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_maxu_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SRL_H --------------------------------------------------------------------
static InstructionDefinition cv_srl_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_srl_h",
	(uint32_t) 0x4000007b,
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

		cp.code() = std::string("//CV_SRL_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) >> (0ULL)) & 15)) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)) >> (0ULL)) & 15)) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_srl_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SRL_SC_H -----------------------------------------------------------------
static InstructionDefinition cv_srl_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_srl_sc_h",
	(uint32_t) 0x4000407b,
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

		cp.code() = std::string("//CV_SRL_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) >> (0ULL)) & 15)) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) >> (0ULL)) & 15)) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_srl_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SRL_SCI_H ----------------------------------------------------------------
static InstructionDefinition cv_srl_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_srl_sci_h",
	(uint32_t) 0x4000607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SRL_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) >> " + std::to_string(((((((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) >> (0ULL)) & 15))) + "ULL << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) >> " + std::to_string(((((((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) >> (0ULL)) & 15))) + "ULL << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_srl_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SRL_B --------------------------------------------------------------------
static InstructionDefinition cv_srl_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_srl_b",
	(uint32_t) 0x4000107b,
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

		cp.code() = std::string("//CV_SRL_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 7)) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)) >> (0ULL)) & 7)) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)) >> (0ULL)) & 7)) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)) >> (0ULL)) & 7)) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_srl_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SRL_SC_B -----------------------------------------------------------------
static InstructionDefinition cv_srl_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_srl_sc_b",
	(uint32_t) 0x4000507b,
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

		cp.code() = std::string("//CV_SRL_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 7)) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 7)) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 7)) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 7)) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_srl_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SRL_SCI_B ----------------------------------------------------------------
static InstructionDefinition cv_srl_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_srl_sci_b",
	(uint32_t) 0x4000707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SRL_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) >> " + std::to_string(((((((etiss_uint8)(Imm6))) >> (0ULL)) & 7))) + "ULL << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) >> " + std::to_string(((((((etiss_uint8)(Imm6))) >> (0ULL)) & 7))) + "ULL << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) >> " + std::to_string(((((((etiss_uint8)(Imm6))) >> (0ULL)) & 7))) + "ULL << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) >> " + std::to_string(((((((etiss_uint8)(Imm6))) >> (0ULL)) & 7))) + "ULL << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_srl_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SRA_H --------------------------------------------------------------------
static InstructionDefinition cv_sra_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sra_h",
	(uint32_t) 0x4800007b,
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

		cp.code() = std::string("//CV_SRA_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) >> (0ULL)) & 15)) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)) >> (0ULL)) & 15)) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sra_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SRA_SC_H -----------------------------------------------------------------
static InstructionDefinition cv_sra_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sra_sc_h",
	(uint32_t) 0x4800407b,
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

		cp.code() = std::string("//CV_SRA_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) >> (0ULL)) & 15)) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) >> (0ULL)) & 15)) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sra_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SRA_SCI_H ----------------------------------------------------------------
static InstructionDefinition cv_sra_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sra_sci_h",
	(uint32_t) 0x4800607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SRA_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) >> " + std::to_string(((((((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) >> (0ULL)) & 15))) + "ULL << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) >> " + std::to_string(((((((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) >> (0ULL)) & 15))) + "ULL << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sra_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SRA_B --------------------------------------------------------------------
static InstructionDefinition cv_sra_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sra_b",
	(uint32_t) 0x4800107b,
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

		cp.code() = std::string("//CV_SRA_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 7)) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)) >> (0ULL)) & 7)) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)) >> (0ULL)) & 7)) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)) >> (0ULL)) & 7)) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sra_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SRA_SC_B -----------------------------------------------------------------
static InstructionDefinition cv_sra_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sra_sc_b",
	(uint32_t) 0x4800507b,
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

		cp.code() = std::string("//CV_SRA_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 7)) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 7)) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 7)) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 7)) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sra_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SRA_SCI_B ----------------------------------------------------------------
static InstructionDefinition cv_sra_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sra_sci_b",
	(uint32_t) 0x4800707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SRA_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) >> " + std::to_string(((((((etiss_uint8)(Imm6))) >> (0ULL)) & 7))) + "ULL << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) >> " + std::to_string(((((((etiss_uint8)(Imm6))) >> (0ULL)) & 7))) + "ULL << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) >> " + std::to_string(((((((etiss_uint8)(Imm6))) >> (0ULL)) & 7))) + "ULL << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) >> " + std::to_string(((((((etiss_uint8)(Imm6))) >> (0ULL)) & 7))) + "ULL << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sra_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SLL_H --------------------------------------------------------------------
static InstructionDefinition cv_sll_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sll_h",
	(uint32_t) 0x5000007b,
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

		cp.code() = std::string("//CV_SLL_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) >> (0ULL)) & 15)) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)) >> (0ULL)) & 15)) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sll_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SLL_SC_H -----------------------------------------------------------------
static InstructionDefinition cv_sll_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sll_sc_h",
	(uint32_t) 0x5000407b,
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

		cp.code() = std::string("//CV_SLL_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) >> (0ULL)) & 15)) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) >> (0ULL)) & 15)) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sll_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SLL_SCI_H ----------------------------------------------------------------
static InstructionDefinition cv_sll_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sll_sci_h",
	(uint32_t) 0x5000607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SLL_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) >> " + std::to_string(((((((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) >> (0ULL)) & 15))) + "ULL << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) >> " + std::to_string(((((((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) >> (0ULL)) & 15))) + "ULL << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sll_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SLL_B --------------------------------------------------------------------
static InstructionDefinition cv_sll_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sll_b",
	(uint32_t) 0x5000107b,
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

		cp.code() = std::string("//CV_SLL_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 7)) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)) >> (0ULL)) & 7)) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)) >> (0ULL)) & 7)) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)) >> (0ULL)) & 7)) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sll_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SLL_SC_B -----------------------------------------------------------------
static InstructionDefinition cv_sll_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sll_sc_b",
	(uint32_t) 0x5000507b,
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

		cp.code() = std::string("//CV_SLL_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 7)) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 7)) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 7)) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) >> (((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 7)) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sll_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SLL_SCI_B ----------------------------------------------------------------
static InstructionDefinition cv_sll_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sll_sci_b",
	(uint32_t) 0x5000707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SLL_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) >> " + std::to_string(((((((etiss_uint8)(Imm6))) >> (0ULL)) & 7))) + "ULL << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) >> " + std::to_string(((((((etiss_uint8)(Imm6))) >> (0ULL)) & 7))) + "ULL << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) >> " + std::to_string(((((((etiss_uint8)(Imm6))) >> (0ULL)) & 7))) + "ULL << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) >> " + std::to_string(((((((etiss_uint8)(Imm6))) >> (0ULL)) & 7))) + "ULL << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sll_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_OR_H ---------------------------------------------------------------------
static InstructionDefinition cv_or_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_or_h",
	(uint32_t) 0x5800007b,
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

		cp.code() = std::string("//CV_OR_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) | (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) | (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_or_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_OR_SC_H ------------------------------------------------------------------
static InstructionDefinition cv_or_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_or_sc_h",
	(uint32_t) 0x5800407b,
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

		cp.code() = std::string("//CV_OR_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) | (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) | (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_or_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_OR_SCI_H -----------------------------------------------------------------
static InstructionDefinition cv_or_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_or_sci_h",
	(uint32_t) 0x5800607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_OR_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) | " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) | " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_or_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_OR_B ---------------------------------------------------------------------
static InstructionDefinition cv_or_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_or_b",
	(uint32_t) 0x5800107b,
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

		cp.code() = std::string("//CV_OR_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) | (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) | (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255))) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) | (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255))) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) | (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255))) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_or_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_OR_SC_B ------------------------------------------------------------------
static InstructionDefinition cv_or_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_or_sc_b",
	(uint32_t) 0x5800507b,
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

		cp.code() = std::string("//CV_OR_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) | (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) | (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) | (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) | (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_or_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_OR_SCI_B -----------------------------------------------------------------
static InstructionDefinition cv_or_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_or_sci_b",
	(uint32_t) 0x5800707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_OR_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) | " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) | " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) | " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) | " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_or_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_XOR_H --------------------------------------------------------------------
static InstructionDefinition cv_xor_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_xor_h",
	(uint32_t) 0x6000007b,
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

		cp.code() = std::string("//CV_XOR_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) ^ (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) ^ (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_xor_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_XOR_SC_H -----------------------------------------------------------------
static InstructionDefinition cv_xor_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_xor_sc_h",
	(uint32_t) 0x6000407b,
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

		cp.code() = std::string("//CV_XOR_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) ^ (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) ^ (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_xor_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_XOR_SCI_H ----------------------------------------------------------------
static InstructionDefinition cv_xor_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_xor_sci_h",
	(uint32_t) 0x6000607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_XOR_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) ^ " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) ^ " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_xor_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_XOR_B --------------------------------------------------------------------
static InstructionDefinition cv_xor_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_xor_b",
	(uint32_t) 0x6000107b,
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

		cp.code() = std::string("//CV_XOR_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) ^ (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) ^ (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255))) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) ^ (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255))) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) ^ (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255))) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_xor_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_XOR_SC_B -----------------------------------------------------------------
static InstructionDefinition cv_xor_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_xor_sc_b",
	(uint32_t) 0x6000507b,
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

		cp.code() = std::string("//CV_XOR_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) ^ (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) ^ (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) ^ (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) ^ (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_xor_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_XOR_SCI_B ----------------------------------------------------------------
static InstructionDefinition cv_xor_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_xor_sci_b",
	(uint32_t) 0x6000707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_XOR_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) ^ " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) ^ " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) ^ " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) ^ " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_xor_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AND_H --------------------------------------------------------------------
static InstructionDefinition cv_and_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_and_h",
	(uint32_t) 0x6800007b,
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

		cp.code() = std::string("//CV_AND_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) & (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) & (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_and_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AND_SC_H -----------------------------------------------------------------
static InstructionDefinition cv_and_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_and_sc_h",
	(uint32_t) 0x6800407b,
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

		cp.code() = std::string("//CV_AND_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) & (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) & (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_and_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AND_SCI_H ----------------------------------------------------------------
static InstructionDefinition cv_and_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_and_sci_h",
	(uint32_t) 0x6800607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_AND_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) & " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) & " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_and_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AND_B --------------------------------------------------------------------
static InstructionDefinition cv_and_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_and_b",
	(uint32_t) 0x6800107b,
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

		cp.code() = std::string("//CV_AND_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) & (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) & (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255))) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) & (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255))) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) & (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255))) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_and_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AND_SC_B -----------------------------------------------------------------
static InstructionDefinition cv_and_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_and_sc_b",
	(uint32_t) 0x6800507b,
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

		cp.code() = std::string("//CV_AND_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) & (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) & (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) & (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) & (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_and_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_AND_SCI_B ----------------------------------------------------------------
static InstructionDefinition cv_and_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_and_sci_b",
	(uint32_t) 0x6800707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_AND_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) & " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) & " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) & " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) & " + std::to_string(((etiss_uint8)(Imm6))) + "ULL)) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_and_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_ABS_H --------------------------------------------------------------------
static InstructionDefinition cv_abs_h_rd_rs1 (
	ISA32_RV32IMACFDXCoreV,
	"cv_abs_h",
	(uint32_t) 0x7000007b,
	(uint32_t) 0xfff0707f,
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

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_ABS_H\n");

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
cp.code() += "}\n";
}
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_abs_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_ABS_B --------------------------------------------------------------------
static InstructionDefinition cv_abs_b_rd_rs1 (
	ISA32_RV32IMACFDXCoreV,
	"cv_abs_b",
	(uint32_t) 0x7000107b,
	(uint32_t) 0xfff0707f,
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

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_ABS_B\n");

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
cp.code() += "}\n";
}
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_abs_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_EXTRACT_H ----------------------------------------------------------------
static InstructionDefinition cv_extract_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_extract_h",
	(uint32_t) 0x7800607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_EXTRACT_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((etiss_int32)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string((((Imm6) >> (0ULL)) & 1) * 16ULL) + "ULL)) & ((1 << ((" + std::to_string((((Imm6) >> (0ULL)) & 1) * 16ULL + 15ULL) + "ULL) - (" + std::to_string((((Imm6) >> (0ULL)) & 1) * 16ULL) + "ULL) + 1)) - 1)))));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_extract_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_EXTRACT_B ----------------------------------------------------------------
static InstructionDefinition cv_extract_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_extract_b",
	(uint32_t) 0x7800707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_EXTRACT_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((etiss_int32)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL)) & ((1 << ((" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL + 7ULL) + "ULL) - (" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL) + 1)) - 1)))));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_extract_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_EXTRACTU_H ---------------------------------------------------------------
static InstructionDefinition cv_extractu_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_extractu_h",
	(uint32_t) 0x9000607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_EXTRACTU_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string((((Imm6) >> (0ULL)) & 1) * 16ULL) + "ULL)) & ((1 << ((" + std::to_string((((Imm6) >> (0ULL)) & 1) * 16ULL + 15ULL) + "ULL) - (" + std::to_string((((Imm6) >> (0ULL)) & 1) * 16ULL) + "ULL) + 1)) - 1))));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_extractu_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_EXTRACTU_B ---------------------------------------------------------------
static InstructionDefinition cv_extractu_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_extractu_b",
	(uint32_t) 0x9000707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_EXTRACTU_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL)) & ((1 << ((" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL + 7ULL) + "ULL) - (" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL) + 1)) - 1))));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_extractu_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_INSERT_H -----------------------------------------------------------------
static InstructionDefinition cv_insert_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_insert_h",
	(uint32_t) 0xb000607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_INSERT_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (~(((1 << ((" + std::to_string((((Imm6) >> (0ULL)) & 1) * 16ULL + 15ULL) + "ULL) - (" + std::to_string((((Imm6) >> (0ULL)) & 1) * 16ULL) + "ULL) + 1)) - 1) << (" + std::to_string((((Imm6) >> (0ULL)) & 1) * 16ULL) + "ULL)))) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) << " + std::to_string((((Imm6) >> (0ULL)) & 1) * 16ULL) + "ULL) & (((1 << ((" + std::to_string((((Imm6) >> (0ULL)) & 1) * 16ULL + 15ULL) + "ULL) - (" + std::to_string((((Imm6) >> (0ULL)) & 1) * 16ULL) + "ULL) + 1)) - 1) << (" + std::to_string((((Imm6) >> (0ULL)) & 1) * 16ULL) + "ULL))U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_insert_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_INSERT_B -----------------------------------------------------------------
static InstructionDefinition cv_insert_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_insert_b",
	(uint32_t) 0xb000707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_INSERT_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (~(((1 << ((" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL + 7ULL) + "ULL) - (" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL) + 1)) - 1) << (" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL)))) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) << " + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL) & (((1 << ((" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL + 7ULL) + "ULL) - (" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL) + 1)) - 1) << (" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL))U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_insert_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTUP_H ------------------------------------------------------------------
static InstructionDefinition cv_dotup_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotup_h",
	(uint32_t) 0x8000007b,
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

		cp.code() = std::string("//CV_DOTUP_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_dotup_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTUP_SC_H ---------------------------------------------------------------
static InstructionDefinition cv_dotup_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotup_sc_h",
	(uint32_t) 0x8000407b,
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

		cp.code() = std::string("//CV_DOTUP_SC_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_dotup_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTUP_SCI_H --------------------------------------------------------------
static InstructionDefinition cv_dotup_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotup_sci_h",
	(uint32_t) 0x8000607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_DOTUP_SCI_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * " + std::to_string((etiss_uint16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "ULL) + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * " + std::to_string((etiss_uint16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "ULL))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_dotup_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTUP_B ------------------------------------------------------------------
static InstructionDefinition cv_dotup_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotup_b",
	(uint32_t) 0x8000107b,
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

		cp.code() = std::string("//CV_DOTUP_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_dotup_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTUP_SC_B ---------------------------------------------------------------
static InstructionDefinition cv_dotup_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotup_sc_b",
	(uint32_t) 0x8000507b,
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

		cp.code() = std::string("//CV_DOTUP_SC_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_dotup_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTUP_SCI_B --------------------------------------------------------------
static InstructionDefinition cv_dotup_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotup_sci_b",
	(uint32_t) 0x8000707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_DOTUP_SCI_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_dotup_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTUSP_H -----------------------------------------------------------------
static InstructionDefinition cv_dotusp_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotusp_h",
	(uint32_t) 0x8800007b,
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

		cp.code() = std::string("//CV_DOTUSP_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_dotusp_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTUSP_SC_H --------------------------------------------------------------
static InstructionDefinition cv_dotusp_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotusp_sc_h",
	(uint32_t) 0x8800407b,
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

		cp.code() = std::string("//CV_DOTUSP_SC_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_dotusp_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTUSP_SCI_H -------------------------------------------------------------
static InstructionDefinition cv_dotusp_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotusp_sci_h",
	(uint32_t) 0x8800607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_DOTUSP_SCI_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * " + std::to_string((etiss_int16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL) + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * " + std::to_string((etiss_int16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_dotusp_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTUSP_B -----------------------------------------------------------------
static InstructionDefinition cv_dotusp_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotusp_b",
	(uint32_t) 0x8800107b,
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

		cp.code() = std::string("//CV_DOTUSP_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_dotusp_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTUSP_SC_B --------------------------------------------------------------
static InstructionDefinition cv_dotusp_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotusp_sc_b",
	(uint32_t) 0x8800507b,
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

		cp.code() = std::string("//CV_DOTUSP_SC_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_dotusp_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTUSP_SCI_B -------------------------------------------------------------
static InstructionDefinition cv_dotusp_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotusp_sci_b",
	(uint32_t) 0x8800707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_DOTUSP_SCI_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * " + std::to_string((etiss_int8)(((etiss_uint8)(Imm6)))) + "LL) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * " + std::to_string((etiss_int8)(((etiss_uint8)(Imm6)))) + "LL) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * " + std::to_string((etiss_int8)(((etiss_uint8)(Imm6)))) + "LL) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * " + std::to_string((etiss_int8)(((etiss_uint8)(Imm6)))) + "LL))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_dotusp_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTSP_H ------------------------------------------------------------------
static InstructionDefinition cv_dotsp_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotsp_h",
	(uint32_t) 0x9800007b,
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

		cp.code() = std::string("//CV_DOTSP_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((etiss_int16)((((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) + ((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_dotsp_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTSP_SC_H ---------------------------------------------------------------
static InstructionDefinition cv_dotsp_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotsp_sc_h",
	(uint32_t) 0x9800407b,
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

		cp.code() = std::string("//CV_DOTSP_SC_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((etiss_int16)((((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) + ((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_dotsp_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTSP_SCI_H --------------------------------------------------------------
static InstructionDefinition cv_dotsp_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotsp_sci_h",
	(uint32_t) 0x9800607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_DOTSP_SCI_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((etiss_int16)((((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * " + std::to_string((etiss_int16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL) + ((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * " + std::to_string((etiss_int16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_dotsp_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTSP_B ------------------------------------------------------------------
static InstructionDefinition cv_dotsp_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotsp_b",
	(uint32_t) 0x9800107b,
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

		cp.code() = std::string("//CV_DOTSP_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((etiss_int8)((((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255))) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255))) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_dotsp_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTSP_SC_B ---------------------------------------------------------------
static InstructionDefinition cv_dotsp_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotsp_sc_b",
	(uint32_t) 0x9800507b,
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

		cp.code() = std::string("//CV_DOTSP_SC_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((etiss_int8)((((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_dotsp_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_DOTSP_SCI_B --------------------------------------------------------------
static InstructionDefinition cv_dotsp_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_dotsp_sci_b",
	(uint32_t) 0x9800707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_DOTSP_SCI_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((etiss_int8)((((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * " + std::to_string((etiss_int8)(((etiss_uint8)(Imm6)))) + "LL) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * " + std::to_string((etiss_int8)(((etiss_uint8)(Imm6)))) + "LL) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * " + std::to_string((etiss_int8)(((etiss_uint8)(Imm6)))) + "LL) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * " + std::to_string((etiss_int8)(((etiss_uint8)(Imm6)))) + "LL)))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_dotsp_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTUP_H -----------------------------------------------------------------
static InstructionDefinition cv_sdotup_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotup_h",
	(uint32_t) 0xa000007b,
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

		cp.code() = std::string("//CV_SDOTUP_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sdotup_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTUP_SC_H --------------------------------------------------------------
static InstructionDefinition cv_sdotup_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotup_sc_h",
	(uint32_t) 0xa000407b,
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

		cp.code() = std::string("//CV_SDOTUP_SC_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sdotup_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTUP_SCI_H -------------------------------------------------------------
static InstructionDefinition cv_sdotup_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotup_sci_h",
	(uint32_t) 0xa000607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SDOTUP_SCI_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * " + std::to_string((etiss_uint16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "ULL) + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * " + std::to_string((etiss_uint16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "ULL))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sdotup_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTUP_B -----------------------------------------------------------------
static InstructionDefinition cv_sdotup_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotup_b",
	(uint32_t) 0xa000107b,
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

		cp.code() = std::string("//CV_SDOTUP_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sdotup_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTUP_SC_B --------------------------------------------------------------
static InstructionDefinition cv_sdotup_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotup_sc_b",
	(uint32_t) 0xa000507b,
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

		cp.code() = std::string("//CV_SDOTUP_SC_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sdotup_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTUP_SCI_B -------------------------------------------------------------
static InstructionDefinition cv_sdotup_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotup_sci_b",
	(uint32_t) 0xa000707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SDOTUP_SCI_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sdotup_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTUSP_H ----------------------------------------------------------------
static InstructionDefinition cv_sdotusp_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotusp_h",
	(uint32_t) 0xa800007b,
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

		cp.code() = std::string("//CV_SDOTUSP_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sdotusp_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTUSP_SC_H -------------------------------------------------------------
static InstructionDefinition cv_sdotusp_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotusp_sc_h",
	(uint32_t) 0xa800407b,
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

		cp.code() = std::string("//CV_SDOTUSP_SC_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sdotusp_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTUSP_SCI_H ------------------------------------------------------------
static InstructionDefinition cv_sdotusp_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotusp_sci_h",
	(uint32_t) 0xa800607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SDOTUSP_SCI_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * " + std::to_string((etiss_int16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL) + ((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * " + std::to_string((etiss_int16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sdotusp_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTUSP_B ----------------------------------------------------------------
static InstructionDefinition cv_sdotusp_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotusp_b",
	(uint32_t) 0xa800107b,
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

		cp.code() = std::string("//CV_SDOTUSP_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sdotusp_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTUSP_SC_B -------------------------------------------------------------
static InstructionDefinition cv_sdotusp_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotusp_sc_b",
	(uint32_t) 0xa800507b,
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

		cp.code() = std::string("//CV_SDOTUSP_SC_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sdotusp_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTUSP_SCI_B ------------------------------------------------------------
static InstructionDefinition cv_sdotusp_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotusp_sci_b",
	(uint32_t) 0xa800707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SDOTUSP_SCI_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * " + std::to_string((etiss_int8)(((etiss_uint8)(Imm6)))) + "LL) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * " + std::to_string((etiss_int8)(((etiss_uint8)(Imm6)))) + "LL) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * " + std::to_string((etiss_int8)(((etiss_uint8)(Imm6)))) + "LL) + ((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * " + std::to_string((etiss_int8)(((etiss_uint8)(Imm6)))) + "LL))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sdotusp_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTSP_H -----------------------------------------------------------------
static InstructionDefinition cv_sdotsp_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotsp_h",
	(uint32_t) 0xb800007b,
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

		cp.code() = std::string("//CV_SDOTSP_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((etiss_int32)((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) + ((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sdotsp_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTSP_SC_H --------------------------------------------------------------
static InstructionDefinition cv_sdotsp_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotsp_sc_h",
	(uint32_t) 0xb800407b,
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

		cp.code() = std::string("//CV_SDOTSP_SC_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((etiss_int32)((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) + ((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sdotsp_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTSP_SCI_H -------------------------------------------------------------
static InstructionDefinition cv_sdotsp_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotsp_sci_h",
	(uint32_t) 0xb800607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SDOTSP_SCI_H\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((etiss_int32)((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * " + std::to_string((etiss_int16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL) + ((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * " + std::to_string((etiss_int16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sdotsp_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTSP_B -----------------------------------------------------------------
static InstructionDefinition cv_sdotsp_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotsp_b",
	(uint32_t) 0xb800107b,
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

		cp.code() = std::string("//CV_SDOTSP_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((etiss_int32)((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255))) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255))) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sdotsp_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTSP_SC_B --------------------------------------------------------------
static InstructionDefinition cv_sdotsp_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotsp_sc_b",
	(uint32_t) 0xb800507b,
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

		cp.code() = std::string("//CV_SDOTSP_SC_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((etiss_int32)((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getRegisterDependencies().add(reg_name[rs2], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_sdotsp_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SDOTSP_SCI_B -------------------------------------------------------------
static InstructionDefinition cv_sdotsp_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_sdotsp_sci_b",
	(uint32_t) 0xb800707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SDOTSP_SCI_B\n");

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
if (rd != 0ULL) {
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((etiss_int32)((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) * " + std::to_string((etiss_int8)(((etiss_uint8)(Imm6)))) + "LL) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) * " + std::to_string((etiss_int8)(((etiss_uint8)(Imm6)))) + "LL) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) * " + std::to_string((etiss_int8)(((etiss_uint8)(Imm6)))) + "LL) + ((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) * " + std::to_string((etiss_int8)(((etiss_uint8)(Imm6)))) + "LL)))));\n";
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rd], 32);
		cp.getRegisterDependencies().add(reg_name[rs1], 32);
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sdotsp_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SHUFFLE_H ----------------------------------------------------------------
static InstructionDefinition cv_shuffle_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_shuffle_h",
	(uint32_t) 0xc000007b,
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

		cp.code() = std::string("//CV_SHUFFLE_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) >> (0ULL)) & 1) * 16ULL))) & ((1 << (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) >> (0ULL)) & 1) * 16ULL + 15ULL)) - ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) >> (0ULL)) & 1) * 16ULL)) + 1)) - 1)) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)) >> (0ULL)) & 1) * 16ULL))) & ((1 << (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)) >> (0ULL)) & 1) * 16ULL + 15ULL)) - ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)) >> (0ULL)) & 1) * 16ULL)) + 1)) - 1)) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_shuffle_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SHUFFLE_SCI_H ------------------------------------------------------------
static InstructionDefinition cv_shuffle_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_shuffle_sci_h",
	(uint32_t) 0xc000607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SHUFFLE_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string(((((Imm6) >> (0ULL)) & 1) * 16ULL)) + "ULL)) & ((1 << ((" + std::to_string(((((Imm6) >> (0ULL)) & 1) * 16ULL + 15ULL)) + "ULL) - (" + std::to_string(((((Imm6) >> (0ULL)) & 1) * 16ULL)) + "ULL) + 1)) - 1)) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string(((((Imm6) >> (1ULL)) & 1) * 16ULL)) + "ULL)) & ((1 << ((" + std::to_string(((((Imm6) >> (1ULL)) & 1) * 16ULL + 15ULL)) + "ULL) - (" + std::to_string(((((Imm6) >> (1ULL)) & 1) * 16ULL)) + "ULL) + 1)) - 1)) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_shuffle_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SHUFFLE_B ----------------------------------------------------------------
static InstructionDefinition cv_shuffle_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_shuffle_b",
	(uint32_t) 0xc000107b,
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

		cp.code() = std::string("//CV_SHUFFLE_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 3) * 8ULL))) & ((1 << (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 3) * 8ULL + 7ULL)) - ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 3) * 8ULL)) + 1)) - 1)) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)) >> (0ULL)) & 3) * 8ULL))) & ((1 << (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)) >> (0ULL)) & 3) * 8ULL + 7ULL)) - ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)) >> (0ULL)) & 3) * 8ULL)) + 1)) - 1)) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)) >> (0ULL)) & 3) * 8ULL))) & ((1 << (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)) >> (0ULL)) & 3) * 8ULL + 7ULL)) - ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)) >> (0ULL)) & 3) * 8ULL)) + 1)) - 1)) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)) >> (0ULL)) & 3) * 8ULL))) & ((1 << (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)) >> (0ULL)) & 3) * 8ULL + 7ULL)) - ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)) >> (0ULL)) & 3) * 8ULL)) + 1)) - 1)) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_shuffle_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SHUFFLEI0_SCI_B ----------------------------------------------------------
static InstructionDefinition cv_shufflei0_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_shufflei0_sci_b",
	(uint32_t) 0xc000707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SHUFFLEI0_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL)) & ((1 << ((" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL + 7ULL) + "ULL) - (" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL) + 1)) - 1)) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string((((Imm6) >> (2ULL)) & 3) * 8ULL) + "ULL)) & ((1 << ((" + std::to_string((((Imm6) >> (2ULL)) & 3) * 8ULL + 7ULL) + "ULL) - (" + std::to_string((((Imm6) >> (2ULL)) & 3) * 8ULL) + "ULL) + 1)) - 1)) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string((((Imm6) >> (4ULL)) & 3) * 8ULL) + "ULL)) & ((1 << ((" + std::to_string((((Imm6) >> (4ULL)) & 3) * 8ULL + 7ULL) + "ULL) - (" + std::to_string((((Imm6) >> (4ULL)) & 3) * 8ULL) + "ULL) + 1)) - 1)) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_shufflei0_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SHUFFLEI1_SCI_B ----------------------------------------------------------
static InstructionDefinition cv_shufflei1_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_shufflei1_sci_b",
	(uint32_t) 0xe800707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SHUFFLEI1_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL)) & ((1 << ((" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL + 7ULL) + "ULL) - (" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL) + 1)) - 1)) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string((((Imm6) >> (2ULL)) & 3) * 8ULL) + "ULL)) & ((1 << ((" + std::to_string((((Imm6) >> (2ULL)) & 3) * 8ULL + 7ULL) + "ULL) - (" + std::to_string((((Imm6) >> (2ULL)) & 3) * 8ULL) + "ULL) + 1)) - 1)) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string((((Imm6) >> (4ULL)) & 3) * 8ULL) + "ULL)) & ((1 << ((" + std::to_string((((Imm6) >> (4ULL)) & 3) * 8ULL + 7ULL) + "ULL) - (" + std::to_string((((Imm6) >> (4ULL)) & 3) * 8ULL) + "ULL) + 1)) - 1)) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_shufflei1_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SHUFFLEI2_SCI_B ----------------------------------------------------------
static InstructionDefinition cv_shufflei2_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_shufflei2_sci_b",
	(uint32_t) 0xf000707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SHUFFLEI2_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL)) & ((1 << ((" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL + 7ULL) + "ULL) - (" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL) + 1)) - 1)) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string((((Imm6) >> (2ULL)) & 3) * 8ULL) + "ULL)) & ((1 << ((" + std::to_string((((Imm6) >> (2ULL)) & 3) * 8ULL + 7ULL) + "ULL) - (" + std::to_string((((Imm6) >> (2ULL)) & 3) * 8ULL) + "ULL) + 1)) - 1)) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string((((Imm6) >> (4ULL)) & 3) * 8ULL) + "ULL)) & ((1 << ((" + std::to_string((((Imm6) >> (4ULL)) & 3) * 8ULL + 7ULL) + "ULL) - (" + std::to_string((((Imm6) >> (4ULL)) & 3) * 8ULL) + "ULL) + 1)) - 1)) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_shufflei2_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SHUFFLEI3_SCI_B ----------------------------------------------------------
static InstructionDefinition cv_shufflei3_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_shufflei3_sci_b",
	(uint32_t) 0xf800707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SHUFFLEI3_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL)) & ((1 << ((" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL + 7ULL) + "ULL) - (" + std::to_string((((Imm6) >> (0ULL)) & 3) * 8ULL) + "ULL) + 1)) - 1)) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string((((Imm6) >> (2ULL)) & 3) * 8ULL) + "ULL)) & ((1 << ((" + std::to_string((((Imm6) >> (2ULL)) & 3) * 8ULL + 7ULL) + "ULL) - (" + std::to_string((((Imm6) >> (2ULL)) & 3) * 8ULL) + "ULL) + 1)) - 1)) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string((((Imm6) >> (4ULL)) & 3) * 8ULL) + "ULL)) & ((1 << ((" + std::to_string((((Imm6) >> (4ULL)) & 3) * 8ULL + 7ULL) + "ULL) - (" + std::to_string((((Imm6) >> (4ULL)) & 3) * 8ULL) + "ULL) + 1)) - 1)) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_shufflei3_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SHUFFLE2_H ---------------------------------------------------------------
static InstructionDefinition cv_shuffle2_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_shuffle2_h",
	(uint32_t) 0xc800007b,
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

		cp.code() = std::string("//CV_SHUFFLE2_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) >> (1ULL)) & 1)) ? (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]))) >> ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) >> (0ULL)) & 1) * 16ULL))) & ((1 << (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) >> (0ULL)) & 1) * 16ULL + 15ULL)) - ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) >> (0ULL)) & 1) * 16ULL)) + 1)) - 1)) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)) >> (1ULL)) & 1)) ? (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]))) >> ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)) >> (0ULL)) & 1) * 16ULL))) & ((1 << (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)) >> (0ULL)) & 1) * 16ULL + 15ULL)) - ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)) >> (0ULL)) & 1) * 16ULL)) + 1)) - 1)) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_shuffle2_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SHUFFLE2_B ---------------------------------------------------------------
static InstructionDefinition cv_shuffle2_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_shuffle2_b",
	(uint32_t) 0xc800107b,
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

		cp.code() = std::string("//CV_SHUFFLE2_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (1ULL)) & 1)) ? (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]))) >> ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 1) * 8ULL))) & ((1 << (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 1) * 8ULL + 7ULL)) - ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)) >> (0ULL)) & 1) * 8ULL)) + 1)) - 1)) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)) >> (1ULL)) & 1)) ? (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]))) >> ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)) >> (0ULL)) & 1) * 8ULL))) & ((1 << (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)) >> (0ULL)) & 1) * 8ULL + 7ULL)) - ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)) >> (0ULL)) & 1) * 8ULL)) + 1)) - 1)) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)) >> (1ULL)) & 1)) ? (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]))) >> ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)) >> (0ULL)) & 1) * 8ULL))) & ((1 << (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)) >> (0ULL)) & 1) * 8ULL + 7ULL)) - ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)) >> (0ULL)) & 1) * 8ULL)) + 1)) - 1)) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)) >> (1ULL)) & 1)) ? (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]))) >> ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)) >> (0ULL)) & 1) * 8ULL))) & ((1 << (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)) >> (0ULL)) & 1) * 8ULL + 7ULL)) - ((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)) >> (0ULL)) & 1) * 8ULL)) + 1)) - 1)) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_shuffle2_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_PACK ---------------------------------------------------------------------
static InstructionDefinition cv_pack_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_pack",
	(uint32_t) 0xd000007b,
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

		cp.code() = std::string("//CV_PACK\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_pack" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_PACK_H -------------------------------------------------------------------
static InstructionDefinition cv_pack_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_pack_h",
	(uint32_t) 0xd200007b,
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

		cp.code() = std::string("//CV_PACK_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_pack_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_PACKHI_B -----------------------------------------------------------------
static InstructionDefinition cv_packhi_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_packhi_b",
	(uint32_t) 0xd800107b,
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

		cp.code() = std::string("//CV_PACKHI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) << 24ULL) & 4278190080U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255) << 16ULL) & 16711680U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_packhi_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_PACKLO_B -----------------------------------------------------------------
static InstructionDefinition cv_packlo_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_packlo_b",
	(uint32_t) 0xe000107b,
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

		cp.code() = std::string("//CV_PACKLO_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255) << 0ULL) & 255U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_packlo_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPEQ_H ------------------------------------------------------------------
static InstructionDefinition cv_cmpeq_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpeq_h",
	(uint32_t) 0x400007b,
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

		cp.code() = std::string("//CV_CMPEQ_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) == (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) == (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpeq_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPEQ_SC_H ---------------------------------------------------------------
static InstructionDefinition cv_cmpeq_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpeq_sc_h",
	(uint32_t) 0x400407b,
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

		cp.code() = std::string("//CV_CMPEQ_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) == (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) == (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpeq_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPEQ_SCI_H --------------------------------------------------------------
static InstructionDefinition cv_cmpeq_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpeq_sci_h",
	(uint32_t) 0x400607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPEQ_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) == " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) == " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmpeq_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPEQ_B ------------------------------------------------------------------
static InstructionDefinition cv_cmpeq_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpeq_b",
	(uint32_t) 0x400107b,
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

		cp.code() = std::string("//CV_CMPEQ_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) == (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) == (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) == (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) == (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpeq_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPEQ_SC_B ---------------------------------------------------------------
static InstructionDefinition cv_cmpeq_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpeq_sc_b",
	(uint32_t) 0x400507b,
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

		cp.code() = std::string("//CV_CMPEQ_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) == (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) == (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) == (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) == (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpeq_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPEQ_SCI_B --------------------------------------------------------------
static InstructionDefinition cv_cmpeq_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpeq_sci_b",
	(uint32_t) 0x400707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPEQ_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) == " + std::to_string(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) == " + std::to_string(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) == " + std::to_string(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) == " + std::to_string(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmpeq_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPNE_H ------------------------------------------------------------------
static InstructionDefinition cv_cmpne_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpne_h",
	(uint32_t) 0xc00007b,
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

		cp.code() = std::string("//CV_CMPNE_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) != (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) != (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpne_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPNE_SC_H ---------------------------------------------------------------
static InstructionDefinition cv_cmpne_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpne_sc_h",
	(uint32_t) 0xc00407b,
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

		cp.code() = std::string("//CV_CMPNE_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) != (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) != (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpne_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPNE_SCI_H --------------------------------------------------------------
static InstructionDefinition cv_cmpne_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpne_sci_h",
	(uint32_t) 0xc00607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPNE_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) != " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535) != " + std::to_string(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmpne_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPNE_B ------------------------------------------------------------------
static InstructionDefinition cv_cmpne_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpne_b",
	(uint32_t) 0xc00107b,
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

		cp.code() = std::string("//CV_CMPNE_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) != (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) != (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) != (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) != (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpne_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPNE_SC_B ---------------------------------------------------------------
static InstructionDefinition cv_cmpne_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpne_sc_b",
	(uint32_t) 0xc00507b,
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

		cp.code() = std::string("//CV_CMPNE_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) != (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) != (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) != (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) != (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpne_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPNE_SCI_B --------------------------------------------------------------
static InstructionDefinition cv_cmpne_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpne_sci_b",
	(uint32_t) 0xc00707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPNE_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255) != " + std::to_string(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255) != " + std::to_string(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255) != " + std::to_string(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255) != " + std::to_string(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2)))))) + "ULL)))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmpne_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGT_H ------------------------------------------------------------------
static InstructionDefinition cv_cmpgt_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgt_h",
	(uint32_t) 0x1400007b,
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

		cp.code() = std::string("//CV_CMPGT_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) > (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) > (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpgt_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGT_SC_H ---------------------------------------------------------------
static InstructionDefinition cv_cmpgt_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgt_sc_h",
	(uint32_t) 0x1400407b,
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

		cp.code() = std::string("//CV_CMPGT_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) > (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) > (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpgt_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGT_SCI_H --------------------------------------------------------------
static InstructionDefinition cv_cmpgt_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgt_sci_h",
	(uint32_t) 0x1400607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPGT_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) > " + std::to_string((etiss_int16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) > " + std::to_string((etiss_int16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmpgt_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGT_B ------------------------------------------------------------------
static InstructionDefinition cv_cmpgt_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgt_b",
	(uint32_t) 0x1400107b,
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

		cp.code() = std::string("//CV_CMPGT_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) > (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) > (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) > (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) > (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpgt_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGT_SC_B ---------------------------------------------------------------
static InstructionDefinition cv_cmpgt_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgt_sc_b",
	(uint32_t) 0x1400507b,
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

		cp.code() = std::string("//CV_CMPGT_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) > (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) > (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) > (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) > (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpgt_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGT_SCI_B --------------------------------------------------------------
static InstructionDefinition cv_cmpgt_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgt_sci_b",
	(uint32_t) 0x1400707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPGT_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) > " + std::to_string((etiss_int8)(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) > " + std::to_string((etiss_int8)(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) > " + std::to_string((etiss_int8)(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) > " + std::to_string((etiss_int8)(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmpgt_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGE_H ------------------------------------------------------------------
static InstructionDefinition cv_cmpge_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpge_h",
	(uint32_t) 0x1c00007b,
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

		cp.code() = std::string("//CV_CMPGE_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) >= (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) >= (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpge_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGE_SC_H ---------------------------------------------------------------
static InstructionDefinition cv_cmpge_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpge_sc_h",
	(uint32_t) 0x1c00407b,
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

		cp.code() = std::string("//CV_CMPGE_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) >= (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) >= (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpge_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGE_SCI_H --------------------------------------------------------------
static InstructionDefinition cv_cmpge_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpge_sci_h",
	(uint32_t) 0x1c00607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPGE_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) >= " + std::to_string((etiss_int16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) >= " + std::to_string((etiss_int16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmpge_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGE_B ------------------------------------------------------------------
static InstructionDefinition cv_cmpge_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpge_b",
	(uint32_t) 0x1c00107b,
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

		cp.code() = std::string("//CV_CMPGE_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) >= (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) >= (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) >= (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) >= (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpge_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGE_SC_B ---------------------------------------------------------------
static InstructionDefinition cv_cmpge_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpge_sc_b",
	(uint32_t) 0x1c00507b,
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

		cp.code() = std::string("//CV_CMPGE_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) >= (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) >= (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) >= (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) >= (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpge_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGE_SCI_B --------------------------------------------------------------
static InstructionDefinition cv_cmpge_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpge_sci_b",
	(uint32_t) 0x1c00707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPGE_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) >= " + std::to_string((etiss_int8)(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) >= " + std::to_string((etiss_int8)(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) >= " + std::to_string((etiss_int8)(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) >= " + std::to_string((etiss_int8)(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmpge_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLT_H ------------------------------------------------------------------
static InstructionDefinition cv_cmplt_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmplt_h",
	(uint32_t) 0x2400007b,
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

		cp.code() = std::string("//CV_CMPLT_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) < (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) < (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmplt_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLT_SC_H ---------------------------------------------------------------
static InstructionDefinition cv_cmplt_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmplt_sc_h",
	(uint32_t) 0x2400407b,
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

		cp.code() = std::string("//CV_CMPLT_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) < (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) < (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmplt_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLT_SCI_H --------------------------------------------------------------
static InstructionDefinition cv_cmplt_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmplt_sci_h",
	(uint32_t) 0x2400607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPLT_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) < " + std::to_string((etiss_int16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) < " + std::to_string((etiss_int16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmplt_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLT_B ------------------------------------------------------------------
static InstructionDefinition cv_cmplt_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmplt_b",
	(uint32_t) 0x2400107b,
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

		cp.code() = std::string("//CV_CMPLT_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) < (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) < (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) < (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) < (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmplt_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLT_SC_B ---------------------------------------------------------------
static InstructionDefinition cv_cmplt_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmplt_sc_b",
	(uint32_t) 0x2400507b,
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

		cp.code() = std::string("//CV_CMPLT_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) < (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) < (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) < (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) < (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmplt_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLT_SCI_B --------------------------------------------------------------
static InstructionDefinition cv_cmplt_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmplt_sci_b",
	(uint32_t) 0x2400707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPLT_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) < " + std::to_string((etiss_int8)(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) < " + std::to_string((etiss_int8)(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) < " + std::to_string((etiss_int8)(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) < " + std::to_string((etiss_int8)(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmplt_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLE_H ------------------------------------------------------------------
static InstructionDefinition cv_cmple_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmple_h",
	(uint32_t) 0x2c00007b,
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

		cp.code() = std::string("//CV_CMPLE_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) <= (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) <= (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmple_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLE_SC_H ---------------------------------------------------------------
static InstructionDefinition cv_cmple_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmple_sc_h",
	(uint32_t) 0x2c00407b,
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

		cp.code() = std::string("//CV_CMPLE_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) <= (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) <= (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmple_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLE_SCI_H --------------------------------------------------------------
static InstructionDefinition cv_cmple_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmple_sci_h",
	(uint32_t) 0x2c00607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPLE_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) <= " + std::to_string((etiss_int16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) <= " + std::to_string((etiss_int16)(((etiss_uint16)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmple_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLE_B ------------------------------------------------------------------
static InstructionDefinition cv_cmple_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmple_b",
	(uint32_t) 0x2c00107b,
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

		cp.code() = std::string("//CV_CMPLE_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) <= (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) <= (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) <= (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) <= (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmple_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLE_SC_B ---------------------------------------------------------------
static InstructionDefinition cv_cmple_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmple_sc_b",
	(uint32_t) 0x2c00507b,
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

		cp.code() = std::string("//CV_CMPLE_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) <= (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) <= (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) <= (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) <= (etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmple_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLE_SCI_B --------------------------------------------------------------
static InstructionDefinition cv_cmple_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmple_sci_b",
	(uint32_t) 0x2c00707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPLE_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) <= " + std::to_string((etiss_int8)(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) <= " + std::to_string((etiss_int8)(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) <= " + std::to_string((etiss_int8)(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_int8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) <= " + std::to_string((etiss_int8)(((etiss_uint8)((((etiss_int8)(((etiss_int8)Imm6) << (2)) >> (2))))))) + "LL)))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmple_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGTU_H -----------------------------------------------------------------
static InstructionDefinition cv_cmpgtu_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgtu_h",
	(uint32_t) 0x3400007b,
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

		cp.code() = std::string("//CV_CMPGTU_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) > (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) > (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpgtu_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGTU_SC_H --------------------------------------------------------------
static InstructionDefinition cv_cmpgtu_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgtu_sc_h",
	(uint32_t) 0x3400407b,
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

		cp.code() = std::string("//CV_CMPGTU_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) > (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) > (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpgtu_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGTU_SCI_H -------------------------------------------------------------
static InstructionDefinition cv_cmpgtu_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgtu_sci_h",
	(uint32_t) 0x3400607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPGTU_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) > " + std::to_string((etiss_uint16)(((etiss_uint16)(Imm6)))) + "ULL)))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) > " + std::to_string((etiss_uint16)(((etiss_uint16)(Imm6)))) + "ULL)))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmpgtu_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGTU_B -----------------------------------------------------------------
static InstructionDefinition cv_cmpgtu_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgtu_b",
	(uint32_t) 0x3400107b,
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

		cp.code() = std::string("//CV_CMPGTU_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) > (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) > (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) > (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) > (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpgtu_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGTU_SC_B --------------------------------------------------------------
static InstructionDefinition cv_cmpgtu_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgtu_sc_b",
	(uint32_t) 0x3400507b,
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

		cp.code() = std::string("//CV_CMPGTU_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) > (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) > (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) > (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) > (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpgtu_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGTU_SCI_B -------------------------------------------------------------
static InstructionDefinition cv_cmpgtu_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgtu_sci_b",
	(uint32_t) 0x3400707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPGTU_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) > " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL)))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) > " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL)))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) > " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL)))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) > " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL)))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmpgtu_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGEU_H -----------------------------------------------------------------
static InstructionDefinition cv_cmpgeu_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgeu_h",
	(uint32_t) 0x3c00007b,
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

		cp.code() = std::string("//CV_CMPGEU_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) >= (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) >= (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpgeu_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGEU_SC_H --------------------------------------------------------------
static InstructionDefinition cv_cmpgeu_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgeu_sc_h",
	(uint32_t) 0x3c00407b,
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

		cp.code() = std::string("//CV_CMPGEU_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) >= (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) >= (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpgeu_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGEU_SCI_H -------------------------------------------------------------
static InstructionDefinition cv_cmpgeu_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgeu_sci_h",
	(uint32_t) 0x3c00607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPGEU_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) >= " + std::to_string((etiss_uint16)(((etiss_uint16)(Imm6)))) + "ULL)))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) >= " + std::to_string((etiss_uint16)(((etiss_uint16)(Imm6)))) + "ULL)))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmpgeu_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGEU_B -----------------------------------------------------------------
static InstructionDefinition cv_cmpgeu_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgeu_b",
	(uint32_t) 0x3c00107b,
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

		cp.code() = std::string("//CV_CMPGEU_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) >= (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) >= (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) >= (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) >= (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpgeu_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGEU_SC_B --------------------------------------------------------------
static InstructionDefinition cv_cmpgeu_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgeu_sc_b",
	(uint32_t) 0x3c00507b,
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

		cp.code() = std::string("//CV_CMPGEU_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) >= (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) >= (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) >= (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) >= (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpgeu_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPGEU_SCI_B -------------------------------------------------------------
static InstructionDefinition cv_cmpgeu_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpgeu_sci_b",
	(uint32_t) 0x3c00707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPGEU_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) >= " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL)))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) >= " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL)))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) >= " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL)))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) >= " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL)))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmpgeu_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLTU_H -----------------------------------------------------------------
static InstructionDefinition cv_cmpltu_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpltu_h",
	(uint32_t) 0x4400007b,
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

		cp.code() = std::string("//CV_CMPLTU_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) < (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) < (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpltu_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLTU_SC_H --------------------------------------------------------------
static InstructionDefinition cv_cmpltu_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpltu_sc_h",
	(uint32_t) 0x4400407b,
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

		cp.code() = std::string("//CV_CMPLTU_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) < (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) < (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpltu_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLTU_SCI_H -------------------------------------------------------------
static InstructionDefinition cv_cmpltu_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpltu_sci_h",
	(uint32_t) 0x4400607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPLTU_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) < " + std::to_string((etiss_uint16)(((etiss_uint16)(Imm6)))) + "ULL)))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) < " + std::to_string((etiss_uint16)(((etiss_uint16)(Imm6)))) + "ULL)))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmpltu_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLTU_B -----------------------------------------------------------------
static InstructionDefinition cv_cmpltu_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpltu_b",
	(uint32_t) 0x4400107b,
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

		cp.code() = std::string("//CV_CMPLTU_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) < (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) < (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) < (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) < (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpltu_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLTU_SC_B --------------------------------------------------------------
static InstructionDefinition cv_cmpltu_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpltu_sc_b",
	(uint32_t) 0x4400507b,
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

		cp.code() = std::string("//CV_CMPLTU_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) < (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) < (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) < (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) < (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpltu_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLTU_SCI_B -------------------------------------------------------------
static InstructionDefinition cv_cmpltu_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpltu_sci_b",
	(uint32_t) 0x4400707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPLTU_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) < " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL)))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) < " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL)))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) < " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL)))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) < " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL)))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmpltu_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLEU_H -----------------------------------------------------------------
static InstructionDefinition cv_cmpleu_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpleu_h",
	(uint32_t) 0x4c00007b,
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

		cp.code() = std::string("//CV_CMPLEU_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) <= (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) <= (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpleu_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLEU_SC_H --------------------------------------------------------------
static InstructionDefinition cv_cmpleu_sc_h_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpleu_sc_h",
	(uint32_t) 0x4c00407b,
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

		cp.code() = std::string("//CV_CMPLEU_SC_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) <= (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) <= (etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)))))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpleu_sc_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLEU_SCI_H -------------------------------------------------------------
static InstructionDefinition cv_cmpleu_sci_h_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpleu_sci_h",
	(uint32_t) 0x4c00607b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPLEU_SCI_H\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) <= " + std::to_string((etiss_uint16)(((etiss_uint16)(Imm6)))) + "ULL)))) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_uint16)(((etiss_int16)(((etiss_uint16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) <= " + std::to_string((etiss_uint16)(((etiss_uint16)(Imm6)))) + "ULL)))) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmpleu_sci_h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLEU_B -----------------------------------------------------------------
static InstructionDefinition cv_cmpleu_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpleu_b",
	(uint32_t) 0x4c00107b,
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

		cp.code() = std::string("//CV_CMPLEU_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) <= (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) <= (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255)))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) <= (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255)))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) <= (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255)))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpleu_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLEU_SC_B --------------------------------------------------------------
static InstructionDefinition cv_cmpleu_sc_b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpleu_sc_b",
	(uint32_t) 0x4c00507b,
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

		cp.code() = std::string("//CV_CMPLEU_SC_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) <= (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) <= (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) <= (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) <= (etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 255)))))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cmpleu_sc_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CMPLEU_SCI_B -------------------------------------------------------------
static InstructionDefinition cv_cmpleu_sci_b_rd_rs1_Imm6 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cmpleu_sci_b",
	(uint32_t) 0x4c00707b,
	(uint32_t) 0xfc00707f,
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CMPLEU_SCI_B\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709551360U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 255)) <= " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL)))) << 0ULL) & 255U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486335U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255)) <= " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL)))) << 8ULL) & 65280U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073692839935U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255)) <= " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL)))) << 16ULL) & 16711680U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069431361535U)) | (((etiss_uint8)(((etiss_int8)(((etiss_uint8)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255)) <= " + std::to_string((etiss_uint8)(((etiss_uint8)(Imm6)))) + "ULL)))) << 24ULL) & 4278190080U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
etiss_uint8 Imm6 = 0;
static BitArrayRange R_Imm6_1(24, 20);
Imm6 += R_Imm6_1.read(ba) << 1;
static BitArrayRange R_Imm6_0(25, 25);
Imm6 += R_Imm6_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cmpleu_sci_b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Imm6=" + std::to_string(Imm6) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SUBROTMJ -----------------------------------------------------------------
static InstructionDefinition cv_subrotmj_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_subrotmj",
	(uint32_t) 0x6c00007b,
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

		cp.code() = std::string("//CV_SUBROTMJ\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535))) >> (0ULL)) & 65535) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_subrotmj" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SUBROTMJ_DIV2 ------------------------------------------------------------
static InstructionDefinition cv_subrotmj_div2_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_subrotmj_div2",
	(uint32_t) 0x6c00207b,
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

		cp.code() = std::string("//CV_SUBROTMJ_DIV2\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_int16)(((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535))) >> (0ULL)) & 65535))) >> 1ULL << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_subrotmj_div2" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SUBROTMJ_DIV4 ------------------------------------------------------------
static InstructionDefinition cv_subrotmj_div4_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_subrotmj_div4",
	(uint32_t) 0x6c00407b,
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

		cp.code() = std::string("//CV_SUBROTMJ_DIV4\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_int16)(((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535))) >> (0ULL)) & 65535))) >> 2ULL << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_subrotmj_div4" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SUBROTMJ_DIV8 ------------------------------------------------------------
static InstructionDefinition cv_subrotmj_div8_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_subrotmj_div8",
	(uint32_t) 0x6c00607b,
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

		cp.code() = std::string("//CV_SUBROTMJ_DIV8\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | (((etiss_int16)(((((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535) - (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535))) >> (0ULL)) & 65535))) >> 3ULL << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_subrotmj_div8" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CPLXCONJ -----------------------------------------------------------------
static InstructionDefinition cv_cplxconj_rd_rs1 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cplxconj",
	(uint32_t) 0x5c00007b,
	(uint32_t) 0xfff0707f,
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

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_CPLXCONJ\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | (((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535) << 0ULL) & 65535U));\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | ((-((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_cplxconj" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CPLXMUL_R ----------------------------------------------------------------
static InstructionDefinition cv_cplxmul_r_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cplxmul_r",
	(uint32_t) 0x5400007b,
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

		cp.code() = std::string("//CV_CPLXMUL_R\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | ((((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) - (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> 15ULL << 0ULL) & 65535U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cplxmul_r" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CPLXMUL_R_DIV2 -----------------------------------------------------------
static InstructionDefinition cv_cplxmul_r_div2_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cplxmul_r_div2",
	(uint32_t) 0x5400207b,
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

		cp.code() = std::string("//CV_CPLXMUL_R_DIV2\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | ((((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) - (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> 16ULL << 0ULL) & 65535U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cplxmul_r_div2" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CPLXMUL_R_DIV4 -----------------------------------------------------------
static InstructionDefinition cv_cplxmul_r_div4_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cplxmul_r_div4",
	(uint32_t) 0x5400407b,
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

		cp.code() = std::string("//CV_CPLXMUL_R_DIV4\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | ((((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) - (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> 17ULL << 0ULL) & 65535U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cplxmul_r_div4" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CPLXMUL_R_DIV8 -----------------------------------------------------------
static InstructionDefinition cv_cplxmul_r_div8_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cplxmul_r_div8",
	(uint32_t) 0x5400607b,
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

		cp.code() = std::string("//CV_CPLXMUL_R_DIV8\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744073709486080U)) | ((((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535)) - (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535))) >> 18ULL << 0ULL) & 65535U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cplxmul_r_div8" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CPLXMUL_I ----------------------------------------------------------------
static InstructionDefinition cv_cplxmul_i_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cplxmul_i",
	(uint32_t) 0x5600007b,
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

		cp.code() = std::string("//CV_CPLXMUL_I\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | ((((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)) - (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> 15ULL << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cplxmul_i" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CPLXMUL_I_DIV2 -----------------------------------------------------------
static InstructionDefinition cv_cplxmul_i_div2_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cplxmul_i_div2",
	(uint32_t) 0x5600207b,
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

		cp.code() = std::string("//CV_CPLXMUL_I_DIV2\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | ((((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)) - (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> 16ULL << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cplxmul_i_div2" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CPLXMUL_I_DIV4 -----------------------------------------------------------
static InstructionDefinition cv_cplxmul_i_div4_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cplxmul_i_div4",
	(uint32_t) 0x5600407b,
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

		cp.code() = std::string("//CV_CPLXMUL_I_DIV4\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | ((((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)) - (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> 17ULL << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cplxmul_i_div4" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_CPLXMUL_I_DIV8 -----------------------------------------------------------
static InstructionDefinition cv_cplxmul_i_div8_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_cplxmul_i_div8",
	(uint32_t) 0x5600607b,
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

		cp.code() = std::string("//CV_CPLXMUL_I_DIV8\n");

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
if (rd != 0ULL) {
{
cp.code() += "{\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL]) & (18446744069414649855U)) | ((((etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 65535)) - (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 65535)) * (etiss_int16)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 65535))) >> 18ULL << 16ULL) & 4294901760U));\n";
cp.code() += "}\n";
}
}
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add(reg_name[rd], 32);
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
ss << "cv_cplxmul_i_div8" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
