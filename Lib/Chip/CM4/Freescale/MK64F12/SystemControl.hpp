#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Control Registers
    namespace ScbActlr{    ///<Auxiliary Control Register,
        using Addr = Register::Address<0xe000e008,0xfffffff8,0,unsigned>;
        ///Disables interruption of multi-cycle instructions.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dismcycint{}; 
        ///Disables write buffer use during default memory map accesses.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disdefwbuf{}; 
        ///Disables folding of IT instructions.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> disfold{}; 
    }
    namespace ScbCpuid{    ///<CPUID Base Register
        using Addr = Register::Address<0xe000ed00,0x000f0000,0,unsigned>;
        ///Indicates patch release: 0x0 = Patch 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> revision{}; 
        ///Indicates part number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> partno{}; 
        ///Indicates processor revision: 0x2 = Revision 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> variant{}; 
        ///Implementer code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> implementer{}; 
    }
    namespace ScbIcsr{    ///<Interrupt Control and State Register
        using Addr = Register::Address<0xe000ed04,0x613c0600,0,unsigned>;
        ///Active exception number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> vectactive{}; 
        ///no description available
        enum class RettobaseVal {
            v0=0x00000000,     ///<there are preempted active exceptions to execute
            v1=0x00000001,     ///<there are no active exceptions, or the currently-executing exception is the only active exception
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,RettobaseVal> rettobase{}; 
        namespace RettobaseValC{
            constexpr Register::FieldValue<decltype(rettobase)::Type,RettobaseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rettobase)::Type,RettobaseVal::v1> v1{};
        }
        }
        ///Exception number of the highest priority pending enabled exception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,12),Register::ReadWriteAccess,unsigned> vectpending{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> isrpending{}; 
        ///no description available
        enum class IsrpreemptVal {
            v0=0x00000000,     ///<Will not service
            v1=0x00000001,     ///<Will service a pending exception
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,IsrpreemptVal> isrpreempt{}; 
        namespace IsrpreemptValC{
            constexpr Register::FieldValue<decltype(isrpreempt)::Type,IsrpreemptVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isrpreempt)::Type,IsrpreemptVal::v1> v1{};
        }
        }
        ///no description available
        enum class PendstclrVal {
            v0=0x00000000,     ///<no effect
            v1=0x00000001,     ///<removes the pending state from the SysTick exception
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,PendstclrVal> pendstclr{}; 
        namespace PendstclrValC{
            constexpr Register::FieldValue<decltype(pendstclr)::Type,PendstclrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pendstclr)::Type,PendstclrVal::v1> v1{};
        }
        }
        ///no description available
        enum class PendstsetVal {
            v0=0x00000000,     ///<write: no effect; read: SysTick exception is not pending
            v1=0x00000001,     ///<write: changes SysTick exception state to pending; read: SysTick exception is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,PendstsetVal> pendstset{}; 
        namespace PendstsetValC{
            constexpr Register::FieldValue<decltype(pendstset)::Type,PendstsetVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pendstset)::Type,PendstsetVal::v1> v1{};
        }
        }
        ///no description available
        enum class PendsvclrVal {
            v0=0x00000000,     ///<no effect
            v1=0x00000001,     ///<removes the pending state from the PendSV exception
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,PendsvclrVal> pendsvclr{}; 
        namespace PendsvclrValC{
            constexpr Register::FieldValue<decltype(pendsvclr)::Type,PendsvclrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pendsvclr)::Type,PendsvclrVal::v1> v1{};
        }
        }
        ///no description available
        enum class PendsvsetVal {
            v0=0x00000000,     ///<write: no effect; read: PendSV exception is not pending
            v1=0x00000001,     ///<write: changes PendSV exception state to pending; read: PendSV exception is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,PendsvsetVal> pendsvset{}; 
        namespace PendsvsetValC{
            constexpr Register::FieldValue<decltype(pendsvset)::Type,PendsvsetVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pendsvset)::Type,PendsvsetVal::v1> v1{};
        }
        }
        ///no description available
        enum class NmipendsetVal {
            v0=0x00000000,     ///<write: no effect; read: NMI exception is not pending
            v1=0x00000001,     ///<write: changes NMI exception state to pending; read: NMI exception is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,NmipendsetVal> nmipendset{}; 
        namespace NmipendsetValC{
            constexpr Register::FieldValue<decltype(nmipendset)::Type,NmipendsetVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nmipendset)::Type,NmipendsetVal::v1> v1{};
        }
        }
    }
    namespace ScbVtor{    ///<Vector Table Offset Register
        using Addr = Register::Address<0xe000ed08,0x0000007f,0,unsigned>;
        ///Vector table base offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> tbloff{}; 
    }
    namespace ScbAircr{    ///<Application Interrupt and Reset Control Register
        using Addr = Register::Address<0xe000ed0c,0x000078f8,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vectreset{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vectclractive{}; 
        ///no description available
        enum class SysresetreqVal {
            v0=0x00000000,     ///<no system reset request
            v1=0x00000001,     ///<asserts a signal to the outer system that requests a reset
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SysresetreqVal> sysresetreq{}; 
        namespace SysresetreqValC{
            constexpr Register::FieldValue<decltype(sysresetreq)::Type,SysresetreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sysresetreq)::Type,SysresetreqVal::v1> v1{};
        }
        }
        ///Interrupt priority grouping field. This field determines the split of group priority from subpriority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> prigroup{}; 
        ///no description available
        enum class EndiannessVal {
            v0=0x00000000,     ///<Little-endian
            v1=0x00000001,     ///<Big-endian
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,EndiannessVal> endianness{}; 
        namespace EndiannessValC{
            constexpr Register::FieldValue<decltype(endianness)::Type,EndiannessVal::v0> v0{};
            constexpr Register::FieldValue<decltype(endianness)::Type,EndiannessVal::v1> v1{};
        }
        }
        ///Register key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> vectkey{}; 
    }
    namespace ScbScr{    ///<System Control Register
        using Addr = Register::Address<0xe000ed10,0xffffffe9,0,unsigned>;
        ///no description available
        enum class SleeponexitVal {
            v0=0x00000000,     ///<o not sleep when returning to Thread mode
            v1=0x00000001,     ///<enter sleep, or deep sleep, on return from an ISR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SleeponexitVal> sleeponexit{}; 
        namespace SleeponexitValC{
            constexpr Register::FieldValue<decltype(sleeponexit)::Type,SleeponexitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sleeponexit)::Type,SleeponexitVal::v1> v1{};
        }
        }
        ///no description available
        enum class SleepdeepVal {
            v0=0x00000000,     ///<sleep
            v1=0x00000001,     ///<deep sleep
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SleepdeepVal> sleepdeep{}; 
        namespace SleepdeepValC{
            constexpr Register::FieldValue<decltype(sleepdeep)::Type,SleepdeepVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sleepdeep)::Type,SleepdeepVal::v1> v1{};
        }
        }
        ///no description available
        enum class SevonpendVal {
            v0=0x00000000,     ///<only enabled interrupts or events can wakeup the processor, disabled interrupts are excluded
            v1=0x00000001,     ///<enabled events and all interrupts, including disabled interrupts, can wakeup the processor
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SevonpendVal> sevonpend{}; 
        namespace SevonpendValC{
            constexpr Register::FieldValue<decltype(sevonpend)::Type,SevonpendVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sevonpend)::Type,SevonpendVal::v1> v1{};
        }
        }
    }
    namespace ScbCcr{    ///<Configuration and Control Register
        using Addr = Register::Address<0xe000ed14,0xfffffce4,0,unsigned>;
        ///no description available
        enum class NonbasethrdenaVal {
            v0=0x00000000,     ///<processor can enter Thread mode only when no exception is active
            v1=0x00000001,     ///<processor can enter Thread mode from any level under the control of an EXC_RETURN value
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,NonbasethrdenaVal> nonbasethrdena{}; 
        namespace NonbasethrdenaValC{
            constexpr Register::FieldValue<decltype(nonbasethrdena)::Type,NonbasethrdenaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nonbasethrdena)::Type,NonbasethrdenaVal::v1> v1{};
        }
        }
        ///Enables unprivileged software access to the STIR
        enum class UsersetmpendVal {
            v0=0x00000000,     ///<disable
            v1=0x00000001,     ///<enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,UsersetmpendVal> usersetmpend{}; 
        namespace UsersetmpendValC{
            constexpr Register::FieldValue<decltype(usersetmpend)::Type,UsersetmpendVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usersetmpend)::Type,UsersetmpendVal::v1> v1{};
        }
        }
        ///Enables unaligned access traps
        enum class UnaligntrpVal {
            v0=0x00000000,     ///<do not trap unaligned halfword and word accesses
            v1=0x00000001,     ///<trap unaligned halfword and word accesses
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,UnaligntrpVal> unalignTrp{}; 
        namespace UnaligntrpValC{
            constexpr Register::FieldValue<decltype(unalignTrp)::Type,UnaligntrpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(unalignTrp)::Type,UnaligntrpVal::v1> v1{};
        }
        }
        ///Enables faulting or halting when the processor executes an SDIV or UDIV instruction with a divisor of 0
        enum class Div0trpVal {
            v0=0x00000000,     ///<do not trap divide by 0
            v1=0x00000001,     ///<trap divide by 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Div0trpVal> div0Trp{}; 
        namespace Div0trpValC{
            constexpr Register::FieldValue<decltype(div0Trp)::Type,Div0trpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(div0Trp)::Type,Div0trpVal::v1> v1{};
        }
        }
        ///Enables handlers with priority -1 or -2 to ignore data BusFaults caused by load and store instructions.
        enum class BfhfnmignVal {
            v0=0x00000000,     ///<data bus faults caused by load and store instructions cause a lock-up
            v1=0x00000001,     ///<handlers running at priority -1 and -2 ignore data bus faults caused by load and store instructions
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,BfhfnmignVal> bfhfnmign{}; 
        namespace BfhfnmignValC{
            constexpr Register::FieldValue<decltype(bfhfnmign)::Type,BfhfnmignVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bfhfnmign)::Type,BfhfnmignVal::v1> v1{};
        }
        }
        ///Indicates stack alignment on exception entry
        enum class StkalignVal {
            v0=0x00000000,     ///<4-byte aligned
            v1=0x00000001,     ///<8-byte aligned
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,StkalignVal> stkalign{}; 
        namespace StkalignValC{
            constexpr Register::FieldValue<decltype(stkalign)::Type,StkalignVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stkalign)::Type,StkalignVal::v1> v1{};
        }
        }
    }
    namespace ScbShpr1{    ///<System Handler Priority Register 1
        using Addr = Register::Address<0xe000ed18,0xff000000,0,unsigned>;
        ///Priority of system handler 4, MemManage
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri4{}; 
        ///Priority of system handler 5, BusFault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri5{}; 
        ///Priority of system handler 6, UsageFault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri6{}; 
    }
    namespace ScbShpr2{    ///<System Handler Priority Register 2
        using Addr = Register::Address<0xe000ed1c,0x00ffffff,0,unsigned>;
        ///Priority of system handler 11, SVCall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri11{}; 
    }
    namespace ScbShpr3{    ///<System Handler Priority Register 3
        using Addr = Register::Address<0xe000ed20,0x0000ffff,0,unsigned>;
        ///Priority of system handler 14, PendSV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri14{}; 
        ///Priority of system handler 15, SysTick exception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri15{}; 
    }
    namespace ScbShcsr{    ///<System Handler Control and State Register
        using Addr = Register::Address<0xe000ed24,0xfff80274,0,unsigned>;
        ///no description available
        enum class MemfaultactVal {
            v0=0x00000000,     ///<exception is not active
            v1=0x00000001,     ///<exception is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MemfaultactVal> memfaultact{}; 
        namespace MemfaultactValC{
            constexpr Register::FieldValue<decltype(memfaultact)::Type,MemfaultactVal::v0> v0{};
            constexpr Register::FieldValue<decltype(memfaultact)::Type,MemfaultactVal::v1> v1{};
        }
        }
        ///no description available
        enum class BusfaultactVal {
            v0=0x00000000,     ///<exception is not active
            v1=0x00000001,     ///<exception is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BusfaultactVal> busfaultact{}; 
        namespace BusfaultactValC{
            constexpr Register::FieldValue<decltype(busfaultact)::Type,BusfaultactVal::v0> v0{};
            constexpr Register::FieldValue<decltype(busfaultact)::Type,BusfaultactVal::v1> v1{};
        }
        }
        ///no description available
        enum class UsgfaultactVal {
            v0=0x00000000,     ///<exception is not active
            v1=0x00000001,     ///<exception is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,UsgfaultactVal> usgfaultact{}; 
        namespace UsgfaultactValC{
            constexpr Register::FieldValue<decltype(usgfaultact)::Type,UsgfaultactVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usgfaultact)::Type,UsgfaultactVal::v1> v1{};
        }
        }
        ///no description available
        enum class SvcallactVal {
            v0=0x00000000,     ///<exception is not active
            v1=0x00000001,     ///<exception is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SvcallactVal> svcallact{}; 
        namespace SvcallactValC{
            constexpr Register::FieldValue<decltype(svcallact)::Type,SvcallactVal::v0> v0{};
            constexpr Register::FieldValue<decltype(svcallact)::Type,SvcallactVal::v1> v1{};
        }
        }
        ///no description available
        enum class MonitoractVal {
            v0=0x00000000,     ///<exception is not active
            v1=0x00000001,     ///<exception is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,MonitoractVal> monitoract{}; 
        namespace MonitoractValC{
            constexpr Register::FieldValue<decltype(monitoract)::Type,MonitoractVal::v0> v0{};
            constexpr Register::FieldValue<decltype(monitoract)::Type,MonitoractVal::v1> v1{};
        }
        }
        ///no description available
        enum class PendsvactVal {
            v0=0x00000000,     ///<exception is not active
            v1=0x00000001,     ///<exception is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,PendsvactVal> pendsvact{}; 
        namespace PendsvactValC{
            constexpr Register::FieldValue<decltype(pendsvact)::Type,PendsvactVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pendsvact)::Type,PendsvactVal::v1> v1{};
        }
        }
        ///no description available
        enum class SystickactVal {
            v0=0x00000000,     ///<exception is not active
            v1=0x00000001,     ///<exception is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,SystickactVal> systickact{}; 
        namespace SystickactValC{
            constexpr Register::FieldValue<decltype(systickact)::Type,SystickactVal::v0> v0{};
            constexpr Register::FieldValue<decltype(systickact)::Type,SystickactVal::v1> v1{};
        }
        }
        ///no description available
        enum class UsgfaultpendedVal {
            v0=0x00000000,     ///<exception is not pending
            v1=0x00000001,     ///<exception is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,UsgfaultpendedVal> usgfaultpended{}; 
        namespace UsgfaultpendedValC{
            constexpr Register::FieldValue<decltype(usgfaultpended)::Type,UsgfaultpendedVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usgfaultpended)::Type,UsgfaultpendedVal::v1> v1{};
        }
        }
        ///no description available
        enum class MemfaultpendedVal {
            v0=0x00000000,     ///<exception is not pending
            v1=0x00000001,     ///<exception is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,MemfaultpendedVal> memfaultpended{}; 
        namespace MemfaultpendedValC{
            constexpr Register::FieldValue<decltype(memfaultpended)::Type,MemfaultpendedVal::v0> v0{};
            constexpr Register::FieldValue<decltype(memfaultpended)::Type,MemfaultpendedVal::v1> v1{};
        }
        }
        ///no description available
        enum class BusfaultpendedVal {
            v0=0x00000000,     ///<exception is not pending
            v1=0x00000001,     ///<exception is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,BusfaultpendedVal> busfaultpended{}; 
        namespace BusfaultpendedValC{
            constexpr Register::FieldValue<decltype(busfaultpended)::Type,BusfaultpendedVal::v0> v0{};
            constexpr Register::FieldValue<decltype(busfaultpended)::Type,BusfaultpendedVal::v1> v1{};
        }
        }
        ///no description available
        enum class SvcallpendedVal {
            v0=0x00000000,     ///<exception is not pending
            v1=0x00000001,     ///<exception is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,SvcallpendedVal> svcallpended{}; 
        namespace SvcallpendedValC{
            constexpr Register::FieldValue<decltype(svcallpended)::Type,SvcallpendedVal::v0> v0{};
            constexpr Register::FieldValue<decltype(svcallpended)::Type,SvcallpendedVal::v1> v1{};
        }
        }
        ///no description available
        enum class MemfaultenaVal {
            v0=0x00000000,     ///<disable the exception
            v1=0x00000001,     ///<enable the exception
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,MemfaultenaVal> memfaultena{}; 
        namespace MemfaultenaValC{
            constexpr Register::FieldValue<decltype(memfaultena)::Type,MemfaultenaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(memfaultena)::Type,MemfaultenaVal::v1> v1{};
        }
        }
        ///no description available
        enum class BusfaultenaVal {
            v0=0x00000000,     ///<disable the exception
            v1=0x00000001,     ///<enable the exception
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,BusfaultenaVal> busfaultena{}; 
        namespace BusfaultenaValC{
            constexpr Register::FieldValue<decltype(busfaultena)::Type,BusfaultenaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(busfaultena)::Type,BusfaultenaVal::v1> v1{};
        }
        }
        ///no description available
        enum class UsgfaultenaVal {
            v0=0x00000000,     ///<disable the exception
            v1=0x00000001,     ///<enable the exception
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,UsgfaultenaVal> usgfaultena{}; 
        namespace UsgfaultenaValC{
            constexpr Register::FieldValue<decltype(usgfaultena)::Type,UsgfaultenaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usgfaultena)::Type,UsgfaultenaVal::v1> v1{};
        }
        }
    }
    namespace ScbCfsr{    ///<Configurable Fault Status Registers
        using Addr = Register::Address<0xe000ed28,0xfcf04044,0,unsigned>;
        ///no description available
        enum class IaccviolVal {
            v0=0x00000000,     ///<no instruction access violation fault
            v1=0x00000001,     ///<the processor attempted an instruction fetch from a location that does not permit execution
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IaccviolVal> iaccviol{}; 
        namespace IaccviolValC{
            constexpr Register::FieldValue<decltype(iaccviol)::Type,IaccviolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iaccviol)::Type,IaccviolVal::v1> v1{};
        }
        }
        ///no description available
        enum class DaccviolVal {
            v0=0x00000000,     ///<no data access violation fault
            v1=0x00000001,     ///<the processor attempted a load or store at a location that does not permit the operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DaccviolVal> daccviol{}; 
        namespace DaccviolValC{
            constexpr Register::FieldValue<decltype(daccviol)::Type,DaccviolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(daccviol)::Type,DaccviolVal::v1> v1{};
        }
        }
        ///no description available
        enum class MunstkerrVal {
            v0=0x00000000,     ///<no unstacking fault
            v1=0x00000001,     ///<unstack for an exception return has caused one or more access violations
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,MunstkerrVal> munstkerr{}; 
        namespace MunstkerrValC{
            constexpr Register::FieldValue<decltype(munstkerr)::Type,MunstkerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(munstkerr)::Type,MunstkerrVal::v1> v1{};
        }
        }
        ///no description available
        enum class MstkerrVal {
            v0=0x00000000,     ///<no stacking fault
            v1=0x00000001,     ///<stacking for an exception entry has caused one or more access violations
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MstkerrVal> mstkerr{}; 
        namespace MstkerrValC{
            constexpr Register::FieldValue<decltype(mstkerr)::Type,MstkerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mstkerr)::Type,MstkerrVal::v1> v1{};
        }
        }
        ///no description available
        enum class MlsperrVal {
            v0=0x00000000,     ///<No MemManage fault occurred during floating-point lazy state preservation
            v1=0x00000001,     ///<A MemManage fault occurred during floating-point lazy state preservation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MlsperrVal> mlsperr{}; 
        namespace MlsperrValC{
            constexpr Register::FieldValue<decltype(mlsperr)::Type,MlsperrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mlsperr)::Type,MlsperrVal::v1> v1{};
        }
        }
        ///no description available
        enum class MmarvalidVal {
            v0=0x00000000,     ///<value in MMAR is not a valid fault address
            v1=0x00000001,     ///<MMAR holds a valid fault address
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,MmarvalidVal> mmarvalid{}; 
        namespace MmarvalidValC{
            constexpr Register::FieldValue<decltype(mmarvalid)::Type,MmarvalidVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mmarvalid)::Type,MmarvalidVal::v1> v1{};
        }
        }
        ///no description available
        enum class IbuserrVal {
            v0=0x00000000,     ///<no instruction bus error
            v1=0x00000001,     ///<instruction bus error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,IbuserrVal> ibuserr{}; 
        namespace IbuserrValC{
            constexpr Register::FieldValue<decltype(ibuserr)::Type,IbuserrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ibuserr)::Type,IbuserrVal::v1> v1{};
        }
        }
        ///no description available
        enum class PreciserrVal {
            v0=0x00000000,     ///<no precise data bus error
            v1=0x00000001,     ///<a data bus error has occurred, and the PC value stacked for the exception return points to the instruction that caused the fault
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,PreciserrVal> preciserr{}; 
        namespace PreciserrValC{
            constexpr Register::FieldValue<decltype(preciserr)::Type,PreciserrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(preciserr)::Type,PreciserrVal::v1> v1{};
        }
        }
        ///no description available
        enum class ImpreciserrVal {
            v0=0x00000000,     ///<no imprecise data bus error
            v1=0x00000001,     ///<a data bus error has occurred, but the return address in the stack frame is not related to the instruction that caused the error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ImpreciserrVal> impreciserr{}; 
        namespace ImpreciserrValC{
            constexpr Register::FieldValue<decltype(impreciserr)::Type,ImpreciserrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(impreciserr)::Type,ImpreciserrVal::v1> v1{};
        }
        }
        ///no description available
        enum class UnstkerrVal {
            v0=0x00000000,     ///<no unstacking fault
            v1=0x00000001,     ///<unstack for an exception return has caused one or more BusFaults
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,UnstkerrVal> unstkerr{}; 
        namespace UnstkerrValC{
            constexpr Register::FieldValue<decltype(unstkerr)::Type,UnstkerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(unstkerr)::Type,UnstkerrVal::v1> v1{};
        }
        }
        ///no description available
        enum class StkerrVal {
            v0=0x00000000,     ///<no stacking fault
            v1=0x00000001,     ///<stacking for an exception entry has caused one or more BusFaults
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,StkerrVal> stkerr{}; 
        namespace StkerrValC{
            constexpr Register::FieldValue<decltype(stkerr)::Type,StkerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stkerr)::Type,StkerrVal::v1> v1{};
        }
        }
        ///no description available
        enum class LsperrVal {
            v0=0x00000000,     ///<No bus fault occurred during floating-point lazy state preservation
            v1=0x00000001,     ///<A bus fault occurred during floating-point lazy state preservation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,LsperrVal> lsperr{}; 
        namespace LsperrValC{
            constexpr Register::FieldValue<decltype(lsperr)::Type,LsperrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lsperr)::Type,LsperrVal::v1> v1{};
        }
        }
        ///no description available
        enum class BfarvalidVal {
            v0=0x00000000,     ///<value in BFAR is not a valid fault address
            v1=0x00000001,     ///<BFAR holds a valid fault address
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,BfarvalidVal> bfarvalid{}; 
        namespace BfarvalidValC{
            constexpr Register::FieldValue<decltype(bfarvalid)::Type,BfarvalidVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bfarvalid)::Type,BfarvalidVal::v1> v1{};
        }
        }
        ///no description available
        enum class UndefinstrVal {
            v0=0x00000000,     ///<no undefined instruction UsageFault
            v1=0x00000001,     ///<the processor has attempted to execute an undefined instruction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,UndefinstrVal> undefinstr{}; 
        namespace UndefinstrValC{
            constexpr Register::FieldValue<decltype(undefinstr)::Type,UndefinstrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(undefinstr)::Type,UndefinstrVal::v1> v1{};
        }
        }
        ///no description available
        enum class InvstateVal {
            v0=0x00000000,     ///<no invalid state UsageFault
            v1=0x00000001,     ///<the processor has attempted to execute an instruction that makes illegal use of the EPSR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,InvstateVal> invstate{}; 
        namespace InvstateValC{
            constexpr Register::FieldValue<decltype(invstate)::Type,InvstateVal::v0> v0{};
            constexpr Register::FieldValue<decltype(invstate)::Type,InvstateVal::v1> v1{};
        }
        }
        ///no description available
        enum class InvpcVal {
            v0=0x00000000,     ///<no invalid PC load UsageFault
            v1=0x00000001,     ///<the processor has attempted an illegal load of EXC_RETURN to the PC
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,InvpcVal> invpc{}; 
        namespace InvpcValC{
            constexpr Register::FieldValue<decltype(invpc)::Type,InvpcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(invpc)::Type,InvpcVal::v1> v1{};
        }
        }
        ///no description available
        enum class NocpVal {
            v0=0x00000000,     ///<no UsageFault caused by attempting to access a coprocessor
            v1=0x00000001,     ///<the processor has attempted to access a coprocessor
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,NocpVal> nocp{}; 
        namespace NocpValC{
            constexpr Register::FieldValue<decltype(nocp)::Type,NocpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nocp)::Type,NocpVal::v1> v1{};
        }
        }
        ///no description available
        enum class UnalignedVal {
            v0=0x00000000,     ///<no unaligned access fault, or unaligned access trapping not enabled
            v1=0x00000001,     ///<the processor has made an unaligned memory access
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,UnalignedVal> unaligned{}; 
        namespace UnalignedValC{
            constexpr Register::FieldValue<decltype(unaligned)::Type,UnalignedVal::v0> v0{};
            constexpr Register::FieldValue<decltype(unaligned)::Type,UnalignedVal::v1> v1{};
        }
        }
        ///no description available
        enum class DivbyzeroVal {
            v0=0x00000000,     ///<no divide by zero fault, or divide by zero trapping not enabled
            v1=0x00000001,     ///<the processor has executed an SDIV or UDIV instruction with a divisor of 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,DivbyzeroVal> divbyzero{}; 
        namespace DivbyzeroValC{
            constexpr Register::FieldValue<decltype(divbyzero)::Type,DivbyzeroVal::v0> v0{};
            constexpr Register::FieldValue<decltype(divbyzero)::Type,DivbyzeroVal::v1> v1{};
        }
        }
    }
    namespace ScbHfsr{    ///<HardFault Status register
        using Addr = Register::Address<0xe000ed2c,0x3ffffffd,0,unsigned>;
        ///no description available
        enum class VecttblVal {
            v0=0x00000000,     ///<no BusFault on vector table read
            v1=0x00000001,     ///<BusFault on vector table read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,VecttblVal> vecttbl{}; 
        namespace VecttblValC{
            constexpr Register::FieldValue<decltype(vecttbl)::Type,VecttblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vecttbl)::Type,VecttblVal::v1> v1{};
        }
        }
        ///no description available
        enum class ForcedVal {
            v0=0x00000000,     ///<no forced HardFault
            v1=0x00000001,     ///<forced HardFault
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ForcedVal> forced{}; 
        namespace ForcedValC{
            constexpr Register::FieldValue<decltype(forced)::Type,ForcedVal::v0> v0{};
            constexpr Register::FieldValue<decltype(forced)::Type,ForcedVal::v1> v1{};
        }
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> debugevt{}; 
    }
    namespace ScbDfsr{    ///<Debug Fault Status Register
        using Addr = Register::Address<0xe000ed30,0xffffffe0,0,unsigned>;
        ///no description available
        enum class HaltedVal {
            v0=0x00000000,     ///<No active halt request debug event
            v1=0x00000001,     ///<Halt request debug event active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HaltedVal> halted{}; 
        namespace HaltedValC{
            constexpr Register::FieldValue<decltype(halted)::Type,HaltedVal::v0> v0{};
            constexpr Register::FieldValue<decltype(halted)::Type,HaltedVal::v1> v1{};
        }
        }
        ///no description available
        enum class BkptVal {
            v0=0x00000000,     ///<No current breakpoint debug event
            v1=0x00000001,     ///<At least one current breakpoint debug event
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BkptVal> bkpt{}; 
        namespace BkptValC{
            constexpr Register::FieldValue<decltype(bkpt)::Type,BkptVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkpt)::Type,BkptVal::v1> v1{};
        }
        }
        ///no description available
        enum class DwttrapVal {
            v0=0x00000000,     ///<No current debug events generated by the DWT
            v1=0x00000001,     ///<At least one current debug event generated by the DWT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DwttrapVal> dwttrap{}; 
        namespace DwttrapValC{
            constexpr Register::FieldValue<decltype(dwttrap)::Type,DwttrapVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dwttrap)::Type,DwttrapVal::v1> v1{};
        }
        }
        ///no description available
        enum class VcatchVal {
            v0=0x00000000,     ///<No Vector catch triggered
            v1=0x00000001,     ///<Vector catch triggered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,VcatchVal> vcatch{}; 
        namespace VcatchValC{
            constexpr Register::FieldValue<decltype(vcatch)::Type,VcatchVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vcatch)::Type,VcatchVal::v1> v1{};
        }
        }
        ///no description available
        enum class ExternalVal {
            v0=0x00000000,     ///<No EDBGRQ debug event
            v1=0x00000001,     ///<EDBGRQ debug event
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ExternalVal> external{}; 
        namespace ExternalValC{
            constexpr Register::FieldValue<decltype(external)::Type,ExternalVal::v0> v0{};
            constexpr Register::FieldValue<decltype(external)::Type,ExternalVal::v1> v1{};
        }
        }
    }
    namespace ScbMmfar{    ///<MemManage Address Register
        using Addr = Register::Address<0xe000ed34,0x00000000,0,unsigned>;
        ///Address of MemManage fault location
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace ScbBfar{    ///<BusFault Address Register
        using Addr = Register::Address<0xe000ed38,0x00000000,0,unsigned>;
        ///Address of the BusFault location
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace ScbAfsr{    ///<Auxiliary Fault Status Register
        using Addr = Register::Address<0xe000ed3c,0x00000000,0,unsigned>;
        ///Latched version of the AUXFAULT inputs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> auxfault{}; 
    }
    namespace ScbCpacr{    ///<Debug Fault Status Register
        using Addr = Register::Address<0xe000ed88,0xff0fffff,0,unsigned>;
        ///Access privileges for coprocessor 10.
        enum class Cp10Val {
            v00=0x00000000,     ///<Access denied. Any attempted access generates a NOCP UsageFault
            v01=0x00000001,     ///<Privileged access only. An unprivileged access generates a NOCP fault.
            v10=0x00000002,     ///<Reserved. The result of any access is UNPREDICTABLE.
            v11=0x00000003,     ///<Full access.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Cp10Val> cp10{}; 
        namespace Cp10ValC{
            constexpr Register::FieldValue<decltype(cp10)::Type,Cp10Val::v00> v00{};
            constexpr Register::FieldValue<decltype(cp10)::Type,Cp10Val::v01> v01{};
            constexpr Register::FieldValue<decltype(cp10)::Type,Cp10Val::v10> v10{};
            constexpr Register::FieldValue<decltype(cp10)::Type,Cp10Val::v11> v11{};
        }
        }
        ///Access privileges for coprocessor 11.
        enum class Cp11Val {
            v00=0x00000000,     ///<Access denied. Any attempted access generates a NOCP UsageFault
            v01=0x00000001,     ///<Privileged access only. An unprivileged access generates a NOCP fault.
            v10=0x00000002,     ///<Reserved. The result of any access is UNPREDICTABLE.
            v11=0x00000003,     ///<Full access.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,Cp11Val> cp11{}; 
        namespace Cp11ValC{
            constexpr Register::FieldValue<decltype(cp11)::Type,Cp11Val::v00> v00{};
            constexpr Register::FieldValue<decltype(cp11)::Type,Cp11Val::v01> v01{};
            constexpr Register::FieldValue<decltype(cp11)::Type,Cp11Val::v10> v10{};
            constexpr Register::FieldValue<decltype(cp11)::Type,Cp11Val::v11> v11{};
        }
        }
    }
}
