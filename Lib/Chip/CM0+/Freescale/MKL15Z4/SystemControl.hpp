#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Control Registers
    namespace ScbActlr{    ///<Auxiliary Control Register,
        using Addr = Register::Address<0xe000e008,0xffffffff,0,unsigned>;
    }
    namespace ScbCpuid{    ///<CPUID Base Register
        using Addr = Register::Address<0xe000ed00,0x000f0000,0,unsigned>;
        ///Indicates patch release: 0x0 = Patch 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> revision{}; 
        namespace RevisionValC{
        }
        ///Indicates part number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> partno{}; 
        namespace PartnoValC{
        }
        ///Indicates processor revision: 0x2 = Revision 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> variant{}; 
        namespace VariantValC{
        }
        ///Implementer code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> implementer{}; 
        namespace ImplementerValC{
        }
    }
    namespace ScbIcsr{    ///<Interrupt Control and State Register
        using Addr = Register::Address<0xe000ed04,0x61fc0fff,0,unsigned>;
        ///Exception number of the highest priority pending enabled exception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,12),Register::ReadWriteAccess,unsigned> vectpending{}; 
        namespace VectpendingValC{
        }
        ///no description available
        enum class PendstclrVal {
            v0=0x00000000,     ///<no effect
            v1=0x00000001,     ///<removes the pending state from the SysTick exception
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,PendstclrVal> pendstclr{}; 
        namespace PendstclrValC{
            constexpr Register::FieldValue<decltype(pendstclr),PendstclrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pendstclr),PendstclrVal::v1> v1{};
        }
        ///no description available
        enum class PendstsetVal {
            v0=0x00000000,     ///<write: no effect; read: SysTick exception is not pending
            v1=0x00000001,     ///<write: changes SysTick exception state to pending; read: SysTick exception is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,PendstsetVal> pendstset{}; 
        namespace PendstsetValC{
            constexpr Register::FieldValue<decltype(pendstset),PendstsetVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pendstset),PendstsetVal::v1> v1{};
        }
        ///no description available
        enum class PendsvclrVal {
            v0=0x00000000,     ///<no effect
            v1=0x00000001,     ///<removes the pending state from the PendSV exception
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,PendsvclrVal> pendsvclr{}; 
        namespace PendsvclrValC{
            constexpr Register::FieldValue<decltype(pendsvclr),PendsvclrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pendsvclr),PendsvclrVal::v1> v1{};
        }
        ///no description available
        enum class PendsvsetVal {
            v0=0x00000000,     ///<write: no effect; read: PendSV exception is not pending
            v1=0x00000001,     ///<write: changes PendSV exception state to pending; read: PendSV exception is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,PendsvsetVal> pendsvset{}; 
        namespace PendsvsetValC{
            constexpr Register::FieldValue<decltype(pendsvset),PendsvsetVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pendsvset),PendsvsetVal::v1> v1{};
        }
        ///no description available
        enum class NmipendsetVal {
            v0=0x00000000,     ///<write: no effect; read: NMI exception is not pending
            v1=0x00000001,     ///<write: changes NMI exception state to pending; read: NMI exception is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,NmipendsetVal> nmipendset{}; 
        namespace NmipendsetValC{
            constexpr Register::FieldValue<decltype(nmipendset),NmipendsetVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nmipendset),NmipendsetVal::v1> v1{};
        }
    }
    namespace ScbVtor{    ///<Vector Table Offset Register
        using Addr = Register::Address<0xe000ed08,0x0000007f,0,unsigned>;
        ///Vector table base offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> tbloff{}; 
        namespace TbloffValC{
        }
    }
    namespace ScbAircr{    ///<Application Interrupt and Reset Control Register
        using Addr = Register::Address<0xe000ed0c,0x00007ff9,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vectclractive{}; 
        namespace VectclractiveValC{
        }
        ///no description available
        enum class SysresetreqVal {
            v0=0x00000000,     ///<no system reset request
            v1=0x00000001,     ///<asserts a signal to the outer system that requests a reset
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SysresetreqVal> sysresetreq{}; 
        namespace SysresetreqValC{
            constexpr Register::FieldValue<decltype(sysresetreq),SysresetreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sysresetreq),SysresetreqVal::v1> v1{};
        }
        ///no description available
        enum class EndiannessVal {
            v0=0x00000000,     ///<Little-endian
            v1=0x00000001,     ///<Big-endian
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,EndiannessVal> endianness{}; 
        namespace EndiannessValC{
            constexpr Register::FieldValue<decltype(endianness),EndiannessVal::v0> v0{};
            constexpr Register::FieldValue<decltype(endianness),EndiannessVal::v1> v1{};
        }
        ///Register key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> vectkey{}; 
        namespace VectkeyValC{
        }
    }
    namespace ScbScr{    ///<System Control Register
        using Addr = Register::Address<0xe000ed10,0xffffffe9,0,unsigned>;
        ///no description available
        enum class SleeponexitVal {
            v0=0x00000000,     ///<do not sleep when returning to Thread mode
            v1=0x00000001,     ///<enter sleep, or deep sleep, on return from an ISR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SleeponexitVal> sleeponexit{}; 
        namespace SleeponexitValC{
            constexpr Register::FieldValue<decltype(sleeponexit),SleeponexitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sleeponexit),SleeponexitVal::v1> v1{};
        }
        ///no description available
        enum class SleepdeepVal {
            v0=0x00000000,     ///<sleep
            v1=0x00000001,     ///<deep sleep
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SleepdeepVal> sleepdeep{}; 
        namespace SleepdeepValC{
            constexpr Register::FieldValue<decltype(sleepdeep),SleepdeepVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sleepdeep),SleepdeepVal::v1> v1{};
        }
        ///no description available
        enum class SevonpendVal {
            v0=0x00000000,     ///<only enabled interrupts or events can wakeup the processor, disabled interrupts are excluded
            v1=0x00000001,     ///<enabled events and all interrupts, including disabled interrupts, can wakeup the processor
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SevonpendVal> sevonpend{}; 
        namespace SevonpendValC{
            constexpr Register::FieldValue<decltype(sevonpend),SevonpendVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sevonpend),SevonpendVal::v1> v1{};
        }
    }
    namespace ScbCcr{    ///<Configuration and Control Register
        using Addr = Register::Address<0xe000ed14,0xfffffdf7,0,unsigned>;
        ///Always reads as one, indicates that all unaligned accesses generate a HardFault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> unalignTrp{}; 
        namespace UnaligntrpValC{
        }
        ///Indicates stack alignment on exception entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stkalign{}; 
        namespace StkalignValC{
        }
    }
    namespace ScbShpr2{    ///<System Handler Priority Register 2
        using Addr = Register::Address<0xe000ed1c,0x3fffffff,0,unsigned>;
        ///Priority of system handler 11, SVCall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri11{}; 
        namespace Pri11ValC{
        }
    }
    namespace ScbShpr3{    ///<System Handler Priority Register 3
        using Addr = Register::Address<0xe000ed20,0x3f3fffff,0,unsigned>;
        ///Priority of system handler 14, PendSV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri14{}; 
        namespace Pri14ValC{
        }
        ///Priority of system handler 15, SysTick exception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri15{}; 
        namespace Pri15ValC{
        }
    }
    namespace ScbShcsr{    ///<System Handler Control and State Register
        using Addr = Register::Address<0xe000ed24,0xffff7fff,0,unsigned>;
        ///no description available
        enum class SvcallpendedVal {
            v0=0x00000000,     ///<exception is not pending
            v1=0x00000001,     ///<exception is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,SvcallpendedVal> svcallpended{}; 
        namespace SvcallpendedValC{
            constexpr Register::FieldValue<decltype(svcallpended),SvcallpendedVal::v0> v0{};
            constexpr Register::FieldValue<decltype(svcallpended),SvcallpendedVal::v1> v1{};
        }
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
            constexpr Register::FieldValue<decltype(halted),HaltedVal::v0> v0{};
            constexpr Register::FieldValue<decltype(halted),HaltedVal::v1> v1{};
        }
        ///no description available
        enum class BkptVal {
            v0=0x00000000,     ///<No current breakpoint debug event
            v1=0x00000001,     ///<At least one current breakpoint debug event
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BkptVal> bkpt{}; 
        namespace BkptValC{
            constexpr Register::FieldValue<decltype(bkpt),BkptVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkpt),BkptVal::v1> v1{};
        }
        ///no description available
        enum class DwttrapVal {
            v0=0x00000000,     ///<No current debug events generated by the DWT
            v1=0x00000001,     ///<At least one current debug event generated by the DWT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DwttrapVal> dwttrap{}; 
        namespace DwttrapValC{
            constexpr Register::FieldValue<decltype(dwttrap),DwttrapVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dwttrap),DwttrapVal::v1> v1{};
        }
        ///no description available
        enum class VcatchVal {
            v0=0x00000000,     ///<No Vector catch triggered
            v1=0x00000001,     ///<Vector catch triggered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,VcatchVal> vcatch{}; 
        namespace VcatchValC{
            constexpr Register::FieldValue<decltype(vcatch),VcatchVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vcatch),VcatchVal::v1> v1{};
        }
        ///no description available
        enum class ExternalVal {
            v0=0x00000000,     ///<No EDBGRQ debug event
            v1=0x00000001,     ///<EDBGRQ debug event
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ExternalVal> external{}; 
        namespace ExternalValC{
            constexpr Register::FieldValue<decltype(external),ExternalVal::v0> v0{};
            constexpr Register::FieldValue<decltype(external),ExternalVal::v1> v1{};
        }
    }
}
