#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Core Platform Miscellaneous Control Module
    namespace McmPlasc{    ///<Crossbar Switch (AXBS) Slave Configuration
        using Addr = Register::Address<0xe0080008,0xffffff00,0,unsigned>;
        ///Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> asc{}; 
        namespace AscValC{
        }
    }
    namespace McmPlamc{    ///<Crossbar Switch (AXBS) Master Configuration
        using Addr = Register::Address<0xe008000a,0xffffff00,0,unsigned>;
        ///Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> amc{}; 
        namespace AmcValC{
        }
    }
    namespace McmCr{    ///<Control Register
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
            constexpr Register::FieldValue<decltype(sramuap),SramuapVal::v00> v00{};
            constexpr Register::FieldValue<decltype(sramuap),SramuapVal::v01> v01{};
            constexpr Register::FieldValue<decltype(sramuap),SramuapVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sramuap),SramuapVal::v11> v11{};
        }
        ///SRAM_U write protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> sramuwp{}; 
        namespace SramuwpValC{
        }
        ///SRAM_L arbitration priority
        enum class SramlapVal {
            v00=0x00000000,     ///<Round robin
            v01=0x00000001,     ///<Special round robin (favors SRAM backoor accesses over the processor)
            v10=0x00000002,     ///<Fixed priority. Processor has highest, backdoor has lowest
            v11=0x00000003,     ///<Fixed priority. Backdoor has highest, processor has lowest
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,SramlapVal> sramlap{}; 
        namespace SramlapValC{
            constexpr Register::FieldValue<decltype(sramlap),SramlapVal::v00> v00{};
            constexpr Register::FieldValue<decltype(sramlap),SramlapVal::v01> v01{};
            constexpr Register::FieldValue<decltype(sramlap),SramlapVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sramlap),SramlapVal::v11> v11{};
        }
        ///SRAM_L Write Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sramlwp{}; 
        namespace SramlwpValC{
        }
    }
    namespace McmIscr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xe0080010,0x60ff60f1,0,unsigned>;
        ///Normal Interrupt Pending
        enum class IrqVal {
            v0=0x00000000,     ///<No pending interrupt
            v1=0x00000001,     ///<Due to the ETB counter expiring, a normal interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrqVal> irq{}; 
        namespace IrqValC{
            constexpr Register::FieldValue<decltype(irq),IrqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irq),IrqVal::v1> v1{};
        }
        ///Non-maskable Interrupt Pending
        enum class NmiVal {
            v0=0x00000000,     ///<No pending NMI
            v1=0x00000001,     ///<Due to the ETB counter expiring, an NMI is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NmiVal> nmi{}; 
        namespace NmiValC{
            constexpr Register::FieldValue<decltype(nmi),NmiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nmi),NmiVal::v1> v1{};
        }
        ///Debug Halt Request Indicator
        enum class DhreqVal {
            v0=0x00000000,     ///<No debug halt request
            v1=0x00000001,     ///<Debug halt request initiated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DhreqVal> dhreq{}; 
        namespace DhreqValC{
            constexpr Register::FieldValue<decltype(dhreq),DhreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dhreq),DhreqVal::v1> v1{};
        }
        ///FPU invalid operation interrupt status
        enum class FiocVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiocVal> fioc{}; 
        namespace FiocValC{
            constexpr Register::FieldValue<decltype(fioc),FiocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fioc),FiocVal::v1> v1{};
        }
        ///FPU divide-by-zero interrupt status
        enum class FdzcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,FdzcVal> fdzc{}; 
        namespace FdzcValC{
            constexpr Register::FieldValue<decltype(fdzc),FdzcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fdzc),FdzcVal::v1> v1{};
        }
        ///FPU overflow interrupt status
        enum class FofcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,FofcVal> fofc{}; 
        namespace FofcValC{
            constexpr Register::FieldValue<decltype(fofc),FofcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fofc),FofcVal::v1> v1{};
        }
        ///FPU underflow interrupt status
        enum class FufcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,FufcVal> fufc{}; 
        namespace FufcValC{
            constexpr Register::FieldValue<decltype(fufc),FufcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fufc),FufcVal::v1> v1{};
        }
        ///FPU inexact interrupt status
        enum class FixcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,FixcVal> fixc{}; 
        namespace FixcValC{
            constexpr Register::FieldValue<decltype(fixc),FixcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fixc),FixcVal::v1> v1{};
        }
        ///FPU input denormal interrupt status
        enum class FidcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,FidcVal> fidc{}; 
        namespace FidcValC{
            constexpr Register::FieldValue<decltype(fidc),FidcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fidc),FidcVal::v1> v1{};
        }
        ///FPU invalid operation interrupt enable
        enum class FioceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,FioceVal> fioce{}; 
        namespace FioceValC{
            constexpr Register::FieldValue<decltype(fioce),FioceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fioce),FioceVal::v1> v1{};
        }
        ///FPU divide-by-zero interrupt enable
        enum class FdzceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,FdzceVal> fdzce{}; 
        namespace FdzceValC{
            constexpr Register::FieldValue<decltype(fdzce),FdzceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fdzce),FdzceVal::v1> v1{};
        }
        ///FPU overflow interrupt enable
        enum class FofceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,FofceVal> fofce{}; 
        namespace FofceValC{
            constexpr Register::FieldValue<decltype(fofce),FofceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fofce),FofceVal::v1> v1{};
        }
        ///FPU underflow interrupt enable
        enum class FufceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,FufceVal> fufce{}; 
        namespace FufceValC{
            constexpr Register::FieldValue<decltype(fufce),FufceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fufce),FufceVal::v1> v1{};
        }
        ///FPU inexact interrupt enable
        enum class FixceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,FixceVal> fixce{}; 
        namespace FixceValC{
            constexpr Register::FieldValue<decltype(fixce),FixceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fixce),FixceVal::v1> v1{};
        }
        ///FPU input denormal interrupt enable
        enum class FidceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,FidceVal> fidce{}; 
        namespace FidceValC{
            constexpr Register::FieldValue<decltype(fidce),FidceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fidce),FidceVal::v1> v1{};
        }
    }
    namespace McmEtbcc{    ///<ETB Counter Control register
        using Addr = Register::Address<0xe0080014,0xffffffc0,0,unsigned>;
        ///Counter Enable
        enum class CntenVal {
            v0=0x00000000,     ///<ETB counter disabled
            v1=0x00000001,     ///<ETB counter enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CntenVal> cnten{}; 
        namespace CntenValC{
            constexpr Register::FieldValue<decltype(cnten),CntenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cnten),CntenVal::v1> v1{};
        }
        ///Response Type
        enum class RsptVal {
            v00=0x00000000,     ///<No response when the ETB count expires
            v01=0x00000001,     ///<Generate a normal interrupt when the ETB count expires
            v10=0x00000002,     ///<Generate an NMI when the ETB count expires
            v11=0x00000003,     ///<Generate a debug halt when the ETB count expires
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,RsptVal> rspt{}; 
        namespace RsptValC{
            constexpr Register::FieldValue<decltype(rspt),RsptVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rspt),RsptVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rspt),RsptVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rspt),RsptVal::v11> v11{};
        }
        ///Reload Request
        enum class RlrqVal {
            v0=0x00000000,     ///<No effect
            v1=0x00000001,     ///<Clears pending debug halt, NMI, or IRQ interrupt requests
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RlrqVal> rlrq{}; 
        namespace RlrqValC{
            constexpr Register::FieldValue<decltype(rlrq),RlrqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rlrq),RlrqVal::v1> v1{};
        }
        ///ETM-To-TPIU Disable
        enum class EtdisVal {
            v0=0x00000000,     ///<ETM-to-TPIU trace path enabled
            v1=0x00000001,     ///<ETM-to-TPIU trace path disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EtdisVal> etdis{}; 
        namespace EtdisValC{
            constexpr Register::FieldValue<decltype(etdis),EtdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(etdis),EtdisVal::v1> v1{};
        }
        ///ITM-To-TPIU Disable
        enum class ItdisVal {
            v0=0x00000000,     ///<ITM-to-TPIU trace path enabled
            v1=0x00000001,     ///<ITM-to-TPIU trace path disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ItdisVal> itdis{}; 
        namespace ItdisValC{
            constexpr Register::FieldValue<decltype(itdis),ItdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(itdis),ItdisVal::v1> v1{};
        }
    }
    namespace McmEtbrl{    ///<ETB Reload register
        using Addr = Register::Address<0xe0080018,0xfffff800,0,unsigned>;
        ///Byte Count Reload Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> reload{}; 
        namespace ReloadValC{
        }
    }
    namespace McmEtbcnt{    ///<ETB Counter Value register
        using Addr = Register::Address<0xe008001c,0xfffff800,0,unsigned>;
        ///Byte Count Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> counter{}; 
        namespace CounterValC{
        }
    }
    namespace McmPid{    ///<Process ID register
        using Addr = Register::Address<0xe0080030,0xffffff00,0,unsigned>;
        ///M0_PID And M1_PID For MPU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pid{}; 
        namespace PidValC{
        }
    }
}
