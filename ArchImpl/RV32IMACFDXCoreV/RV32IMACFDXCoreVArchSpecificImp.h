/**
 * Generated on Fri, 23 Jun 2023 12:53:13 +0200.
 *
 * This file contains the architecture specific header for the RV32IMACFDXCoreV
 * core architecture.
 *
 * WARNING: This file contains user-added code, be mindful when overwriting this with
 * generated code!
 */

#ifndef ETISS_RV32IMACFDXCoreVArch_RV32IMACFDXCoreVARCHSPECIFICIMP_H_
#define ETISS_RV32IMACFDXCoreVArch_RV32IMACFDXCoreVARCHSPECIFICIMP_H_

/**
	@brief VirtualStruct for RV32IMACFDXCoreV architecture to faciliate register acess

	@details VirtualStruct enables user to access certain register via their name without knowning ETISS hierarchy of a core.
				Further fiels might be needed to enable gdbserver etc.

*/
class RegField_RV32IMACFDXCoreV : public etiss::VirtualStruct::Field{
private:
	const unsigned gprid_;
public:
	RegField_RV32IMACFDXCoreV(etiss::VirtualStruct & parent,unsigned gprid)
		: Field(parent,
			std::string("X")+etiss::toString(gprid),
			std::string("X")+etiss::toString(gprid),
			R|W,
			4
		),
		gprid_(gprid)
	{}

	RegField_RV32IMACFDXCoreV(etiss::VirtualStruct & parent, std::string name, unsigned gprid)
		: Field(parent,
			name,
			name,
			R|W,
			4
		),
		gprid_(gprid)
	{}

	virtual ~RegField_RV32IMACFDXCoreV(){}

protected:
	virtual uint64_t _read() const {
		return (uint64_t) *((RV32IMACFDXCoreV*)parent_.structure_)->X[gprid_];
	}

	virtual void _write(uint64_t val) {
		etiss::log(etiss::VERBOSE, "write to ETISS cpu state", name_, val);
		*((RV32IMACFDXCoreV*)parent_.structure_)->X[gprid_] = (etiss_uint32) val;
	}
};

class pcField_RV32IMACFDXCoreV : public etiss::VirtualStruct::Field{
public:
	pcField_RV32IMACFDXCoreV(etiss::VirtualStruct & parent)
		: Field(parent,
			"instructionPointer",
			"instructionPointer",
			R|W,
			4
		)
	{}

	virtual ~pcField_RV32IMACFDXCoreV(){}

protected:
	virtual uint64_t _read() const {
		return (uint64_t) ((ETISS_CPU *)parent_.structure_)->instructionPointer;
	}

	virtual void _write(uint64_t val) {
		etiss::log(etiss::VERBOSE, "write to ETISS cpu state", name_, val);
		((ETISS_CPU *)parent_.structure_)->instructionPointer = (etiss_uint32) val;
	}
};

#endif