/**
 * Generated on Mon, 29 May 2023 08:17:20 +0200.
 *
 * This file contains the instruction behavior models of the XCoreVAlu
 * instruction set for the RV32IMACFDXCoreV core architecture.
 */

#include "RV32IMACFDXCoreVArch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV32IMACFDXCoreVFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// CV_MAX ----------------------------------------------------------------------
static InstructionDefinition cv_max_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_max",
	(uint32_t) 0x5a00302b,
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

		cp.code() = std::string("//CV_MAX\n");

// -----------------------------------------------------------------------------
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4U) + "U;\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "U] = ((etiss_int32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "U]) > (etiss_int32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "U])) ? (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "U]) : (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "U]);\n";
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
ss << "cv_max" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MAXU ---------------------------------------------------------------------
static InstructionDefinition cv_maxu_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_maxu",
	(uint32_t) 0x5c00302b,
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

		cp.code() = std::string("//CV_MAXU\n");

// -----------------------------------------------------------------------------
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4U) + "U;\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "U] = ((etiss_uint32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "U]) > (etiss_uint32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "U])) ? (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "U]) : (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "U]);\n";
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
ss << "cv_maxu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MIN ----------------------------------------------------------------------
static InstructionDefinition cv_min_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_min",
	(uint32_t) 0x5600302b,
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

		cp.code() = std::string("//CV_MIN\n");

// -----------------------------------------------------------------------------
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4U) + "U;\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "U] = ((etiss_int32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "U]) < (etiss_int32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "U])) ? (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "U]) : (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "U]);\n";
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
ss << "cv_min" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_MINU ---------------------------------------------------------------------
static InstructionDefinition cv_minu_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_minu",
	(uint32_t) 0x5800302b,
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

		cp.code() = std::string("//CV_MINU\n");

// -----------------------------------------------------------------------------
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4U) + "U;\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "U] = ((etiss_uint32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "U]) < (etiss_uint32)(*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "U])) ? (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "U]) : (*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "U]);\n";
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
ss << "cv_minu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_ADDN ---------------------------------------------------------------------
static InstructionDefinition cv_addn_rd_rs1_rs2_Is3 (
	ISA32_RV32IMACFDXCoreV,
	"cv_addn",
	(uint32_t) 0x00205b,
	(uint32_t) 0xc000707f,
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
etiss_uint8 Is3 = 0;
static BitArrayRange R_Is3_0(29, 25);
Is3 += R_Is3_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_ADDN\n");

// -----------------------------------------------------------------------------
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4U) + "U;\n";
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
etiss_uint8 Is3 = 0;
static BitArrayRange R_Is3_0(29, 25);
Is3 += R_Is3_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_addn" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + " | Is3=" + std::to_string(Is3) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_ADDUN --------------------------------------------------------------------
static InstructionDefinition cv_addun_rd_rs1_rs2_Is3 (
	ISA32_RV32IMACFDXCoreV,
	"cv_addun",
	(uint32_t) 0x4000205b,
	(uint32_t) 0xc000707f,
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
etiss_uint8 Is3 = 0;
static BitArrayRange R_Is3_0(29, 25);
Is3 += R_Is3_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_ADDUN\n");

// -----------------------------------------------------------------------------
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4U) + "U;\n";
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
etiss_uint8 Is3 = 0;
static BitArrayRange R_Is3_0(29, 25);
Is3 += R_Is3_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_addun" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + " | Is3=" + std::to_string(Is3) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
