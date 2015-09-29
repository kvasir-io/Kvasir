#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Enhanced direct memory access controller
    namespace DmaCr{    ///<Control Register
        using Addr = Register::Address<0x40008000,0xfffcf001,0,unsigned>;
        ///Enable Debug
        enum class edbgVal {
            v0=0x00000000,     ///<When in debug mode, the DMA continues to operate.
            v1=0x00000001,     ///<When in debug mode, the DMA stalls the start of a new channel. Executing channels are allowed to complete. Channel execution resumes when the system exits debug mode or the EDBG bit is cleared.
        };
        namespace edbgValC{
            constexpr MPL::Value<edbgVal,edbgVal::v0> v0{};
            constexpr MPL::Value<edbgVal,edbgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edbgVal> edbg{}; 
        ///Enable Round Robin Channel Arbitration
        enum class ercaVal {
            v0=0x00000000,     ///<Fixed priority arbitration is used for channel selection within each group.
            v1=0x00000001,     ///<Round robin arbitration is used for channel selection within each group.
        };
        namespace ercaValC{
            constexpr MPL::Value<ercaVal,ercaVal::v0> v0{};
            constexpr MPL::Value<ercaVal,ercaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ercaVal> erca{}; 
        ///Enable Round Robin Group Arbitration
        enum class ergaVal {
            v0=0x00000000,     ///<Fixed priority arbitration is used for selection among the groups.
            v1=0x00000001,     ///<Round robin arbitration is used for selection among the groups.
        };
        namespace ergaValC{
            constexpr MPL::Value<ergaVal,ergaVal::v0> v0{};
            constexpr MPL::Value<ergaVal,ergaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ergaVal> erga{}; 
        ///Halt On Error
        enum class hoeVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Any error causes the HALT bit to set. Subsequently, all service requests are ignored until the HALT bit is cleared.
        };
        namespace hoeValC{
            constexpr MPL::Value<hoeVal,hoeVal::v0> v0{};
            constexpr MPL::Value<hoeVal,hoeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,hoeVal> hoe{}; 
        ///Halt DMA Operations
        enum class haltVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Stall the start of any new channels. Executing channels are allowed to complete. Channel execution resumes when this bit is cleared.
        };
        namespace haltValC{
            constexpr MPL::Value<haltVal,haltVal::v0> v0{};
            constexpr MPL::Value<haltVal,haltVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,haltVal> halt{}; 
        ///Continuous Link Mode
        enum class clmVal {
            v0=0x00000000,     ///<A minor loop channel link made to itself goes through channel arbitration before being activated again.
            v1=0x00000001,     ///<A minor loop channel link made to itself does not go through channel arbitration before being activated again. Upon minor loop completion, the channel activates again if that channel has a minor loop channel link enabled and the link channel is itself. This effectively applies the minor loop offsets and restarts the next minor loop.
        };
        namespace clmValC{
            constexpr MPL::Value<clmVal,clmVal::v0> v0{};
            constexpr MPL::Value<clmVal,clmVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,clmVal> clm{}; 
        ///Enable Minor Loop Mapping
        enum class emlmVal {
            v0=0x00000000,     ///<Disabled. TCDn.word2 is defined as a 32-bit NBYTES field.
            v1=0x00000001,     ///<Enabled. TCDn.word2 is redefined to include individual enable fields, an offset field, and the NBYTES field. The individual enable fields allow the minor loop offset to be applied to the source address, the destination address, or both. The NBYTES field is reduced when either offset is enabled.
        };
        namespace emlmValC{
            constexpr MPL::Value<emlmVal,emlmVal::v0> v0{};
            constexpr MPL::Value<emlmVal,emlmVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,emlmVal> emlm{}; 
        ///Channel Group 0 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> grp0pri{}; 
        ///Channel Group 1 Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> grp1pri{}; 
        ///Error Cancel Transfer
        enum class ecxVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Cancel the remaining data transfer in the same fashion as the CX bit. Stop the executing channel and force the minor loop to finish. The cancel takes effect after the last write of the current read/write sequence. The ECX bit clears itself after the cancel is honored. In addition to cancelling the transfer, ECX treats the cancel as an error condition, thus updating the ES register and generating an optional error interrupt.
        };
        namespace ecxValC{
            constexpr MPL::Value<ecxVal,ecxVal::v0> v0{};
            constexpr MPL::Value<ecxVal,ecxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ecxVal> ecx{}; 
        ///Cancel Transfer
        enum class cxVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Cancel the remaining data transfer. Stop the executing channel and force the minor loop to finish. The cancel takes effect after the last write of the current read/write sequence. The CX bit clears itself after the cancel has been honored. This cancel retires the channel normally as if the minor loop was completed.
        };
        namespace cxValC{
            constexpr MPL::Value<cxVal,cxVal::v0> v0{};
            constexpr MPL::Value<cxVal,cxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,cxVal> cx{}; 
    }
    namespace DmaEs{    ///<Error Status Register
        using Addr = Register::Address<0x40008004,0x7ffe2000,0,unsigned>;
        ///Destination Bus Error
        enum class dbeVal {
            v0=0x00000000,     ///<No destination bus error
            v1=0x00000001,     ///<The last recorded error was a bus error on a destination write
        };
        namespace dbeValC{
            constexpr MPL::Value<dbeVal,dbeVal::v0> v0{};
            constexpr MPL::Value<dbeVal,dbeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dbeVal> dbe{}; 
        ///Source Bus Error
        enum class sbeVal {
            v0=0x00000000,     ///<No source bus error
            v1=0x00000001,     ///<The last recorded error was a bus error on a source read
        };
        namespace sbeValC{
            constexpr MPL::Value<sbeVal,sbeVal::v0> v0{};
            constexpr MPL::Value<sbeVal,sbeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,sbeVal> sbe{}; 
        ///Scatter/Gather Configuration Error
        enum class sgeVal {
            v0=0x00000000,     ///<No scatter/gather configuration error
            v1=0x00000001,     ///<The last recorded error was a configuration error detected in the TCDn_DLASTSGA field. This field is checked at the beginning of a scatter/gather operation after major loop completion if TCDn_CSR[ESG] is enabled. TCDn_DLASTSGA is not on a 32 byte boundary.
        };
        namespace sgeValC{
            constexpr MPL::Value<sgeVal,sgeVal::v0> v0{};
            constexpr MPL::Value<sgeVal,sgeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sgeVal> sge{}; 
        ///NBYTES/CITER Configuration Error
        enum class nceVal {
            v0=0x00000000,     ///<No NBYTES/CITER configuration error
            v1=0x00000001,     ///<The last recorded error was a configuration error detected in the TCDn_NBYTES or TCDn_CITER fields. TCDn_NBYTES is not a multiple of TCDn_ATTR[SSIZE] and TCDn_ATTR[DSIZE], or TCDn_CITER[CITER] is equal to zero, or TCDn_CITER[ELINK] is not equal to TCDn_BITER[ELINK]
        };
        namespace nceValC{
            constexpr MPL::Value<nceVal,nceVal::v0> v0{};
            constexpr MPL::Value<nceVal,nceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,nceVal> nce{}; 
        ///Destination Offset Error
        enum class doeVal {
            v0=0x00000000,     ///<No destination offset configuration error
            v1=0x00000001,     ///<The last recorded error was a configuration error detected in the TCDn_DOFF field. TCDn_DOFF is inconsistent with TCDn_ATTR[DSIZE].
        };
        namespace doeValC{
            constexpr MPL::Value<doeVal,doeVal::v0> v0{};
            constexpr MPL::Value<doeVal,doeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,doeVal> doe{}; 
        ///Destination Address Error
        enum class daeVal {
            v0=0x00000000,     ///<No destination address configuration error
            v1=0x00000001,     ///<The last recorded error was a configuration error detected in the TCDn_DADDR field. TCDn_DADDR is inconsistent with TCDn_ATTR[DSIZE].
        };
        namespace daeValC{
            constexpr MPL::Value<daeVal,daeVal::v0> v0{};
            constexpr MPL::Value<daeVal,daeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,daeVal> dae{}; 
        ///Source Offset Error
        enum class soeVal {
            v0=0x00000000,     ///<No source offset configuration error
            v1=0x00000001,     ///<The last recorded error was a configuration error detected in the TCDn_SOFF field. TCDn_SOFF is inconsistent with TCDn_ATTR[SSIZE].
        };
        namespace soeValC{
            constexpr MPL::Value<soeVal,soeVal::v0> v0{};
            constexpr MPL::Value<soeVal,soeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,soeVal> soe{}; 
        ///Source Address Error
        enum class saeVal {
            v0=0x00000000,     ///<No source address configuration error.
            v1=0x00000001,     ///<The last recorded error was a configuration error detected in the TCDn_SADDR field. TCDn_SADDR is inconsistent with TCDn_ATTR[SSIZE].
        };
        namespace saeValC{
            constexpr MPL::Value<saeVal,saeVal::v0> v0{};
            constexpr MPL::Value<saeVal,saeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,saeVal> sae{}; 
        ///Error Channel Number or Cancelled Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> errchn{}; 
        ///Channel Priority Error
        enum class cpeVal {
            v0=0x00000000,     ///<No channel priority error
            v1=0x00000001,     ///<The last recorded error was a configuration error in the channel priorities within a group. Channel priorities within a group are not unique.
        };
        namespace cpeValC{
            constexpr MPL::Value<cpeVal,cpeVal::v0> v0{};
            constexpr MPL::Value<cpeVal,cpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,cpeVal> cpe{}; 
        ///Group Priority Error
        enum class gpeVal {
            v0=0x00000000,     ///<No group priority error
            v1=0x00000001,     ///<The last recorded error was a configuration error among the group priorities. All group priorities are not unique.
        };
        namespace gpeValC{
            constexpr MPL::Value<gpeVal,gpeVal::v0> v0{};
            constexpr MPL::Value<gpeVal,gpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,gpeVal> gpe{}; 
        ///Transfer Cancelled
        enum class ecxVal {
            v0=0x00000000,     ///<No cancelled transfers
            v1=0x00000001,     ///<The last recorded entry was a cancelled transfer by the error cancel transfer input
        };
        namespace ecxValC{
            constexpr MPL::Value<ecxVal,ecxVal::v0> v0{};
            constexpr MPL::Value<ecxVal,ecxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ecxVal> ecx{}; 
        ///no description available
        enum class vldVal {
            v0=0x00000000,     ///<No ERR bits are set
            v1=0x00000001,     ///<At least one ERR bit is set indicating a valid error exists that has not been cleared
        };
        namespace vldValC{
            constexpr MPL::Value<vldVal,vldVal::v0> v0{};
            constexpr MPL::Value<vldVal,vldVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,vldVal> vld{}; 
    }
    namespace DmaErq{    ///<Enable Request Register
        using Addr = Register::Address<0x4000800c,0x00000000,0,unsigned>;
        ///Enable DMA Request 0
        enum class erq0Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq0ValC{
            constexpr MPL::Value<erq0Val,erq0Val::v0> v0{};
            constexpr MPL::Value<erq0Val,erq0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,erq0Val> erq0{}; 
        ///Enable DMA Request 1
        enum class erq1Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq1ValC{
            constexpr MPL::Value<erq1Val,erq1Val::v0> v0{};
            constexpr MPL::Value<erq1Val,erq1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,erq1Val> erq1{}; 
        ///Enable DMA Request 2
        enum class erq2Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq2ValC{
            constexpr MPL::Value<erq2Val,erq2Val::v0> v0{};
            constexpr MPL::Value<erq2Val,erq2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,erq2Val> erq2{}; 
        ///Enable DMA Request 3
        enum class erq3Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq3ValC{
            constexpr MPL::Value<erq3Val,erq3Val::v0> v0{};
            constexpr MPL::Value<erq3Val,erq3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,erq3Val> erq3{}; 
        ///Enable DMA Request 4
        enum class erq4Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq4ValC{
            constexpr MPL::Value<erq4Val,erq4Val::v0> v0{};
            constexpr MPL::Value<erq4Val,erq4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,erq4Val> erq4{}; 
        ///Enable DMA Request 5
        enum class erq5Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq5ValC{
            constexpr MPL::Value<erq5Val,erq5Val::v0> v0{};
            constexpr MPL::Value<erq5Val,erq5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,erq5Val> erq5{}; 
        ///Enable DMA Request 6
        enum class erq6Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq6ValC{
            constexpr MPL::Value<erq6Val,erq6Val::v0> v0{};
            constexpr MPL::Value<erq6Val,erq6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,erq6Val> erq6{}; 
        ///Enable DMA Request 7
        enum class erq7Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq7ValC{
            constexpr MPL::Value<erq7Val,erq7Val::v0> v0{};
            constexpr MPL::Value<erq7Val,erq7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,erq7Val> erq7{}; 
        ///Enable DMA Request 8
        enum class erq8Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq8ValC{
            constexpr MPL::Value<erq8Val,erq8Val::v0> v0{};
            constexpr MPL::Value<erq8Val,erq8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,erq8Val> erq8{}; 
        ///Enable DMA Request 9
        enum class erq9Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq9ValC{
            constexpr MPL::Value<erq9Val,erq9Val::v0> v0{};
            constexpr MPL::Value<erq9Val,erq9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,erq9Val> erq9{}; 
        ///Enable DMA Request 10
        enum class erq10Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq10ValC{
            constexpr MPL::Value<erq10Val,erq10Val::v0> v0{};
            constexpr MPL::Value<erq10Val,erq10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,erq10Val> erq10{}; 
        ///Enable DMA Request 11
        enum class erq11Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq11ValC{
            constexpr MPL::Value<erq11Val,erq11Val::v0> v0{};
            constexpr MPL::Value<erq11Val,erq11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,erq11Val> erq11{}; 
        ///Enable DMA Request 12
        enum class erq12Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq12ValC{
            constexpr MPL::Value<erq12Val,erq12Val::v0> v0{};
            constexpr MPL::Value<erq12Val,erq12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,erq12Val> erq12{}; 
        ///Enable DMA Request 13
        enum class erq13Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq13ValC{
            constexpr MPL::Value<erq13Val,erq13Val::v0> v0{};
            constexpr MPL::Value<erq13Val,erq13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,erq13Val> erq13{}; 
        ///Enable DMA Request 14
        enum class erq14Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq14ValC{
            constexpr MPL::Value<erq14Val,erq14Val::v0> v0{};
            constexpr MPL::Value<erq14Val,erq14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,erq14Val> erq14{}; 
        ///Enable DMA Request 15
        enum class erq15Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq15ValC{
            constexpr MPL::Value<erq15Val,erq15Val::v0> v0{};
            constexpr MPL::Value<erq15Val,erq15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,erq15Val> erq15{}; 
        ///Enable DMA Request 16
        enum class erq16Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq16ValC{
            constexpr MPL::Value<erq16Val,erq16Val::v0> v0{};
            constexpr MPL::Value<erq16Val,erq16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,erq16Val> erq16{}; 
        ///Enable DMA Request 17
        enum class erq17Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq17ValC{
            constexpr MPL::Value<erq17Val,erq17Val::v0> v0{};
            constexpr MPL::Value<erq17Val,erq17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,erq17Val> erq17{}; 
        ///Enable DMA Request 18
        enum class erq18Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq18ValC{
            constexpr MPL::Value<erq18Val,erq18Val::v0> v0{};
            constexpr MPL::Value<erq18Val,erq18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,erq18Val> erq18{}; 
        ///Enable DMA Request 19
        enum class erq19Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq19ValC{
            constexpr MPL::Value<erq19Val,erq19Val::v0> v0{};
            constexpr MPL::Value<erq19Val,erq19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,erq19Val> erq19{}; 
        ///Enable DMA Request 20
        enum class erq20Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq20ValC{
            constexpr MPL::Value<erq20Val,erq20Val::v0> v0{};
            constexpr MPL::Value<erq20Val,erq20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,erq20Val> erq20{}; 
        ///Enable DMA Request 21
        enum class erq21Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq21ValC{
            constexpr MPL::Value<erq21Val,erq21Val::v0> v0{};
            constexpr MPL::Value<erq21Val,erq21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,erq21Val> erq21{}; 
        ///Enable DMA Request 22
        enum class erq22Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq22ValC{
            constexpr MPL::Value<erq22Val,erq22Val::v0> v0{};
            constexpr MPL::Value<erq22Val,erq22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,erq22Val> erq22{}; 
        ///Enable DMA Request 23
        enum class erq23Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq23ValC{
            constexpr MPL::Value<erq23Val,erq23Val::v0> v0{};
            constexpr MPL::Value<erq23Val,erq23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,erq23Val> erq23{}; 
        ///Enable DMA Request 24
        enum class erq24Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq24ValC{
            constexpr MPL::Value<erq24Val,erq24Val::v0> v0{};
            constexpr MPL::Value<erq24Val,erq24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,erq24Val> erq24{}; 
        ///Enable DMA Request 25
        enum class erq25Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq25ValC{
            constexpr MPL::Value<erq25Val,erq25Val::v0> v0{};
            constexpr MPL::Value<erq25Val,erq25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,erq25Val> erq25{}; 
        ///Enable DMA Request 26
        enum class erq26Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq26ValC{
            constexpr MPL::Value<erq26Val,erq26Val::v0> v0{};
            constexpr MPL::Value<erq26Val,erq26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,erq26Val> erq26{}; 
        ///Enable DMA Request 27
        enum class erq27Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq27ValC{
            constexpr MPL::Value<erq27Val,erq27Val::v0> v0{};
            constexpr MPL::Value<erq27Val,erq27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,erq27Val> erq27{}; 
        ///Enable DMA Request 28
        enum class erq28Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq28ValC{
            constexpr MPL::Value<erq28Val,erq28Val::v0> v0{};
            constexpr MPL::Value<erq28Val,erq28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,erq28Val> erq28{}; 
        ///Enable DMA Request 29
        enum class erq29Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq29ValC{
            constexpr MPL::Value<erq29Val,erq29Val::v0> v0{};
            constexpr MPL::Value<erq29Val,erq29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,erq29Val> erq29{}; 
        ///Enable DMA Request 30
        enum class erq30Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq30ValC{
            constexpr MPL::Value<erq30Val,erq30Val::v0> v0{};
            constexpr MPL::Value<erq30Val,erq30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,erq30Val> erq30{}; 
        ///Enable DMA Request 31
        enum class erq31Val {
            v0=0x00000000,     ///<The DMA request signal for the corresponding channel is disabled
            v1=0x00000001,     ///<The DMA request signal for the corresponding channel is enabled
        };
        namespace erq31ValC{
            constexpr MPL::Value<erq31Val,erq31Val::v0> v0{};
            constexpr MPL::Value<erq31Val,erq31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,erq31Val> erq31{}; 
    }
    namespace DmaEei{    ///<Enable Error Interrupt Register
        using Addr = Register::Address<0x40008014,0x00000000,0,unsigned>;
        ///Enable Error Interrupt 0
        enum class eei0Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei0ValC{
            constexpr MPL::Value<eei0Val,eei0Val::v0> v0{};
            constexpr MPL::Value<eei0Val,eei0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,eei0Val> eei0{}; 
        ///Enable Error Interrupt 1
        enum class eei1Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei1ValC{
            constexpr MPL::Value<eei1Val,eei1Val::v0> v0{};
            constexpr MPL::Value<eei1Val,eei1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,eei1Val> eei1{}; 
        ///Enable Error Interrupt 2
        enum class eei2Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei2ValC{
            constexpr MPL::Value<eei2Val,eei2Val::v0> v0{};
            constexpr MPL::Value<eei2Val,eei2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,eei2Val> eei2{}; 
        ///Enable Error Interrupt 3
        enum class eei3Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei3ValC{
            constexpr MPL::Value<eei3Val,eei3Val::v0> v0{};
            constexpr MPL::Value<eei3Val,eei3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,eei3Val> eei3{}; 
        ///Enable Error Interrupt 4
        enum class eei4Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei4ValC{
            constexpr MPL::Value<eei4Val,eei4Val::v0> v0{};
            constexpr MPL::Value<eei4Val,eei4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,eei4Val> eei4{}; 
        ///Enable Error Interrupt 5
        enum class eei5Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei5ValC{
            constexpr MPL::Value<eei5Val,eei5Val::v0> v0{};
            constexpr MPL::Value<eei5Val,eei5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,eei5Val> eei5{}; 
        ///Enable Error Interrupt 6
        enum class eei6Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei6ValC{
            constexpr MPL::Value<eei6Val,eei6Val::v0> v0{};
            constexpr MPL::Value<eei6Val,eei6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eei6Val> eei6{}; 
        ///Enable Error Interrupt 7
        enum class eei7Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei7ValC{
            constexpr MPL::Value<eei7Val,eei7Val::v0> v0{};
            constexpr MPL::Value<eei7Val,eei7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,eei7Val> eei7{}; 
        ///Enable Error Interrupt 8
        enum class eei8Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei8ValC{
            constexpr MPL::Value<eei8Val,eei8Val::v0> v0{};
            constexpr MPL::Value<eei8Val,eei8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,eei8Val> eei8{}; 
        ///Enable Error Interrupt 9
        enum class eei9Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei9ValC{
            constexpr MPL::Value<eei9Val,eei9Val::v0> v0{};
            constexpr MPL::Value<eei9Val,eei9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,eei9Val> eei9{}; 
        ///Enable Error Interrupt 10
        enum class eei10Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei10ValC{
            constexpr MPL::Value<eei10Val,eei10Val::v0> v0{};
            constexpr MPL::Value<eei10Val,eei10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,eei10Val> eei10{}; 
        ///Enable Error Interrupt 11
        enum class eei11Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei11ValC{
            constexpr MPL::Value<eei11Val,eei11Val::v0> v0{};
            constexpr MPL::Value<eei11Val,eei11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,eei11Val> eei11{}; 
        ///Enable Error Interrupt 12
        enum class eei12Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei12ValC{
            constexpr MPL::Value<eei12Val,eei12Val::v0> v0{};
            constexpr MPL::Value<eei12Val,eei12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,eei12Val> eei12{}; 
        ///Enable Error Interrupt 13
        enum class eei13Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei13ValC{
            constexpr MPL::Value<eei13Val,eei13Val::v0> v0{};
            constexpr MPL::Value<eei13Val,eei13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,eei13Val> eei13{}; 
        ///Enable Error Interrupt 14
        enum class eei14Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei14ValC{
            constexpr MPL::Value<eei14Val,eei14Val::v0> v0{};
            constexpr MPL::Value<eei14Val,eei14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,eei14Val> eei14{}; 
        ///Enable Error Interrupt 15
        enum class eei15Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei15ValC{
            constexpr MPL::Value<eei15Val,eei15Val::v0> v0{};
            constexpr MPL::Value<eei15Val,eei15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,eei15Val> eei15{}; 
        ///Enable Error Interrupt 16
        enum class eei16Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei16ValC{
            constexpr MPL::Value<eei16Val,eei16Val::v0> v0{};
            constexpr MPL::Value<eei16Val,eei16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,eei16Val> eei16{}; 
        ///Enable Error Interrupt 17
        enum class eei17Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei17ValC{
            constexpr MPL::Value<eei17Val,eei17Val::v0> v0{};
            constexpr MPL::Value<eei17Val,eei17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,eei17Val> eei17{}; 
        ///Enable Error Interrupt 18
        enum class eei18Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei18ValC{
            constexpr MPL::Value<eei18Val,eei18Val::v0> v0{};
            constexpr MPL::Value<eei18Val,eei18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,eei18Val> eei18{}; 
        ///Enable Error Interrupt 19
        enum class eei19Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei19ValC{
            constexpr MPL::Value<eei19Val,eei19Val::v0> v0{};
            constexpr MPL::Value<eei19Val,eei19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,eei19Val> eei19{}; 
        ///Enable Error Interrupt 20
        enum class eei20Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei20ValC{
            constexpr MPL::Value<eei20Val,eei20Val::v0> v0{};
            constexpr MPL::Value<eei20Val,eei20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,eei20Val> eei20{}; 
        ///Enable Error Interrupt 21
        enum class eei21Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei21ValC{
            constexpr MPL::Value<eei21Val,eei21Val::v0> v0{};
            constexpr MPL::Value<eei21Val,eei21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,eei21Val> eei21{}; 
        ///Enable Error Interrupt 22
        enum class eei22Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei22ValC{
            constexpr MPL::Value<eei22Val,eei22Val::v0> v0{};
            constexpr MPL::Value<eei22Val,eei22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,eei22Val> eei22{}; 
        ///Enable Error Interrupt 23
        enum class eei23Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei23ValC{
            constexpr MPL::Value<eei23Val,eei23Val::v0> v0{};
            constexpr MPL::Value<eei23Val,eei23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,eei23Val> eei23{}; 
        ///Enable Error Interrupt 24
        enum class eei24Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei24ValC{
            constexpr MPL::Value<eei24Val,eei24Val::v0> v0{};
            constexpr MPL::Value<eei24Val,eei24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,eei24Val> eei24{}; 
        ///Enable Error Interrupt 25
        enum class eei25Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei25ValC{
            constexpr MPL::Value<eei25Val,eei25Val::v0> v0{};
            constexpr MPL::Value<eei25Val,eei25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,eei25Val> eei25{}; 
        ///Enable Error Interrupt 26
        enum class eei26Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei26ValC{
            constexpr MPL::Value<eei26Val,eei26Val::v0> v0{};
            constexpr MPL::Value<eei26Val,eei26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,eei26Val> eei26{}; 
        ///Enable Error Interrupt 27
        enum class eei27Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei27ValC{
            constexpr MPL::Value<eei27Val,eei27Val::v0> v0{};
            constexpr MPL::Value<eei27Val,eei27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,eei27Val> eei27{}; 
        ///Enable Error Interrupt 28
        enum class eei28Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei28ValC{
            constexpr MPL::Value<eei28Val,eei28Val::v0> v0{};
            constexpr MPL::Value<eei28Val,eei28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,eei28Val> eei28{}; 
        ///Enable Error Interrupt 29
        enum class eei29Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei29ValC{
            constexpr MPL::Value<eei29Val,eei29Val::v0> v0{};
            constexpr MPL::Value<eei29Val,eei29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,eei29Val> eei29{}; 
        ///Enable Error Interrupt 30
        enum class eei30Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei30ValC{
            constexpr MPL::Value<eei30Val,eei30Val::v0> v0{};
            constexpr MPL::Value<eei30Val,eei30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,eei30Val> eei30{}; 
        ///Enable Error Interrupt 31
        enum class eei31Val {
            v0=0x00000000,     ///<The error signal for corresponding channel does not generate an error interrupt
            v1=0x00000001,     ///<The assertion of the error signal for corresponding channel generates an error interrupt request
        };
        namespace eei31ValC{
            constexpr MPL::Value<eei31Val,eei31Val::v0> v0{};
            constexpr MPL::Value<eei31Val,eei31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,eei31Val> eei31{}; 
    }
    namespace DmaCeei{    ///<Clear Enable Error Interrupt Register
        using Addr = Register::Address<0x40008018,0xffffff20,0,unsigned char>;
        ///Clear Enable Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ceei{}; 
        ///Clear All Enable Error Interrupts
        enum class caeeVal {
            v0=0x00000000,     ///<Clear only the EEI bit specified in the CEEI field
            v1=0x00000001,     ///<Clear all bits in EEI
        };
        namespace caeeValC{
            constexpr MPL::Value<caeeVal,caeeVal::v0> v0{};
            constexpr MPL::Value<caeeVal,caeeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,caeeVal> caee{}; 
        ///no description available
        enum class nopVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<No operation, ignore the other bits in this register
        };
        namespace nopValC{
            constexpr MPL::Value<nopVal,nopVal::v0> v0{};
            constexpr MPL::Value<nopVal,nopVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,nopVal> nop{}; 
    }
    namespace DmaSeei{    ///<Set Enable Error Interrupt Register
        using Addr = Register::Address<0x40008019,0xffffff20,0,unsigned char>;
        ///Set Enable Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> seei{}; 
        ///Sets All Enable Error Interrupts
        enum class saeeVal {
            v0=0x00000000,     ///<Set only the EEI bit specified in the SEEI field.
            v1=0x00000001,     ///<Sets all bits in EEI
        };
        namespace saeeValC{
            constexpr MPL::Value<saeeVal,saeeVal::v0> v0{};
            constexpr MPL::Value<saeeVal,saeeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,saeeVal> saee{}; 
        ///no description available
        enum class nopVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<No operation, ignore the other bits in this register
        };
        namespace nopValC{
            constexpr MPL::Value<nopVal,nopVal::v0> v0{};
            constexpr MPL::Value<nopVal,nopVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,nopVal> nop{}; 
    }
    namespace DmaCerq{    ///<Clear Enable Request Register
        using Addr = Register::Address<0x4000801a,0xffffff20,0,unsigned char>;
        ///Clear Enable Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cerq{}; 
        ///Clear All Enable Requests
        enum class caerVal {
            v0=0x00000000,     ///<Clear only the ERQ bit specified in the CERQ field
            v1=0x00000001,     ///<Clear all bits in ERQ
        };
        namespace caerValC{
            constexpr MPL::Value<caerVal,caerVal::v0> v0{};
            constexpr MPL::Value<caerVal,caerVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,caerVal> caer{}; 
        ///no description available
        enum class nopVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<No operation, ignore the other bits in this register
        };
        namespace nopValC{
            constexpr MPL::Value<nopVal,nopVal::v0> v0{};
            constexpr MPL::Value<nopVal,nopVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,nopVal> nop{}; 
    }
    namespace DmaSerq{    ///<Set Enable Request Register
        using Addr = Register::Address<0x4000801b,0xffffff20,0,unsigned char>;
        ///Set Enable Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> serq{}; 
        ///Set All Enable Requests
        enum class saerVal {
            v0=0x00000000,     ///<Set only the ERQ bit specified in the SERQ field
            v1=0x00000001,     ///<Set all bits in ERQ
        };
        namespace saerValC{
            constexpr MPL::Value<saerVal,saerVal::v0> v0{};
            constexpr MPL::Value<saerVal,saerVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,saerVal> saer{}; 
        ///no description available
        enum class nopVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<No operation, ignore the other bits in this register
        };
        namespace nopValC{
            constexpr MPL::Value<nopVal,nopVal::v0> v0{};
            constexpr MPL::Value<nopVal,nopVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,nopVal> nop{}; 
    }
    namespace DmaCdne{    ///<Clear DONE Status Bit Register
        using Addr = Register::Address<0x4000801c,0xffffff20,0,unsigned char>;
        ///Clear DONE Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cdne{}; 
        ///Clears All DONE Bits
        enum class cadnVal {
            v0=0x00000000,     ///<Clears only the TCDn_CSR[DONE] bit specified in the CDNE field
            v1=0x00000001,     ///<Clears all bits in TCDn_CSR[DONE]
        };
        namespace cadnValC{
            constexpr MPL::Value<cadnVal,cadnVal::v0> v0{};
            constexpr MPL::Value<cadnVal,cadnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cadnVal> cadn{}; 
        ///no description available
        enum class nopVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<No operation, ignore the other bits in this register
        };
        namespace nopValC{
            constexpr MPL::Value<nopVal,nopVal::v0> v0{};
            constexpr MPL::Value<nopVal,nopVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,nopVal> nop{}; 
    }
    namespace DmaSsrt{    ///<Set START Bit Register
        using Addr = Register::Address<0x4000801d,0xffffff20,0,unsigned char>;
        ///Set START Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ssrt{}; 
        ///Set All START Bits (activates all channels)
        enum class sastVal {
            v0=0x00000000,     ///<Set only the TCDn_CSR[START] bit specified in the SSRT field
            v1=0x00000001,     ///<Set all bits in TCDn_CSR[START]
        };
        namespace sastValC{
            constexpr MPL::Value<sastVal,sastVal::v0> v0{};
            constexpr MPL::Value<sastVal,sastVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sastVal> sast{}; 
        ///no description available
        enum class nopVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<No operation, ignore the other bits in this register
        };
        namespace nopValC{
            constexpr MPL::Value<nopVal,nopVal::v0> v0{};
            constexpr MPL::Value<nopVal,nopVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,nopVal> nop{}; 
    }
    namespace DmaCerr{    ///<Clear Error Register
        using Addr = Register::Address<0x4000801e,0xffffff20,0,unsigned char>;
        ///Clear Error Indicator
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cerr{}; 
        ///Clear All Error Indicators
        enum class caeiVal {
            v0=0x00000000,     ///<Clear only the ERR bit specified in the CERR field
            v1=0x00000001,     ///<Clear all bits in ERR
        };
        namespace caeiValC{
            constexpr MPL::Value<caeiVal,caeiVal::v0> v0{};
            constexpr MPL::Value<caeiVal,caeiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,caeiVal> caei{}; 
        ///no description available
        enum class nopVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<No operation, ignore the other bits in this register
        };
        namespace nopValC{
            constexpr MPL::Value<nopVal,nopVal::v0> v0{};
            constexpr MPL::Value<nopVal,nopVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,nopVal> nop{}; 
    }
    namespace DmaCint{    ///<Clear Interrupt Request Register
        using Addr = Register::Address<0x4000801f,0xffffff20,0,unsigned char>;
        ///Clear interrupt request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cint{}; 
        ///Clear All Interrupt Requests
        enum class cairVal {
            v0=0x00000000,     ///<Clear only the INT bit specified in the CINT field
            v1=0x00000001,     ///<Clear all bits in INT
        };
        namespace cairValC{
            constexpr MPL::Value<cairVal,cairVal::v0> v0{};
            constexpr MPL::Value<cairVal,cairVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cairVal> cair{}; 
        ///no description available
        enum class nopVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<No operation, ignore the other bits in this register
        };
        namespace nopValC{
            constexpr MPL::Value<nopVal,nopVal::v0> v0{};
            constexpr MPL::Value<nopVal,nopVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,nopVal> nop{}; 
    }
    namespace DmaInt{    ///<Interrupt Request Register
        using Addr = Register::Address<0x40008024,0x00000000,0,unsigned>;
        ///Interrupt Request 0
        enum class int0Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int0ValC{
            constexpr MPL::Value<int0Val,int0Val::v0> v0{};
            constexpr MPL::Value<int0Val,int0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,int0Val> int0{}; 
        ///Interrupt Request 1
        enum class int1Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int1ValC{
            constexpr MPL::Value<int1Val,int1Val::v0> v0{};
            constexpr MPL::Value<int1Val,int1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,int1Val> int1{}; 
        ///Interrupt Request 2
        enum class int2Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int2ValC{
            constexpr MPL::Value<int2Val,int2Val::v0> v0{};
            constexpr MPL::Value<int2Val,int2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,int2Val> int2{}; 
        ///Interrupt Request 3
        enum class int3Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int3ValC{
            constexpr MPL::Value<int3Val,int3Val::v0> v0{};
            constexpr MPL::Value<int3Val,int3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,int3Val> int3{}; 
        ///Interrupt Request 4
        enum class int4Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int4ValC{
            constexpr MPL::Value<int4Val,int4Val::v0> v0{};
            constexpr MPL::Value<int4Val,int4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,int4Val> int4{}; 
        ///Interrupt Request 5
        enum class int5Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int5ValC{
            constexpr MPL::Value<int5Val,int5Val::v0> v0{};
            constexpr MPL::Value<int5Val,int5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,int5Val> int5{}; 
        ///Interrupt Request 6
        enum class int6Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int6ValC{
            constexpr MPL::Value<int6Val,int6Val::v0> v0{};
            constexpr MPL::Value<int6Val,int6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,int6Val> int6{}; 
        ///Interrupt Request 7
        enum class int7Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int7ValC{
            constexpr MPL::Value<int7Val,int7Val::v0> v0{};
            constexpr MPL::Value<int7Val,int7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,int7Val> int7{}; 
        ///Interrupt Request 8
        enum class int8Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int8ValC{
            constexpr MPL::Value<int8Val,int8Val::v0> v0{};
            constexpr MPL::Value<int8Val,int8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,int8Val> int8{}; 
        ///Interrupt Request 9
        enum class int9Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int9ValC{
            constexpr MPL::Value<int9Val,int9Val::v0> v0{};
            constexpr MPL::Value<int9Val,int9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,int9Val> int9{}; 
        ///Interrupt Request 10
        enum class int10Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int10ValC{
            constexpr MPL::Value<int10Val,int10Val::v0> v0{};
            constexpr MPL::Value<int10Val,int10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,int10Val> int10{}; 
        ///Interrupt Request 11
        enum class int11Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int11ValC{
            constexpr MPL::Value<int11Val,int11Val::v0> v0{};
            constexpr MPL::Value<int11Val,int11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,int11Val> int11{}; 
        ///Interrupt Request 12
        enum class int12Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int12ValC{
            constexpr MPL::Value<int12Val,int12Val::v0> v0{};
            constexpr MPL::Value<int12Val,int12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,int12Val> int12{}; 
        ///Interrupt Request 13
        enum class int13Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int13ValC{
            constexpr MPL::Value<int13Val,int13Val::v0> v0{};
            constexpr MPL::Value<int13Val,int13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,int13Val> int13{}; 
        ///Interrupt Request 14
        enum class int14Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int14ValC{
            constexpr MPL::Value<int14Val,int14Val::v0> v0{};
            constexpr MPL::Value<int14Val,int14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,int14Val> int14{}; 
        ///Interrupt Request 15
        enum class int15Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int15ValC{
            constexpr MPL::Value<int15Val,int15Val::v0> v0{};
            constexpr MPL::Value<int15Val,int15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,int15Val> int15{}; 
        ///Interrupt Request 16
        enum class int16Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int16ValC{
            constexpr MPL::Value<int16Val,int16Val::v0> v0{};
            constexpr MPL::Value<int16Val,int16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,int16Val> int16{}; 
        ///Interrupt Request 17
        enum class int17Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int17ValC{
            constexpr MPL::Value<int17Val,int17Val::v0> v0{};
            constexpr MPL::Value<int17Val,int17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,int17Val> int17{}; 
        ///Interrupt Request 18
        enum class int18Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int18ValC{
            constexpr MPL::Value<int18Val,int18Val::v0> v0{};
            constexpr MPL::Value<int18Val,int18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,int18Val> int18{}; 
        ///Interrupt Request 19
        enum class int19Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int19ValC{
            constexpr MPL::Value<int19Val,int19Val::v0> v0{};
            constexpr MPL::Value<int19Val,int19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,int19Val> int19{}; 
        ///Interrupt Request 20
        enum class int20Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int20ValC{
            constexpr MPL::Value<int20Val,int20Val::v0> v0{};
            constexpr MPL::Value<int20Val,int20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,int20Val> int20{}; 
        ///Interrupt Request 21
        enum class int21Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int21ValC{
            constexpr MPL::Value<int21Val,int21Val::v0> v0{};
            constexpr MPL::Value<int21Val,int21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,int21Val> int21{}; 
        ///Interrupt Request 22
        enum class int22Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int22ValC{
            constexpr MPL::Value<int22Val,int22Val::v0> v0{};
            constexpr MPL::Value<int22Val,int22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,int22Val> int22{}; 
        ///Interrupt Request 23
        enum class int23Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int23ValC{
            constexpr MPL::Value<int23Val,int23Val::v0> v0{};
            constexpr MPL::Value<int23Val,int23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,int23Val> int23{}; 
        ///Interrupt Request 24
        enum class int24Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int24ValC{
            constexpr MPL::Value<int24Val,int24Val::v0> v0{};
            constexpr MPL::Value<int24Val,int24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,int24Val> int24{}; 
        ///Interrupt Request 25
        enum class int25Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int25ValC{
            constexpr MPL::Value<int25Val,int25Val::v0> v0{};
            constexpr MPL::Value<int25Val,int25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,int25Val> int25{}; 
        ///Interrupt Request 26
        enum class int26Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int26ValC{
            constexpr MPL::Value<int26Val,int26Val::v0> v0{};
            constexpr MPL::Value<int26Val,int26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,int26Val> int26{}; 
        ///Interrupt Request 27
        enum class int27Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int27ValC{
            constexpr MPL::Value<int27Val,int27Val::v0> v0{};
            constexpr MPL::Value<int27Val,int27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,int27Val> int27{}; 
        ///Interrupt Request 28
        enum class int28Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int28ValC{
            constexpr MPL::Value<int28Val,int28Val::v0> v0{};
            constexpr MPL::Value<int28Val,int28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,int28Val> int28{}; 
        ///Interrupt Request 29
        enum class int29Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int29ValC{
            constexpr MPL::Value<int29Val,int29Val::v0> v0{};
            constexpr MPL::Value<int29Val,int29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,int29Val> int29{}; 
        ///Interrupt Request 30
        enum class int30Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int30ValC{
            constexpr MPL::Value<int30Val,int30Val::v0> v0{};
            constexpr MPL::Value<int30Val,int30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,int30Val> int30{}; 
        ///Interrupt Request 31
        enum class int31Val {
            v0=0x00000000,     ///<The interrupt request for corresponding channel is cleared
            v1=0x00000001,     ///<The interrupt request for corresponding channel is active
        };
        namespace int31ValC{
            constexpr MPL::Value<int31Val,int31Val::v0> v0{};
            constexpr MPL::Value<int31Val,int31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,int31Val> int31{}; 
    }
    namespace DmaErr{    ///<Error Register
        using Addr = Register::Address<0x4000802c,0x00000000,0,unsigned>;
        ///Error In Channel 0
        enum class err0Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err0ValC{
            constexpr MPL::Value<err0Val,err0Val::v0> v0{};
            constexpr MPL::Value<err0Val,err0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,err0Val> err0{}; 
        ///Error In Channel 1
        enum class err1Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err1ValC{
            constexpr MPL::Value<err1Val,err1Val::v0> v0{};
            constexpr MPL::Value<err1Val,err1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,err1Val> err1{}; 
        ///Error In Channel 2
        enum class err2Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err2ValC{
            constexpr MPL::Value<err2Val,err2Val::v0> v0{};
            constexpr MPL::Value<err2Val,err2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,err2Val> err2{}; 
        ///Error In Channel 3
        enum class err3Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err3ValC{
            constexpr MPL::Value<err3Val,err3Val::v0> v0{};
            constexpr MPL::Value<err3Val,err3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,err3Val> err3{}; 
        ///Error In Channel 4
        enum class err4Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err4ValC{
            constexpr MPL::Value<err4Val,err4Val::v0> v0{};
            constexpr MPL::Value<err4Val,err4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,err4Val> err4{}; 
        ///Error In Channel 5
        enum class err5Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err5ValC{
            constexpr MPL::Value<err5Val,err5Val::v0> v0{};
            constexpr MPL::Value<err5Val,err5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,err5Val> err5{}; 
        ///Error In Channel 6
        enum class err6Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err6ValC{
            constexpr MPL::Value<err6Val,err6Val::v0> v0{};
            constexpr MPL::Value<err6Val,err6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,err6Val> err6{}; 
        ///Error In Channel 7
        enum class err7Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err7ValC{
            constexpr MPL::Value<err7Val,err7Val::v0> v0{};
            constexpr MPL::Value<err7Val,err7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,err7Val> err7{}; 
        ///Error In Channel 8
        enum class err8Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err8ValC{
            constexpr MPL::Value<err8Val,err8Val::v0> v0{};
            constexpr MPL::Value<err8Val,err8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,err8Val> err8{}; 
        ///Error In Channel 9
        enum class err9Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err9ValC{
            constexpr MPL::Value<err9Val,err9Val::v0> v0{};
            constexpr MPL::Value<err9Val,err9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,err9Val> err9{}; 
        ///Error In Channel 10
        enum class err10Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err10ValC{
            constexpr MPL::Value<err10Val,err10Val::v0> v0{};
            constexpr MPL::Value<err10Val,err10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,err10Val> err10{}; 
        ///Error In Channel 11
        enum class err11Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err11ValC{
            constexpr MPL::Value<err11Val,err11Val::v0> v0{};
            constexpr MPL::Value<err11Val,err11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,err11Val> err11{}; 
        ///Error In Channel 12
        enum class err12Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err12ValC{
            constexpr MPL::Value<err12Val,err12Val::v0> v0{};
            constexpr MPL::Value<err12Val,err12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,err12Val> err12{}; 
        ///Error In Channel 13
        enum class err13Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err13ValC{
            constexpr MPL::Value<err13Val,err13Val::v0> v0{};
            constexpr MPL::Value<err13Val,err13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,err13Val> err13{}; 
        ///Error In Channel 14
        enum class err14Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err14ValC{
            constexpr MPL::Value<err14Val,err14Val::v0> v0{};
            constexpr MPL::Value<err14Val,err14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,err14Val> err14{}; 
        ///Error In Channel 15
        enum class err15Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err15ValC{
            constexpr MPL::Value<err15Val,err15Val::v0> v0{};
            constexpr MPL::Value<err15Val,err15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,err15Val> err15{}; 
        ///Error In Channel 16
        enum class err16Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err16ValC{
            constexpr MPL::Value<err16Val,err16Val::v0> v0{};
            constexpr MPL::Value<err16Val,err16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,err16Val> err16{}; 
        ///Error In Channel 17
        enum class err17Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err17ValC{
            constexpr MPL::Value<err17Val,err17Val::v0> v0{};
            constexpr MPL::Value<err17Val,err17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,err17Val> err17{}; 
        ///Error In Channel 18
        enum class err18Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err18ValC{
            constexpr MPL::Value<err18Val,err18Val::v0> v0{};
            constexpr MPL::Value<err18Val,err18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,err18Val> err18{}; 
        ///Error In Channel 19
        enum class err19Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err19ValC{
            constexpr MPL::Value<err19Val,err19Val::v0> v0{};
            constexpr MPL::Value<err19Val,err19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,err19Val> err19{}; 
        ///Error In Channel 20
        enum class err20Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err20ValC{
            constexpr MPL::Value<err20Val,err20Val::v0> v0{};
            constexpr MPL::Value<err20Val,err20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,err20Val> err20{}; 
        ///Error In Channel 21
        enum class err21Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err21ValC{
            constexpr MPL::Value<err21Val,err21Val::v0> v0{};
            constexpr MPL::Value<err21Val,err21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,err21Val> err21{}; 
        ///Error In Channel 22
        enum class err22Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err22ValC{
            constexpr MPL::Value<err22Val,err22Val::v0> v0{};
            constexpr MPL::Value<err22Val,err22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,err22Val> err22{}; 
        ///Error In Channel 23
        enum class err23Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err23ValC{
            constexpr MPL::Value<err23Val,err23Val::v0> v0{};
            constexpr MPL::Value<err23Val,err23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,err23Val> err23{}; 
        ///Error In Channel 24
        enum class err24Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err24ValC{
            constexpr MPL::Value<err24Val,err24Val::v0> v0{};
            constexpr MPL::Value<err24Val,err24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,err24Val> err24{}; 
        ///Error In Channel 25
        enum class err25Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err25ValC{
            constexpr MPL::Value<err25Val,err25Val::v0> v0{};
            constexpr MPL::Value<err25Val,err25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,err25Val> err25{}; 
        ///Error In Channel 26
        enum class err26Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err26ValC{
            constexpr MPL::Value<err26Val,err26Val::v0> v0{};
            constexpr MPL::Value<err26Val,err26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,err26Val> err26{}; 
        ///Error In Channel 27
        enum class err27Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err27ValC{
            constexpr MPL::Value<err27Val,err27Val::v0> v0{};
            constexpr MPL::Value<err27Val,err27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,err27Val> err27{}; 
        ///Error In Channel 28
        enum class err28Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err28ValC{
            constexpr MPL::Value<err28Val,err28Val::v0> v0{};
            constexpr MPL::Value<err28Val,err28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,err28Val> err28{}; 
        ///Error In Channel 29
        enum class err29Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err29ValC{
            constexpr MPL::Value<err29Val,err29Val::v0> v0{};
            constexpr MPL::Value<err29Val,err29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,err29Val> err29{}; 
        ///Error In Channel 30
        enum class err30Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err30ValC{
            constexpr MPL::Value<err30Val,err30Val::v0> v0{};
            constexpr MPL::Value<err30Val,err30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,err30Val> err30{}; 
        ///Error In Channel 31
        enum class err31Val {
            v0=0x00000000,     ///<An error in the corresponding channel has not occurred
            v1=0x00000001,     ///<An error in the corresponding channel has occurred
        };
        namespace err31ValC{
            constexpr MPL::Value<err31Val,err31Val::v0> v0{};
            constexpr MPL::Value<err31Val,err31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,err31Val> err31{}; 
    }
    namespace DmaHrs{    ///<Hardware Request Status Register
        using Addr = Register::Address<0x40008034,0x00000000,0,unsigned>;
        ///Hardware Request Status Channel 0
        enum class hrs0Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs0ValC{
            constexpr MPL::Value<hrs0Val,hrs0Val::v0> v0{};
            constexpr MPL::Value<hrs0Val,hrs0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,hrs0Val> hrs0{}; 
        ///Hardware Request Status Channel 1
        enum class hrs1Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs1ValC{
            constexpr MPL::Value<hrs1Val,hrs1Val::v0> v0{};
            constexpr MPL::Value<hrs1Val,hrs1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hrs1Val> hrs1{}; 
        ///Hardware Request Status Channel 2
        enum class hrs2Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs2ValC{
            constexpr MPL::Value<hrs2Val,hrs2Val::v0> v0{};
            constexpr MPL::Value<hrs2Val,hrs2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,hrs2Val> hrs2{}; 
        ///Hardware Request Status Channel 3
        enum class hrs3Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs3ValC{
            constexpr MPL::Value<hrs3Val,hrs3Val::v0> v0{};
            constexpr MPL::Value<hrs3Val,hrs3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,hrs3Val> hrs3{}; 
        ///Hardware Request Status Channel 4
        enum class hrs4Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs4ValC{
            constexpr MPL::Value<hrs4Val,hrs4Val::v0> v0{};
            constexpr MPL::Value<hrs4Val,hrs4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,hrs4Val> hrs4{}; 
        ///Hardware Request Status Channel 5
        enum class hrs5Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs5ValC{
            constexpr MPL::Value<hrs5Val,hrs5Val::v0> v0{};
            constexpr MPL::Value<hrs5Val,hrs5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hrs5Val> hrs5{}; 
        ///Hardware Request Status Channel 6
        enum class hrs6Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs6ValC{
            constexpr MPL::Value<hrs6Val,hrs6Val::v0> v0{};
            constexpr MPL::Value<hrs6Val,hrs6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,hrs6Val> hrs6{}; 
        ///Hardware Request Status Channel 7
        enum class hrs7Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs7ValC{
            constexpr MPL::Value<hrs7Val,hrs7Val::v0> v0{};
            constexpr MPL::Value<hrs7Val,hrs7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,hrs7Val> hrs7{}; 
        ///Hardware Request Status Channel 8
        enum class hrs8Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs8ValC{
            constexpr MPL::Value<hrs8Val,hrs8Val::v0> v0{};
            constexpr MPL::Value<hrs8Val,hrs8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,hrs8Val> hrs8{}; 
        ///Hardware Request Status Channel 9
        enum class hrs9Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs9ValC{
            constexpr MPL::Value<hrs9Val,hrs9Val::v0> v0{};
            constexpr MPL::Value<hrs9Val,hrs9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,hrs9Val> hrs9{}; 
        ///Hardware Request Status Channel 10
        enum class hrs10Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs10ValC{
            constexpr MPL::Value<hrs10Val,hrs10Val::v0> v0{};
            constexpr MPL::Value<hrs10Val,hrs10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,hrs10Val> hrs10{}; 
        ///Hardware Request Status Channel 11
        enum class hrs11Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs11ValC{
            constexpr MPL::Value<hrs11Val,hrs11Val::v0> v0{};
            constexpr MPL::Value<hrs11Val,hrs11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,hrs11Val> hrs11{}; 
        ///Hardware Request Status Channel 12
        enum class hrs12Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs12ValC{
            constexpr MPL::Value<hrs12Val,hrs12Val::v0> v0{};
            constexpr MPL::Value<hrs12Val,hrs12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,hrs12Val> hrs12{}; 
        ///Hardware Request Status Channel 13
        enum class hrs13Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs13ValC{
            constexpr MPL::Value<hrs13Val,hrs13Val::v0> v0{};
            constexpr MPL::Value<hrs13Val,hrs13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,hrs13Val> hrs13{}; 
        ///Hardware Request Status Channel 14
        enum class hrs14Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs14ValC{
            constexpr MPL::Value<hrs14Val,hrs14Val::v0> v0{};
            constexpr MPL::Value<hrs14Val,hrs14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,hrs14Val> hrs14{}; 
        ///Hardware Request Status Channel 15
        enum class hrs15Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs15ValC{
            constexpr MPL::Value<hrs15Val,hrs15Val::v0> v0{};
            constexpr MPL::Value<hrs15Val,hrs15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,hrs15Val> hrs15{}; 
        ///Hardware Request Status Channel 16
        enum class hrs16Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs16ValC{
            constexpr MPL::Value<hrs16Val,hrs16Val::v0> v0{};
            constexpr MPL::Value<hrs16Val,hrs16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,hrs16Val> hrs16{}; 
        ///Hardware Request Status Channel 17
        enum class hrs17Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs17ValC{
            constexpr MPL::Value<hrs17Val,hrs17Val::v0> v0{};
            constexpr MPL::Value<hrs17Val,hrs17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,hrs17Val> hrs17{}; 
        ///Hardware Request Status Channel 18
        enum class hrs18Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs18ValC{
            constexpr MPL::Value<hrs18Val,hrs18Val::v0> v0{};
            constexpr MPL::Value<hrs18Val,hrs18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,hrs18Val> hrs18{}; 
        ///Hardware Request Status Channel 19
        enum class hrs19Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs19ValC{
            constexpr MPL::Value<hrs19Val,hrs19Val::v0> v0{};
            constexpr MPL::Value<hrs19Val,hrs19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,hrs19Val> hrs19{}; 
        ///Hardware Request Status Channel 20
        enum class hrs20Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs20ValC{
            constexpr MPL::Value<hrs20Val,hrs20Val::v0> v0{};
            constexpr MPL::Value<hrs20Val,hrs20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,hrs20Val> hrs20{}; 
        ///Hardware Request Status Channel 21
        enum class hrs21Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs21ValC{
            constexpr MPL::Value<hrs21Val,hrs21Val::v0> v0{};
            constexpr MPL::Value<hrs21Val,hrs21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,hrs21Val> hrs21{}; 
        ///Hardware Request Status Channel 22
        enum class hrs22Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs22ValC{
            constexpr MPL::Value<hrs22Val,hrs22Val::v0> v0{};
            constexpr MPL::Value<hrs22Val,hrs22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,hrs22Val> hrs22{}; 
        ///Hardware Request Status Channel 23
        enum class hrs23Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs23ValC{
            constexpr MPL::Value<hrs23Val,hrs23Val::v0> v0{};
            constexpr MPL::Value<hrs23Val,hrs23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,hrs23Val> hrs23{}; 
        ///Hardware Request Status Channel 24
        enum class hrs24Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs24ValC{
            constexpr MPL::Value<hrs24Val,hrs24Val::v0> v0{};
            constexpr MPL::Value<hrs24Val,hrs24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,hrs24Val> hrs24{}; 
        ///Hardware Request Status Channel 25
        enum class hrs25Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs25ValC{
            constexpr MPL::Value<hrs25Val,hrs25Val::v0> v0{};
            constexpr MPL::Value<hrs25Val,hrs25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,hrs25Val> hrs25{}; 
        ///Hardware Request Status Channel 26
        enum class hrs26Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs26ValC{
            constexpr MPL::Value<hrs26Val,hrs26Val::v0> v0{};
            constexpr MPL::Value<hrs26Val,hrs26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,hrs26Val> hrs26{}; 
        ///Hardware Request Status Channel 27
        enum class hrs27Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs27ValC{
            constexpr MPL::Value<hrs27Val,hrs27Val::v0> v0{};
            constexpr MPL::Value<hrs27Val,hrs27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,hrs27Val> hrs27{}; 
        ///Hardware Request Status Channel 28
        enum class hrs28Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs28ValC{
            constexpr MPL::Value<hrs28Val,hrs28Val::v0> v0{};
            constexpr MPL::Value<hrs28Val,hrs28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,hrs28Val> hrs28{}; 
        ///Hardware Request Status Channel 29
        enum class hrs29Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs29ValC{
            constexpr MPL::Value<hrs29Val,hrs29Val::v0> v0{};
            constexpr MPL::Value<hrs29Val,hrs29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,hrs29Val> hrs29{}; 
        ///Hardware Request Status Channel 30
        enum class hrs30Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs30ValC{
            constexpr MPL::Value<hrs30Val,hrs30Val::v0> v0{};
            constexpr MPL::Value<hrs30Val,hrs30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,hrs30Val> hrs30{}; 
        ///Hardware Request Status Channel 31
        enum class hrs31Val {
            v0=0x00000000,     ///<A hardware service request for the corresponding channel is not present
            v1=0x00000001,     ///<A hardware service request for the corresponding channel is present
        };
        namespace hrs31ValC{
            constexpr MPL::Value<hrs31Val,hrs31Val::v0> v0{};
            constexpr MPL::Value<hrs31Val,hrs31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,hrs31Val> hrs31{}; 
    }
    namespace DmaDchpri3{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008100,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri2{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008101,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri1{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008102,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri0{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008103,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri7{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008104,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri6{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008105,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri5{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008106,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri4{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008107,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri11{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008108,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri10{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008109,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri9{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810a,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri8{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810b,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri15{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810c,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri14{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810d,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri13{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810e,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri12{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810f,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri19{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008110,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri18{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008111,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri17{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008112,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri16{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008113,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri23{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008114,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri22{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008115,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri21{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008116,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri20{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008117,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri27{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008118,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri26{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008119,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri25{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000811a,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri24{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000811b,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri31{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000811c,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri30{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000811d,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri29{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000811e,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri28{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000811f,0xffffff00,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Channel n Current Group Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> grppri{}; 
        ///Disable preempt ability. This bit resets to zero.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption. This bit resets to zero.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaTcd0Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009000,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd1Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009020,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd2Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009040,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd3Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009060,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd4Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009080,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd5Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400090a0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd6Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400090c0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd7Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400090e0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd8Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009100,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd9Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009120,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd10Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009140,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd11Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009160,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd12Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009180,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd13Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400091a0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd14Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400091c0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd15Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400091e0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd16Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009200,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd17Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009220,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd18Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009240,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd19Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009260,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd20Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009280,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd21Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400092a0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd22Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400092c0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd23Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400092e0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd24Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009300,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd25Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009320,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd26Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009340,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd27Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009360,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd28Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x40009380,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd29Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400093a0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd30Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400093c0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd31Saddr{    ///<TCD Source Address
        using Addr = Register::Address<0x400093e0,0x00000000,0,unsigned>;
        ///Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmaTcd0Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009004,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd1Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009024,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd2Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009044,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd3Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009064,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd4Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009084,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd5Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400090a4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd6Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400090c4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd7Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400090e4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd8Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009104,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd9Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009124,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd10Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009144,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd11Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009164,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd12Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009184,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd13Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400091a4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd14Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400091c4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd15Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400091e4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd16Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009204,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd17Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009224,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd18Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009244,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd19Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009264,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd20Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009284,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd21Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400092a4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd22Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400092c4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd23Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400092e4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd24Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009304,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd25Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009324,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd26Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009344,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd27Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009364,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd28Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009384,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd29Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400093a4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd30Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400093c4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd31Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400093e4,0xffff0000,0,unsigned>;
        ///Source Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd0Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009006,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd1Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009026,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd2Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009046,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd3Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009066,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd4Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009086,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd5Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400090a6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd6Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400090c6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd7Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400090e6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd8Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009106,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd9Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009126,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd10Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009146,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd11Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009166,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd12Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009186,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd13Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400091a6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd14Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400091c6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd15Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400091e6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd16Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009206,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd17Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009226,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd18Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009246,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd19Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009266,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd20Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009286,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd21Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400092a6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd22Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400092c6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd23Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400092e6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd24Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009306,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd25Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009326,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd26Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009346,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd27Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009366,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd28Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009386,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd29Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400093a6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd30Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400093c6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd31Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400093e6,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd0NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009008,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd1NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009028,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd2NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009048,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd3NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009068,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd4NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009088,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd5NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400090a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd6NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400090c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd7NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400090e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd8NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009108,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd9NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009128,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd10NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009148,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd11NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009168,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd12NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009188,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd13NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400091a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd14NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400091c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd15NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400091e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd16NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009208,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd17NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009228,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd18NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009248,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd19NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009268,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd20NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009288,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd21NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400092a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd22NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400092c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd23NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400092e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd24NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009308,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd25NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009328,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd26NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009348,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd27NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009368,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd28NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x40009388,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd29NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400093a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd30NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400093c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd31NbytesMlno{    ///<TCD Minor Byte Count (Minor Loop Disabled)
        using Addr = Register::Address<0x400093e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
    }
    namespace DmaTcd0NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009008,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd1NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009028,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd2NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009048,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd3NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009068,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd4NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009088,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd5NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400090a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd6NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400090c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd7NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400090e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd8NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009108,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd9NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009128,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd10NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009148,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd11NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009168,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd12NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009188,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd13NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400091a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd14NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400091c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd15NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400091e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd16NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009208,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd17NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009228,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd18NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009248,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd19NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009268,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd20NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009288,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd21NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400092a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd22NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400092c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd23NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400092e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd24NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009308,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd25NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009328,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd26NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009348,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd27NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009368,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd28NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x40009388,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd29NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400093a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd30NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400093c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd31NbytesMloffno{    ///<TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
        using Addr = Register::Address<0x400093e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///Destination Minor Loop Offset enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd0NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009008,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd1NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009028,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd2NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009048,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd3NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009068,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd4NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009088,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd5NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400090a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd6NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400090c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd7NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400090e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd8NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009108,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd9NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009128,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd10NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009148,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd11NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009168,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd12NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009188,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd13NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400091a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd14NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400091c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd15NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400091e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd16NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009208,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd17NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009228,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd18NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009248,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd19NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009268,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd20NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009288,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd21NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400092a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd22NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400092c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd23NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400092e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd24NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009308,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd25NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009328,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd26NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009348,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd27NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009368,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd28NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009388,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd29NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400093a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd30NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400093c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd31NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400093e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
        ///Destination Minor Loop Offset Enable
        enum class dmloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the DADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the DADDR
        };
        namespace dmloeValC{
            constexpr MPL::Value<dmloeVal,dmloeVal::v0> v0{};
            constexpr MPL::Value<dmloeVal,dmloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dmloeVal> dmloe{}; 
        ///Source Minor Loop Offset Enable
        enum class smloeVal {
            v0=0x00000000,     ///<The minor loop offset is not applied to the SADDR
            v1=0x00000001,     ///<The minor loop offset is applied to the SADDR
        };
        namespace smloeValC{
            constexpr MPL::Value<smloeVal,smloeVal::v0> v0{};
            constexpr MPL::Value<smloeVal,smloeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,smloeVal> smloe{}; 
    }
    namespace DmaTcd0Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000900c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd1Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000902c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd2Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000904c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd3Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000906c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd4Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000908c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd5Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400090ac,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd6Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400090cc,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd7Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400090ec,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd8Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000910c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd9Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000912c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd10Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000914c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd11Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000916c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd12Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000918c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd13Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400091ac,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd14Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400091cc,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd15Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400091ec,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd16Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000920c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd17Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000922c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd18Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000924c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd19Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000926c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd20Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000928c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd21Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400092ac,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd22Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400092cc,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd23Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400092ec,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd24Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000930c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd25Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000932c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd26Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000934c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd27Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000936c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd28Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x4000938c,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd29Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400093ac,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd30Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400093cc,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd31Slast{    ///<TCD Last Source Address Adjustment
        using Addr = Register::Address<0x400093ec,0x00000000,0,unsigned>;
        ///Last Source Address Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> slast{}; 
    }
    namespace DmaTcd0Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009010,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd1Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009030,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd2Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009050,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd3Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009070,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd4Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009090,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd5Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400090b0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd6Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400090d0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd7Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400090f0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd8Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009110,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd9Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009130,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd10Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009150,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd11Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009170,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd12Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009190,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd13Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400091b0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd14Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400091d0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd15Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400091f0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd16Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009210,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd17Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009230,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd18Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009250,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd19Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009270,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd20Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009290,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd21Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400092b0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd22Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400092d0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd23Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400092f0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd24Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009310,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd25Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009330,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd26Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009350,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd27Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009370,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd28Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x40009390,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd29Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400093b0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd30Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400093d0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd31Daddr{    ///<TCD Destination Address
        using Addr = Register::Address<0x400093f0,0x00000000,0,unsigned>;
        ///Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmaTcd0Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009014,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd1Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009034,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd2Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009054,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd3Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009074,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd4Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009094,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd5Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400090b4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd6Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400090d4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd7Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400090f4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd8Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009114,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd9Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009134,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd10Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009154,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd11Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009174,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd12Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009194,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd13Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400091b4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd14Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400091d4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd15Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400091f4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd16Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009214,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd17Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009234,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd18Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009254,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd19Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009274,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd20Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009294,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd21Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400092b4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd22Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400092d4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd23Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400092f4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd24Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009314,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd25Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009334,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd26Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009354,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd27Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009374,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd28Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x40009394,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd29Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400093b4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd30Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400093d4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd31Doff{    ///<TCD Signed Destination Address Offset
        using Addr = Register::Address<0x400093f4,0xffff0000,0,unsigned>;
        ///Destination Address Signed Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> doff{}; 
    }
    namespace DmaTcd0CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009016,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd1CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009036,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd2CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009056,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd3CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009076,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd4CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009096,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd5CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400090b6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd6CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400090d6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd7CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400090f6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd8CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009116,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd9CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009136,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd10CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009156,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd11CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009176,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd12CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009196,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd13CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400091b6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd14CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400091d6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd15CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400091f6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd16CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009216,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd17CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009236,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd18CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009256,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd19CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009276,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd20CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009296,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd21CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400092b6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd22CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400092d6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd23CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400092f6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd24CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009316,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd25CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009336,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd26CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009356,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd27CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009376,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd28CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x40009396,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd29CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400093b6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd30CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400093d6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd31CiterElinkno{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400093f6,0xffff0000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd0CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009016,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd1CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009036,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd2CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009056,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd3CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009076,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd4CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009096,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd5CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400090b6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd6CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400090d6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd7CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400090f6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd8CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009116,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd9CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009136,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd10CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009156,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd11CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009176,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd12CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009196,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd13CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400091b6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd14CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400091d6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd15CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400091f6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd16CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009216,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd17CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009236,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd18CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009256,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd19CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009276,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd20CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009296,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd21CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400092b6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd22CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400092d6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd23CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400092f6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd24CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009316,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd25CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009336,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd26CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009356,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd27CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009376,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd28CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009396,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd29CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400093b6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd30CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400093d6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd31CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400093f6,0xffff4000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enable channel-to-channel linking on minor-loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd0Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009018,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd1Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009038,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd2Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009058,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd3Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009078,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd4Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009098,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd5Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400090b8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd6Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400090d8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd7Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400090f8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd8Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009118,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd9Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009138,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd10Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009158,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd11Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009178,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd12Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009198,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd13Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400091b8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd14Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400091d8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd15Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400091f8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd16Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009218,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd17Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009238,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd18Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009258,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd19Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009278,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd20Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009298,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd21Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400092b8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd22Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400092d8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd23Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400092f8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd24Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009318,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd25Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009338,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd26Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009358,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd27Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009378,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd28Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x40009398,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd29Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400093b8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd30Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400093d8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd31Dlastsga{    ///<TCD Last Destination Address Adjustment/Scatter Gather Address
        using Addr = Register::Address<0x400093f8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dlastsga{}; 
    }
    namespace DmaTcd0Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000901c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd1Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000903c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd2Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000905c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd3Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000907c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd4Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000909c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd5Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400090bc,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd6Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400090dc,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd7Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400090fc,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd8Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000911c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd9Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000913c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd10Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000915c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd11Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000917c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd12Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000919c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd13Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400091bc,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd14Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400091dc,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd15Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400091fc,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd16Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000921c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd17Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000923c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd18Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000925c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd19Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000927c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd20Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000929c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd21Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400092bc,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd22Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400092dc,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd23Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400092fc,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd24Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000931c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd25Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000933c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd26Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000935c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd27Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000937c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd28Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000939c,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd29Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400093bc,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd30Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400093dc,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd31Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400093fc,0xffff2000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled
            v1=0x00000001,     ///<The half-point interrupt is enabled
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete
        };
        namespace dreqValC{
            constexpr MPL::Value<dreqVal,dreqVal::v0> v0{};
            constexpr MPL::Value<dreqVal,dreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dreqVal> dreq{}; 
        ///Enable Scatter/Gather Processing
        enum class esgVal {
            v0=0x00000000,     ///<The current channel's TCD is normal format.
            v1=0x00000001,     ///<The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer to the next TCD to be loaded into this channel after the major loop completes its execution.
        };
        namespace esgValC{
            constexpr MPL::Value<esgVal,esgVal::v0> v0{};
            constexpr MPL::Value<esgVal,esgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,esgVal> esg{}; 
        ///Enable channel-to-channel linking on major loop complete
        enum class majorelinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace majorelinkValC{
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v0> v0{};
            constexpr MPL::Value<majorelinkVal,majorelinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,majorelinkVal> majorelink{}; 
        ///Channel Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> active{}; 
        ///Channel Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> done{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd0BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000901e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd1BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000903e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd2BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000905e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd3BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000907e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd4BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000909e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd5BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400090be,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd6BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400090de,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd7BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400090fe,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd8BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000911e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd9BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000913e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd10BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000915e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd11BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000917e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd12BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000919e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd13BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400091be,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd14BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400091de,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd15BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400091fe,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd16BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000921e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd17BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000923e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd18BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000925e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd19BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000927e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd20BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000929e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd21BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400092be,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd22BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400092de,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd23BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400092fe,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd24BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000931e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd25BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000933e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd26BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000935e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd27BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000937e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd28BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x4000939e,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd29BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400093be,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd30BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400093de,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd31BiterElinkno{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
        using Addr = Register::Address<0x400093fe,0xffff0000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd0BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000901e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd1BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000903e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd2BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000905e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd3BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000907e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd4BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000909e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd5BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400090be,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd6BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400090de,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd7BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400090fe,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd8BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000911e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd9BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000913e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd10BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000915e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd11BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000917e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd12BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000919e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd13BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400091be,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd14BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400091de,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd15BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400091fe,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd16BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000921e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd17BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000923e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd18BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000925e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd19BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000927e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd20BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000929e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd21BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400092be,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd22BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400092de,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd23BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400092fe,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd24BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000931e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd25BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000933e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd26BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000935e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd27BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000937e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd28BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000939e,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd29BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400093be,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd30BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400093de,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
    namespace DmaTcd31BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x400093fe,0xffff4000,0,unsigned>;
        ///Starting Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> linkch{}; 
        ///Enables channel-to-channel linking on minor loop complete
        enum class elinkVal {
            v0=0x00000000,     ///<The channel-to-channel linking is disabled
            v1=0x00000001,     ///<The channel-to-channel linking is enabled
        };
        namespace elinkValC{
            constexpr MPL::Value<elinkVal,elinkVal::v0> v0{};
            constexpr MPL::Value<elinkVal,elinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,elinkVal> elink{}; 
    }
}
