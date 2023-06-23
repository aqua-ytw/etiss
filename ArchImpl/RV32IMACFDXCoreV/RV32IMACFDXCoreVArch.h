/**
 * Generated on Fri, 23 Jun 2023 12:53:13 +0200.
 *
 * This file contains the architecture class for the RV32IMACFDXCoreV core architecture.
 */

#ifndef ETISS_RV32IMACFDXCoreVArch_RV32IMACFDXCoreVArch_H_
#define ETISS_RV32IMACFDXCoreVArch_RV32IMACFDXCoreVArch_H_

#include "etiss/CPUArch.h"
#include "etiss/Instruction.h"
#include "etiss/InterruptVector.h"
#include "RV32IMACFDXCoreV.h"
#include "RV32IMACFDXCoreVGDBCore.h"

#include <map>

extern const char * const reg_name[];

extern etiss::instr::InstructionGroup ISA32_RV32IMACFDXCoreV;
extern etiss::instr::InstructionClass ISA32_RV32IMACFDXCoreVClass;

extern etiss::instr::InstructionCollection RV32IMACFDXCoreVISA;

class RV32IMACFDXCoreVArch : public etiss::CPUArch {

public:
	RV32IMACFDXCoreVArch();

	virtual const std::set<std::string> & getListenerSupportedRegisters();


	virtual ETISS_CPU * newCPU();
	virtual void resetCPU(ETISS_CPU * cpu,etiss::uint64 * startpointer);
	virtual void deleteCPU(ETISS_CPU *);

	/**
		@brief get the VirtualStruct of the core to mitigate register access

		@see RV32IMACFDXCoreVArchSpecificImp.h
	*/
	virtual std::shared_ptr<etiss::VirtualStruct> getVirtualStruct(ETISS_CPU * cpu);

	/**
		@return 8 (jump instruction + instruction of delay slot)
	*/
	virtual unsigned getMaximumInstructionSizeInBytes();

	/**
		@return 2
	*/
	virtual unsigned getInstructionSizeInBytes();

	/**
		@brief required headers (RV32IMACFDXCoreV.h)
	*/
	virtual const std::set<std::string> & getHeaders() const;

	/**
		@brief This function will be called automatically in order to handling architecure dependent exceptions such
			   as interrupt, system call, illegal instructions

		@see RV32IMACFDXCoreVArchSpecificImp.h
	*/
	virtual etiss::int32 handleException(etiss::int32 code, ETISS_CPU * cpu);

	/**
		@brief This function is called during CPUArch initialization

		@see RV32IMACFDXCoreVArchSpecificImp.h
	*/
	virtual void initInstrSet(etiss::instr::ModedInstructionSet & ) const;
	virtual void initCodeBlock(etiss::CodeBlock & cb) const;

	/**
		@brief Target architecture may have inconsistent endianess. Data read from memory is buffered, and this function
			   is called to alter sequence of buffered data so that the inconsistent endianess is compensated.

		@see RV32IMACFDXCoreVArchSpecificImp.h
	*/
	virtual void compensateEndianess(ETISS_CPU * cpu, etiss::instr::BitArray & ba) const ;

	/**
		@brief If interrupt handling is expected, vector table could be provided to support interrupt triggering

		@see RV32IMACFDXCoreVArchSpecificImp.h
	*/
	virtual etiss::InterruptVector * createInterruptVector(ETISS_CPU * cpu);
	virtual void deleteInterruptVector(etiss::InterruptVector * vec, ETISS_CPU * cpu);

	/**
		@brief get the GDBcore for RV32IMACFDXCoreV architecture

		@see RV32IMACFDXCoreVGDBCore.h for implementation of GDBcore
	*/
	virtual etiss::plugin::gdb::GDBCore & getGDBCore();

private:
	std::set<std::string> listenerSupportedRegisters_;
	std::set<std::string> headers_;
	RV32IMACFDXCoreVGDBCore gdbcore_;
};
#endif
