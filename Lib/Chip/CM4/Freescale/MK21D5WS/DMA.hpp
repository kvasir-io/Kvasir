#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Enhanced direct memory access controller
    namespace DmaCr{    ///<Control Register
        using Addr = Register::Address<0x40008000,0xfffcff09,0,unsigned>;
        ///Enable Debug
        enum class EdbgVal {
            v0=0x00000000,     ///<When in debug mode, the DMA continues to operate.
            v1=0x00000001,     ///<When in debug mode, the DMA stalls the start of a new channel. Executing channels are allowed to complete. Channel execution resumes when the system exits debug mode or the EDBG bit is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdbgVal> edbg{}; 
        namespace EdbgValC{
            constexpr Register::FieldValue<decltype(edbg)::Type,EdbgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(edbg)::Type,EdbgVal::v1> v1{};
        }
        ///Enable Round Robin Channel Arbitration
        enum class ErcaVal {
            v0=0x00000000,     ///<Fixed priority arbitration is used for channel selection .
            v1=0x00000001,     ///<Round robin arbitration is used for channel selection .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ErcaVal> erca{}; 
        namespace ErcaValC{
            constexpr Register::FieldValue<decltype(erca)::Type,ErcaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erca)::Type,ErcaVal::v1> v1{};
        }
        ///Halt On Error
        enum class HoeVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Any error causes the HALT bit to set. Subsequently, all service requests are ignored until the HALT bit is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HoeVal> hoe{}; 
        namespace HoeValC{
            constexpr Register::FieldValue<decltype(hoe)::Type,HoeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hoe)::Type,HoeVal::v1> v1{};
        }
        ///Halt DMA Operations
        enum class HaltVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Stall the start of any new channels. Executing channels are allowed to complete. Channel execution resumes when this bit is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HaltVal> halt{}; 
        namespace HaltValC{
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::v0> v0{};
            constexpr Register::FieldValue<decltype(halt)::Type,HaltVal::v1> v1{};
        }
        ///Continuous Link Mode
        enum class ClmVal {
            v0=0x00000000,     ///<A minor loop channel link made to itself goes through channel arbitration before being activated again.
            v1=0x00000001,     ///<A minor loop channel link made to itself does not go through channel arbitration before being activated again. Upon minor loop completion, the channel activates again if that channel has a minor loop channel link enabled and the link channel is itself. This effectively applies the minor loop offsets and restarts the next minor loop.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ClmVal> clm{}; 
        namespace ClmValC{
            constexpr Register::FieldValue<decltype(clm)::Type,ClmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clm)::Type,ClmVal::v1> v1{};
        }
        ///Enable Minor Loop Mapping
        enum class EmlmVal {
            v0=0x00000000,     ///<Disabled. TCDn.word2 is defined as a 32-bit NBYTES field.
            v1=0x00000001,     ///<Enabled. TCDn.word2 is redefined to include individual enable fields, an offset field, and the NBYTES field. The individual enable fields allow the minor loop offset to be applied to the source address, the destination address, or both. The NBYTES field is reduced when either offset is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EmlmVal> emlm{}; 
        namespace EmlmValC{
            constexpr Register::FieldValue<decltype(emlm)::Type,EmlmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(emlm)::Type,EmlmVal::v1> v1{};
        }
        ///Error Cancel Transfer
        enum class EcxVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Cancel the remaining data transfer in the same fashion as the CX bit. Stop the executing channel and force the minor loop to finish. The cancel takes effect after the last write of the current read/write sequence. The ECX bit clears itself after the cancel is honored. In addition to cancelling the transfer, ECX treats the cancel as an error condition, thus updating the Error Status register (DMAx_ES) and generating an optional error interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,EcxVal> ecx{}; 
        namespace EcxValC{
            constexpr Register::FieldValue<decltype(ecx)::Type,EcxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecx)::Type,EcxVal::v1> v1{};
        }
        ///Cancel Transfer
        enum class CxVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Cancel the remaining data transfer. Stop the executing channel and force the minor loop to finish. The cancel takes effect after the last write of the current read/write sequence. The CX bit clears itself after the cancel has been honored. This cancel retires the channel normally as if the minor loop was completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,CxVal> cx{}; 
        namespace CxValC{
            constexpr Register::FieldValue<decltype(cx)::Type,CxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cx)::Type,CxVal::v1> v1{};
        }
    }
    namespace DmaEs{    ///<Error Status Register
        using Addr = Register::Address<0x40008004,0x7ffeb000,0,unsigned>;
        ///Destination Bus Error
        enum class DbeVal {
            v0=0x00000000,     ///<No destination bus error
            v1=0x00000001,     ///<The last recorded error was a bus error on a destination write
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DbeVal> dbe{}; 
        namespace DbeValC{
            constexpr Register::FieldValue<decltype(dbe)::Type,DbeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dbe)::Type,DbeVal::v1> v1{};
        }
        ///Source Bus Error
        enum class SbeVal {
            v0=0x00000000,     ///<No source bus error
            v1=0x00000001,     ///<The last recorded error was a bus error on a source read
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SbeVal> sbe{}; 
        namespace SbeValC{
            constexpr Register::FieldValue<decltype(sbe)::Type,SbeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sbe)::Type,SbeVal::v1> v1{};
        }
        ///Scatter/Gather Configuration Error
        enum class SgeVal {
            v0=0x00000000,     ///<No scatter/gather configuration error
            v1=0x00000001,     ///<The last recorded error was a configuration error detected in the TCDn_DLASTSGA field. This field is checked at the beginning of a scatter/gather operation after major loop completion if TCDn_CSR[ESG] is enabled. TCDn_DLASTSGA is not on a 32 byte boundary.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SgeVal> sge{}; 
        namespace SgeValC{
            constexpr Register::FieldValue<decltype(sge)::Type,SgeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sge)::Type,SgeVal::v1> v1{};
        }
        ///NBYTES/CITER Configuration Error
        enum class NceVal {
            v0=0x00000000,     ///<No NBYTES/CITER configuration error
            v1=0x00000001,     ///<The last recorded error was a configuration error detected in the TCDn_NBYTES or TCDn_CITER fields. TCDn_NBYTES is not a multiple of TCDn_ATTR[SSIZE] and TCDn_ATTR[DSIZE], or TCDn_CITER[CITER] is equal to zero, or TCDn_CITER[ELINK] is not equal to TCDn_BITER[ELINK]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,NceVal> nce{}; 
        namespace NceValC{
            constexpr Register::FieldValue<decltype(nce)::Type,NceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nce)::Type,NceVal::v1> v1{};
        }
        ///Destination Offset Error
        enum class DoeVal {
            v0=0x00000000,     ///<No destination offset configuration error
            v1=0x00000001,     ///<The last recorded error was a configuration error detected in the TCDn_DOFF field. TCDn_DOFF is inconsistent with TCDn_ATTR[DSIZE].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DoeVal> doe{}; 
        namespace DoeValC{
            constexpr Register::FieldValue<decltype(doe)::Type,DoeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(doe)::Type,DoeVal::v1> v1{};
        }
        ///Destination Address Error
        enum class DaeVal {
            v0=0x00000000,     ///<No destination address configuration error
            v1=0x00000001,     ///<The last recorded error was a configuration error detected in the TCDn_DADDR field. TCDn_DADDR is inconsistent with TCDn_ATTR[DSIZE].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DaeVal> dae{}; 
        namespace DaeValC{
            constexpr Register::FieldValue<decltype(dae)::Type,DaeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dae)::Type,DaeVal::v1> v1{};
        }
        ///Source Offset Error
        enum class SoeVal {
            v0=0x00000000,     ///<No source offset configuration error
            v1=0x00000001,     ///<The last recorded error was a configuration error detected in the TCDn_SOFF field. TCDn_SOFF is inconsistent with TCDn_ATTR[SSIZE].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SoeVal> soe{}; 
        namespace SoeValC{
            constexpr Register::FieldValue<decltype(soe)::Type,SoeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(soe)::Type,SoeVal::v1> v1{};
        }
        ///Source Address Error
        enum class SaeVal {
            v0=0x00000000,     ///<No source address configuration error.
            v1=0x00000001,     ///<The last recorded error was a configuration error detected in the TCDn_SADDR field. TCDn_SADDR is inconsistent with TCDn_ATTR[SSIZE].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SaeVal> sae{}; 
        namespace SaeValC{
            constexpr Register::FieldValue<decltype(sae)::Type,SaeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sae)::Type,SaeVal::v1> v1{};
        }
        ///Error Channel Number or Canceled Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> errchn{}; 
        ///Channel Priority Error
        enum class CpeVal {
            v0=0x00000000,     ///<No channel priority error
            v1=0x00000001,     ///<The last recorded error was a configuration error in the channel priorities . Channel priorities are not unique.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,CpeVal> cpe{}; 
        namespace CpeValC{
            constexpr Register::FieldValue<decltype(cpe)::Type,CpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpe)::Type,CpeVal::v1> v1{};
        }
        ///Transfer Canceled
        enum class EcxVal {
            v0=0x00000000,     ///<No canceled transfers
            v1=0x00000001,     ///<The last recorded entry was a canceled transfer by the error cancel transfer input
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,EcxVal> ecx{}; 
        namespace EcxValC{
            constexpr Register::FieldValue<decltype(ecx)::Type,EcxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecx)::Type,EcxVal::v1> v1{};
        }
        ///no description available
        enum class VldVal {
            v0=0x00000000,     ///<No ERR bits are set
            v1=0x00000001,     ///<At least one ERR bit is set indicating a valid error exists that has not been cleared
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,VldVal> vld{}; 
        namespace VldValC{
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v1> v1{};
        }
    }
    namespace DmaErq{    ///<Enable Request Register
        using Addr = Register::Address<0x4000800c,0xffff0000,0,unsigned>;
        ///Enable DMA Request 0
        enum class Erq0Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Erq0Val> erq0{}; 
        namespace Erq0ValC{
            constexpr Register::FieldValue<decltype(erq0)::Type,Erq0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq0)::Type,Erq0Val::v1> v1{};
        }
        ///Enable DMA Request 1
        enum class Erq1Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Erq1Val> erq1{}; 
        namespace Erq1ValC{
            constexpr Register::FieldValue<decltype(erq1)::Type,Erq1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq1)::Type,Erq1Val::v1> v1{};
        }
        ///Enable DMA Request 2
        enum class Erq2Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Erq2Val> erq2{}; 
        namespace Erq2ValC{
            constexpr Register::FieldValue<decltype(erq2)::Type,Erq2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq2)::Type,Erq2Val::v1> v1{};
        }
        ///Enable DMA Request 3
        enum class Erq3Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Erq3Val> erq3{}; 
        namespace Erq3ValC{
            constexpr Register::FieldValue<decltype(erq3)::Type,Erq3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq3)::Type,Erq3Val::v1> v1{};
        }
        ///Enable DMA Request 4
        enum class Erq4Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Erq4Val> erq4{}; 
        namespace Erq4ValC{
            constexpr Register::FieldValue<decltype(erq4)::Type,Erq4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq4)::Type,Erq4Val::v1> v1{};
        }
        ///Enable DMA Request 5
        enum class Erq5Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Erq5Val> erq5{}; 
        namespace Erq5ValC{
            constexpr Register::FieldValue<decltype(erq5)::Type,Erq5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq5)::Type,Erq5Val::v1> v1{};
        }
        ///Enable DMA Request 6
        enum class Erq6Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Erq6Val> erq6{}; 
        namespace Erq6ValC{
            constexpr Register::FieldValue<decltype(erq6)::Type,Erq6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq6)::Type,Erq6Val::v1> v1{};
        }
        ///Enable DMA Request 7
        enum class Erq7Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Erq7Val> erq7{}; 
        namespace Erq7ValC{
            constexpr Register::FieldValue<decltype(erq7)::Type,Erq7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq7)::Type,Erq7Val::v1> v1{};
        }
        ///Enable DMA Request 8
        enum class Erq8Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Erq8Val> erq8{}; 
        namespace Erq8ValC{
            constexpr Register::FieldValue<decltype(erq8)::Type,Erq8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq8)::Type,Erq8Val::v1> v1{};
        }
        ///Enable DMA Request 9
        enum class Erq9Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Erq9Val> erq9{}; 
        namespace Erq9ValC{
            constexpr Register::FieldValue<decltype(erq9)::Type,Erq9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq9)::Type,Erq9Val::v1> v1{};
        }
        ///Enable DMA Request 10
        enum class Erq10Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Erq10Val> erq10{}; 
        namespace Erq10ValC{
            constexpr Register::FieldValue<decltype(erq10)::Type,Erq10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq10)::Type,Erq10Val::v1> v1{};
        }
        ///Enable DMA Request 11
        enum class Erq11Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Erq11Val> erq11{}; 
        namespace Erq11ValC{
            constexpr Register::FieldValue<decltype(erq11)::Type,Erq11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq11)::Type,Erq11Val::v1> v1{};
        }
        ///Enable DMA Request 12
        enum class Erq12Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Erq12Val> erq12{}; 
        namespace Erq12ValC{
            constexpr Register::FieldValue<decltype(erq12)::Type,Erq12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq12)::Type,Erq12Val::v1> v1{};
        }
        ///Enable DMA Request 13
        enum class Erq13Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Erq13Val> erq13{}; 
        namespace Erq13ValC{
            constexpr Register::FieldValue<decltype(erq13)::Type,Erq13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq13)::Type,Erq13Val::v1> v1{};
        }
        ///Enable DMA Request 14
        enum class Erq14Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Erq14Val> erq14{}; 
        namespace Erq14ValC{
            constexpr Register::FieldValue<decltype(erq14)::Type,Erq14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq14)::Type,Erq14Val::v1> v1{};
        }
        ///Enable DMA Request 15
        enum class Erq15Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Erq15Val> erq15{}; 
        namespace Erq15ValC{
            constexpr Register::FieldValue<decltype(erq15)::Type,Erq15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq15)::Type,Erq15Val::v1> v1{};
        }
    }
    namespace DmaEei{    ///<Enable Error Interrupt Register
        using Addr = Register::Address<0x40008014,0xffff0000,0,unsigned>;
        ///Enable Error Interrupt 0
        enum class Eei0Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Eei0Val> eei0{}; 
        namespace Eei0ValC{
            constexpr Register::FieldValue<decltype(eei0)::Type,Eei0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei0)::Type,Eei0Val::v1> v1{};
        }
        ///Enable Error Interrupt 1
        enum class Eei1Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Eei1Val> eei1{}; 
        namespace Eei1ValC{
            constexpr Register::FieldValue<decltype(eei1)::Type,Eei1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei1)::Type,Eei1Val::v1> v1{};
        }
        ///Enable Error Interrupt 2
        enum class Eei2Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Eei2Val> eei2{}; 
        namespace Eei2ValC{
            constexpr Register::FieldValue<decltype(eei2)::Type,Eei2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei2)::Type,Eei2Val::v1> v1{};
        }
        ///Enable Error Interrupt 3
        enum class Eei3Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Eei3Val> eei3{}; 
        namespace Eei3ValC{
            constexpr Register::FieldValue<decltype(eei3)::Type,Eei3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei3)::Type,Eei3Val::v1> v1{};
        }
        ///Enable Error Interrupt 4
        enum class Eei4Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Eei4Val> eei4{}; 
        namespace Eei4ValC{
            constexpr Register::FieldValue<decltype(eei4)::Type,Eei4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei4)::Type,Eei4Val::v1> v1{};
        }
        ///Enable Error Interrupt 5
        enum class Eei5Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Eei5Val> eei5{}; 
        namespace Eei5ValC{
            constexpr Register::FieldValue<decltype(eei5)::Type,Eei5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei5)::Type,Eei5Val::v1> v1{};
        }
        ///Enable Error Interrupt 6
        enum class Eei6Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Eei6Val> eei6{}; 
        namespace Eei6ValC{
            constexpr Register::FieldValue<decltype(eei6)::Type,Eei6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei6)::Type,Eei6Val::v1> v1{};
        }
        ///Enable Error Interrupt 7
        enum class Eei7Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Eei7Val> eei7{}; 
        namespace Eei7ValC{
            constexpr Register::FieldValue<decltype(eei7)::Type,Eei7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei7)::Type,Eei7Val::v1> v1{};
        }
        ///Enable Error Interrupt 8
        enum class Eei8Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Eei8Val> eei8{}; 
        namespace Eei8ValC{
            constexpr Register::FieldValue<decltype(eei8)::Type,Eei8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei8)::Type,Eei8Val::v1> v1{};
        }
        ///Enable Error Interrupt 9
        enum class Eei9Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Eei9Val> eei9{}; 
        namespace Eei9ValC{
            constexpr Register::FieldValue<decltype(eei9)::Type,Eei9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei9)::Type,Eei9Val::v1> v1{};
        }
        ///Enable Error Interrupt 10
        enum class Eei10Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Eei10Val> eei10{}; 
        namespace Eei10ValC{
            constexpr Register::FieldValue<decltype(eei10)::Type,Eei10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei10)::Type,Eei10Val::v1> v1{};
        }
        ///Enable Error Interrupt 11
        enum class Eei11Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Eei11Val> eei11{}; 
        namespace Eei11ValC{
            constexpr Register::FieldValue<decltype(eei11)::Type,Eei11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei11)::Type,Eei11Val::v1> v1{};
        }
        ///Enable Error Interrupt 12
        enum class Eei12Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Eei12Val> eei12{}; 
        namespace Eei12ValC{
            constexpr Register::FieldValue<decltype(eei12)::Type,Eei12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei12)::Type,Eei12Val::v1> v1{};
        }
        ///Enable Error Interrupt 13
        enum class Eei13Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Eei13Val> eei13{}; 
        namespace Eei13ValC{
            constexpr Register::FieldValue<decltype(eei13)::Type,Eei13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei13)::Type,Eei13Val::v1> v1{};
        }
        ///Enable Error Interrupt 14
        enum class Eei14Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Eei14Val> eei14{}; 
        namespace Eei14ValC{
            constexpr Register::FieldValue<decltype(eei14)::Type,Eei14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei14)::Type,Eei14Val::v1> v1{};
        }
        ///Enable Error Interrupt 15
        enum class Eei15Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Eei15Val> eei15{}; 
        namespace Eei15ValC{
            constexpr Register::FieldValue<decltype(eei15)::Type,Eei15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei15)::Type,Eei15Val::v1> v1{};
        }
    }
    namespace DmaCeei{    ///<Clear Enable Error Interrupt Register
        using Addr = Register::Address<0x40008018,0xffffff30,0,unsigned char>;
        ///Clear Enable Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ceei{}; 
        ///Clear All Enable Error Interrupts
        enum class CaeeVal {
            v0=0x00000000,     ///<Clear only the EEI bit specified in the CEEI field
            v1=0x00000001,     ///<Clear all bits in EEI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CaeeVal> caee{}; 
        namespace CaeeValC{
            constexpr Register::FieldValue<decltype(caee)::Type,CaeeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(caee)::Type,CaeeVal::v1> v1{};
        }
        ///No Op enable
        enum class NopVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<No operation, ignore the other bits in this register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,NopVal> nop{}; 
        namespace NopValC{
            constexpr Register::FieldValue<decltype(nop)::Type,NopVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nop)::Type,NopVal::v1> v1{};
        }
    }
    namespace DmaSeei{    ///<Set Enable Error Interrupt Register
        using Addr = Register::Address<0x40008019,0xffffff30,0,unsigned char>;
        ///Set Enable Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seei{}; 
        ///Sets All Enable Error Interrupts
        enum class SaeeVal {
            v0=0x00000000,     ///<Set only the EEI bit specified in the SEEI field.
            v1=0x00000001,     ///<Sets all bits in EEI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SaeeVal> saee{}; 
        namespace SaeeValC{
            constexpr Register::FieldValue<decltype(saee)::Type,SaeeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(saee)::Type,SaeeVal::v1> v1{};
        }
        ///No Op enable
        enum class NopVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<No operation, ignore the other bits in this register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,NopVal> nop{}; 
        namespace NopValC{
            constexpr Register::FieldValue<decltype(nop)::Type,NopVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nop)::Type,NopVal::v1> v1{};
        }
    }
    namespace DmaCerq{    ///<Clear Enable Request Register
        using Addr = Register::Address<0x4000801a,0xffffff30,0,unsigned char>;
        ///Clear Enable Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cerq{}; 
        ///Clear All Enable Requests
        enum class CaerVal {
            v0=0x00000000,     ///<Clear only the ERQ bit specified in the CERQ field
            v1=0x00000001,     ///<Clear all bits in ERQ
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CaerVal> caer{}; 
        namespace CaerValC{
            constexpr Register::FieldValue<decltype(caer)::Type,CaerVal::v0> v0{};
            constexpr Register::FieldValue<decltype(caer)::Type,CaerVal::v1> v1{};
        }
        ///No Op enable
        enum class NopVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<No operation, ignore the other bits in this register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,NopVal> nop{}; 
        namespace NopValC{
            constexpr Register::FieldValue<decltype(nop)::Type,NopVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nop)::Type,NopVal::v1> v1{};
        }
    }
    namespace DmaSerq{    ///<Set Enable Request Register
        using Addr = Register::Address<0x4000801b,0xffffff30,0,unsigned char>;
        ///Set enable request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> serq{}; 
        ///Set All Enable Requests
        enum class SaerVal {
            v0=0x00000000,     ///<Set only the ERQ bit specified in the SERQ field
            v1=0x00000001,     ///<Set all bits in ERQ
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SaerVal> saer{}; 
        namespace SaerValC{
            constexpr Register::FieldValue<decltype(saer)::Type,SaerVal::v0> v0{};
            constexpr Register::FieldValue<decltype(saer)::Type,SaerVal::v1> v1{};
        }
        ///No Op enable
        enum class NopVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<No operation, ignore the other bits in this register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,NopVal> nop{}; 
        namespace NopValC{
            constexpr Register::FieldValue<decltype(nop)::Type,NopVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nop)::Type,NopVal::v1> v1{};
        }
    }
    namespace DmaCdne{    ///<Clear DONE Status Bit Register
        using Addr = Register::Address<0x4000801c,0xffffff30,0,unsigned char>;
        ///Clear DONE Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cdne{}; 
        ///Clears All DONE Bits
        enum class CadnVal {
            v0=0x00000000,     ///<Clears only the TCDn_CSR[DONE] bit specified in the CDNE field
            v1=0x00000001,     ///<Clears all bits in TCDn_CSR[DONE]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CadnVal> cadn{}; 
        namespace CadnValC{
            constexpr Register::FieldValue<decltype(cadn)::Type,CadnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cadn)::Type,CadnVal::v1> v1{};
        }
        ///No Op enable
        enum class NopVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<No operation, ignore the other bits in this register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,NopVal> nop{}; 
        namespace NopValC{
            constexpr Register::FieldValue<decltype(nop)::Type,NopVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nop)::Type,NopVal::v1> v1{};
        }
    }
    namespace DmaSsrt{    ///<Set START Bit Register
        using Addr = Register::Address<0x4000801d,0xffffff30,0,unsigned char>;
        ///Set START Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ssrt{}; 
        ///Set All START Bits (activates all channels)
        enum class SastVal {
            v0=0x00000000,     ///<Set only the TCDn_CSR[START] bit specified in the SSRT field
            v1=0x00000001,     ///<Set all bits in TCDn_CSR[START]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SastVal> sast{}; 
        namespace SastValC{
            constexpr Register::FieldValue<decltype(sast)::Type,SastVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sast)::Type,SastVal::v1> v1{};
        }
        ///No Op enable
        enum class NopVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<No operation, ignore the other bits in this register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,NopVal> nop{}; 
        namespace NopValC{
            constexpr Register::FieldValue<decltype(nop)::Type,NopVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nop)::Type,NopVal::v1> v1{};
        }
    }
    namespace DmaCerr{    ///<Clear Error Register
        using Addr = Register::Address<0x4000801e,0xffffff30,0,unsigned char>;
        ///Clear Error Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cerr{}; 
        ///Clear All Error Indicators
        enum class CaeiVal {
            v0=0x00000000,     ///<Clear only the ERR bit specified in the CERR field
            v1=0x00000001,     ///<Clear all bits in ERR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CaeiVal> caei{}; 
        namespace CaeiValC{
            constexpr Register::FieldValue<decltype(caei)::Type,CaeiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(caei)::Type,CaeiVal::v1> v1{};
        }
        ///No Op enable
        enum class NopVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<No operation, ignore the other bits in this register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,NopVal> nop{}; 
        namespace NopValC{
            constexpr Register::FieldValue<decltype(nop)::Type,NopVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nop)::Type,NopVal::v1> v1{};
        }
    }
    namespace DmaCint{    ///<Clear Interrupt Request Register
        using Addr = Register::Address<0x4000801f,0xffffff30,0,unsigned char>;
        ///Clear Interrupt Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cint{}; 
        ///Clear All Interrupt Requests
        enum class CairVal {
            v0=0x00000000,     ///<Clear only the INT bit specified in the CINT field
            v1=0x00000001,     ///<Clear all bits in INT
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CairVal> cair{}; 
        namespace CairValC{
            constexpr Register::FieldValue<decltype(cair)::Type,CairVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cair)::Type,CairVal::v1> v1{};
        }
        ///No Op enable
        enum class NopVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<No operation, ignore the other bits in this register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,NopVal> nop{}; 
        namespace NopValC{
            constexpr Register::FieldValue<decltype(nop)::Type,NopVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nop)::Type,NopVal::v1> v1{};
        }
    }
    namespace DmaInt{    ///<Interrupt Request Register
        using Addr = Register::Address<0x40008024,0xffff0000,0,unsigned>;
        ///Interrupt Request 0
        enum class Int0Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Int0Val> int0{}; 
        namespace Int0ValC{
            constexpr Register::FieldValue<decltype(int0)::Type,Int0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int0)::Type,Int0Val::v1> v1{};
        }
        ///Interrupt Request 1
        enum class Int1Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Int1Val> int1{}; 
        namespace Int1ValC{
            constexpr Register::FieldValue<decltype(int1)::Type,Int1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int1)::Type,Int1Val::v1> v1{};
        }
        ///Interrupt Request 2
        enum class Int2Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Int2Val> int2{}; 
        namespace Int2ValC{
            constexpr Register::FieldValue<decltype(int2)::Type,Int2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int2)::Type,Int2Val::v1> v1{};
        }
        ///Interrupt Request 3
        enum class Int3Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Int3Val> int3{}; 
        namespace Int3ValC{
            constexpr Register::FieldValue<decltype(int3)::Type,Int3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int3)::Type,Int3Val::v1> v1{};
        }
        ///Interrupt Request 4
        enum class Int4Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Int4Val> int4{}; 
        namespace Int4ValC{
            constexpr Register::FieldValue<decltype(int4)::Type,Int4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int4)::Type,Int4Val::v1> v1{};
        }
        ///Interrupt Request 5
        enum class Int5Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Int5Val> int5{}; 
        namespace Int5ValC{
            constexpr Register::FieldValue<decltype(int5)::Type,Int5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int5)::Type,Int5Val::v1> v1{};
        }
        ///Interrupt Request 6
        enum class Int6Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Int6Val> int6{}; 
        namespace Int6ValC{
            constexpr Register::FieldValue<decltype(int6)::Type,Int6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int6)::Type,Int6Val::v1> v1{};
        }
        ///Interrupt Request 7
        enum class Int7Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Int7Val> int7{}; 
        namespace Int7ValC{
            constexpr Register::FieldValue<decltype(int7)::Type,Int7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int7)::Type,Int7Val::v1> v1{};
        }
        ///Interrupt Request 8
        enum class Int8Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Int8Val> int8{}; 
        namespace Int8ValC{
            constexpr Register::FieldValue<decltype(int8)::Type,Int8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int8)::Type,Int8Val::v1> v1{};
        }
        ///Interrupt Request 9
        enum class Int9Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Int9Val> int9{}; 
        namespace Int9ValC{
            constexpr Register::FieldValue<decltype(int9)::Type,Int9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int9)::Type,Int9Val::v1> v1{};
        }
        ///Interrupt Request 10
        enum class Int10Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Int10Val> int10{}; 
        namespace Int10ValC{
            constexpr Register::FieldValue<decltype(int10)::Type,Int10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int10)::Type,Int10Val::v1> v1{};
        }
        ///Interrupt Request 11
        enum class Int11Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Int11Val> int11{}; 
        namespace Int11ValC{
            constexpr Register::FieldValue<decltype(int11)::Type,Int11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int11)::Type,Int11Val::v1> v1{};
        }
        ///Interrupt Request 12
        enum class Int12Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Int12Val> int12{}; 
        namespace Int12ValC{
            constexpr Register::FieldValue<decltype(int12)::Type,Int12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int12)::Type,Int12Val::v1> v1{};
        }
        ///Interrupt Request 13
        enum class Int13Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Int13Val> int13{}; 
        namespace Int13ValC{
            constexpr Register::FieldValue<decltype(int13)::Type,Int13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int13)::Type,Int13Val::v1> v1{};
        }
        ///Interrupt Request 14
        enum class Int14Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Int14Val> int14{}; 
        namespace Int14ValC{
            constexpr Register::FieldValue<decltype(int14)::Type,Int14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int14)::Type,Int14Val::v1> v1{};
        }
        ///Interrupt Request 15
        enum class Int15Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Int15Val> int15{}; 
        namespace Int15ValC{
            constexpr Register::FieldValue<decltype(int15)::Type,Int15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int15)::Type,Int15Val::v1> v1{};
        }
    }
    namespace DmaErr{    ///<Error Register
        using Addr = Register::Address<0x4000802c,0xffff0000,0,unsigned>;
        ///Error In Channel 0
        enum class Err0Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Err0Val> err0{}; 
        namespace Err0ValC{
            constexpr Register::FieldValue<decltype(err0)::Type,Err0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err0)::Type,Err0Val::v1> v1{};
        }
        ///Error In Channel 1
        enum class Err1Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Err1Val> err1{}; 
        namespace Err1ValC{
            constexpr Register::FieldValue<decltype(err1)::Type,Err1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err1)::Type,Err1Val::v1> v1{};
        }
        ///Error In Channel 2
        enum class Err2Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Err2Val> err2{}; 
        namespace Err2ValC{
            constexpr Register::FieldValue<decltype(err2)::Type,Err2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err2)::Type,Err2Val::v1> v1{};
        }
        ///Error In Channel 3
        enum class Err3Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Err3Val> err3{}; 
        namespace Err3ValC{
            constexpr Register::FieldValue<decltype(err3)::Type,Err3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err3)::Type,Err3Val::v1> v1{};
        }
        ///Error In Channel 4
        enum class Err4Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Err4Val> err4{}; 
        namespace Err4ValC{
            constexpr Register::FieldValue<decltype(err4)::Type,Err4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err4)::Type,Err4Val::v1> v1{};
        }
        ///Error In Channel 5
        enum class Err5Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Err5Val> err5{}; 
        namespace Err5ValC{
            constexpr Register::FieldValue<decltype(err5)::Type,Err5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err5)::Type,Err5Val::v1> v1{};
        }
        ///Error In Channel 6
        enum class Err6Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Err6Val> err6{}; 
        namespace Err6ValC{
            constexpr Register::FieldValue<decltype(err6)::Type,Err6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err6)::Type,Err6Val::v1> v1{};
        }
        ///Error In Channel 7
        enum class Err7Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Err7Val> err7{}; 
        namespace Err7ValC{
            constexpr Register::FieldValue<decltype(err7)::Type,Err7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err7)::Type,Err7Val::v1> v1{};
        }
        ///Error In Channel 8
        enum class Err8Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Err8Val> err8{}; 
        namespace Err8ValC{
            constexpr Register::FieldValue<decltype(err8)::Type,Err8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err8)::Type,Err8Val::v1> v1{};
        }
        ///Error In Channel 9
        enum class Err9Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Err9Val> err9{}; 
        namespace Err9ValC{
            constexpr Register::FieldValue<decltype(err9)::Type,Err9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err9)::Type,Err9Val::v1> v1{};
        }
        ///Error In Channel 10
        enum class Err10Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Err10Val> err10{}; 
        namespace Err10ValC{
            constexpr Register::FieldValue<decltype(err10)::Type,Err10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err10)::Type,Err10Val::v1> v1{};
        }
        ///Error In Channel 11
        enum class Err11Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Err11Val> err11{}; 
        namespace Err11ValC{
            constexpr Register::FieldValue<decltype(err11)::Type,Err11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err11)::Type,Err11Val::v1> v1{};
        }
        ///Error In Channel 12
        enum class Err12Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Err12Val> err12{}; 
        namespace Err12ValC{
            constexpr Register::FieldValue<decltype(err12)::Type,Err12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err12)::Type,Err12Val::v1> v1{};
        }
        ///Error In Channel 13
        enum class Err13Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Err13Val> err13{}; 
        namespace Err13ValC{
            constexpr Register::FieldValue<decltype(err13)::Type,Err13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err13)::Type,Err13Val::v1> v1{};
        }
        ///Error In Channel 14
        enum class Err14Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Err14Val> err14{}; 
        namespace Err14ValC{
            constexpr Register::FieldValue<decltype(err14)::Type,Err14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err14)::Type,Err14Val::v1> v1{};
        }
        ///Error In Channel 15
        enum class Err15Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Err15Val> err15{}; 
        namespace Err15ValC{
            constexpr Register::FieldValue<decltype(err15)::Type,Err15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err15)::Type,Err15Val::v1> v1{};
        }
    }
    namespace DmaHrs{    ///<Hardware Request Status Register
        using Addr = Register::Address<0x40008034,0xffff0000,0,unsigned>;
        ///Hardware Request Status Channel 0
        enum class Hrs0Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Hrs0Val> hrs0{}; 
        namespace Hrs0ValC{
            constexpr Register::FieldValue<decltype(hrs0)::Type,Hrs0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs0)::Type,Hrs0Val::v1> v1{};
        }
        ///Hardware Request Status Channel 1
        enum class Hrs1Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Hrs1Val> hrs1{}; 
        namespace Hrs1ValC{
            constexpr Register::FieldValue<decltype(hrs1)::Type,Hrs1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs1)::Type,Hrs1Val::v1> v1{};
        }
        ///Hardware Request Status Channel 2
        enum class Hrs2Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Hrs2Val> hrs2{}; 
        namespace Hrs2ValC{
            constexpr Register::FieldValue<decltype(hrs2)::Type,Hrs2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs2)::Type,Hrs2Val::v1> v1{};
        }
        ///Hardware Request Status Channel 3
        enum class Hrs3Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Hrs3Val> hrs3{}; 
        namespace Hrs3ValC{
            constexpr Register::FieldValue<decltype(hrs3)::Type,Hrs3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs3)::Type,Hrs3Val::v1> v1{};
        }
        ///Hardware Request Status Channel 4
        enum class Hrs4Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Hrs4Val> hrs4{}; 
        namespace Hrs4ValC{
            constexpr Register::FieldValue<decltype(hrs4)::Type,Hrs4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs4)::Type,Hrs4Val::v1> v1{};
        }
        ///Hardware Request Status Channel 5
        enum class Hrs5Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Hrs5Val> hrs5{}; 
        namespace Hrs5ValC{
            constexpr Register::FieldValue<decltype(hrs5)::Type,Hrs5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs5)::Type,Hrs5Val::v1> v1{};
        }
        ///Hardware Request Status Channel 6
        enum class Hrs6Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Hrs6Val> hrs6{}; 
        namespace Hrs6ValC{
            constexpr Register::FieldValue<decltype(hrs6)::Type,Hrs6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs6)::Type,Hrs6Val::v1> v1{};
        }
        ///Hardware Request Status Channel 7
        enum class Hrs7Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Hrs7Val> hrs7{}; 
        namespace Hrs7ValC{
            constexpr Register::FieldValue<decltype(hrs7)::Type,Hrs7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs7)::Type,Hrs7Val::v1> v1{};
        }
        ///Hardware Request Status Channel 8
        enum class Hrs8Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Hrs8Val> hrs8{}; 
        namespace Hrs8ValC{
            constexpr Register::FieldValue<decltype(hrs8)::Type,Hrs8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs8)::Type,Hrs8Val::v1> v1{};
        }
        ///Hardware Request Status Channel 9
        enum class Hrs9Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Hrs9Val> hrs9{}; 
        namespace Hrs9ValC{
            constexpr Register::FieldValue<decltype(hrs9)::Type,Hrs9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs9)::Type,Hrs9Val::v1> v1{};
        }
        ///Hardware Request Status Channel 10
        enum class Hrs10Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Hrs10Val> hrs10{}; 
        namespace Hrs10ValC{
            constexpr Register::FieldValue<decltype(hrs10)::Type,Hrs10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs10)::Type,Hrs10Val::v1> v1{};
        }
        ///Hardware Request Status Channel 11
        enum class Hrs11Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Hrs11Val> hrs11{}; 
        namespace Hrs11ValC{
            constexpr Register::FieldValue<decltype(hrs11)::Type,Hrs11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs11)::Type,Hrs11Val::v1> v1{};
        }
        ///Hardware Request Status Channel 12
        enum class Hrs12Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Hrs12Val> hrs12{}; 
        namespace Hrs12ValC{
            constexpr Register::FieldValue<decltype(hrs12)::Type,Hrs12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs12)::Type,Hrs12Val::v1> v1{};
        }
        ///Hardware Request Status Channel 13
        enum class Hrs13Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Hrs13Val> hrs13{}; 
        namespace Hrs13ValC{
            constexpr Register::FieldValue<decltype(hrs13)::Type,Hrs13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs13)::Type,Hrs13Val::v1> v1{};
        }
        ///Hardware Request Status Channel 14
        enum class Hrs14Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Hrs14Val> hrs14{}; 
        namespace Hrs14ValC{
            constexpr Register::FieldValue<decltype(hrs14)::Type,Hrs14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs14)::Type,Hrs14Val::v1> v1{};
        }
        ///Hardware Request Status Channel 15
        enum class Hrs15Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Hrs15Val> hrs15{}; 
        namespace Hrs15ValC{
            constexpr Register::FieldValue<decltype(hrs15)::Type,Hrs15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs15)::Type,Hrs15Val::v1> v1{};
        }
    }
    namespace DmaDchpri3{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008100,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption
        enum class EcpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EcpVal> ecp{}; 
        namespace EcpValC{
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v1> v1{};
        }
    }
    namespace DmaDchpri2{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008101,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption
        enum class EcpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EcpVal> ecp{}; 
        namespace EcpValC{
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v1> v1{};
        }
    }
    namespace DmaDchpri1{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008102,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption
        enum class EcpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EcpVal> ecp{}; 
        namespace EcpValC{
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v1> v1{};
        }
    }
    namespace DmaDchpri0{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008103,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption
        enum class EcpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EcpVal> ecp{}; 
        namespace EcpValC{
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v1> v1{};
        }
    }
    namespace DmaDchpri7{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008104,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption
        enum class EcpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EcpVal> ecp{}; 
        namespace EcpValC{
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v1> v1{};
        }
    }
    namespace DmaDchpri6{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008105,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption
        enum class EcpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EcpVal> ecp{}; 
        namespace EcpValC{
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v1> v1{};
        }
    }
    namespace DmaDchpri5{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008106,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption
        enum class EcpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EcpVal> ecp{}; 
        namespace EcpValC{
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v1> v1{};
        }
    }
    namespace DmaDchpri4{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008107,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption
        enum class EcpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EcpVal> ecp{}; 
        namespace EcpValC{
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v1> v1{};
        }
    }
    namespace DmaDchpri11{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008108,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption
        enum class EcpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EcpVal> ecp{}; 
        namespace EcpValC{
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v1> v1{};
        }
    }
    namespace DmaDchpri10{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008109,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption
        enum class EcpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EcpVal> ecp{}; 
        namespace EcpValC{
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v1> v1{};
        }
    }
    namespace DmaDchpri9{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810a,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption
        enum class EcpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EcpVal> ecp{}; 
        namespace EcpValC{
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v1> v1{};
        }
    }
    namespace DmaDchpri8{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810b,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption
        enum class EcpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EcpVal> ecp{}; 
        namespace EcpValC{
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v1> v1{};
        }
    }
    namespace DmaDchpri15{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810c,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption
        enum class EcpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EcpVal> ecp{}; 
        namespace EcpValC{
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v1> v1{};
        }
    }
    namespace DmaDchpri14{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810d,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption
        enum class EcpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EcpVal> ecp{}; 
        namespace EcpValC{
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v1> v1{};
        }
    }
    namespace DmaDchpri13{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810e,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption
        enum class EcpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EcpVal> ecp{}; 
        namespace EcpValC{
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v1> v1{};
        }
    }
    namespace DmaDchpri12{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810f,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption
        enum class EcpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EcpVal> ecp{}; 
        namespace EcpValC{
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ecp)::Type,EcpVal::v1> v1{};
        }
    }
    namespace DmaTcd0Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009000,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd1Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009020,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd2Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009040,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd3Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009060,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd4Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009080,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd5Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400090a0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd6Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400090c0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd7Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400090e0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd8Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009100,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd9Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009120,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd10Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009140,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd11Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009160,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd12Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009180,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd13Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400091a0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd14Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400091c0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd15Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400091e0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd0Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009004,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd1Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009024,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd2Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009044,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd3Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009064,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd4Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009084,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd5Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400090a4,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd6Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400090c4,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd7Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400090e4,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd8Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009104,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd9Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009124,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd10Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009144,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd11Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009164,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd12Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009184,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd13Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400091a4,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd14Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400091c4,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd15Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400091e4,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd0Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009006,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class SsizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v011=0x00000003,     ///<Reserved
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v111> v111{};
        }
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd1Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009026,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class SsizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v011=0x00000003,     ///<Reserved
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v111> v111{};
        }
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd2Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009046,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class SsizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v011=0x00000003,     ///<Reserved
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v111> v111{};
        }
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd3Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009066,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class SsizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v011=0x00000003,     ///<Reserved
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v111> v111{};
        }
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd4Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009086,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class SsizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v011=0x00000003,     ///<Reserved
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v111> v111{};
        }
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd5Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400090a6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class SsizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v011=0x00000003,     ///<Reserved
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v111> v111{};
        }
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd6Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400090c6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class SsizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v011=0x00000003,     ///<Reserved
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v111> v111{};
        }
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd7Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400090e6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class SsizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v011=0x00000003,     ///<Reserved
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v111> v111{};
        }
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd8Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009106,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class SsizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v011=0x00000003,     ///<Reserved
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v111> v111{};
        }
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd9Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009126,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class SsizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v011=0x00000003,     ///<Reserved
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v111> v111{};
        }
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd10Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009146,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class SsizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v011=0x00000003,     ///<Reserved
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v111> v111{};
        }
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd11Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009166,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class SsizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v011=0x00000003,     ///<Reserved
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v111> v111{};
        }
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd12Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009186,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class SsizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v011=0x00000003,     ///<Reserved
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v111> v111{};
        }
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd13Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400091a6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class SsizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v011=0x00000003,     ///<Reserved
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v111> v111{};
        }
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd14Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400091c6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class SsizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v011=0x00000003,     ///<Reserved
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v111> v111{};
        }
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd15Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400091e6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class SsizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v011=0x00000003,     ///<Reserved
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v111> v111{};
        }
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd0NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009008,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd1NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009028,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd2NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009048,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd3NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009068,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd4NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009088,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd5NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400090a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd6NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400090c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd7NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400090e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd8NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009108,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd9NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009128,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd10NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009148,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd11NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009168,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd12NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009188,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd13NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400091a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd14NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400091c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd15NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400091e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd0NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009008,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd1NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009028,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd2NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009048,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd3NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009068,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd4NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009088,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd5NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400090a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd6NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400090c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd7NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400090e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd8NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009108,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd9NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009128,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd10NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009148,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd11NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009168,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd12NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009188,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd13NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400091a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd14NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400091c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd15NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400091e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class DmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DmloeVal> dmloe{}; 
        namespace DmloeValC{
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmloe)::Type,DmloeVal::v1> v1{};
        }
        ///Source Minor Loop Offset Enable
        enum class SmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,SmloeVal> smloe{}; 
        namespace SmloeValC{
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smloe)::Type,SmloeVal::v1> v1{};
        }
    }
    namespace DmaTcd0NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009008,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd1NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009028,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd2NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009048,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd3NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009068,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd4NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009088,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd5NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400090a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd6NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400090c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd7NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400090e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd8NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009108,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd9NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009128,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd10NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009148,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd11NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009168,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd12NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009188,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd13NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400091a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd14NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400091c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd15NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400091e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd0Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000900c,0x00000000,0,unsigned>;
        ///Last source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd1Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000902c,0x00000000,0,unsigned>;
        ///Last source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd2Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000904c,0x00000000,0,unsigned>;
        ///Last source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd3Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000906c,0x00000000,0,unsigned>;
        ///Last source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd4Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000908c,0x00000000,0,unsigned>;
        ///Last source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd5Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400090ac,0x00000000,0,unsigned>;
        ///Last source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd6Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400090cc,0x00000000,0,unsigned>;
        ///Last source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd7Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400090ec,0x00000000,0,unsigned>;
        ///Last source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd8Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000910c,0x00000000,0,unsigned>;
        ///Last source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd9Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000912c,0x00000000,0,unsigned>;
        ///Last source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd10Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000914c,0x00000000,0,unsigned>;
        ///Last source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd11Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000916c,0x00000000,0,unsigned>;
        ///Last source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd12Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000918c,0x00000000,0,unsigned>;
        ///Last source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd13Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400091ac,0x00000000,0,unsigned>;
        ///Last source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd14Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400091cc,0x00000000,0,unsigned>;
        ///Last source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd15Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400091ec,0x00000000,0,unsigned>;
        ///Last source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd0Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009010,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd1Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009030,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd2Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009050,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd3Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009070,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd4Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009090,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd5Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400090b0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd6Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400090d0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd7Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400090f0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd8Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009110,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd9Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009130,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd10Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009150,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd11Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009170,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd12Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009190,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd13Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400091b0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd14Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400091d0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd15Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400091f0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd0Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009014,0xffff0000,0,unsigned>;
        ///Destination Address Signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd1Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009034,0xffff0000,0,unsigned>;
        ///Destination Address Signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd2Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009054,0xffff0000,0,unsigned>;
        ///Destination Address Signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd3Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009074,0xffff0000,0,unsigned>;
        ///Destination Address Signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd4Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009094,0xffff0000,0,unsigned>;
        ///Destination Address Signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd5Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400090b4,0xffff0000,0,unsigned>;
        ///Destination Address Signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd6Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400090d4,0xffff0000,0,unsigned>;
        ///Destination Address Signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd7Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400090f4,0xffff0000,0,unsigned>;
        ///Destination Address Signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd8Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009114,0xffff0000,0,unsigned>;
        ///Destination Address Signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd9Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009134,0xffff0000,0,unsigned>;
        ///Destination Address Signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd10Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009154,0xffff0000,0,unsigned>;
        ///Destination Address Signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd11Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009174,0xffff0000,0,unsigned>;
        ///Destination Address Signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd12Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009194,0xffff0000,0,unsigned>;
        ///Destination Address Signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd13Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400091b4,0xffff0000,0,unsigned>;
        ///Destination Address Signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd14Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400091d4,0xffff0000,0,unsigned>;
        ///Destination Address Signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd15Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400091f4,0xffff0000,0,unsigned>;
        ///Destination Address Signed offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd0CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009016,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd1CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009036,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd2CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009056,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd3CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009076,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd4CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009096,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd5CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400090b6,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd6CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400090d6,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd7CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400090f6,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd8CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009116,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd9CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009136,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd10CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009156,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd11CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009176,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd12CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009196,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd13CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400091b6,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd14CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400091d6,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd15CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400091f6,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd0CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009016,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd1CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009036,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd2CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009056,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd3CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009076,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd4CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009096,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd5CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400090b6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd6CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400090d6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd7CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400090f6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd8CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009116,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd9CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009136,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd10CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009156,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd11CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009176,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd12CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009196,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd13CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400091b6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd14CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400091d6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd15CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400091f6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd0Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009018,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd1Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009038,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd2Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009058,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd3Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009078,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd4Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009098,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd5Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400090b8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd6Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400090d8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd7Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400090f8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd8Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009118,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd9Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009138,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd10Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009158,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd11Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009178,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd12Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009198,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd13Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400091b8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd14Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400091d8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd15Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400091f8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd0Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000901c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class StartVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Enable an interrupt when major iteration count completes
        enum class IntmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IntmajorVal> intmajor{}; 
        namespace IntmajorValC{
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v1> v1{};
        }
        ///Enable an interrupt when major counter is half complete.
        enum class InthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InthalfVal> inthalf{}; 
        namespace InthalfValC{
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v1> v1{};
        }
        ///Disable Request
        enum class DreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DreqVal> dreq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v1> v1{};
        }
        ///Enable Scatter/Gather Processing
        enum class EsgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsgVal> esg{}; 
        namespace EsgValC{
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v1> v1{};
        }
        ///Enable channel-to-channel linking on major loop complete
        enum class MajorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MajorelinkVal> majorelink{}; 
        namespace MajorelinkValC{
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v1> v1{};
        }
        ///Channel Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class BwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
        }
    }
    namespace DmaTcd1Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000903c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class StartVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Enable an interrupt when major iteration count completes
        enum class IntmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IntmajorVal> intmajor{}; 
        namespace IntmajorValC{
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v1> v1{};
        }
        ///Enable an interrupt when major counter is half complete.
        enum class InthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InthalfVal> inthalf{}; 
        namespace InthalfValC{
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v1> v1{};
        }
        ///Disable Request
        enum class DreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DreqVal> dreq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v1> v1{};
        }
        ///Enable Scatter/Gather Processing
        enum class EsgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsgVal> esg{}; 
        namespace EsgValC{
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v1> v1{};
        }
        ///Enable channel-to-channel linking on major loop complete
        enum class MajorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MajorelinkVal> majorelink{}; 
        namespace MajorelinkValC{
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v1> v1{};
        }
        ///Channel Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class BwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
        }
    }
    namespace DmaTcd2Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000905c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class StartVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Enable an interrupt when major iteration count completes
        enum class IntmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IntmajorVal> intmajor{}; 
        namespace IntmajorValC{
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v1> v1{};
        }
        ///Enable an interrupt when major counter is half complete.
        enum class InthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InthalfVal> inthalf{}; 
        namespace InthalfValC{
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v1> v1{};
        }
        ///Disable Request
        enum class DreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DreqVal> dreq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v1> v1{};
        }
        ///Enable Scatter/Gather Processing
        enum class EsgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsgVal> esg{}; 
        namespace EsgValC{
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v1> v1{};
        }
        ///Enable channel-to-channel linking on major loop complete
        enum class MajorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MajorelinkVal> majorelink{}; 
        namespace MajorelinkValC{
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v1> v1{};
        }
        ///Channel Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class BwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
        }
    }
    namespace DmaTcd3Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000907c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class StartVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Enable an interrupt when major iteration count completes
        enum class IntmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IntmajorVal> intmajor{}; 
        namespace IntmajorValC{
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v1> v1{};
        }
        ///Enable an interrupt when major counter is half complete.
        enum class InthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InthalfVal> inthalf{}; 
        namespace InthalfValC{
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v1> v1{};
        }
        ///Disable Request
        enum class DreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DreqVal> dreq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v1> v1{};
        }
        ///Enable Scatter/Gather Processing
        enum class EsgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsgVal> esg{}; 
        namespace EsgValC{
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v1> v1{};
        }
        ///Enable channel-to-channel linking on major loop complete
        enum class MajorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MajorelinkVal> majorelink{}; 
        namespace MajorelinkValC{
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v1> v1{};
        }
        ///Channel Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class BwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
        }
    }
    namespace DmaTcd4Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000909c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class StartVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Enable an interrupt when major iteration count completes
        enum class IntmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IntmajorVal> intmajor{}; 
        namespace IntmajorValC{
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v1> v1{};
        }
        ///Enable an interrupt when major counter is half complete.
        enum class InthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InthalfVal> inthalf{}; 
        namespace InthalfValC{
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v1> v1{};
        }
        ///Disable Request
        enum class DreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DreqVal> dreq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v1> v1{};
        }
        ///Enable Scatter/Gather Processing
        enum class EsgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsgVal> esg{}; 
        namespace EsgValC{
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v1> v1{};
        }
        ///Enable channel-to-channel linking on major loop complete
        enum class MajorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MajorelinkVal> majorelink{}; 
        namespace MajorelinkValC{
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v1> v1{};
        }
        ///Channel Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class BwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
        }
    }
    namespace DmaTcd5Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400090bc,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class StartVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Enable an interrupt when major iteration count completes
        enum class IntmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IntmajorVal> intmajor{}; 
        namespace IntmajorValC{
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v1> v1{};
        }
        ///Enable an interrupt when major counter is half complete.
        enum class InthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InthalfVal> inthalf{}; 
        namespace InthalfValC{
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v1> v1{};
        }
        ///Disable Request
        enum class DreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DreqVal> dreq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v1> v1{};
        }
        ///Enable Scatter/Gather Processing
        enum class EsgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsgVal> esg{}; 
        namespace EsgValC{
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v1> v1{};
        }
        ///Enable channel-to-channel linking on major loop complete
        enum class MajorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MajorelinkVal> majorelink{}; 
        namespace MajorelinkValC{
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v1> v1{};
        }
        ///Channel Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class BwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
        }
    }
    namespace DmaTcd6Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400090dc,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class StartVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Enable an interrupt when major iteration count completes
        enum class IntmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IntmajorVal> intmajor{}; 
        namespace IntmajorValC{
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v1> v1{};
        }
        ///Enable an interrupt when major counter is half complete.
        enum class InthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InthalfVal> inthalf{}; 
        namespace InthalfValC{
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v1> v1{};
        }
        ///Disable Request
        enum class DreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DreqVal> dreq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v1> v1{};
        }
        ///Enable Scatter/Gather Processing
        enum class EsgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsgVal> esg{}; 
        namespace EsgValC{
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v1> v1{};
        }
        ///Enable channel-to-channel linking on major loop complete
        enum class MajorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MajorelinkVal> majorelink{}; 
        namespace MajorelinkValC{
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v1> v1{};
        }
        ///Channel Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class BwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
        }
    }
    namespace DmaTcd7Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400090fc,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class StartVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Enable an interrupt when major iteration count completes
        enum class IntmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IntmajorVal> intmajor{}; 
        namespace IntmajorValC{
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v1> v1{};
        }
        ///Enable an interrupt when major counter is half complete.
        enum class InthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InthalfVal> inthalf{}; 
        namespace InthalfValC{
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v1> v1{};
        }
        ///Disable Request
        enum class DreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DreqVal> dreq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v1> v1{};
        }
        ///Enable Scatter/Gather Processing
        enum class EsgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsgVal> esg{}; 
        namespace EsgValC{
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v1> v1{};
        }
        ///Enable channel-to-channel linking on major loop complete
        enum class MajorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MajorelinkVal> majorelink{}; 
        namespace MajorelinkValC{
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v1> v1{};
        }
        ///Channel Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class BwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
        }
    }
    namespace DmaTcd8Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000911c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class StartVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Enable an interrupt when major iteration count completes
        enum class IntmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IntmajorVal> intmajor{}; 
        namespace IntmajorValC{
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v1> v1{};
        }
        ///Enable an interrupt when major counter is half complete.
        enum class InthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InthalfVal> inthalf{}; 
        namespace InthalfValC{
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v1> v1{};
        }
        ///Disable Request
        enum class DreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DreqVal> dreq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v1> v1{};
        }
        ///Enable Scatter/Gather Processing
        enum class EsgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsgVal> esg{}; 
        namespace EsgValC{
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v1> v1{};
        }
        ///Enable channel-to-channel linking on major loop complete
        enum class MajorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MajorelinkVal> majorelink{}; 
        namespace MajorelinkValC{
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v1> v1{};
        }
        ///Channel Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class BwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
        }
    }
    namespace DmaTcd9Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000913c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class StartVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Enable an interrupt when major iteration count completes
        enum class IntmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IntmajorVal> intmajor{}; 
        namespace IntmajorValC{
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v1> v1{};
        }
        ///Enable an interrupt when major counter is half complete.
        enum class InthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InthalfVal> inthalf{}; 
        namespace InthalfValC{
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v1> v1{};
        }
        ///Disable Request
        enum class DreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DreqVal> dreq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v1> v1{};
        }
        ///Enable Scatter/Gather Processing
        enum class EsgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsgVal> esg{}; 
        namespace EsgValC{
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v1> v1{};
        }
        ///Enable channel-to-channel linking on major loop complete
        enum class MajorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MajorelinkVal> majorelink{}; 
        namespace MajorelinkValC{
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v1> v1{};
        }
        ///Channel Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class BwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
        }
    }
    namespace DmaTcd10Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000915c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class StartVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Enable an interrupt when major iteration count completes
        enum class IntmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IntmajorVal> intmajor{}; 
        namespace IntmajorValC{
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v1> v1{};
        }
        ///Enable an interrupt when major counter is half complete.
        enum class InthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InthalfVal> inthalf{}; 
        namespace InthalfValC{
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v1> v1{};
        }
        ///Disable Request
        enum class DreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DreqVal> dreq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v1> v1{};
        }
        ///Enable Scatter/Gather Processing
        enum class EsgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsgVal> esg{}; 
        namespace EsgValC{
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v1> v1{};
        }
        ///Enable channel-to-channel linking on major loop complete
        enum class MajorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MajorelinkVal> majorelink{}; 
        namespace MajorelinkValC{
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v1> v1{};
        }
        ///Channel Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class BwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
        }
    }
    namespace DmaTcd11Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000917c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class StartVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Enable an interrupt when major iteration count completes
        enum class IntmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IntmajorVal> intmajor{}; 
        namespace IntmajorValC{
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v1> v1{};
        }
        ///Enable an interrupt when major counter is half complete.
        enum class InthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InthalfVal> inthalf{}; 
        namespace InthalfValC{
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v1> v1{};
        }
        ///Disable Request
        enum class DreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DreqVal> dreq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v1> v1{};
        }
        ///Enable Scatter/Gather Processing
        enum class EsgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsgVal> esg{}; 
        namespace EsgValC{
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v1> v1{};
        }
        ///Enable channel-to-channel linking on major loop complete
        enum class MajorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MajorelinkVal> majorelink{}; 
        namespace MajorelinkValC{
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v1> v1{};
        }
        ///Channel Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class BwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
        }
    }
    namespace DmaTcd12Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000919c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class StartVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Enable an interrupt when major iteration count completes
        enum class IntmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IntmajorVal> intmajor{}; 
        namespace IntmajorValC{
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v1> v1{};
        }
        ///Enable an interrupt when major counter is half complete.
        enum class InthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InthalfVal> inthalf{}; 
        namespace InthalfValC{
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v1> v1{};
        }
        ///Disable Request
        enum class DreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DreqVal> dreq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v1> v1{};
        }
        ///Enable Scatter/Gather Processing
        enum class EsgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsgVal> esg{}; 
        namespace EsgValC{
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v1> v1{};
        }
        ///Enable channel-to-channel linking on major loop complete
        enum class MajorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MajorelinkVal> majorelink{}; 
        namespace MajorelinkValC{
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v1> v1{};
        }
        ///Channel Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class BwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
        }
    }
    namespace DmaTcd13Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400091bc,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class StartVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Enable an interrupt when major iteration count completes
        enum class IntmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IntmajorVal> intmajor{}; 
        namespace IntmajorValC{
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v1> v1{};
        }
        ///Enable an interrupt when major counter is half complete.
        enum class InthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InthalfVal> inthalf{}; 
        namespace InthalfValC{
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v1> v1{};
        }
        ///Disable Request
        enum class DreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DreqVal> dreq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v1> v1{};
        }
        ///Enable Scatter/Gather Processing
        enum class EsgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsgVal> esg{}; 
        namespace EsgValC{
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v1> v1{};
        }
        ///Enable channel-to-channel linking on major loop complete
        enum class MajorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MajorelinkVal> majorelink{}; 
        namespace MajorelinkValC{
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v1> v1{};
        }
        ///Channel Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class BwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
        }
    }
    namespace DmaTcd14Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400091dc,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class StartVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Enable an interrupt when major iteration count completes
        enum class IntmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IntmajorVal> intmajor{}; 
        namespace IntmajorValC{
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v1> v1{};
        }
        ///Enable an interrupt when major counter is half complete.
        enum class InthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InthalfVal> inthalf{}; 
        namespace InthalfValC{
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v1> v1{};
        }
        ///Disable Request
        enum class DreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DreqVal> dreq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v1> v1{};
        }
        ///Enable Scatter/Gather Processing
        enum class EsgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsgVal> esg{}; 
        namespace EsgValC{
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v1> v1{};
        }
        ///Enable channel-to-channel linking on major loop complete
        enum class MajorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MajorelinkVal> majorelink{}; 
        namespace MajorelinkValC{
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v1> v1{};
        }
        ///Channel Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class BwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
        }
    }
    namespace DmaTcd15Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400091fc,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class StartVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Enable an interrupt when major iteration count completes
        enum class IntmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IntmajorVal> intmajor{}; 
        namespace IntmajorValC{
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intmajor)::Type,IntmajorVal::v1> v1{};
        }
        ///Enable an interrupt when major counter is half complete.
        enum class InthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,InthalfVal> inthalf{}; 
        namespace InthalfValC{
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inthalf)::Type,InthalfVal::v1> v1{};
        }
        ///Disable Request
        enum class DreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DreqVal> dreq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dreq)::Type,DreqVal::v1> v1{};
        }
        ///Enable Scatter/Gather Processing
        enum class EsgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EsgVal> esg{}; 
        namespace EsgValC{
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esg)::Type,EsgVal::v1> v1{};
        }
        ///Enable channel-to-channel linking on major loop complete
        enum class MajorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MajorelinkVal> majorelink{}; 
        namespace MajorelinkValC{
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(majorelink)::Type,MajorelinkVal::v1> v1{};
        }
        ///Channel Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class BwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
        }
    }
    namespace DmaTcd0BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000901e,0xffff6000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd1BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000903e,0xffff6000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd2BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000905e,0xffff6000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd3BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000907e,0xffff6000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd4BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000909e,0xffff6000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd5BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400090be,0xffff6000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd6BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400090de,0xffff6000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd7BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400090fe,0xffff6000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd8BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000911e,0xffff6000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd9BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000913e,0xffff6000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd10BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000915e,0xffff6000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd11BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000917e,0xffff6000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd12BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000919e,0xffff6000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd13BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400091be,0xffff6000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd14BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400091de,0xffff6000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd15BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400091fe,0xffff6000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd0BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000901e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd1BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000903e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd2BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000905e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd3BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000907e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd4BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000909e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd5BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400090be,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd6BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400090de,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd7BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400090fe,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd8BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000911e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd9BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000913e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd10BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000915e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd11BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000917e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd12BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000919e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd13BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400091be,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd14BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400091de,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
    namespace DmaTcd15BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400091fe,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class ElinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ElinkVal> elink{}; 
        namespace ElinkValC{
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(elink)::Type,ElinkVal::v1> v1{};
        }
    }
}
