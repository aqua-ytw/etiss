/**
 * Generated on Fri, 16 Jun 2023 15:27:33 +0200.
 *
 * This file contains the function macros for the RV32IMACFDXCoreV core architecture.
 */

#ifndef __RV32IMACFDXCOREV_FUNCS_H
#define __RV32IMACFDXCOREV_FUNCS_H

#ifndef ETISS_ARCH_STATIC_FN_ONLY
#include "Arch/RV32IMACFDXCoreV/RV32IMACFDXCoreV.h"
#include "etiss/jit/CPU.h"
#include "etiss/jit/System.h"
#include "etiss/jit/ReturnCode.h"
#endif



extern void leave(etiss_int32 priv_lvl);

extern void wait(etiss_int32 flag);

static inline void always_block(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers);

static inline etiss_uint8 extension_enabled(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int8 extension);

extern etiss_uint32 fadd_s(etiss_uint32, etiss_uint32, etiss_uint8);

extern etiss_uint32 fsub_s(etiss_uint32, etiss_uint32, etiss_uint8);

extern etiss_uint32 fmul_s(etiss_uint32, etiss_uint32, etiss_uint8);

extern etiss_uint32 fdiv_s(etiss_uint32, etiss_uint32, etiss_uint8);

extern etiss_uint32 fmadd_s(etiss_uint32, etiss_uint32, etiss_uint32, etiss_uint32, etiss_uint8);

extern etiss_uint32 fsel_s(etiss_uint32, etiss_uint32, etiss_uint32);

extern etiss_uint32 fsqrt_s(etiss_uint32, etiss_uint8);

extern etiss_uint32 fcmp_s(etiss_uint32, etiss_uint32, etiss_uint32);

extern etiss_uint32 fcvt_s(etiss_uint32, etiss_uint32, etiss_uint8);

extern etiss_uint64 fcvt_32_64(etiss_uint32, etiss_uint32, etiss_uint8);

extern etiss_uint32 fcvt_64_32(etiss_uint64, etiss_uint32, etiss_uint8);

extern etiss_uint32 unbox_s(etiss_uint64);

extern etiss_uint32 fclass_s(etiss_uint32);

extern etiss_uint32 fget_flags();

extern etiss_uint64 fadd_d(etiss_uint64, etiss_uint64, etiss_uint8);

extern etiss_uint64 fsub_d(etiss_uint64, etiss_uint64, etiss_uint8);

extern etiss_uint64 fmul_d(etiss_uint64, etiss_uint64, etiss_uint8);

extern etiss_uint64 fdiv_d(etiss_uint64, etiss_uint64, etiss_uint8);

extern etiss_uint64 fmadd_d(etiss_uint64, etiss_uint64, etiss_uint64, etiss_uint32, etiss_uint8);

extern etiss_uint64 fsel_d(etiss_uint64, etiss_uint64, etiss_uint32);

extern etiss_uint64 fsqrt_d(etiss_uint64, etiss_uint8);

extern etiss_uint64 fcmp_d(etiss_uint64, etiss_uint64, etiss_uint32);

extern etiss_uint64 fcvt_d(etiss_uint64, etiss_uint32, etiss_uint8);

extern etiss_uint32 fconv_d2f(etiss_uint64, etiss_uint8);

extern etiss_uint64 fconv_f2d(etiss_uint32, etiss_uint8);

extern etiss_uint64 unbox_d(etiss_uint64);

extern etiss_uint64 fclass_d(etiss_uint64);

static inline etiss_uint64 get_field(etiss_uint64 reg, etiss_uint64 mask);

static inline etiss_uint64 set_field(etiss_uint64 reg, etiss_uint64 mask, etiss_uint64 val);

static inline void raise(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 irq, etiss_int32 mcause);

static inline void translate_exc_code(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 cause);

extern etiss_uint8 etiss_semihost_enabled();

extern etiss_int64 etiss_semihost(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 XLEN, etiss_uint64 operation, etiss_uint64 parameter);

static inline void always_block(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
{
cpu->nextPc = cpu->instructionPointer + 4ULL;
}
}

static inline etiss_uint8 extension_enabled(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int8 extension)
{
{
return (*((RV32IMACFDXCoreV*)cpu)->CSR[769LL] >> (extension - 65ULL)) & 1ULL;
}
}

static inline etiss_uint64 get_field(etiss_uint64 reg, etiss_uint64 mask)
{
{
return (reg & mask) / (mask & ~((mask << 1ULL)));
}
}

static inline etiss_uint64 set_field(etiss_uint64 reg, etiss_uint64 mask, etiss_uint64 val)
{
{
return ((reg & ~(mask)) | ((val * (mask & ~((mask << 1ULL)))) & mask));
}
}

static inline void raise(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 irq, etiss_int32 mcause)
{
cpu->return_pending = 1;
cpu->exception = 0;
{
etiss_uint32 epc = cpu->instructionPointer;
if (((RV32IMACFDXCoreV*)cpu)->PRIV <= 1LL && (*((RV32IMACFDXCoreV*)cpu)->CSR[770LL] >> mcause) & 1ULL) {
{
cpu->nextPc = (*((RV32IMACFDXCoreV*)cpu)->CSR[261LL] & -2LL);
*((RV32IMACFDXCoreV*)cpu)->CSR[321LL] = epc;
*((RV32IMACFDXCoreV*)cpu)->CSR[322LL] = mcause;
etiss_uint32 s = *((RV32IMACFDXCoreV*)cpu)->CSR[256LL];
s = set_field(s, 32LL, get_field(s, 2LL));
s = set_field(s, 256LL, ((RV32IMACFDXCoreV*)cpu)->PRIV);
s = set_field(s, 2LL, 0ULL);
*((RV32IMACFDXCoreV*)cpu)->CSR[256LL] = s;
((RV32IMACFDXCoreV*)cpu)->PRIV = (1LL) & 0x7;
}
}
else {
{
cpu->nextPc = (*((RV32IMACFDXCoreV*)cpu)->CSR[773LL] & -2LL);
*((RV32IMACFDXCoreV*)cpu)->CSR[833LL] = epc;
*((RV32IMACFDXCoreV*)cpu)->CSR[834LL] = mcause;
etiss_uint32 s = *((RV32IMACFDXCoreV*)cpu)->CSR[768LL];
s = set_field(s, 128LL, get_field(s, 8LL));
s = set_field(s, 6144LL, ((RV32IMACFDXCoreV*)cpu)->PRIV);
s = set_field(s, 8LL, 0ULL);
*((RV32IMACFDXCoreV*)cpu)->CSR[768LL] = s;
((RV32IMACFDXCoreV*)cpu)->PRIV = (3LL) & 0x7;
}
}
}
}

static inline void translate_exc_code(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 cause)
{
{
etiss_int32 code = 0ULL;
if (cause == -2147483648LL) {
return;
}
 else if (cause == -5LL) {
code = 5LL;
}
 else if (cause == -14LL) {
code = 13LL;
}
 else if (cause == -6LL) {
code = 7LL;
}
 else if (cause == -15LL) {
code = 15LL;
}
 else if (cause == -7LL) {
code = 1LL;
}
else {
code = 2LL;
}
raise(cpu, system, plugin_pointers, 0ULL, code);
}
}
#endif