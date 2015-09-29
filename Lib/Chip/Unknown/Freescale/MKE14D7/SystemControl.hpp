#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Control Registers
    namespace ScbActlr{    ///<Auxiliary Control Register,
        using Addr = Register::Address<0xe000e008,0xfffffff8,0,unsigned>;
        ///Disables interruption of multi-cycle instructions.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dismcycint{}; 
        ///Disables write buffer use during default memory map accesses.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disdefwbuf{}; 
        ///Disables folding of IT instructions.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> disfold{}; 
    }
    namespace ScbCpuid{    ///<CPUID Base Register
        using Addr = Register::Address<0xe000ed00,0x000f0000,0,unsigned>;
        ///Indicates patch release: 0x0 = Patch 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> revision{}; 
        ///Indicates part number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> partno{}; 
        ///Indicates processor revision: 0x2 = Revision 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> variant{}; 
        ///Implementer code
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> implementer{}; 
    }
    namespace ScbIcsr{    ///<Interrupt Control and State Register
        using Addr = Register::Address<0xe000ed04,0x613c0600,0,unsigned>;
        ///Active exception number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> vectactive{}; 
        ///no description available
        enum class rettobaseVal {
            v0=0x00000000,     ///<there are preempted active exceptions to execute
            v1=0x00000001,     ///<there are no active exceptions, or the currently-executing exception is the only active exception
        };
        namespace rettobaseValC{
            constexpr MPL::Value<rettobaseVal,rettobaseVal::v0> v0{};
            constexpr MPL::Value<rettobaseVal,rettobaseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,rettobaseVal> rettobase{}; 
        ///Exception number of the highest priority pending enabled exception
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,12),Register::ReadWriteAccess,unsigned> vectpending{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> isrpending{}; 
        ///no description available
        enum class isrpreemptVal {
            v0=0x00000000,     ///<Will not service
            v1=0x00000001,     ///<Will service a pending exception
        };
        namespace isrpreemptValC{
            constexpr MPL::Value<isrpreemptVal,isrpreemptVal::v0> v0{};
            constexpr MPL::Value<isrpreemptVal,isrpreemptVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,isrpreemptVal> isrpreempt{}; 
        ///no description available
        enum class pendstclrVal {
            v0=0x00000000,     ///<no effect
            v1=0x00000001,     ///<removes the pending state from the SysTick exception
        };
        namespace pendstclrValC{
            constexpr MPL::Value<pendstclrVal,pendstclrVal::v0> v0{};
            constexpr MPL::Value<pendstclrVal,pendstclrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pendstclrVal> pendstclr{}; 
        ///no description available
        enum class pendstsetVal {
            v0=0x00000000,     ///<write: no effect; read: SysTick exception is not pending
            v1=0x00000001,     ///<write: changes SysTick exception state to pending; read: SysTick exception is pending
        };
        namespace pendstsetValC{
            constexpr MPL::Value<pendstsetVal,pendstsetVal::v0> v0{};
            constexpr MPL::Value<pendstsetVal,pendstsetVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,pendstsetVal> pendstset{}; 
        ///no description available
        enum class pendsvclrVal {
            v0=0x00000000,     ///<no effect
            v1=0x00000001,     ///<removes the pending state from the PendSV exception
        };
        namespace pendsvclrValC{
            constexpr MPL::Value<pendsvclrVal,pendsvclrVal::v0> v0{};
            constexpr MPL::Value<pendsvclrVal,pendsvclrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pendsvclrVal> pendsvclr{}; 
        ///no description available
        enum class pendsvsetVal {
            v0=0x00000000,     ///<write: no effect; read: PendSV exception is not pending
            v1=0x00000001,     ///<write: changes PendSV exception state to pending; read: PendSV exception is pending
        };
        namespace pendsvsetValC{
            constexpr MPL::Value<pendsvsetVal,pendsvsetVal::v0> v0{};
            constexpr MPL::Value<pendsvsetVal,pendsvsetVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,pendsvsetVal> pendsvset{}; 
        ///no description available
        enum class nmipendsetVal {
            v0=0x00000000,     ///<write: no effect; read: NMI exception is not pending
            v1=0x00000001,     ///<write: changes NMI exception state to pending; read: NMI exception is pending
        };
        namespace nmipendsetValC{
            constexpr MPL::Value<nmipendsetVal,nmipendsetVal::v0> v0{};
            constexpr MPL::Value<nmipendsetVal,nmipendsetVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,nmipendsetVal> nmipendset{}; 
    }
    namespace ScbVtor{    ///<Vector Table Offset Register
        using Addr = Register::Address<0xe000ed08,0x0000007f,0,unsigned>;
        ///Vector table base offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> tbloff{}; 
    }
    namespace ScbAircr{    ///<Application Interrupt and Reset Control Register
        using Addr = Register::Address<0xe000ed0c,0x000078f8,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vectreset{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vectclractive{}; 
        ///no description available
        enum class sysresetreqVal {
            v0=0x00000000,     ///<no system reset request
            v1=0x00000001,     ///<asserts a signal to the outer system that requests a reset
        };
        namespace sysresetreqValC{
            constexpr MPL::Value<sysresetreqVal,sysresetreqVal::v0> v0{};
            constexpr MPL::Value<sysresetreqVal,sysresetreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sysresetreqVal> sysresetreq{}; 
        ///Interrupt priority grouping field. This field determines the split of group priority from subpriority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> prigroup{}; 
        ///no description available
        enum class endiannessVal {
            v0=0x00000000,     ///<Little-endian
            v1=0x00000001,     ///<Big-endian
        };
        namespace endiannessValC{
            constexpr MPL::Value<endiannessVal,endiannessVal::v0> v0{};
            constexpr MPL::Value<endiannessVal,endiannessVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,endiannessVal> endianness{}; 
        ///Register key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> vectkey{}; 
    }
    namespace ScbScr{    ///<System Control Register
        using Addr = Register::Address<0xe000ed10,0xffffffe9,0,unsigned>;
        ///no description available
        enum class sleeponexitVal {
            v0=0x00000000,     ///<o not sleep when returning to Thread mode
            v1=0x00000001,     ///<enter sleep, or deep sleep, on return from an ISR
        };
        namespace sleeponexitValC{
            constexpr MPL::Value<sleeponexitVal,sleeponexitVal::v0> v0{};
            constexpr MPL::Value<sleeponexitVal,sleeponexitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,sleeponexitVal> sleeponexit{}; 
        ///no description available
        enum class sleepdeepVal {
            v0=0x00000000,     ///<sleep
            v1=0x00000001,     ///<deep sleep
        };
        namespace sleepdeepValC{
            constexpr MPL::Value<sleepdeepVal,sleepdeepVal::v0> v0{};
            constexpr MPL::Value<sleepdeepVal,sleepdeepVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sleepdeepVal> sleepdeep{}; 
        ///no description available
        enum class sevonpendVal {
            v0=0x00000000,     ///<only enabled interrupts or events can wakeup the processor, disabled interrupts are excluded
            v1=0x00000001,     ///<enabled events and all interrupts, including disabled interrupts, can wakeup the processor
        };
        namespace sevonpendValC{
            constexpr MPL::Value<sevonpendVal,sevonpendVal::v0> v0{};
            constexpr MPL::Value<sevonpendVal,sevonpendVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,sevonpendVal> sevonpend{}; 
    }
    namespace ScbCcr{    ///<Configuration and Control Register
        using Addr = Register::Address<0xe000ed14,0xfffffce4,0,unsigned>;
        ///no description available
        enum class nonbasethrdenaVal {
            v0=0x00000000,     ///<processor can enter Thread mode only when no exception is active
            v1=0x00000001,     ///<processor can enter Thread mode from any level under the control of an EXC_RETURN value
        };
        namespace nonbasethrdenaValC{
            constexpr MPL::Value<nonbasethrdenaVal,nonbasethrdenaVal::v0> v0{};
            constexpr MPL::Value<nonbasethrdenaVal,nonbasethrdenaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,nonbasethrdenaVal> nonbasethrdena{}; 
        ///Enables unprivileged software access to the STIR
        enum class usersetmpendVal {
            v0=0x00000000,     ///<disable
            v1=0x00000001,     ///<enable
        };
        namespace usersetmpendValC{
            constexpr MPL::Value<usersetmpendVal,usersetmpendVal::v0> v0{};
            constexpr MPL::Value<usersetmpendVal,usersetmpendVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,usersetmpendVal> usersetmpend{}; 
        ///Enables unaligned access traps
        enum class unalignTrpVal {
            v0=0x00000000,     ///<do not trap unaligned halfword and word accesses
            v1=0x00000001,     ///<trap unaligned halfword and word accesses
        };
        namespace unalignTrpValC{
            constexpr MPL::Value<unalignTrpVal,unalignTrpVal::v0> v0{};
            constexpr MPL::Value<unalignTrpVal,unalignTrpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unalignTrpVal> unalignTrp{}; 
        ///Enables faulting or halting when the processor executes an SDIV or UDIV instruction with a divisor of 0
        enum class div0TrpVal {
            v0=0x00000000,     ///<do not trap divide by 0
            v1=0x00000001,     ///<trap divide by 0
        };
        namespace div0TrpValC{
            constexpr MPL::Value<div0TrpVal,div0TrpVal::v0> v0{};
            constexpr MPL::Value<div0TrpVal,div0TrpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,div0TrpVal> div0Trp{}; 
        ///Enables handlers with priority -1 or -2 to ignore data BusFaults caused by load and store instructions.
        enum class bfhfnmignVal {
            v0=0x00000000,     ///<data bus faults caused by load and store instructions cause a lock-up
            v1=0x00000001,     ///<handlers running at priority -1 and -2 ignore data bus faults caused by load and store instructions
        };
        namespace bfhfnmignValC{
            constexpr MPL::Value<bfhfnmignVal,bfhfnmignVal::v0> v0{};
            constexpr MPL::Value<bfhfnmignVal,bfhfnmignVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,bfhfnmignVal> bfhfnmign{}; 
        ///Indicates stack alignment on exception entry
        enum class stkalignVal {
            v0=0x00000000,     ///<4-byte aligned
            v1=0x00000001,     ///<8-byte aligned
        };
        namespace stkalignValC{
            constexpr MPL::Value<stkalignVal,stkalignVal::v0> v0{};
            constexpr MPL::Value<stkalignVal,stkalignVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,stkalignVal> stkalign{}; 
    }
    namespace ScbShpr1{    ///<System Handler Priority Register 1
        using Addr = Register::Address<0xe000ed18,0xff000000,0,unsigned>;
        ///Priority of system handler 4, MemManage
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri4{}; 
        ///Priority of system handler 5, BusFault
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pri5{}; 
        ///Priority of system handler 6, UsageFault
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri6{}; 
    }
    namespace ScbShpr2{    ///<System Handler Priority Register 2
        using Addr = Register::Address<0xe000ed1c,0x00ffffff,0,unsigned>;
        ///Priority of system handler 11, SVCall
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri11{}; 
    }
    namespace ScbShpr3{    ///<System Handler Priority Register 3
        using Addr = Register::Address<0xe000ed20,0x0000ffff,0,unsigned>;
        ///Priority of system handler 14, PendSV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri14{}; 
        ///Priority of system handler 15, SysTick exception
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri15{}; 
    }
    namespace ScbShcsr{    ///<System Handler Control and State Register
        using Addr = Register::Address<0xe000ed24,0xfff80274,0,unsigned>;
        ///no description available
        enum class memfaultactVal {
            v0=0x00000000,     ///<exception is not active
            v1=0x00000001,     ///<exception is active
        };
        namespace memfaultactValC{
            constexpr MPL::Value<memfaultactVal,memfaultactVal::v0> v0{};
            constexpr MPL::Value<memfaultactVal,memfaultactVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,memfaultactVal> memfaultact{}; 
        ///no description available
        enum class busfaultactVal {
            v0=0x00000000,     ///<exception is not active
            v1=0x00000001,     ///<exception is active
        };
        namespace busfaultactValC{
            constexpr MPL::Value<busfaultactVal,busfaultactVal::v0> v0{};
            constexpr MPL::Value<busfaultactVal,busfaultactVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,busfaultactVal> busfaultact{}; 
        ///no description available
        enum class usgfaultactVal {
            v0=0x00000000,     ///<exception is not active
            v1=0x00000001,     ///<exception is active
        };
        namespace usgfaultactValC{
            constexpr MPL::Value<usgfaultactVal,usgfaultactVal::v0> v0{};
            constexpr MPL::Value<usgfaultactVal,usgfaultactVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,usgfaultactVal> usgfaultact{}; 
        ///no description available
        enum class svcallactVal {
            v0=0x00000000,     ///<exception is not active
            v1=0x00000001,     ///<exception is active
        };
        namespace svcallactValC{
            constexpr MPL::Value<svcallactVal,svcallactVal::v0> v0{};
            constexpr MPL::Value<svcallactVal,svcallactVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,svcallactVal> svcallact{}; 
        ///no description available
        enum class monitoractVal {
            v0=0x00000000,     ///<exception is not active
            v1=0x00000001,     ///<exception is active
        };
        namespace monitoractValC{
            constexpr MPL::Value<monitoractVal,monitoractVal::v0> v0{};
            constexpr MPL::Value<monitoractVal,monitoractVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,monitoractVal> monitoract{}; 
        ///no description available
        enum class pendsvactVal {
            v0=0x00000000,     ///<exception is not active
            v1=0x00000001,     ///<exception is active
        };
        namespace pendsvactValC{
            constexpr MPL::Value<pendsvactVal,pendsvactVal::v0> v0{};
            constexpr MPL::Value<pendsvactVal,pendsvactVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pendsvactVal> pendsvact{}; 
        ///no description available
        enum class systickactVal {
            v0=0x00000000,     ///<exception is not active
            v1=0x00000001,     ///<exception is active
        };
        namespace systickactValC{
            constexpr MPL::Value<systickactVal,systickactVal::v0> v0{};
            constexpr MPL::Value<systickactVal,systickactVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,systickactVal> systickact{}; 
        ///no description available
        enum class usgfaultpendedVal {
            v0=0x00000000,     ///<exception is not pending
            v1=0x00000001,     ///<exception is pending
        };
        namespace usgfaultpendedValC{
            constexpr MPL::Value<usgfaultpendedVal,usgfaultpendedVal::v0> v0{};
            constexpr MPL::Value<usgfaultpendedVal,usgfaultpendedVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,usgfaultpendedVal> usgfaultpended{}; 
        ///no description available
        enum class memfaultpendedVal {
            v0=0x00000000,     ///<exception is not pending
            v1=0x00000001,     ///<exception is pending
        };
        namespace memfaultpendedValC{
            constexpr MPL::Value<memfaultpendedVal,memfaultpendedVal::v0> v0{};
            constexpr MPL::Value<memfaultpendedVal,memfaultpendedVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,memfaultpendedVal> memfaultpended{}; 
        ///no description available
        enum class busfaultpendedVal {
            v0=0x00000000,     ///<exception is not pending
            v1=0x00000001,     ///<exception is pending
        };
        namespace busfaultpendedValC{
            constexpr MPL::Value<busfaultpendedVal,busfaultpendedVal::v0> v0{};
            constexpr MPL::Value<busfaultpendedVal,busfaultpendedVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,busfaultpendedVal> busfaultpended{}; 
        ///no description available
        enum class svcallpendedVal {
            v0=0x00000000,     ///<exception is not pending
            v1=0x00000001,     ///<exception is pending
        };
        namespace svcallpendedValC{
            constexpr MPL::Value<svcallpendedVal,svcallpendedVal::v0> v0{};
            constexpr MPL::Value<svcallpendedVal,svcallpendedVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,svcallpendedVal> svcallpended{}; 
        ///no description available
        enum class memfaultenaVal {
            v0=0x00000000,     ///<disable the exception
            v1=0x00000001,     ///<enable the exception
        };
        namespace memfaultenaValC{
            constexpr MPL::Value<memfaultenaVal,memfaultenaVal::v0> v0{};
            constexpr MPL::Value<memfaultenaVal,memfaultenaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,memfaultenaVal> memfaultena{}; 
        ///no description available
        enum class busfaultenaVal {
            v0=0x00000000,     ///<disable the exception
            v1=0x00000001,     ///<enable the exception
        };
        namespace busfaultenaValC{
            constexpr MPL::Value<busfaultenaVal,busfaultenaVal::v0> v0{};
            constexpr MPL::Value<busfaultenaVal,busfaultenaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,busfaultenaVal> busfaultena{}; 
        ///no description available
        enum class usgfaultenaVal {
            v0=0x00000000,     ///<disable the exception
            v1=0x00000001,     ///<enable the exception
        };
        namespace usgfaultenaValC{
            constexpr MPL::Value<usgfaultenaVal,usgfaultenaVal::v0> v0{};
            constexpr MPL::Value<usgfaultenaVal,usgfaultenaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,usgfaultenaVal> usgfaultena{}; 
    }
    namespace ScbCfsr{    ///<Configurable Fault Status Registers
        using Addr = Register::Address<0xe000ed28,0xfcf04044,0,unsigned>;
        ///no description available
        enum class iaccviolVal {
            v0=0x00000000,     ///<no instruction access violation fault
            v1=0x00000001,     ///<the processor attempted an instruction fetch from a location that does not permit execution
        };
        namespace iaccviolValC{
            constexpr MPL::Value<iaccviolVal,iaccviolVal::v0> v0{};
            constexpr MPL::Value<iaccviolVal,iaccviolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,iaccviolVal> iaccviol{}; 
        ///no description available
        enum class daccviolVal {
            v0=0x00000000,     ///<no data access violation fault
            v1=0x00000001,     ///<the processor attempted a load or store at a location that does not permit the operation
        };
        namespace daccviolValC{
            constexpr MPL::Value<daccviolVal,daccviolVal::v0> v0{};
            constexpr MPL::Value<daccviolVal,daccviolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,daccviolVal> daccviol{}; 
        ///no description available
        enum class munstkerrVal {
            v0=0x00000000,     ///<no unstacking fault
            v1=0x00000001,     ///<unstack for an exception return has caused one or more access violations
        };
        namespace munstkerrValC{
            constexpr MPL::Value<munstkerrVal,munstkerrVal::v0> v0{};
            constexpr MPL::Value<munstkerrVal,munstkerrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,munstkerrVal> munstkerr{}; 
        ///no description available
        enum class mstkerrVal {
            v0=0x00000000,     ///<no stacking fault
            v1=0x00000001,     ///<stacking for an exception entry has caused one or more access violations
        };
        namespace mstkerrValC{
            constexpr MPL::Value<mstkerrVal,mstkerrVal::v0> v0{};
            constexpr MPL::Value<mstkerrVal,mstkerrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mstkerrVal> mstkerr{}; 
        ///no description available
        enum class mlsperrVal {
            v0=0x00000000,     ///<No MemManage fault occurred during floating-point lazy state preservation
            v1=0x00000001,     ///<A MemManage fault occurred during floating-point lazy state preservation
        };
        namespace mlsperrValC{
            constexpr MPL::Value<mlsperrVal,mlsperrVal::v0> v0{};
            constexpr MPL::Value<mlsperrVal,mlsperrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,mlsperrVal> mlsperr{}; 
        ///no description available
        enum class mmarvalidVal {
            v0=0x00000000,     ///<value in MMAR is not a valid fault address
            v1=0x00000001,     ///<MMAR holds a valid fault address
        };
        namespace mmarvalidValC{
            constexpr MPL::Value<mmarvalidVal,mmarvalidVal::v0> v0{};
            constexpr MPL::Value<mmarvalidVal,mmarvalidVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,mmarvalidVal> mmarvalid{}; 
        ///no description available
        enum class ibuserrVal {
            v0=0x00000000,     ///<no instruction bus error
            v1=0x00000001,     ///<instruction bus error
        };
        namespace ibuserrValC{
            constexpr MPL::Value<ibuserrVal,ibuserrVal::v0> v0{};
            constexpr MPL::Value<ibuserrVal,ibuserrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ibuserrVal> ibuserr{}; 
        ///no description available
        enum class preciserrVal {
            v0=0x00000000,     ///<no precise data bus error
            v1=0x00000001,     ///<a data bus error has occurred, and the PC value stacked for the exception return points to the instruction that caused the fault
        };
        namespace preciserrValC{
            constexpr MPL::Value<preciserrVal,preciserrVal::v0> v0{};
            constexpr MPL::Value<preciserrVal,preciserrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,preciserrVal> preciserr{}; 
        ///no description available
        enum class impreciserrVal {
            v0=0x00000000,     ///<no imprecise data bus error
            v1=0x00000001,     ///<a data bus error has occurred, but the return address in the stack frame is not related to the instruction that caused the error
        };
        namespace impreciserrValC{
            constexpr MPL::Value<impreciserrVal,impreciserrVal::v0> v0{};
            constexpr MPL::Value<impreciserrVal,impreciserrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,impreciserrVal> impreciserr{}; 
        ///no description available
        enum class unstkerrVal {
            v0=0x00000000,     ///<no unstacking fault
            v1=0x00000001,     ///<unstack for an exception return has caused one or more BusFaults
        };
        namespace unstkerrValC{
            constexpr MPL::Value<unstkerrVal,unstkerrVal::v0> v0{};
            constexpr MPL::Value<unstkerrVal,unstkerrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unstkerrVal> unstkerr{}; 
        ///no description available
        enum class stkerrVal {
            v0=0x00000000,     ///<no stacking fault
            v1=0x00000001,     ///<stacking for an exception entry has caused one or more BusFaults
        };
        namespace stkerrValC{
            constexpr MPL::Value<stkerrVal,stkerrVal::v0> v0{};
            constexpr MPL::Value<stkerrVal,stkerrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,stkerrVal> stkerr{}; 
        ///no description available
        enum class lsperrVal {
            v0=0x00000000,     ///<No bus fault occurred during floating-point lazy state preservation
            v1=0x00000001,     ///<A bus fault occurred during floating-point lazy state preservation
        };
        namespace lsperrValC{
            constexpr MPL::Value<lsperrVal,lsperrVal::v0> v0{};
            constexpr MPL::Value<lsperrVal,lsperrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,lsperrVal> lsperr{}; 
        ///no description available
        enum class bfarvalidVal {
            v0=0x00000000,     ///<value in BFAR is not a valid fault address
            v1=0x00000001,     ///<BFAR holds a valid fault address
        };
        namespace bfarvalidValC{
            constexpr MPL::Value<bfarvalidVal,bfarvalidVal::v0> v0{};
            constexpr MPL::Value<bfarvalidVal,bfarvalidVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,bfarvalidVal> bfarvalid{}; 
        ///no description available
        enum class undefinstrVal {
            v0=0x00000000,     ///<no undefined instruction UsageFault
            v1=0x00000001,     ///<the processor has attempted to execute an undefined instruction
        };
        namespace undefinstrValC{
            constexpr MPL::Value<undefinstrVal,undefinstrVal::v0> v0{};
            constexpr MPL::Value<undefinstrVal,undefinstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,undefinstrVal> undefinstr{}; 
        ///no description available
        enum class invstateVal {
            v0=0x00000000,     ///<no invalid state UsageFault
            v1=0x00000001,     ///<the processor has attempted to execute an instruction that makes illegal use of the EPSR
        };
        namespace invstateValC{
            constexpr MPL::Value<invstateVal,invstateVal::v0> v0{};
            constexpr MPL::Value<invstateVal,invstateVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,invstateVal> invstate{}; 
        ///no description available
        enum class invpcVal {
            v0=0x00000000,     ///<no invalid PC load UsageFault
            v1=0x00000001,     ///<the processor has attempted an illegal load of EXC_RETURN to the PC
        };
        namespace invpcValC{
            constexpr MPL::Value<invpcVal,invpcVal::v0> v0{};
            constexpr MPL::Value<invpcVal,invpcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,invpcVal> invpc{}; 
        ///no description available
        enum class nocpVal {
            v0=0x00000000,     ///<no UsageFault caused by attempting to access a coprocessor
            v1=0x00000001,     ///<the processor has attempted to access a coprocessor
        };
        namespace nocpValC{
            constexpr MPL::Value<nocpVal,nocpVal::v0> v0{};
            constexpr MPL::Value<nocpVal,nocpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,nocpVal> nocp{}; 
        ///no description available
        enum class unalignedVal {
            v0=0x00000000,     ///<no unaligned access fault, or unaligned access trapping not enabled
            v1=0x00000001,     ///<the processor has made an unaligned memory access
        };
        namespace unalignedValC{
            constexpr MPL::Value<unalignedVal,unalignedVal::v0> v0{};
            constexpr MPL::Value<unalignedVal,unalignedVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unalignedVal> unaligned{}; 
        ///no description available
        enum class divbyzeroVal {
            v0=0x00000000,     ///<no divide by zero fault, or divide by zero trapping not enabled
            v1=0x00000001,     ///<the processor has executed an SDIV or UDIV instruction with a divisor of 0
        };
        namespace divbyzeroValC{
            constexpr MPL::Value<divbyzeroVal,divbyzeroVal::v0> v0{};
            constexpr MPL::Value<divbyzeroVal,divbyzeroVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,divbyzeroVal> divbyzero{}; 
    }
    namespace ScbHfsr{    ///<HardFault Status register
        using Addr = Register::Address<0xe000ed2c,0x3ffffffd,0,unsigned>;
        ///no description available
        enum class vecttblVal {
            v0=0x00000000,     ///<no BusFault on vector table read
            v1=0x00000001,     ///<BusFault on vector table read
        };
        namespace vecttblValC{
            constexpr MPL::Value<vecttblVal,vecttblVal::v0> v0{};
            constexpr MPL::Value<vecttblVal,vecttblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,vecttblVal> vecttbl{}; 
        ///no description available
        enum class forcedVal {
            v0=0x00000000,     ///<no forced HardFault
            v1=0x00000001,     ///<forced HardFault
        };
        namespace forcedValC{
            constexpr MPL::Value<forcedVal,forcedVal::v0> v0{};
            constexpr MPL::Value<forcedVal,forcedVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,forcedVal> forced{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> debugevt{}; 
    }
    namespace ScbDfsr{    ///<Debug Fault Status Register
        using Addr = Register::Address<0xe000ed30,0xffffffe0,0,unsigned>;
        ///no description available
        enum class haltedVal {
            v0=0x00000000,     ///<No active halt request debug event
            v1=0x00000001,     ///<Halt request debug event active
        };
        namespace haltedValC{
            constexpr MPL::Value<haltedVal,haltedVal::v0> v0{};
            constexpr MPL::Value<haltedVal,haltedVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,haltedVal> halted{}; 
        ///no description available
        enum class bkptVal {
            v0=0x00000000,     ///<No current breakpoint debug event
            v1=0x00000001,     ///<At least one current breakpoint debug event
        };
        namespace bkptValC{
            constexpr MPL::Value<bkptVal,bkptVal::v0> v0{};
            constexpr MPL::Value<bkptVal,bkptVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bkptVal> bkpt{}; 
        ///no description available
        enum class dwttrapVal {
            v0=0x00000000,     ///<No current debug events generated by the DWT
            v1=0x00000001,     ///<At least one current debug event generated by the DWT
        };
        namespace dwttrapValC{
            constexpr MPL::Value<dwttrapVal,dwttrapVal::v0> v0{};
            constexpr MPL::Value<dwttrapVal,dwttrapVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,dwttrapVal> dwttrap{}; 
        ///no description available
        enum class vcatchVal {
            v0=0x00000000,     ///<No Vector catch triggered
            v1=0x00000001,     ///<Vector catch triggered
        };
        namespace vcatchValC{
            constexpr MPL::Value<vcatchVal,vcatchVal::v0> v0{};
            constexpr MPL::Value<vcatchVal,vcatchVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,vcatchVal> vcatch{}; 
        ///no description available
        enum class externalVal {
            v0=0x00000000,     ///<No EDBGRQ debug event
            v1=0x00000001,     ///<EDBGRQ debug event
        };
        namespace externalValC{
            constexpr MPL::Value<externalVal,externalVal::v0> v0{};
            constexpr MPL::Value<externalVal,externalVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,externalVal> external{}; 
    }
    namespace ScbMmfar{    ///<MemManage Address Register
        using Addr = Register::Address<0xe000ed34,0x00000000,0,unsigned>;
        ///Address of MemManage fault location
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace ScbBfar{    ///<BusFault Address Register
        using Addr = Register::Address<0xe000ed38,0x00000000,0,unsigned>;
        ///Address of the BusFault location
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace ScbAfsr{    ///<Auxiliary Fault Status Register
        using Addr = Register::Address<0xe000ed3c,0x00000000,0,unsigned>;
        ///Latched version of the AUXFAULT inputs
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> auxfault{}; 
    }
}
