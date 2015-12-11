#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Core Platform Miscellaneous Control Module
    namespace McmPlasc{    ///<Crossbar switch (AXBS) slave configuration
        using Addr = Register::Address<0xe0080008,0xffffff00,0,unsigned>;
        ///Each bit in the ASC field indicates if there is a corresponding connection to the crossbar switch's slave input port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> asc{}; 
    }
    namespace McmPlamc{    ///<Crossbar switch (AXBS) master configuration
        using Addr = Register::Address<0xe008000a,0xffffff00,0,unsigned>;
        ///Each bit in the AMC field indicates if there is a corresponding connection to the AXBS master input port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> amc{}; 
    }
    namespace McmSramap{    ///<SRAM arbitration and protection
        using Addr = Register::Address<0xe008000c,0x88ffffff,0,unsigned>;
        ///SRAM_U arbitration priority
        enum class SramuapVal {
            v00=0x00000000,     ///<Round robin
            v01=0x00000001,     ///<Special round robin (favors SRAM backoor accesses over the processor)
            v10=0x00000002,     ///<Fixed priority. Processor has highest, backdoor has lowest
            v11=0x00000003,     ///<Fixed priority. Backdoor has highest, processor has lowest
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SramuapVal> sramuap{}; 
        namespace SramuapValC{
            constexpr Register::FieldValue<decltype(sramuap)::Type,SramuapVal::v00> v00{};
            constexpr Register::FieldValue<decltype(sramuap)::Type,SramuapVal::v01> v01{};
            constexpr Register::FieldValue<decltype(sramuap)::Type,SramuapVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sramuap)::Type,SramuapVal::v11> v11{};
        }
        ///SRAM_U write protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> sramuwp{}; 
        ///SRAM_L arbitration priority
        enum class SramlapVal {
            v00=0x00000000,     ///<Round robin
            v01=0x00000001,     ///<Special round robin (favors SRAM backoor accesses over the processor)
            v10=0x00000002,     ///<Fixed priority. Processor has highest, backdoor has lowest
            v11=0x00000003,     ///<Fixed priority. Backdoor has highest, processor has lowest
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,SramlapVal> sramlap{}; 
        namespace SramlapValC{
            constexpr Register::FieldValue<decltype(sramlap)::Type,SramlapVal::v00> v00{};
            constexpr Register::FieldValue<decltype(sramlap)::Type,SramlapVal::v01> v01{};
            constexpr Register::FieldValue<decltype(sramlap)::Type,SramlapVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sramlap)::Type,SramlapVal::v11> v11{};
        }
        ///SRAM_L write protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sramlwp{}; 
    }
    namespace McmIsr{    ///<Interrupt status register
        using Addr = Register::Address<0xe0080010,0xfffffff9,0,unsigned>;
        ///Normal interrupt pending
        enum class IrqVal {
            v0=0x00000000,     ///<No pending interrupt
            v1=0x00000001,     ///<Due to the ETB counter expiring, a normal interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrqVal> irq{}; 
        namespace IrqValC{
            constexpr Register::FieldValue<decltype(irq)::Type,IrqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irq)::Type,IrqVal::v1> v1{};
        }
        ///Non-maskable interrupt pending
        enum class NmiVal {
            v0=0x00000000,     ///<No pending NMI
            v1=0x00000001,     ///<Due to the ETB counter expiring, an NMI is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NmiVal> nmi{}; 
        namespace NmiValC{
            constexpr Register::FieldValue<decltype(nmi)::Type,NmiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nmi)::Type,NmiVal::v1> v1{};
        }
    }
    namespace McmEtbcc{    ///<ETB counter control register
        using Addr = Register::Address<0xe0080014,0xffffffc0,0,unsigned>;
        ///Counter enable
        enum class CntenVal {
            v0=0x00000000,     ///<ETB counter disabled
            v1=0x00000001,     ///<ETB counter enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CntenVal> cnten{}; 
        namespace CntenValC{
            constexpr Register::FieldValue<decltype(cnten)::Type,CntenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cnten)::Type,CntenVal::v1> v1{};
        }
        ///Response type
        enum class RsptVal {
            v00=0x00000000,     ///<No response when the ETB count expires
            v01=0x00000001,     ///<Generate a normal interrupt when the ETB count expires
            v10=0x00000002,     ///<Generate an NMI when the ETB count expires
            v11=0x00000003,     ///<Generate a debug halt when the ETB count expires
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,RsptVal> rspt{}; 
        namespace RsptValC{
            constexpr Register::FieldValue<decltype(rspt)::Type,RsptVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rspt)::Type,RsptVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rspt)::Type,RsptVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rspt)::Type,RsptVal::v11> v11{};
        }
        ///Reload request
        enum class RlrqVal {
            v0=0x00000000,     ///<No effect
            v1=0x00000001,     ///<Clears pending debug halt, NMI, or IRQ interrupt requests
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RlrqVal> rlrq{}; 
        namespace RlrqValC{
            constexpr Register::FieldValue<decltype(rlrq)::Type,RlrqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rlrq)::Type,RlrqVal::v1> v1{};
        }
        ///ETM-to-TPIU disable
        enum class EtdisVal {
            v0=0x00000000,     ///<ETM-to-TPIU trace path enabled
            v1=0x00000001,     ///<ETM-to-TPIU trace path disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EtdisVal> etdis{}; 
        namespace EtdisValC{
            constexpr Register::FieldValue<decltype(etdis)::Type,EtdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(etdis)::Type,EtdisVal::v1> v1{};
        }
        ///ITM-to-TPIU disable
        enum class ItdisVal {
            v0=0x00000000,     ///<ITM-to-TPIU trace path enabled
            v1=0x00000001,     ///<ITM-to-TPIU trace path disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ItdisVal> itdis{}; 
        namespace ItdisValC{
            constexpr Register::FieldValue<decltype(itdis)::Type,ItdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(itdis)::Type,ItdisVal::v1> v1{};
        }
    }
    namespace McmEtbrl{    ///<ETB reload register
        using Addr = Register::Address<0xe0080018,0xfffff800,0,unsigned>;
        ///Byte count reload value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> reload{}; 
    }
    namespace McmEtbcnt{    ///<ETB counter value register
        using Addr = Register::Address<0xe008001c,0xfffff800,0,unsigned>;
        ///Byte count counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> counter{}; 
    }
}
