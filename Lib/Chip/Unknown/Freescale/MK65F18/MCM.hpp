#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Core Platform Miscellaneous Control Module
    namespace McmPlasc{    ///<Crossbar Switch (AXBS) Slave Configuration
        using Addr = Register::Address<0xe0080008,0xffff0000,0x00000000,unsigned>;
        ///Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> asc{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace McmPlamc{    ///<Crossbar Switch (AXBS) Master Configuration
        using Addr = Register::Address<0xe008000a,0xffff0000,0x00000000,unsigned>;
        ///Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> amc{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace McmCr{    ///<Control Register
        using Addr = Register::Address<0xe008000c,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///SRAM_L Write Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sramlwp{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace McmIscr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xe0080010,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Normal Interrupt Pending
        enum class IrqVal {
            v0=0x00000000,     ///<No pending interrupt
            v1=0x00000001,     ///<Due to the ETB counter expiring, a normal interrupt is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrqVal> irq{}; 
        namespace IrqValC{
            constexpr Register::FieldValue<decltype(irq)::Type,IrqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irq)::Type,IrqVal::v1> v1{};
        }
        ///Non-maskable Interrupt Pending
        enum class NmiVal {
            v0=0x00000000,     ///<No pending NMI
            v1=0x00000001,     ///<Due to the ETB counter expiring, an NMI is pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NmiVal> nmi{}; 
        namespace NmiValC{
            constexpr Register::FieldValue<decltype(nmi)::Type,NmiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nmi)::Type,NmiVal::v1> v1{};
        }
        ///Debug Halt Request Indicator
        enum class DhreqVal {
            v0=0x00000000,     ///<No debug halt request
            v1=0x00000001,     ///<Debug halt request initiated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DhreqVal> dhreq{}; 
        namespace DhreqValC{
            constexpr Register::FieldValue<decltype(dhreq)::Type,DhreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dhreq)::Type,DhreqVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///FPU invalid operation interrupt status
        enum class FiocVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FiocVal> fioc{}; 
        namespace FiocValC{
            constexpr Register::FieldValue<decltype(fioc)::Type,FiocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fioc)::Type,FiocVal::v1> v1{};
        }
        ///FPU divide-by-zero interrupt status
        enum class FdzcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FdzcVal> fdzc{}; 
        namespace FdzcValC{
            constexpr Register::FieldValue<decltype(fdzc)::Type,FdzcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fdzc)::Type,FdzcVal::v1> v1{};
        }
        ///FPU overflow interrupt status
        enum class FofcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FofcVal> fofc{}; 
        namespace FofcValC{
            constexpr Register::FieldValue<decltype(fofc)::Type,FofcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fofc)::Type,FofcVal::v1> v1{};
        }
        ///FPU underflow interrupt status
        enum class FufcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FufcVal> fufc{}; 
        namespace FufcValC{
            constexpr Register::FieldValue<decltype(fufc)::Type,FufcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fufc)::Type,FufcVal::v1> v1{};
        }
        ///FPU inexact interrupt status
        enum class FixcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FixcVal> fixc{}; 
        namespace FixcValC{
            constexpr Register::FieldValue<decltype(fixc)::Type,FixcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fixc)::Type,FixcVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///FPU input denormal interrupt status
        enum class FidcVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FidcVal> fidc{}; 
        namespace FidcValC{
            constexpr Register::FieldValue<decltype(fidc)::Type,FidcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fidc)::Type,FidcVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///FPU invalid operation interrupt enable
        enum class FioceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,FioceVal> fioce{}; 
        namespace FioceValC{
            constexpr Register::FieldValue<decltype(fioce)::Type,FioceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fioce)::Type,FioceVal::v1> v1{};
        }
        ///FPU divide-by-zero interrupt enable
        enum class FdzceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,FdzceVal> fdzce{}; 
        namespace FdzceValC{
            constexpr Register::FieldValue<decltype(fdzce)::Type,FdzceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fdzce)::Type,FdzceVal::v1> v1{};
        }
        ///FPU overflow interrupt enable
        enum class FofceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,FofceVal> fofce{}; 
        namespace FofceValC{
            constexpr Register::FieldValue<decltype(fofce)::Type,FofceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fofce)::Type,FofceVal::v1> v1{};
        }
        ///FPU underflow interrupt enable
        enum class FufceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,FufceVal> fufce{}; 
        namespace FufceValC{
            constexpr Register::FieldValue<decltype(fufce)::Type,FufceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fufce)::Type,FufceVal::v1> v1{};
        }
        ///FPU inexact interrupt enable
        enum class FixceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,FixceVal> fixce{}; 
        namespace FixceValC{
            constexpr Register::FieldValue<decltype(fixce)::Type,FixceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fixce)::Type,FixceVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///FPU input denormal interrupt enable
        enum class FidceVal {
            v0=0x00000000,     ///<Disable interrupt
            v1=0x00000001,     ///<Enable interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,FidceVal> fidce{}; 
        namespace FidceValC{
            constexpr Register::FieldValue<decltype(fidce)::Type,FidceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fidce)::Type,FidceVal::v1> v1{};
        }
    }
    namespace McmEtbcc{    ///<ETB Counter Control register
        using Addr = Register::Address<0xe0080014,0x00000000,0x00000000,unsigned>;
        ///Counter Enable
        enum class CntenVal {
            v0=0x00000000,     ///<ETB counter disabled
            v1=0x00000001,     ///<ETB counter enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CntenVal> cnten{}; 
        namespace CntenValC{
            constexpr Register::FieldValue<decltype(cnten)::Type,CntenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cnten)::Type,CntenVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(rspt)::Type,RsptVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rspt)::Type,RsptVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rspt)::Type,RsptVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rspt)::Type,RsptVal::v11> v11{};
        }
        ///Reload Request
        enum class RlrqVal {
            v0=0x00000000,     ///<No effect
            v1=0x00000001,     ///<Clears pending debug halt, NMI, or IRQ interrupt requests
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RlrqVal> rlrq{}; 
        namespace RlrqValC{
            constexpr Register::FieldValue<decltype(rlrq)::Type,RlrqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rlrq)::Type,RlrqVal::v1> v1{};
        }
        ///ETM-To-TPIU Disable
        enum class EtdisVal {
            v0=0x00000000,     ///<ETM-to-TPIU trace path enabled
            v1=0x00000001,     ///<ETM-to-TPIU trace path disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EtdisVal> etdis{}; 
        namespace EtdisValC{
            constexpr Register::FieldValue<decltype(etdis)::Type,EtdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(etdis)::Type,EtdisVal::v1> v1{};
        }
        ///ITM-To-TPIU Disable
        enum class ItdisVal {
            v0=0x00000000,     ///<ITM-to-TPIU trace path enabled
            v1=0x00000001,     ///<ITM-to-TPIU trace path disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ItdisVal> itdis{}; 
        namespace ItdisValC{
            constexpr Register::FieldValue<decltype(itdis)::Type,ItdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(itdis)::Type,ItdisVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace McmEtbrl{    ///<ETB Reload register
        using Addr = Register::Address<0xe0080018,0x00000000,0x00000000,unsigned>;
        ///Byte Count Reload Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> reload{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace McmEtbcnt{    ///<ETB Counter Value register
        using Addr = Register::Address<0xe008001c,0x00000000,0x00000000,unsigned>;
        ///Byte Count Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> counter{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace McmFadr{    ///<Fault address register
        using Addr = Register::Address<0xe0080020,0x00000000,0x00000000,unsigned>;
        ///Fault address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> address{}; 
    }
    namespace McmFatr{    ///<Fault attributes register
        using Addr = Register::Address<0xe0080024,0x00000000,0x00000000,unsigned>;
        ///Bus error access type
        enum class BedaVal {
            v0=0x00000000,     ///<Instruction
            v1=0x00000001,     ///<Data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BedaVal> beda{}; 
        namespace BedaValC{
            constexpr Register::FieldValue<decltype(beda)::Type,BedaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(beda)::Type,BedaVal::v1> v1{};
        }
        ///Bus error privilege level
        enum class BemdVal {
            v0=0x00000000,     ///<User mode
            v1=0x00000001,     ///<Supervisor/privileged mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BemdVal> bemd{}; 
        namespace BemdValC{
            constexpr Register::FieldValue<decltype(bemd)::Type,BemdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bemd)::Type,BemdVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Bus error size
        enum class BeszVal {
            v00=0x00000000,     ///<8-bit access
            v01=0x00000001,     ///<16-bit access
            v10=0x00000002,     ///<32-bit access
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BeszVal> besz{}; 
        namespace BeszValC{
            constexpr Register::FieldValue<decltype(besz)::Type,BeszVal::v00> v00{};
            constexpr Register::FieldValue<decltype(besz)::Type,BeszVal::v01> v01{};
            constexpr Register::FieldValue<decltype(besz)::Type,BeszVal::v10> v10{};
            constexpr Register::FieldValue<decltype(besz)::Type,BeszVal::v11> v11{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Bus error write
        enum class BewtVal {
            v0=0x00000000,     ///<Read access
            v1=0x00000001,     ///<Write access
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BewtVal> bewt{}; 
        namespace BewtValC{
            constexpr Register::FieldValue<decltype(bewt)::Type,BewtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bewt)::Type,BewtVal::v1> v1{};
        }
        ///Bus error master number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bemn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Bus error overrun
        enum class BeovrVal {
            v0=0x00000000,     ///<No bus error overrun
            v1=0x00000001,     ///<Bus error overrun occurred. The FADR and FDR registers and the other FATR bits are not updated to reflect this new bus error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BeovrVal> beovr{}; 
        namespace BeovrValC{
            constexpr Register::FieldValue<decltype(beovr)::Type,BeovrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(beovr)::Type,BeovrVal::v1> v1{};
        }
    }
    namespace McmFdr{    ///<Fault data register
        using Addr = Register::Address<0xe0080028,0x00000000,0x00000000,unsigned>;
        ///Fault data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> data{}; 
    }
    namespace McmPid{    ///<Process ID register
        using Addr = Register::Address<0xe0080030,0x00000000,0x00000000,unsigned>;
        ///M0_PID And M1_PID For MPU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pid{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace McmCpo{    ///<Compute Operation Control Register
        using Addr = Register::Address<0xe0080040,0x00000000,0x00000000,unsigned>;
        ///Compute Operation request
        enum class CporeqVal {
            v0=0x00000000,     ///<Request is cleared.
            v1=0x00000001,     ///<Request Compute Operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CporeqVal> cporeq{}; 
        namespace CporeqValC{
            constexpr Register::FieldValue<decltype(cporeq)::Type,CporeqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cporeq)::Type,CporeqVal::v1> v1{};
        }
        ///Compute Operation acknowledge
        enum class CpoackVal {
            v0=0x00000000,     ///<Compute operation entry has not completed or compute operation exit has completed.
            v1=0x00000001,     ///<Compute operation entry has completed or compute operation exit has not completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CpoackVal> cpoack{}; 
        namespace CpoackValC{
            constexpr Register::FieldValue<decltype(cpoack)::Type,CpoackVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpoack)::Type,CpoackVal::v1> v1{};
        }
        ///Compute Operation wakeup on interrupt
        enum class CpowoiVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<When set, the CPOREQ is cleared on any interrupt or exception vector fetch.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CpowoiVal> cpowoi{}; 
        namespace CpowoiValC{
            constexpr Register::FieldValue<decltype(cpowoi)::Type,CpowoiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpowoi)::Type,CpowoiVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
}
