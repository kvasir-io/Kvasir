#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Core Platform Miscellaneous Control Module
    namespace McmPlasc{    ///<Crossbar Switch (AXBS) Slave Configuration
        using Addr = Register::Address<0xe0080008,0xffffff00,0,unsigned>;
        ///Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> asc{}; 
    }
    namespace McmPlamc{    ///<Crossbar Switch (AXBS) Master Configuration
        using Addr = Register::Address<0xe008000a,0xffffff00,0,unsigned>;
        ///Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> amc{}; 
    }
    namespace McmCr{    ///<Control Register
        using Addr = Register::Address<0xe008000c,0x88ffffff,0,unsigned>;
        ///SRAM_U arbitration priority
        enum class sramuapVal {
            v00=0x00000000,     ///<Round robin
            v01=0x00000001,     ///<Special round robin (favors SRAM backoor accesses over the processor)
            v10=0x00000002,     ///<Fixed priority. Processor has highest, backdoor has lowest
            v11=0x00000003,     ///<Fixed priority. Backdoor has highest, processor has lowest
        };
        namespace sramuapValC{
            constexpr MPL::Value<sramuapVal,sramuapVal::v00> v00{};
            constexpr MPL::Value<sramuapVal,sramuapVal::v01> v01{};
            constexpr MPL::Value<sramuapVal,sramuapVal::v10> v10{};
            constexpr MPL::Value<sramuapVal,sramuapVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,sramuapVal> sramuap{}; 
        ///SRAM_U write protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> sramuwp{}; 
        ///SRAM_L arbitration priority
        enum class sramlapVal {
            v00=0x00000000,     ///<Round robin
            v01=0x00000001,     ///<Special round robin (favors SRAM backoor accesses over the processor)
            v10=0x00000002,     ///<Fixed priority. Processor has highest, backdoor has lowest
            v11=0x00000003,     ///<Fixed priority. Backdoor has highest, processor has lowest
        };
        namespace sramlapValC{
            constexpr MPL::Value<sramlapVal,sramlapVal::v00> v00{};
            constexpr MPL::Value<sramlapVal,sramlapVal::v01> v01{};
            constexpr MPL::Value<sramlapVal,sramlapVal::v10> v10{};
            constexpr MPL::Value<sramlapVal,sramlapVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,sramlapVal> sramlap{}; 
        ///SRAM_L Write Protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sramlwp{}; 
    }
    namespace McmIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xe0080010,0xfffffff1,0,unsigned>;
        ///Normal Interrupt Pending
        enum class irqVal {
            v0=0x00000000,     ///<No pending interrupt
            v1=0x00000001,     ///<Due to the ETB counter expiring, a normal interrupt is pending
        };
        namespace irqValC{
            constexpr MPL::Value<irqVal,irqVal::v0> v0{};
            constexpr MPL::Value<irqVal,irqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,irqVal> irq{}; 
        ///Non-maskable Interrupt Pending
        enum class nmiVal {
            v0=0x00000000,     ///<No pending NMI
            v1=0x00000001,     ///<Due to the ETB counter expiring, an NMI is pending
        };
        namespace nmiValC{
            constexpr MPL::Value<nmiVal,nmiVal::v0> v0{};
            constexpr MPL::Value<nmiVal,nmiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,nmiVal> nmi{}; 
        ///Debug Halt Request Indicator
        enum class dhreqVal {
            v0=0x00000000,     ///<No debug halt request
            v1=0x00000001,     ///<Debug halt request initiated
        };
        namespace dhreqValC{
            constexpr MPL::Value<dhreqVal,dhreqVal::v0> v0{};
            constexpr MPL::Value<dhreqVal,dhreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dhreqVal> dhreq{}; 
    }
    namespace McmEtbcc{    ///<ETB Counter Control register
        using Addr = Register::Address<0xe0080014,0xffffffc0,0,unsigned>;
        ///Counter Enable
        enum class cntenVal {
            v0=0x00000000,     ///<ETB counter disabled
            v1=0x00000001,     ///<ETB counter enabled
        };
        namespace cntenValC{
            constexpr MPL::Value<cntenVal,cntenVal::v0> v0{};
            constexpr MPL::Value<cntenVal,cntenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cntenVal> cnten{}; 
        ///Response Type
        enum class rsptVal {
            v00=0x00000000,     ///<No response when the ETB count expires
            v01=0x00000001,     ///<Generate a normal interrupt when the ETB count expires
            v10=0x00000002,     ///<Generate an NMI when the ETB count expires
            v11=0x00000003,     ///<Generate a debug halt when the ETB count expires
        };
        namespace rsptValC{
            constexpr MPL::Value<rsptVal,rsptVal::v00> v00{};
            constexpr MPL::Value<rsptVal,rsptVal::v01> v01{};
            constexpr MPL::Value<rsptVal,rsptVal::v10> v10{};
            constexpr MPL::Value<rsptVal,rsptVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,rsptVal> rspt{}; 
        ///Reload Request
        enum class rlrqVal {
            v0=0x00000000,     ///<No effect
            v1=0x00000001,     ///<Clears pending debug halt, NMI, or IRQ interrupt requests
        };
        namespace rlrqValC{
            constexpr MPL::Value<rlrqVal,rlrqVal::v0> v0{};
            constexpr MPL::Value<rlrqVal,rlrqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rlrqVal> rlrq{}; 
        ///ETM-To-TPIU Disable
        enum class etdisVal {
            v0=0x00000000,     ///<ETM-to-TPIU trace path enabled
            v1=0x00000001,     ///<ETM-to-TPIU trace path disabled
        };
        namespace etdisValC{
            constexpr MPL::Value<etdisVal,etdisVal::v0> v0{};
            constexpr MPL::Value<etdisVal,etdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,etdisVal> etdis{}; 
        ///ITM-To-TPIU Disable
        enum class itdisVal {
            v0=0x00000000,     ///<ITM-to-TPIU trace path enabled
            v1=0x00000001,     ///<ITM-to-TPIU trace path disabled
        };
        namespace itdisValC{
            constexpr MPL::Value<itdisVal,itdisVal::v0> v0{};
            constexpr MPL::Value<itdisVal,itdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,itdisVal> itdis{}; 
    }
    namespace McmEtbrl{    ///<ETB Reload register
        using Addr = Register::Address<0xe0080018,0xfffff800,0,unsigned>;
        ///Byte Count Reload Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> reload{}; 
    }
    namespace McmEtbcnt{    ///<ETB Counter Value register
        using Addr = Register::Address<0xe008001c,0xfffff800,0,unsigned>;
        ///Byte Count Counter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace McmPid{    ///<Process ID register
        using Addr = Register::Address<0xe0080030,0xffffff00,0,unsigned>;
        ///M0_PID And M1_PID For MPU
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pid{}; 
    }
}
