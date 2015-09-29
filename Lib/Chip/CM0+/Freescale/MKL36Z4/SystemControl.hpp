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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> revision{}; 
        ///Indicates part number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> partno{}; 
        ///Indicates processor revision: 0x2 = Revision 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> variant{}; 
        ///Implementer code
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> implementer{}; 
    }
    namespace ScbIcsr{    ///<Interrupt Control and State Register
        using Addr = Register::Address<0xe000ed04,0x61fc0fff,0,unsigned>;
        ///Exception number of the highest priority pending enabled exception
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,12),Register::ReadWriteAccess,unsigned> vectpending{}; 
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
        using Addr = Register::Address<0xe000ed0c,0x00007ff9,0,unsigned>;
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
            v0=0x00000000,     ///<do not sleep when returning to Thread mode
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
        using Addr = Register::Address<0xe000ed14,0xfffffdf7,0,unsigned>;
        ///Always reads as one, indicates that all unaligned accesses generate a HardFault
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> unalignTrp{}; 
        ///Indicates stack alignment on exception entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stkalign{}; 
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
        using Addr = Register::Address<0xe000ed24,0xffff7fff,0,unsigned>;
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
}
