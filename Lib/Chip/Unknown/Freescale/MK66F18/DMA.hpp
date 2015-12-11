#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Enhanced direct memory access controller
    namespace DmaCr{    ///<Control Register
        using Addr = Register::Address<0x40008000,0xfffcfa01,0,unsigned>;
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
            v0=0x00000000,     ///<Fixed priority arbitration is used for channel selection within each group.
            v1=0x00000001,     ///<Round robin arbitration is used for channel selection within each group.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ErcaVal> erca{}; 
        namespace ErcaValC{
            constexpr Register::FieldValue<decltype(erca)::Type,ErcaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erca)::Type,ErcaVal::v1> v1{};
        }
        ///Enable Round Robin Group Arbitration
        enum class ErgaVal {
            v0=0x00000000,     ///<Fixed priority arbitration is used for selection among the groups.
            v1=0x00000001,     ///<Round robin arbitration is used for selection among the groups.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ErgaVal> erga{}; 
        namespace ErgaValC{
            constexpr Register::FieldValue<decltype(erga)::Type,ErgaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erga)::Type,ErgaVal::v1> v1{};
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
        ///Channel Group 0 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> grp0pri{}; 
        ///Channel Group 1 Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> grp1pri{}; 
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
        using Addr = Register::Address<0x40008004,0x7ffe2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> errchn{}; 
        ///Channel Priority Error
        enum class CpeVal {
            v0=0x00000000,     ///<No channel priority error
            v1=0x00000001,     ///<The last recorded error was a configuration error in the channel priorities within a group. Channel priorities within a group are not unique.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,CpeVal> cpe{}; 
        namespace CpeValC{
            constexpr Register::FieldValue<decltype(cpe)::Type,CpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpe)::Type,CpeVal::v1> v1{};
        }
        ///Group Priority Error
        enum class GpeVal {
            v0=0x00000000,     ///<No group priority error
            v1=0x00000001,     ///<The last recorded error was a configuration error among the group priorities. All group priorities are not unique.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,GpeVal> gpe{}; 
        namespace GpeValC{
            constexpr Register::FieldValue<decltype(gpe)::Type,GpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gpe)::Type,GpeVal::v1> v1{};
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
        using Addr = Register::Address<0x4000800c,0x00000000,0,unsigned>;
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
        ///Enable DMA Request 16
        enum class Erq16Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Erq16Val> erq16{}; 
        namespace Erq16ValC{
            constexpr Register::FieldValue<decltype(erq16)::Type,Erq16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq16)::Type,Erq16Val::v1> v1{};
        }
        ///Enable DMA Request 17
        enum class Erq17Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Erq17Val> erq17{}; 
        namespace Erq17ValC{
            constexpr Register::FieldValue<decltype(erq17)::Type,Erq17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq17)::Type,Erq17Val::v1> v1{};
        }
        ///Enable DMA Request 18
        enum class Erq18Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Erq18Val> erq18{}; 
        namespace Erq18ValC{
            constexpr Register::FieldValue<decltype(erq18)::Type,Erq18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq18)::Type,Erq18Val::v1> v1{};
        }
        ///Enable DMA Request 19
        enum class Erq19Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Erq19Val> erq19{}; 
        namespace Erq19ValC{
            constexpr Register::FieldValue<decltype(erq19)::Type,Erq19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq19)::Type,Erq19Val::v1> v1{};
        }
        ///Enable DMA Request 20
        enum class Erq20Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Erq20Val> erq20{}; 
        namespace Erq20ValC{
            constexpr Register::FieldValue<decltype(erq20)::Type,Erq20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq20)::Type,Erq20Val::v1> v1{};
        }
        ///Enable DMA Request 21
        enum class Erq21Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Erq21Val> erq21{}; 
        namespace Erq21ValC{
            constexpr Register::FieldValue<decltype(erq21)::Type,Erq21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq21)::Type,Erq21Val::v1> v1{};
        }
        ///Enable DMA Request 22
        enum class Erq22Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Erq22Val> erq22{}; 
        namespace Erq22ValC{
            constexpr Register::FieldValue<decltype(erq22)::Type,Erq22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq22)::Type,Erq22Val::v1> v1{};
        }
        ///Enable DMA Request 23
        enum class Erq23Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Erq23Val> erq23{}; 
        namespace Erq23ValC{
            constexpr Register::FieldValue<decltype(erq23)::Type,Erq23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq23)::Type,Erq23Val::v1> v1{};
        }
        ///Enable DMA Request 24
        enum class Erq24Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Erq24Val> erq24{}; 
        namespace Erq24ValC{
            constexpr Register::FieldValue<decltype(erq24)::Type,Erq24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq24)::Type,Erq24Val::v1> v1{};
        }
        ///Enable DMA Request 25
        enum class Erq25Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Erq25Val> erq25{}; 
        namespace Erq25ValC{
            constexpr Register::FieldValue<decltype(erq25)::Type,Erq25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq25)::Type,Erq25Val::v1> v1{};
        }
        ///Enable DMA Request 26
        enum class Erq26Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Erq26Val> erq26{}; 
        namespace Erq26ValC{
            constexpr Register::FieldValue<decltype(erq26)::Type,Erq26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq26)::Type,Erq26Val::v1> v1{};
        }
        ///Enable DMA Request 27
        enum class Erq27Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Erq27Val> erq27{}; 
        namespace Erq27ValC{
            constexpr Register::FieldValue<decltype(erq27)::Type,Erq27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq27)::Type,Erq27Val::v1> v1{};
        }
        ///Enable DMA Request 28
        enum class Erq28Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Erq28Val> erq28{}; 
        namespace Erq28ValC{
            constexpr Register::FieldValue<decltype(erq28)::Type,Erq28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq28)::Type,Erq28Val::v1> v1{};
        }
        ///Enable DMA Request 29
        enum class Erq29Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Erq29Val> erq29{}; 
        namespace Erq29ValC{
            constexpr Register::FieldValue<decltype(erq29)::Type,Erq29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq29)::Type,Erq29Val::v1> v1{};
        }
        ///Enable DMA Request 30
        enum class Erq30Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Erq30Val> erq30{}; 
        namespace Erq30ValC{
            constexpr Register::FieldValue<decltype(erq30)::Type,Erq30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq30)::Type,Erq30Val::v1> v1{};
        }
        ///Enable DMA Request 31
        enum class Erq31Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Erq31Val> erq31{}; 
        namespace Erq31ValC{
            constexpr Register::FieldValue<decltype(erq31)::Type,Erq31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erq31)::Type,Erq31Val::v1> v1{};
        }
    }
    namespace DmaEei{    ///<Enable Error Interrupt Register
        using Addr = Register::Address<0x40008014,0x00000000,0,unsigned>;
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
        ///Enable Error Interrupt 16
        enum class Eei16Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Eei16Val> eei16{}; 
        namespace Eei16ValC{
            constexpr Register::FieldValue<decltype(eei16)::Type,Eei16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei16)::Type,Eei16Val::v1> v1{};
        }
        ///Enable Error Interrupt 17
        enum class Eei17Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Eei17Val> eei17{}; 
        namespace Eei17ValC{
            constexpr Register::FieldValue<decltype(eei17)::Type,Eei17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei17)::Type,Eei17Val::v1> v1{};
        }
        ///Enable Error Interrupt 18
        enum class Eei18Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Eei18Val> eei18{}; 
        namespace Eei18ValC{
            constexpr Register::FieldValue<decltype(eei18)::Type,Eei18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei18)::Type,Eei18Val::v1> v1{};
        }
        ///Enable Error Interrupt 19
        enum class Eei19Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Eei19Val> eei19{}; 
        namespace Eei19ValC{
            constexpr Register::FieldValue<decltype(eei19)::Type,Eei19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei19)::Type,Eei19Val::v1> v1{};
        }
        ///Enable Error Interrupt 20
        enum class Eei20Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Eei20Val> eei20{}; 
        namespace Eei20ValC{
            constexpr Register::FieldValue<decltype(eei20)::Type,Eei20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei20)::Type,Eei20Val::v1> v1{};
        }
        ///Enable Error Interrupt 21
        enum class Eei21Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Eei21Val> eei21{}; 
        namespace Eei21ValC{
            constexpr Register::FieldValue<decltype(eei21)::Type,Eei21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei21)::Type,Eei21Val::v1> v1{};
        }
        ///Enable Error Interrupt 22
        enum class Eei22Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Eei22Val> eei22{}; 
        namespace Eei22ValC{
            constexpr Register::FieldValue<decltype(eei22)::Type,Eei22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei22)::Type,Eei22Val::v1> v1{};
        }
        ///Enable Error Interrupt 23
        enum class Eei23Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Eei23Val> eei23{}; 
        namespace Eei23ValC{
            constexpr Register::FieldValue<decltype(eei23)::Type,Eei23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei23)::Type,Eei23Val::v1> v1{};
        }
        ///Enable Error Interrupt 24
        enum class Eei24Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Eei24Val> eei24{}; 
        namespace Eei24ValC{
            constexpr Register::FieldValue<decltype(eei24)::Type,Eei24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei24)::Type,Eei24Val::v1> v1{};
        }
        ///Enable Error Interrupt 25
        enum class Eei25Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Eei25Val> eei25{}; 
        namespace Eei25ValC{
            constexpr Register::FieldValue<decltype(eei25)::Type,Eei25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei25)::Type,Eei25Val::v1> v1{};
        }
        ///Enable Error Interrupt 26
        enum class Eei26Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Eei26Val> eei26{}; 
        namespace Eei26ValC{
            constexpr Register::FieldValue<decltype(eei26)::Type,Eei26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei26)::Type,Eei26Val::v1> v1{};
        }
        ///Enable Error Interrupt 27
        enum class Eei27Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Eei27Val> eei27{}; 
        namespace Eei27ValC{
            constexpr Register::FieldValue<decltype(eei27)::Type,Eei27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei27)::Type,Eei27Val::v1> v1{};
        }
        ///Enable Error Interrupt 28
        enum class Eei28Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Eei28Val> eei28{}; 
        namespace Eei28ValC{
            constexpr Register::FieldValue<decltype(eei28)::Type,Eei28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei28)::Type,Eei28Val::v1> v1{};
        }
        ///Enable Error Interrupt 29
        enum class Eei29Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Eei29Val> eei29{}; 
        namespace Eei29ValC{
            constexpr Register::FieldValue<decltype(eei29)::Type,Eei29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei29)::Type,Eei29Val::v1> v1{};
        }
        ///Enable Error Interrupt 30
        enum class Eei30Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Eei30Val> eei30{}; 
        namespace Eei30ValC{
            constexpr Register::FieldValue<decltype(eei30)::Type,Eei30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei30)::Type,Eei30Val::v1> v1{};
        }
        ///Enable Error Interrupt 31
        enum class Eei31Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Eei31Val> eei31{}; 
        namespace Eei31ValC{
            constexpr Register::FieldValue<decltype(eei31)::Type,Eei31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eei31)::Type,Eei31Val::v1> v1{};
        }
    }
    namespace DmaCeei{    ///<Clear Enable Error Interrupt Register
        using Addr = Register::Address<0x40008018,0xffffff20,0,unsigned char>;
        ///Clear Enable Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ceei{}; 
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
        using Addr = Register::Address<0x40008019,0xffffff20,0,unsigned char>;
        ///Set Enable Error Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> seei{}; 
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
        using Addr = Register::Address<0x4000801a,0xffffff20,0,unsigned char>;
        ///Clear Enable Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cerq{}; 
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
        using Addr = Register::Address<0x4000801b,0xffffff20,0,unsigned char>;
        ///Set Enable Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> serq{}; 
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
        using Addr = Register::Address<0x4000801c,0xffffff20,0,unsigned char>;
        ///Clear DONE Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cdne{}; 
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
        using Addr = Register::Address<0x4000801d,0xffffff20,0,unsigned char>;
        ///Set START Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ssrt{}; 
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
        using Addr = Register::Address<0x4000801e,0xffffff20,0,unsigned char>;
        ///Clear Error Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cerr{}; 
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
        using Addr = Register::Address<0x4000801f,0xffffff20,0,unsigned char>;
        ///Clear interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cint{}; 
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
        using Addr = Register::Address<0x40008024,0x00000000,0,unsigned>;
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
        ///Interrupt Request 16
        enum class Int16Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Int16Val> int16{}; 
        namespace Int16ValC{
            constexpr Register::FieldValue<decltype(int16)::Type,Int16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int16)::Type,Int16Val::v1> v1{};
        }
        ///Interrupt Request 17
        enum class Int17Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Int17Val> int17{}; 
        namespace Int17ValC{
            constexpr Register::FieldValue<decltype(int17)::Type,Int17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int17)::Type,Int17Val::v1> v1{};
        }
        ///Interrupt Request 18
        enum class Int18Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Int18Val> int18{}; 
        namespace Int18ValC{
            constexpr Register::FieldValue<decltype(int18)::Type,Int18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int18)::Type,Int18Val::v1> v1{};
        }
        ///Interrupt Request 19
        enum class Int19Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Int19Val> int19{}; 
        namespace Int19ValC{
            constexpr Register::FieldValue<decltype(int19)::Type,Int19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int19)::Type,Int19Val::v1> v1{};
        }
        ///Interrupt Request 20
        enum class Int20Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Int20Val> int20{}; 
        namespace Int20ValC{
            constexpr Register::FieldValue<decltype(int20)::Type,Int20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int20)::Type,Int20Val::v1> v1{};
        }
        ///Interrupt Request 21
        enum class Int21Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Int21Val> int21{}; 
        namespace Int21ValC{
            constexpr Register::FieldValue<decltype(int21)::Type,Int21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int21)::Type,Int21Val::v1> v1{};
        }
        ///Interrupt Request 22
        enum class Int22Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Int22Val> int22{}; 
        namespace Int22ValC{
            constexpr Register::FieldValue<decltype(int22)::Type,Int22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int22)::Type,Int22Val::v1> v1{};
        }
        ///Interrupt Request 23
        enum class Int23Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Int23Val> int23{}; 
        namespace Int23ValC{
            constexpr Register::FieldValue<decltype(int23)::Type,Int23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int23)::Type,Int23Val::v1> v1{};
        }
        ///Interrupt Request 24
        enum class Int24Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Int24Val> int24{}; 
        namespace Int24ValC{
            constexpr Register::FieldValue<decltype(int24)::Type,Int24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int24)::Type,Int24Val::v1> v1{};
        }
        ///Interrupt Request 25
        enum class Int25Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Int25Val> int25{}; 
        namespace Int25ValC{
            constexpr Register::FieldValue<decltype(int25)::Type,Int25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int25)::Type,Int25Val::v1> v1{};
        }
        ///Interrupt Request 26
        enum class Int26Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Int26Val> int26{}; 
        namespace Int26ValC{
            constexpr Register::FieldValue<decltype(int26)::Type,Int26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int26)::Type,Int26Val::v1> v1{};
        }
        ///Interrupt Request 27
        enum class Int27Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Int27Val> int27{}; 
        namespace Int27ValC{
            constexpr Register::FieldValue<decltype(int27)::Type,Int27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int27)::Type,Int27Val::v1> v1{};
        }
        ///Interrupt Request 28
        enum class Int28Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Int28Val> int28{}; 
        namespace Int28ValC{
            constexpr Register::FieldValue<decltype(int28)::Type,Int28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int28)::Type,Int28Val::v1> v1{};
        }
        ///Interrupt Request 29
        enum class Int29Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Int29Val> int29{}; 
        namespace Int29ValC{
            constexpr Register::FieldValue<decltype(int29)::Type,Int29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int29)::Type,Int29Val::v1> v1{};
        }
        ///Interrupt Request 30
        enum class Int30Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Int30Val> int30{}; 
        namespace Int30ValC{
            constexpr Register::FieldValue<decltype(int30)::Type,Int30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int30)::Type,Int30Val::v1> v1{};
        }
        ///Interrupt Request 31
        enum class Int31Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Int31Val> int31{}; 
        namespace Int31ValC{
            constexpr Register::FieldValue<decltype(int31)::Type,Int31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int31)::Type,Int31Val::v1> v1{};
        }
    }
    namespace DmaErr{    ///<Error Register
        using Addr = Register::Address<0x4000802c,0x00000000,0,unsigned>;
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
        ///Error In Channel 16
        enum class Err16Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Err16Val> err16{}; 
        namespace Err16ValC{
            constexpr Register::FieldValue<decltype(err16)::Type,Err16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err16)::Type,Err16Val::v1> v1{};
        }
        ///Error In Channel 17
        enum class Err17Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Err17Val> err17{}; 
        namespace Err17ValC{
            constexpr Register::FieldValue<decltype(err17)::Type,Err17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err17)::Type,Err17Val::v1> v1{};
        }
        ///Error In Channel 18
        enum class Err18Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Err18Val> err18{}; 
        namespace Err18ValC{
            constexpr Register::FieldValue<decltype(err18)::Type,Err18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err18)::Type,Err18Val::v1> v1{};
        }
        ///Error In Channel 19
        enum class Err19Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Err19Val> err19{}; 
        namespace Err19ValC{
            constexpr Register::FieldValue<decltype(err19)::Type,Err19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err19)::Type,Err19Val::v1> v1{};
        }
        ///Error In Channel 20
        enum class Err20Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Err20Val> err20{}; 
        namespace Err20ValC{
            constexpr Register::FieldValue<decltype(err20)::Type,Err20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err20)::Type,Err20Val::v1> v1{};
        }
        ///Error In Channel 21
        enum class Err21Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Err21Val> err21{}; 
        namespace Err21ValC{
            constexpr Register::FieldValue<decltype(err21)::Type,Err21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err21)::Type,Err21Val::v1> v1{};
        }
        ///Error In Channel 22
        enum class Err22Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Err22Val> err22{}; 
        namespace Err22ValC{
            constexpr Register::FieldValue<decltype(err22)::Type,Err22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err22)::Type,Err22Val::v1> v1{};
        }
        ///Error In Channel 23
        enum class Err23Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Err23Val> err23{}; 
        namespace Err23ValC{
            constexpr Register::FieldValue<decltype(err23)::Type,Err23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err23)::Type,Err23Val::v1> v1{};
        }
        ///Error In Channel 24
        enum class Err24Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Err24Val> err24{}; 
        namespace Err24ValC{
            constexpr Register::FieldValue<decltype(err24)::Type,Err24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err24)::Type,Err24Val::v1> v1{};
        }
        ///Error In Channel 25
        enum class Err25Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Err25Val> err25{}; 
        namespace Err25ValC{
            constexpr Register::FieldValue<decltype(err25)::Type,Err25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err25)::Type,Err25Val::v1> v1{};
        }
        ///Error In Channel 26
        enum class Err26Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Err26Val> err26{}; 
        namespace Err26ValC{
            constexpr Register::FieldValue<decltype(err26)::Type,Err26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err26)::Type,Err26Val::v1> v1{};
        }
        ///Error In Channel 27
        enum class Err27Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Err27Val> err27{}; 
        namespace Err27ValC{
            constexpr Register::FieldValue<decltype(err27)::Type,Err27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err27)::Type,Err27Val::v1> v1{};
        }
        ///Error In Channel 28
        enum class Err28Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Err28Val> err28{}; 
        namespace Err28ValC{
            constexpr Register::FieldValue<decltype(err28)::Type,Err28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err28)::Type,Err28Val::v1> v1{};
        }
        ///Error In Channel 29
        enum class Err29Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Err29Val> err29{}; 
        namespace Err29ValC{
            constexpr Register::FieldValue<decltype(err29)::Type,Err29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err29)::Type,Err29Val::v1> v1{};
        }
        ///Error In Channel 30
        enum class Err30Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Err30Val> err30{}; 
        namespace Err30ValC{
            constexpr Register::FieldValue<decltype(err30)::Type,Err30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err30)::Type,Err30Val::v1> v1{};
        }
        ///Error In Channel 31
        enum class Err31Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Err31Val> err31{}; 
        namespace Err31ValC{
            constexpr Register::FieldValue<decltype(err31)::Type,Err31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(err31)::Type,Err31Val::v1> v1{};
        }
    }
    namespace DmaHrs{    ///<Hardware Request Status Register
        using Addr = Register::Address<0x40008034,0x00000000,0,unsigned>;
        ///Hardware Request Status Channel 0
        enum class Hrs0Val {
            v0=0x00000000,     ///<A hardware service request for channel 0 is not present
            v1=0x00000001,     ///<A hardware service request for channel 0 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Hrs0Val> hrs0{}; 
        namespace Hrs0ValC{
            constexpr Register::FieldValue<decltype(hrs0)::Type,Hrs0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs0)::Type,Hrs0Val::v1> v1{};
        }
        ///Hardware Request Status Channel 1
        enum class Hrs1Val {
            v0=0x00000000,     ///<A hardware service request for channel 1 is not present
            v1=0x00000001,     ///<A hardware service request for channel 1 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Hrs1Val> hrs1{}; 
        namespace Hrs1ValC{
            constexpr Register::FieldValue<decltype(hrs1)::Type,Hrs1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs1)::Type,Hrs1Val::v1> v1{};
        }
        ///Hardware Request Status Channel 2
        enum class Hrs2Val {
            v0=0x00000000,     ///<A hardware service request for channel 2 is not present
            v1=0x00000001,     ///<A hardware service request for channel 2 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Hrs2Val> hrs2{}; 
        namespace Hrs2ValC{
            constexpr Register::FieldValue<decltype(hrs2)::Type,Hrs2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs2)::Type,Hrs2Val::v1> v1{};
        }
        ///Hardware Request Status Channel 3
        enum class Hrs3Val {
            v0=0x00000000,     ///<A hardware service request for channel 3 is not present
            v1=0x00000001,     ///<A hardware service request for channel 3 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Hrs3Val> hrs3{}; 
        namespace Hrs3ValC{
            constexpr Register::FieldValue<decltype(hrs3)::Type,Hrs3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs3)::Type,Hrs3Val::v1> v1{};
        }
        ///Hardware Request Status Channel 4
        enum class Hrs4Val {
            v0=0x00000000,     ///<A hardware service request for channel 4 is not present
            v1=0x00000001,     ///<A hardware service request for channel 4 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Hrs4Val> hrs4{}; 
        namespace Hrs4ValC{
            constexpr Register::FieldValue<decltype(hrs4)::Type,Hrs4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs4)::Type,Hrs4Val::v1> v1{};
        }
        ///Hardware Request Status Channel 5
        enum class Hrs5Val {
            v0=0x00000000,     ///<A hardware service request for channel 5 is not present
            v1=0x00000001,     ///<A hardware service request for channel 5 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Hrs5Val> hrs5{}; 
        namespace Hrs5ValC{
            constexpr Register::FieldValue<decltype(hrs5)::Type,Hrs5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs5)::Type,Hrs5Val::v1> v1{};
        }
        ///Hardware Request Status Channel 6
        enum class Hrs6Val {
            v0=0x00000000,     ///<A hardware service request for channel 6 is not present
            v1=0x00000001,     ///<A hardware service request for channel 6 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Hrs6Val> hrs6{}; 
        namespace Hrs6ValC{
            constexpr Register::FieldValue<decltype(hrs6)::Type,Hrs6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs6)::Type,Hrs6Val::v1> v1{};
        }
        ///Hardware Request Status Channel 7
        enum class Hrs7Val {
            v0=0x00000000,     ///<A hardware service request for channel 7 is not present
            v1=0x00000001,     ///<A hardware service request for channel 7 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Hrs7Val> hrs7{}; 
        namespace Hrs7ValC{
            constexpr Register::FieldValue<decltype(hrs7)::Type,Hrs7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs7)::Type,Hrs7Val::v1> v1{};
        }
        ///Hardware Request Status Channel 8
        enum class Hrs8Val {
            v0=0x00000000,     ///<A hardware service request for channel 8 is not present
            v1=0x00000001,     ///<A hardware service request for channel 8 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Hrs8Val> hrs8{}; 
        namespace Hrs8ValC{
            constexpr Register::FieldValue<decltype(hrs8)::Type,Hrs8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs8)::Type,Hrs8Val::v1> v1{};
        }
        ///Hardware Request Status Channel 9
        enum class Hrs9Val {
            v0=0x00000000,     ///<A hardware service request for channel 9 is not present
            v1=0x00000001,     ///<A hardware service request for channel 9 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Hrs9Val> hrs9{}; 
        namespace Hrs9ValC{
            constexpr Register::FieldValue<decltype(hrs9)::Type,Hrs9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs9)::Type,Hrs9Val::v1> v1{};
        }
        ///Hardware Request Status Channel 10
        enum class Hrs10Val {
            v0=0x00000000,     ///<A hardware service request for channel 10 is not present
            v1=0x00000001,     ///<A hardware service request for channel 10 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Hrs10Val> hrs10{}; 
        namespace Hrs10ValC{
            constexpr Register::FieldValue<decltype(hrs10)::Type,Hrs10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs10)::Type,Hrs10Val::v1> v1{};
        }
        ///Hardware Request Status Channel 11
        enum class Hrs11Val {
            v0=0x00000000,     ///<A hardware service request for channel 11 is not present
            v1=0x00000001,     ///<A hardware service request for channel 11 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Hrs11Val> hrs11{}; 
        namespace Hrs11ValC{
            constexpr Register::FieldValue<decltype(hrs11)::Type,Hrs11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs11)::Type,Hrs11Val::v1> v1{};
        }
        ///Hardware Request Status Channel 12
        enum class Hrs12Val {
            v0=0x00000000,     ///<A hardware service request for channel 12 is not present
            v1=0x00000001,     ///<A hardware service request for channel 12 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Hrs12Val> hrs12{}; 
        namespace Hrs12ValC{
            constexpr Register::FieldValue<decltype(hrs12)::Type,Hrs12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs12)::Type,Hrs12Val::v1> v1{};
        }
        ///Hardware Request Status Channel 13
        enum class Hrs13Val {
            v0=0x00000000,     ///<A hardware service request for channel 13 is not present
            v1=0x00000001,     ///<A hardware service request for channel 13 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Hrs13Val> hrs13{}; 
        namespace Hrs13ValC{
            constexpr Register::FieldValue<decltype(hrs13)::Type,Hrs13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs13)::Type,Hrs13Val::v1> v1{};
        }
        ///Hardware Request Status Channel 14
        enum class Hrs14Val {
            v0=0x00000000,     ///<A hardware service request for channel 14 is not present
            v1=0x00000001,     ///<A hardware service request for channel 14 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Hrs14Val> hrs14{}; 
        namespace Hrs14ValC{
            constexpr Register::FieldValue<decltype(hrs14)::Type,Hrs14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs14)::Type,Hrs14Val::v1> v1{};
        }
        ///Hardware Request Status Channel 15
        enum class Hrs15Val {
            v0=0x00000000,     ///<A hardware service request for channel 15 is not present
            v1=0x00000001,     ///<A hardware service request for channel 15 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Hrs15Val> hrs15{}; 
        namespace Hrs15ValC{
            constexpr Register::FieldValue<decltype(hrs15)::Type,Hrs15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs15)::Type,Hrs15Val::v1> v1{};
        }
        ///Hardware Request Status Channel 16
        enum class Hrs16Val {
            v0=0x00000000,     ///<A hardware service request for channel 16 is not present
            v1=0x00000001,     ///<A hardware service request for channel 16 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Hrs16Val> hrs16{}; 
        namespace Hrs16ValC{
            constexpr Register::FieldValue<decltype(hrs16)::Type,Hrs16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs16)::Type,Hrs16Val::v1> v1{};
        }
        ///Hardware Request Status Channel 17
        enum class Hrs17Val {
            v0=0x00000000,     ///<A hardware service request for channel 17 is not present
            v1=0x00000001,     ///<A hardware service request for channel 17 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Hrs17Val> hrs17{}; 
        namespace Hrs17ValC{
            constexpr Register::FieldValue<decltype(hrs17)::Type,Hrs17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs17)::Type,Hrs17Val::v1> v1{};
        }
        ///Hardware Request Status Channel 18
        enum class Hrs18Val {
            v0=0x00000000,     ///<A hardware service request for channel 18 is not present
            v1=0x00000001,     ///<A hardware service request for channel 18 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Hrs18Val> hrs18{}; 
        namespace Hrs18ValC{
            constexpr Register::FieldValue<decltype(hrs18)::Type,Hrs18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs18)::Type,Hrs18Val::v1> v1{};
        }
        ///Hardware Request Status Channel 19
        enum class Hrs19Val {
            v0=0x00000000,     ///<A hardware service request for channel 19 is not present
            v1=0x00000001,     ///<A hardware service request for channel 19 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Hrs19Val> hrs19{}; 
        namespace Hrs19ValC{
            constexpr Register::FieldValue<decltype(hrs19)::Type,Hrs19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs19)::Type,Hrs19Val::v1> v1{};
        }
        ///Hardware Request Status Channel 20
        enum class Hrs20Val {
            v0=0x00000000,     ///<A hardware service request for channel 20 is not present
            v1=0x00000001,     ///<A hardware service request for channel 20 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Hrs20Val> hrs20{}; 
        namespace Hrs20ValC{
            constexpr Register::FieldValue<decltype(hrs20)::Type,Hrs20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs20)::Type,Hrs20Val::v1> v1{};
        }
        ///Hardware Request Status Channel 21
        enum class Hrs21Val {
            v0=0x00000000,     ///<A hardware service request for channel 21 is not present
            v1=0x00000001,     ///<A hardware service request for channel 21 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Hrs21Val> hrs21{}; 
        namespace Hrs21ValC{
            constexpr Register::FieldValue<decltype(hrs21)::Type,Hrs21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs21)::Type,Hrs21Val::v1> v1{};
        }
        ///Hardware Request Status Channel 22
        enum class Hrs22Val {
            v0=0x00000000,     ///<A hardware service request for channel 22 is not present
            v1=0x00000001,     ///<A hardware service request for channel 22 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Hrs22Val> hrs22{}; 
        namespace Hrs22ValC{
            constexpr Register::FieldValue<decltype(hrs22)::Type,Hrs22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs22)::Type,Hrs22Val::v1> v1{};
        }
        ///Hardware Request Status Channel 23
        enum class Hrs23Val {
            v0=0x00000000,     ///<A hardware service request for channel 23 is not present
            v1=0x00000001,     ///<A hardware service request for channel 23 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Hrs23Val> hrs23{}; 
        namespace Hrs23ValC{
            constexpr Register::FieldValue<decltype(hrs23)::Type,Hrs23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs23)::Type,Hrs23Val::v1> v1{};
        }
        ///Hardware Request Status Channel 24
        enum class Hrs24Val {
            v0=0x00000000,     ///<A hardware service request for channel 24 is not present
            v1=0x00000001,     ///<A hardware service request for channel 24 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Hrs24Val> hrs24{}; 
        namespace Hrs24ValC{
            constexpr Register::FieldValue<decltype(hrs24)::Type,Hrs24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs24)::Type,Hrs24Val::v1> v1{};
        }
        ///Hardware Request Status Channel 25
        enum class Hrs25Val {
            v0=0x00000000,     ///<A hardware service request for channel 25 is not present
            v1=0x00000001,     ///<A hardware service request for channel 25 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Hrs25Val> hrs25{}; 
        namespace Hrs25ValC{
            constexpr Register::FieldValue<decltype(hrs25)::Type,Hrs25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs25)::Type,Hrs25Val::v1> v1{};
        }
        ///Hardware Request Status Channel 26
        enum class Hrs26Val {
            v0=0x00000000,     ///<A hardware service request for channel 26 is not present
            v1=0x00000001,     ///<A hardware service request for channel 26 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Hrs26Val> hrs26{}; 
        namespace Hrs26ValC{
            constexpr Register::FieldValue<decltype(hrs26)::Type,Hrs26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs26)::Type,Hrs26Val::v1> v1{};
        }
        ///Hardware Request Status Channel 27
        enum class Hrs27Val {
            v0=0x00000000,     ///<A hardware service request for channel 27 is not present
            v1=0x00000001,     ///<A hardware service request for channel 27 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Hrs27Val> hrs27{}; 
        namespace Hrs27ValC{
            constexpr Register::FieldValue<decltype(hrs27)::Type,Hrs27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs27)::Type,Hrs27Val::v1> v1{};
        }
        ///Hardware Request Status Channel 28
        enum class Hrs28Val {
            v0=0x00000000,     ///<A hardware service request for channel 28 is not present
            v1=0x00000001,     ///<A hardware service request for channel 28 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Hrs28Val> hrs28{}; 
        namespace Hrs28ValC{
            constexpr Register::FieldValue<decltype(hrs28)::Type,Hrs28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs28)::Type,Hrs28Val::v1> v1{};
        }
        ///Hardware Request Status Channel 29
        enum class Hrs29Val {
            v0=0x00000000,     ///<A hardware service request for channel 29 is not preset
            v1=0x00000001,     ///<A hardware service request for channel 29 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Hrs29Val> hrs29{}; 
        namespace Hrs29ValC{
            constexpr Register::FieldValue<decltype(hrs29)::Type,Hrs29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs29)::Type,Hrs29Val::v1> v1{};
        }
        ///Hardware Request Status Channel 30
        enum class Hrs30Val {
            v0=0x00000000,     ///<A hardware service request for channel 30 is not present
            v1=0x00000001,     ///<A hardware service request for for channel 30 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Hrs30Val> hrs30{}; 
        namespace Hrs30ValC{
            constexpr Register::FieldValue<decltype(hrs30)::Type,Hrs30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs30)::Type,Hrs30Val::v1> v1{};
        }
        ///Hardware Request Status Channel 31
        enum class Hrs31Val {
            v0=0x00000000,     ///<A hardware service request for channel 31 is not present
            v1=0x00000001,     ///<A hardware service request for channel 31 is present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Hrs31Val> hrs31{}; 
        namespace Hrs31ValC{
            constexpr Register::FieldValue<decltype(hrs31)::Type,Hrs31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hrs31)::Type,Hrs31Val::v1> v1{};
        }
    }
    namespace DmaEars{    ///<Enable Asynchronous Request in Stop Register
        using Addr = Register::Address<0x40008044,0x00000000,0,unsigned>;
        ///Enable asynchronous DMA request in stop mode for channel 0.
        enum class Edreq0Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 0.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Edreq0Val> edreq0{}; 
        namespace Edreq0ValC{
            constexpr Register::FieldValue<decltype(edreq0)::Type,Edreq0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq0)::Type,Edreq0Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 1.
        enum class Edreq1Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 1
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Edreq1Val> edreq1{}; 
        namespace Edreq1ValC{
            constexpr Register::FieldValue<decltype(edreq1)::Type,Edreq1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq1)::Type,Edreq1Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 2.
        enum class Edreq2Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 2.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Edreq2Val> edreq2{}; 
        namespace Edreq2ValC{
            constexpr Register::FieldValue<decltype(edreq2)::Type,Edreq2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq2)::Type,Edreq2Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 3.
        enum class Edreq3Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 3.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Edreq3Val> edreq3{}; 
        namespace Edreq3ValC{
            constexpr Register::FieldValue<decltype(edreq3)::Type,Edreq3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq3)::Type,Edreq3Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 4
        enum class Edreq4Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 4.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Edreq4Val> edreq4{}; 
        namespace Edreq4ValC{
            constexpr Register::FieldValue<decltype(edreq4)::Type,Edreq4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq4)::Type,Edreq4Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 5
        enum class Edreq5Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 5.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Edreq5Val> edreq5{}; 
        namespace Edreq5ValC{
            constexpr Register::FieldValue<decltype(edreq5)::Type,Edreq5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq5)::Type,Edreq5Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 6
        enum class Edreq6Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 6.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Edreq6Val> edreq6{}; 
        namespace Edreq6ValC{
            constexpr Register::FieldValue<decltype(edreq6)::Type,Edreq6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq6)::Type,Edreq6Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 7
        enum class Edreq7Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 7.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Edreq7Val> edreq7{}; 
        namespace Edreq7ValC{
            constexpr Register::FieldValue<decltype(edreq7)::Type,Edreq7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq7)::Type,Edreq7Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 8
        enum class Edreq8Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 8.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Edreq8Val> edreq8{}; 
        namespace Edreq8ValC{
            constexpr Register::FieldValue<decltype(edreq8)::Type,Edreq8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq8)::Type,Edreq8Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 9
        enum class Edreq9Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 9.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 9.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Edreq9Val> edreq9{}; 
        namespace Edreq9ValC{
            constexpr Register::FieldValue<decltype(edreq9)::Type,Edreq9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq9)::Type,Edreq9Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 10
        enum class Edreq10Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 10.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 10.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Edreq10Val> edreq10{}; 
        namespace Edreq10ValC{
            constexpr Register::FieldValue<decltype(edreq10)::Type,Edreq10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq10)::Type,Edreq10Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 11
        enum class Edreq11Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 11.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 11.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Edreq11Val> edreq11{}; 
        namespace Edreq11ValC{
            constexpr Register::FieldValue<decltype(edreq11)::Type,Edreq11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq11)::Type,Edreq11Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 12
        enum class Edreq12Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 12.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 12.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Edreq12Val> edreq12{}; 
        namespace Edreq12ValC{
            constexpr Register::FieldValue<decltype(edreq12)::Type,Edreq12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq12)::Type,Edreq12Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 13
        enum class Edreq13Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 13.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 13.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Edreq13Val> edreq13{}; 
        namespace Edreq13ValC{
            constexpr Register::FieldValue<decltype(edreq13)::Type,Edreq13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq13)::Type,Edreq13Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 14
        enum class Edreq14Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 14.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 14.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Edreq14Val> edreq14{}; 
        namespace Edreq14ValC{
            constexpr Register::FieldValue<decltype(edreq14)::Type,Edreq14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq14)::Type,Edreq14Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 15
        enum class Edreq15Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 15.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 15.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Edreq15Val> edreq15{}; 
        namespace Edreq15ValC{
            constexpr Register::FieldValue<decltype(edreq15)::Type,Edreq15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq15)::Type,Edreq15Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 16
        enum class Edreq16Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 16
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 16
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Edreq16Val> edreq16{}; 
        namespace Edreq16ValC{
            constexpr Register::FieldValue<decltype(edreq16)::Type,Edreq16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq16)::Type,Edreq16Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 17
        enum class Edreq17Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 17
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 17
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Edreq17Val> edreq17{}; 
        namespace Edreq17ValC{
            constexpr Register::FieldValue<decltype(edreq17)::Type,Edreq17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq17)::Type,Edreq17Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 18
        enum class Edreq18Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 18
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 18
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Edreq18Val> edreq18{}; 
        namespace Edreq18ValC{
            constexpr Register::FieldValue<decltype(edreq18)::Type,Edreq18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq18)::Type,Edreq18Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 19
        enum class Edreq19Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 19
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 19
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Edreq19Val> edreq19{}; 
        namespace Edreq19ValC{
            constexpr Register::FieldValue<decltype(edreq19)::Type,Edreq19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq19)::Type,Edreq19Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 20
        enum class Edreq20Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 20
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 20
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Edreq20Val> edreq20{}; 
        namespace Edreq20ValC{
            constexpr Register::FieldValue<decltype(edreq20)::Type,Edreq20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq20)::Type,Edreq20Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 21
        enum class Edreq21Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 21
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 21
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Edreq21Val> edreq21{}; 
        namespace Edreq21ValC{
            constexpr Register::FieldValue<decltype(edreq21)::Type,Edreq21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq21)::Type,Edreq21Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 22
        enum class Edreq22Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 22
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 22
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Edreq22Val> edreq22{}; 
        namespace Edreq22ValC{
            constexpr Register::FieldValue<decltype(edreq22)::Type,Edreq22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq22)::Type,Edreq22Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 23
        enum class Edreq23Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 23
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 23
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Edreq23Val> edreq23{}; 
        namespace Edreq23ValC{
            constexpr Register::FieldValue<decltype(edreq23)::Type,Edreq23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq23)::Type,Edreq23Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 24
        enum class Edreq24Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 24
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 24
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Edreq24Val> edreq24{}; 
        namespace Edreq24ValC{
            constexpr Register::FieldValue<decltype(edreq24)::Type,Edreq24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq24)::Type,Edreq24Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 25
        enum class Edreq25Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 25
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 25
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Edreq25Val> edreq25{}; 
        namespace Edreq25ValC{
            constexpr Register::FieldValue<decltype(edreq25)::Type,Edreq25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq25)::Type,Edreq25Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 26
        enum class Edreq26Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 26
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 26
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Edreq26Val> edreq26{}; 
        namespace Edreq26ValC{
            constexpr Register::FieldValue<decltype(edreq26)::Type,Edreq26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq26)::Type,Edreq26Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 27
        enum class Edreq27Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 27
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 27
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Edreq27Val> edreq27{}; 
        namespace Edreq27ValC{
            constexpr Register::FieldValue<decltype(edreq27)::Type,Edreq27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq27)::Type,Edreq27Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 28
        enum class Edreq28Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 28
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 28
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Edreq28Val> edreq28{}; 
        namespace Edreq28ValC{
            constexpr Register::FieldValue<decltype(edreq28)::Type,Edreq28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq28)::Type,Edreq28Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 29
        enum class Edreq29Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 29
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 29
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Edreq29Val> edreq29{}; 
        namespace Edreq29ValC{
            constexpr Register::FieldValue<decltype(edreq29)::Type,Edreq29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq29)::Type,Edreq29Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 30
        enum class Edreq30Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 30
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 30
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Edreq30Val> edreq30{}; 
        namespace Edreq30ValC{
            constexpr Register::FieldValue<decltype(edreq30)::Type,Edreq30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq30)::Type,Edreq30Val::v1> v1{};
        }
        ///Enable asynchronous DMA request in stop mode for channel 31
        enum class Edreq31Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 31
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 31
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Edreq31Val> edreq31{}; 
        namespace Edreq31ValC{
            constexpr Register::FieldValue<decltype(edreq31)::Type,Edreq31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(edreq31)::Type,Edreq31Val::v1> v1{};
        }
    }
    namespace DmaDchpri3{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008100,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
        using Addr = Register::Address<0x40008101,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
        using Addr = Register::Address<0x40008102,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
        using Addr = Register::Address<0x40008103,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
        using Addr = Register::Address<0x40008104,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
        using Addr = Register::Address<0x40008105,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
        using Addr = Register::Address<0x40008106,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
        using Addr = Register::Address<0x40008107,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
        using Addr = Register::Address<0x40008108,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
        using Addr = Register::Address<0x40008109,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
        using Addr = Register::Address<0x4000810a,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
        using Addr = Register::Address<0x4000810b,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
        using Addr = Register::Address<0x4000810c,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
        using Addr = Register::Address<0x4000810d,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
        using Addr = Register::Address<0x4000810e,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
        using Addr = Register::Address<0x4000810f,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaDchpri19{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008110,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaDchpri18{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008111,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaDchpri17{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008112,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaDchpri16{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008113,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaDchpri23{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008114,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaDchpri22{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008115,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaDchpri21{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008116,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaDchpri20{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008117,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaDchpri27{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008118,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaDchpri26{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008119,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaDchpri25{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000811a,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaDchpri24{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000811b,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaDchpri31{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000811c,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaDchpri30{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000811d,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaDchpri29{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000811e,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaDchpri28{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000811f,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class DpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpaVal> dpa{}; 
        namespace DpaValC{
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpa)::Type,DpaVal::v1> v1{};
        }
        ///Enable Channel Preemption. This bit resets to zero.
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
    namespace DmaTcd16Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009200,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd17Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009220,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd18Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009240,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd19Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009260,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd20Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009280,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd21Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400092a0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd22Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400092c0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd23Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400092e0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd24Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009300,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd25Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009320,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd26Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009340,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd27Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009360,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd28Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009380,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd29Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400093a0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd30Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400093c0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd31Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400093e0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd0Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009004,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd1Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009024,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd2Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009044,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd3Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009064,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd4Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009084,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd5Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400090a4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd6Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400090c4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd7Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400090e4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd8Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009104,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd9Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009124,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd10Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009144,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd11Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009164,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd12Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009184,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd13Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400091a4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd14Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400091c4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd15Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400091e4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd16Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009204,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd17Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009224,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd18Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009244,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd19Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009264,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd20Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009284,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd21Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400092a4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd22Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400092c4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd23Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400092e4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd24Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009304,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd25Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009324,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd26Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009344,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd27Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009364,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd28Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009384,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd29Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400093a4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd30Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400093c4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd31Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400093e4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
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
        ///Source Address Modulo
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
        ///Source Address Modulo
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
        ///Source Address Modulo
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
        ///Source Address Modulo
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
        ///Source Address Modulo
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
        ///Source Address Modulo
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
        ///Source Address Modulo
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
        ///Source Address Modulo
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
        ///Source Address Modulo
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
        ///Source Address Modulo
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
        ///Source Address Modulo
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
        ///Source Address Modulo
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
        ///Source Address Modulo
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
        ///Source Address Modulo
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
        ///Source Address Modulo
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd16Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009206,0xffff0000,0,unsigned>;
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd17Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009226,0xffff0000,0,unsigned>;
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd18Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009246,0xffff0000,0,unsigned>;
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd19Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009266,0xffff0000,0,unsigned>;
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd20Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009286,0xffff0000,0,unsigned>;
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd21Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400092a6,0xffff0000,0,unsigned>;
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd22Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400092c6,0xffff0000,0,unsigned>;
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd23Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400092e6,0xffff0000,0,unsigned>;
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd24Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009306,0xffff0000,0,unsigned>;
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd25Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009326,0xffff0000,0,unsigned>;
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd26Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009346,0xffff0000,0,unsigned>;
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd27Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009366,0xffff0000,0,unsigned>;
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd28Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009386,0xffff0000,0,unsigned>;
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd29Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400093a6,0xffff0000,0,unsigned>;
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd30Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400093c6,0xffff0000,0,unsigned>;
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd31Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400093e6,0xffff0000,0,unsigned>;
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
        ///Source Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd0NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009008,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
        ///Destination Minor Loop Offset Enable
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
        ///Destination Minor Loop Offset Enable
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
        ///Destination Minor Loop Offset Enable
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
        ///Destination Minor Loop Offset Enable
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
        ///Destination Minor Loop Offset Enable
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
        ///Destination Minor Loop Offset Enable
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
        ///Destination Minor Loop Offset Enable
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
        ///Destination Minor Loop Offset Enable
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
        ///Destination Minor Loop Offset Enable
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
        ///Destination Minor Loop Offset Enable
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
        ///Destination Minor Loop Offset Enable
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
        ///Destination Minor Loop Offset Enable
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
        ///Destination Minor Loop Offset Enable
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
        ///Destination Minor Loop Offset Enable
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
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd16NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009208,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd17NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009228,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd18NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009248,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd19NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009268,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd20NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009288,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd21NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400092a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd22NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400092c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd23NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400092e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd24NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009308,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd25NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009328,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd26NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009348,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd27NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009368,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd28NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009388,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd29NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400093a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd30NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400093c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd31NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400093e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
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
    namespace DmaTcd16NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009208,0x00000000,0,unsigned>;
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
    namespace DmaTcd17NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009228,0x00000000,0,unsigned>;
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
    namespace DmaTcd18NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009248,0x00000000,0,unsigned>;
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
    namespace DmaTcd19NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009268,0x00000000,0,unsigned>;
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
    namespace DmaTcd20NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009288,0x00000000,0,unsigned>;
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
    namespace DmaTcd21NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400092a8,0x00000000,0,unsigned>;
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
    namespace DmaTcd22NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400092c8,0x00000000,0,unsigned>;
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
    namespace DmaTcd23NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400092e8,0x00000000,0,unsigned>;
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
    namespace DmaTcd24NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009308,0x00000000,0,unsigned>;
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
    namespace DmaTcd25NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009328,0x00000000,0,unsigned>;
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
    namespace DmaTcd26NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009348,0x00000000,0,unsigned>;
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
    namespace DmaTcd27NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009368,0x00000000,0,unsigned>;
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
    namespace DmaTcd28NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009388,0x00000000,0,unsigned>;
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
    namespace DmaTcd29NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400093a8,0x00000000,0,unsigned>;
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
    namespace DmaTcd30NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400093c8,0x00000000,0,unsigned>;
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
    namespace DmaTcd31NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400093e8,0x00000000,0,unsigned>;
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
    namespace DmaTcd16NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009208,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd17NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009228,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd18NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009248,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd19NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009268,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd20NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009288,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd21NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400092a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd22NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400092c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd23NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400092e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd24NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009308,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd25NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009328,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd26NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009348,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd27NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009368,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd28NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009388,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd29NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400093a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd30NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400093c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd31NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400093e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd0Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000900c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd1Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000902c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd2Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000904c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd3Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000906c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd4Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000908c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd5Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400090ac,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd6Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400090cc,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd7Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400090ec,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd8Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000910c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd9Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000912c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd10Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000914c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd11Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000916c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd12Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000918c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd13Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400091ac,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd14Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400091cc,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd15Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400091ec,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd16Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000920c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd17Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000922c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd18Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000924c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd19Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000926c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd20Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000928c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd21Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400092ac,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd22Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400092cc,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd23Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400092ec,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd24Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000930c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd25Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000932c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd26Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000934c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd27Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000936c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd28Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000938c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd29Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400093ac,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd30Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400093cc,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd31Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400093ec,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
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
    namespace DmaTcd16Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009210,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd17Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009230,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd18Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009250,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd19Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009270,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd20Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009290,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd21Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400092b0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd22Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400092d0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd23Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400092f0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd24Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009310,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd25Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009330,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd26Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009350,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd27Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009370,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd28Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009390,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd29Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400093b0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd30Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400093d0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd31Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400093f0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd0Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009014,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd1Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009034,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd2Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009054,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd3Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009074,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd4Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009094,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd5Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400090b4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd6Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400090d4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd7Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400090f4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd8Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009114,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd9Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009134,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd10Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009154,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd11Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009174,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd12Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009194,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd13Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400091b4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd14Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400091d4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd15Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400091f4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd16Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009214,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd17Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009234,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd18Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009254,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd19Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009274,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd20Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009294,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd21Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400092b4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd22Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400092d4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd23Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400092f4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd24Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009314,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd25Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009334,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd26Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009354,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd27Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009374,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd28Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009394,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd29Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400093b4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd30Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400093d4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd31Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400093f4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd0CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009016,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009036,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009056,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009076,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009096,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400090b6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400090d6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400090f6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009116,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009136,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009156,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009176,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009196,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400091b6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400091d6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400091f6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd16CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009216,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd17CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009236,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd18CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009256,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd19CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009276,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd20CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009296,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd21CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400092b6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd22CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400092d6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd23CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400092f6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd24CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009316,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd25CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009336,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd26CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009356,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd27CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009376,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd28CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009396,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd29CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400093b6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd30CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400093d6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd31CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400093f6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd16CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009216,0xffff0000,0,unsigned>;
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
    namespace DmaTcd17CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009236,0xffff0000,0,unsigned>;
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
    namespace DmaTcd18CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009256,0xffff0000,0,unsigned>;
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
    namespace DmaTcd19CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009276,0xffff0000,0,unsigned>;
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
    namespace DmaTcd20CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009296,0xffff0000,0,unsigned>;
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
    namespace DmaTcd21CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400092b6,0xffff0000,0,unsigned>;
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
    namespace DmaTcd22CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400092d6,0xffff0000,0,unsigned>;
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
    namespace DmaTcd23CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400092f6,0xffff0000,0,unsigned>;
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
    namespace DmaTcd24CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009316,0xffff0000,0,unsigned>;
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
    namespace DmaTcd25CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009336,0xffff0000,0,unsigned>;
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
    namespace DmaTcd26CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009356,0xffff0000,0,unsigned>;
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
    namespace DmaTcd27CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009376,0xffff0000,0,unsigned>;
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
    namespace DmaTcd28CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009396,0xffff0000,0,unsigned>;
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
    namespace DmaTcd29CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400093b6,0xffff0000,0,unsigned>;
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
    namespace DmaTcd30CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400093d6,0xffff0000,0,unsigned>;
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
    namespace DmaTcd31CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400093f6,0xffff0000,0,unsigned>;
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
    namespace DmaTcd16Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009218,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd17Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009238,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd18Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009258,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd19Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009278,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd20Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009298,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd21Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400092b8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd22Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400092d8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd23Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400092f8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd24Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009318,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd25Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009338,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd26Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009358,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd27Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009378,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd28Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009398,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd29Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400093b8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd30Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400093d8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd31Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400093f8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd0Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000901c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
        using Addr = Register::Address<0x4000903c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
        using Addr = Register::Address<0x4000905c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
        using Addr = Register::Address<0x4000907c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
        using Addr = Register::Address<0x4000909c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
        using Addr = Register::Address<0x400090bc,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
        using Addr = Register::Address<0x400090dc,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
        using Addr = Register::Address<0x400090fc,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
        using Addr = Register::Address<0x4000911c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
        using Addr = Register::Address<0x4000913c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
        using Addr = Register::Address<0x4000915c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
        using Addr = Register::Address<0x4000917c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
        using Addr = Register::Address<0x4000919c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
        using Addr = Register::Address<0x400091bc,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
        using Addr = Register::Address<0x400091dc,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
        using Addr = Register::Address<0x400091fc,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
    namespace DmaTcd16Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000921c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
    namespace DmaTcd17Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000923c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
    namespace DmaTcd18Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000925c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
    namespace DmaTcd19Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000927c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
    namespace DmaTcd20Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000929c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
    namespace DmaTcd21Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400092bc,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
    namespace DmaTcd22Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400092dc,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
    namespace DmaTcd23Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400092fc,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
    namespace DmaTcd24Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000931c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
    namespace DmaTcd25Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000933c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
    namespace DmaTcd26Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000935c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
    namespace DmaTcd27Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000937c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
    namespace DmaTcd28Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000939c,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
    namespace DmaTcd29Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400093bc,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
    namespace DmaTcd30Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400093dc,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
    namespace DmaTcd31Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400093fc,0xffff2000,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
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
        using Addr = Register::Address<0x4000901e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000903e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000905e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000907e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000909e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400090be,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400090de,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400090fe,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000911e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000913e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000915e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000917e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000919e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400091be,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400091de,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400091fe,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd16BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000921e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd17BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000923e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd18BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000925e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd19BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000927e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd20BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000929e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd21BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400092be,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd22BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400092de,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd23BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400092fe,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd24BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000931e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd25BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000933e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd26BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000935e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd27BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000937e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd28BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000939e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd29BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400093be,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd30BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400093de,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd31BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400093fe,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd16BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000921e,0xffff0000,0,unsigned>;
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
    namespace DmaTcd17BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000923e,0xffff0000,0,unsigned>;
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
    namespace DmaTcd18BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000925e,0xffff0000,0,unsigned>;
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
    namespace DmaTcd19BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000927e,0xffff0000,0,unsigned>;
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
    namespace DmaTcd20BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000929e,0xffff0000,0,unsigned>;
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
    namespace DmaTcd21BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400092be,0xffff0000,0,unsigned>;
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
    namespace DmaTcd22BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400092de,0xffff0000,0,unsigned>;
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
    namespace DmaTcd23BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400092fe,0xffff0000,0,unsigned>;
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
    namespace DmaTcd24BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000931e,0xffff0000,0,unsigned>;
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
    namespace DmaTcd25BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000933e,0xffff0000,0,unsigned>;
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
    namespace DmaTcd26BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000935e,0xffff0000,0,unsigned>;
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
    namespace DmaTcd27BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000937e,0xffff0000,0,unsigned>;
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
    namespace DmaTcd28BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000939e,0xffff0000,0,unsigned>;
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
    namespace DmaTcd29BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400093be,0xffff0000,0,unsigned>;
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
    namespace DmaTcd30BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400093de,0xffff0000,0,unsigned>;
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
    namespace DmaTcd31BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400093fe,0xffff0000,0,unsigned>;
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
