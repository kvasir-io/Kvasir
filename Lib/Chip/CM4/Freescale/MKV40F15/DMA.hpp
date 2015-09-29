#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Enhanced direct memory access controller
    namespace DmaCr{    ///<Control Register
        using Addr = Register::Address<0x40008000,0xfffcff09,0,unsigned>;
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
            v0=0x00000000,     ///<Fixed priority arbitration is used for channel selection .
            v1=0x00000001,     ///<Round robin arbitration is used for channel selection .
        };
        namespace ercaValC{
            constexpr MPL::Value<ercaVal,ercaVal::v0> v0{};
            constexpr MPL::Value<ercaVal,ercaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ercaVal> erca{}; 
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
        ///Error Cancel Transfer
        enum class ecxVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Cancel the remaining data transfer in the same fashion as the CX bit. Stop the executing channel and force the minor loop to finish. The cancel takes effect after the last write of the current read/write sequence. The ECX bit clears itself after the cancel is honored. In addition to cancelling the transfer, ECX treats the cancel as an error condition, thus updating the Error Status register (DMAx_ES) and generating an optional error interrupt.
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
        using Addr = Register::Address<0x40008004,0x7ffeb000,0,unsigned>;
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
        ///Error Channel Number or Canceled Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> errchn{}; 
        ///Channel Priority Error
        enum class cpeVal {
            v0=0x00000000,     ///<No channel priority error
            v1=0x00000001,     ///<The last recorded error was a configuration error in the channel priorities . Channel priorities are not unique.
        };
        namespace cpeValC{
            constexpr MPL::Value<cpeVal,cpeVal::v0> v0{};
            constexpr MPL::Value<cpeVal,cpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,cpeVal> cpe{}; 
        ///Transfer Canceled
        enum class ecxVal {
            v0=0x00000000,     ///<No canceled transfers
            v1=0x00000001,     ///<The last recorded entry was a canceled transfer by the error cancel transfer input
        };
        namespace ecxValC{
            constexpr MPL::Value<ecxVal,ecxVal::v0> v0{};
            constexpr MPL::Value<ecxVal,ecxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ecxVal> ecx{}; 
        ///no description available
        enum class vldVal {
            v0=0x00000000,     ///<No ERR bits are set.
            v1=0x00000001,     ///<At least one ERR bit is set indicating a valid error exists that has not been cleared.
        };
        namespace vldValC{
            constexpr MPL::Value<vldVal,vldVal::v0> v0{};
            constexpr MPL::Value<vldVal,vldVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,vldVal> vld{}; 
    }
    namespace DmaErq{    ///<Enable Request Register
        using Addr = Register::Address<0x4000800c,0xffff0000,0,unsigned>;
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
    }
    namespace DmaEei{    ///<Enable Error Interrupt Register
        using Addr = Register::Address<0x40008014,0xffff0000,0,unsigned>;
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
    }
    namespace DmaCeei{    ///<Clear Enable Error Interrupt Register
        using Addr = Register::Address<0x40008018,0xffffff30,0,unsigned char>;
        ///Clear Enable Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ceei{}; 
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
        ///No Op enable
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
        using Addr = Register::Address<0x40008019,0xffffff30,0,unsigned char>;
        ///Set Enable Error Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seei{}; 
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
        ///No Op enable
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
        using Addr = Register::Address<0x4000801a,0xffffff30,0,unsigned char>;
        ///Clear Enable Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cerq{}; 
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
        ///No Op enable
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
        using Addr = Register::Address<0x4000801b,0xffffff30,0,unsigned char>;
        ///Set Enable Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> serq{}; 
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
        ///No Op enable
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
        using Addr = Register::Address<0x4000801c,0xffffff30,0,unsigned char>;
        ///Clear DONE Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cdne{}; 
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
        ///No Op enable
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
        using Addr = Register::Address<0x4000801d,0xffffff30,0,unsigned char>;
        ///Set START Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ssrt{}; 
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
        ///No Op enable
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
        using Addr = Register::Address<0x4000801e,0xffffff30,0,unsigned char>;
        ///Clear Error Indicator
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cerr{}; 
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
        ///No Op enable
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
        using Addr = Register::Address<0x4000801f,0xffffff30,0,unsigned char>;
        ///Clear Interrupt Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cint{}; 
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
        ///No Op enable
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
        using Addr = Register::Address<0x40008024,0xffff0000,0,unsigned>;
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
    }
    namespace DmaErr{    ///<Error Register
        using Addr = Register::Address<0x4000802c,0xffff0000,0,unsigned>;
        ///Error In Channel 0
        enum class err0Val {
            v0=0x00000000,     ///<An error in this channel has not occurred
            v1=0x00000001,     ///<An error in this channel has occurred
        };
        namespace err0ValC{
            constexpr MPL::Value<err0Val,err0Val::v0> v0{};
            constexpr MPL::Value<err0Val,err0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,err0Val> err0{}; 
        ///Error In Channel 1
        enum class err1Val {
            v0=0x00000000,     ///<An error in this channel has not occurred
            v1=0x00000001,     ///<An error in this channel has occurred
        };
        namespace err1ValC{
            constexpr MPL::Value<err1Val,err1Val::v0> v0{};
            constexpr MPL::Value<err1Val,err1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,err1Val> err1{}; 
        ///Error In Channel 2
        enum class err2Val {
            v0=0x00000000,     ///<An error in this channel has not occurred
            v1=0x00000001,     ///<An error in this channel has occurred
        };
        namespace err2ValC{
            constexpr MPL::Value<err2Val,err2Val::v0> v0{};
            constexpr MPL::Value<err2Val,err2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,err2Val> err2{}; 
        ///Error In Channel 3
        enum class err3Val {
            v0=0x00000000,     ///<An error in this channel has not occurred
            v1=0x00000001,     ///<An error in this channel has occurred
        };
        namespace err3ValC{
            constexpr MPL::Value<err3Val,err3Val::v0> v0{};
            constexpr MPL::Value<err3Val,err3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,err3Val> err3{}; 
        ///Error In Channel 4
        enum class err4Val {
            v0=0x00000000,     ///<An error in this channel has not occurred
            v1=0x00000001,     ///<An error in this channel has occurred
        };
        namespace err4ValC{
            constexpr MPL::Value<err4Val,err4Val::v0> v0{};
            constexpr MPL::Value<err4Val,err4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,err4Val> err4{}; 
        ///Error In Channel 5
        enum class err5Val {
            v0=0x00000000,     ///<An error in this channel has not occurred
            v1=0x00000001,     ///<An error in this channel has occurred
        };
        namespace err5ValC{
            constexpr MPL::Value<err5Val,err5Val::v0> v0{};
            constexpr MPL::Value<err5Val,err5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,err5Val> err5{}; 
        ///Error In Channel 6
        enum class err6Val {
            v0=0x00000000,     ///<An error in this channel has not occurred
            v1=0x00000001,     ///<An error in this channel has occurred
        };
        namespace err6ValC{
            constexpr MPL::Value<err6Val,err6Val::v0> v0{};
            constexpr MPL::Value<err6Val,err6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,err6Val> err6{}; 
        ///Error In Channel 7
        enum class err7Val {
            v0=0x00000000,     ///<An error in this channel has not occurred
            v1=0x00000001,     ///<An error in this channel has occurred
        };
        namespace err7ValC{
            constexpr MPL::Value<err7Val,err7Val::v0> v0{};
            constexpr MPL::Value<err7Val,err7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,err7Val> err7{}; 
        ///Error In Channel 8
        enum class err8Val {
            v0=0x00000000,     ///<An error in this channel has not occurred
            v1=0x00000001,     ///<An error in this channel has occurred
        };
        namespace err8ValC{
            constexpr MPL::Value<err8Val,err8Val::v0> v0{};
            constexpr MPL::Value<err8Val,err8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,err8Val> err8{}; 
        ///Error In Channel 9
        enum class err9Val {
            v0=0x00000000,     ///<An error in this channel has not occurred
            v1=0x00000001,     ///<An error in this channel has occurred
        };
        namespace err9ValC{
            constexpr MPL::Value<err9Val,err9Val::v0> v0{};
            constexpr MPL::Value<err9Val,err9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,err9Val> err9{}; 
        ///Error In Channel 10
        enum class err10Val {
            v0=0x00000000,     ///<An error in this channel has not occurred
            v1=0x00000001,     ///<An error in this channel has occurred
        };
        namespace err10ValC{
            constexpr MPL::Value<err10Val,err10Val::v0> v0{};
            constexpr MPL::Value<err10Val,err10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,err10Val> err10{}; 
        ///Error In Channel 11
        enum class err11Val {
            v0=0x00000000,     ///<An error in this channel has not occurred
            v1=0x00000001,     ///<An error in this channel has occurred
        };
        namespace err11ValC{
            constexpr MPL::Value<err11Val,err11Val::v0> v0{};
            constexpr MPL::Value<err11Val,err11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,err11Val> err11{}; 
        ///Error In Channel 12
        enum class err12Val {
            v0=0x00000000,     ///<An error in this channel has not occurred
            v1=0x00000001,     ///<An error in this channel has occurred
        };
        namespace err12ValC{
            constexpr MPL::Value<err12Val,err12Val::v0> v0{};
            constexpr MPL::Value<err12Val,err12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,err12Val> err12{}; 
        ///Error In Channel 13
        enum class err13Val {
            v0=0x00000000,     ///<An error in this channel has not occurred
            v1=0x00000001,     ///<An error in this channel has occurred
        };
        namespace err13ValC{
            constexpr MPL::Value<err13Val,err13Val::v0> v0{};
            constexpr MPL::Value<err13Val,err13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,err13Val> err13{}; 
        ///Error In Channel 14
        enum class err14Val {
            v0=0x00000000,     ///<An error in this channel has not occurred
            v1=0x00000001,     ///<An error in this channel has occurred
        };
        namespace err14ValC{
            constexpr MPL::Value<err14Val,err14Val::v0> v0{};
            constexpr MPL::Value<err14Val,err14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,err14Val> err14{}; 
        ///Error In Channel 15
        enum class err15Val {
            v0=0x00000000,     ///<An error in this channel has not occurred
            v1=0x00000001,     ///<An error in this channel has occurred
        };
        namespace err15ValC{
            constexpr MPL::Value<err15Val,err15Val::v0> v0{};
            constexpr MPL::Value<err15Val,err15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,err15Val> err15{}; 
    }
    namespace DmaHrs{    ///<Hardware Request Status Register
        using Addr = Register::Address<0x40008034,0xffff0000,0,unsigned>;
        ///Hardware Request Status Channel 0
        enum class hrs0Val {
            v0=0x00000000,     ///<A hardware service request for channel 0 is not present
            v1=0x00000001,     ///<A hardware service request for channel 0 is present
        };
        namespace hrs0ValC{
            constexpr MPL::Value<hrs0Val,hrs0Val::v0> v0{};
            constexpr MPL::Value<hrs0Val,hrs0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,hrs0Val> hrs0{}; 
        ///Hardware Request Status Channel 1
        enum class hrs1Val {
            v0=0x00000000,     ///<A hardware service request for channel 1 is not present
            v1=0x00000001,     ///<A hardware service request for channel 1 is present
        };
        namespace hrs1ValC{
            constexpr MPL::Value<hrs1Val,hrs1Val::v0> v0{};
            constexpr MPL::Value<hrs1Val,hrs1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hrs1Val> hrs1{}; 
        ///Hardware Request Status Channel 2
        enum class hrs2Val {
            v0=0x00000000,     ///<A hardware service request for channel 2 is not present
            v1=0x00000001,     ///<A hardware service request for channel 2 is present
        };
        namespace hrs2ValC{
            constexpr MPL::Value<hrs2Val,hrs2Val::v0> v0{};
            constexpr MPL::Value<hrs2Val,hrs2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,hrs2Val> hrs2{}; 
        ///Hardware Request Status Channel 3
        enum class hrs3Val {
            v0=0x00000000,     ///<A hardware service request for channel 3 is not present
            v1=0x00000001,     ///<A hardware service request for channel 3 is present
        };
        namespace hrs3ValC{
            constexpr MPL::Value<hrs3Val,hrs3Val::v0> v0{};
            constexpr MPL::Value<hrs3Val,hrs3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,hrs3Val> hrs3{}; 
        ///Hardware Request Status Channel 4
        enum class hrs4Val {
            v0=0x00000000,     ///<A hardware service request for channel 4 is not present
            v1=0x00000001,     ///<A hardware service request for channel 4 is present
        };
        namespace hrs4ValC{
            constexpr MPL::Value<hrs4Val,hrs4Val::v0> v0{};
            constexpr MPL::Value<hrs4Val,hrs4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,hrs4Val> hrs4{}; 
        ///Hardware Request Status Channel 5
        enum class hrs5Val {
            v0=0x00000000,     ///<A hardware service request for channel 5 is not present
            v1=0x00000001,     ///<A hardware service request for channel 5 is present
        };
        namespace hrs5ValC{
            constexpr MPL::Value<hrs5Val,hrs5Val::v0> v0{};
            constexpr MPL::Value<hrs5Val,hrs5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hrs5Val> hrs5{}; 
        ///Hardware Request Status Channel 6
        enum class hrs6Val {
            v0=0x00000000,     ///<A hardware service request for channel 6 is not present
            v1=0x00000001,     ///<A hardware service request for channel 6 is present
        };
        namespace hrs6ValC{
            constexpr MPL::Value<hrs6Val,hrs6Val::v0> v0{};
            constexpr MPL::Value<hrs6Val,hrs6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,hrs6Val> hrs6{}; 
        ///Hardware Request Status Channel 7
        enum class hrs7Val {
            v0=0x00000000,     ///<A hardware service request for channel 7 is not present
            v1=0x00000001,     ///<A hardware service request for channel 7 is present
        };
        namespace hrs7ValC{
            constexpr MPL::Value<hrs7Val,hrs7Val::v0> v0{};
            constexpr MPL::Value<hrs7Val,hrs7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,hrs7Val> hrs7{}; 
        ///Hardware Request Status Channel 8
        enum class hrs8Val {
            v0=0x00000000,     ///<A hardware service request for channel 8 is not present
            v1=0x00000001,     ///<A hardware service request for channel 8 is present
        };
        namespace hrs8ValC{
            constexpr MPL::Value<hrs8Val,hrs8Val::v0> v0{};
            constexpr MPL::Value<hrs8Val,hrs8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,hrs8Val> hrs8{}; 
        ///Hardware Request Status Channel 9
        enum class hrs9Val {
            v0=0x00000000,     ///<A hardware service request for channel 9 is not present
            v1=0x00000001,     ///<A hardware service request for channel 9 is present
        };
        namespace hrs9ValC{
            constexpr MPL::Value<hrs9Val,hrs9Val::v0> v0{};
            constexpr MPL::Value<hrs9Val,hrs9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,hrs9Val> hrs9{}; 
        ///Hardware Request Status Channel 10
        enum class hrs10Val {
            v0=0x00000000,     ///<A hardware service request for channel 10 is not present
            v1=0x00000001,     ///<A hardware service request for channel 10 is present
        };
        namespace hrs10ValC{
            constexpr MPL::Value<hrs10Val,hrs10Val::v0> v0{};
            constexpr MPL::Value<hrs10Val,hrs10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,hrs10Val> hrs10{}; 
        ///Hardware Request Status Channel 11
        enum class hrs11Val {
            v0=0x00000000,     ///<A hardware service request for channel 11 is not present
            v1=0x00000001,     ///<A hardware service request for channel 11 is present
        };
        namespace hrs11ValC{
            constexpr MPL::Value<hrs11Val,hrs11Val::v0> v0{};
            constexpr MPL::Value<hrs11Val,hrs11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,hrs11Val> hrs11{}; 
        ///Hardware Request Status Channel 12
        enum class hrs12Val {
            v0=0x00000000,     ///<A hardware service request for channel 12 is not present
            v1=0x00000001,     ///<A hardware service request for channel 12 is present
        };
        namespace hrs12ValC{
            constexpr MPL::Value<hrs12Val,hrs12Val::v0> v0{};
            constexpr MPL::Value<hrs12Val,hrs12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,hrs12Val> hrs12{}; 
        ///Hardware Request Status Channel 13
        enum class hrs13Val {
            v0=0x00000000,     ///<A hardware service request for channel 13 is not present
            v1=0x00000001,     ///<A hardware service request for channel 13 is present
        };
        namespace hrs13ValC{
            constexpr MPL::Value<hrs13Val,hrs13Val::v0> v0{};
            constexpr MPL::Value<hrs13Val,hrs13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,hrs13Val> hrs13{}; 
        ///Hardware Request Status Channel 14
        enum class hrs14Val {
            v0=0x00000000,     ///<A hardware service request for channel 14 is not present
            v1=0x00000001,     ///<A hardware service request for channel 14 is present
        };
        namespace hrs14ValC{
            constexpr MPL::Value<hrs14Val,hrs14Val::v0> v0{};
            constexpr MPL::Value<hrs14Val,hrs14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,hrs14Val> hrs14{}; 
        ///Hardware Request Status Channel 15
        enum class hrs15Val {
            v0=0x00000000,     ///<A hardware service request for channel 15 is not present
            v1=0x00000001,     ///<A hardware service request for channel 15 is present
        };
        namespace hrs15ValC{
            constexpr MPL::Value<hrs15Val,hrs15Val::v0> v0{};
            constexpr MPL::Value<hrs15Val,hrs15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,hrs15Val> hrs15{}; 
    }
    namespace DmaEars{    ///<Enable Asynchronous Request in Stop Register
        using Addr = Register::Address<0x40008044,0xffff0000,0,unsigned>;
        ///Enable asynchronous DMA request in stop mode for channel 0.
        enum class edreq0Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 0.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 0.
        };
        namespace edreq0ValC{
            constexpr MPL::Value<edreq0Val,edreq0Val::v0> v0{};
            constexpr MPL::Value<edreq0Val,edreq0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,edreq0Val> edreq0{}; 
        ///Enable asynchronous DMA request in stop mode for channel 1.
        enum class edreq1Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 1
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 1.
        };
        namespace edreq1ValC{
            constexpr MPL::Value<edreq1Val,edreq1Val::v0> v0{};
            constexpr MPL::Value<edreq1Val,edreq1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edreq1Val> edreq1{}; 
        ///Enable asynchronous DMA request in stop mode for channel 2.
        enum class edreq2Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 2.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 2.
        };
        namespace edreq2ValC{
            constexpr MPL::Value<edreq2Val,edreq2Val::v0> v0{};
            constexpr MPL::Value<edreq2Val,edreq2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,edreq2Val> edreq2{}; 
        ///Enable asynchronous DMA request in stop mode for channel 3.
        enum class edreq3Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 3.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 3.
        };
        namespace edreq3ValC{
            constexpr MPL::Value<edreq3Val,edreq3Val::v0> v0{};
            constexpr MPL::Value<edreq3Val,edreq3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,edreq3Val> edreq3{}; 
        ///Enable asynchronous DMA request in stop mode for channel 4
        enum class edreq4Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 4.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 4.
        };
        namespace edreq4ValC{
            constexpr MPL::Value<edreq4Val,edreq4Val::v0> v0{};
            constexpr MPL::Value<edreq4Val,edreq4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,edreq4Val> edreq4{}; 
        ///Enable asynchronous DMA request in stop mode for channel 5
        enum class edreq5Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 5.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 5.
        };
        namespace edreq5ValC{
            constexpr MPL::Value<edreq5Val,edreq5Val::v0> v0{};
            constexpr MPL::Value<edreq5Val,edreq5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,edreq5Val> edreq5{}; 
        ///Enable asynchronous DMA request in stop mode for channel 6
        enum class edreq6Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 6.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 6.
        };
        namespace edreq6ValC{
            constexpr MPL::Value<edreq6Val,edreq6Val::v0> v0{};
            constexpr MPL::Value<edreq6Val,edreq6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,edreq6Val> edreq6{}; 
        ///Enable asynchronous DMA request in stop mode for channel 7
        enum class edreq7Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 7.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 7.
        };
        namespace edreq7ValC{
            constexpr MPL::Value<edreq7Val,edreq7Val::v0> v0{};
            constexpr MPL::Value<edreq7Val,edreq7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,edreq7Val> edreq7{}; 
        ///Enable asynchronous DMA request in stop mode for channel 8
        enum class edreq8Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 8.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 8.
        };
        namespace edreq8ValC{
            constexpr MPL::Value<edreq8Val,edreq8Val::v0> v0{};
            constexpr MPL::Value<edreq8Val,edreq8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,edreq8Val> edreq8{}; 
        ///Enable asynchronous DMA request in stop mode for channel 9
        enum class edreq9Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 9.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 9.
        };
        namespace edreq9ValC{
            constexpr MPL::Value<edreq9Val,edreq9Val::v0> v0{};
            constexpr MPL::Value<edreq9Val,edreq9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,edreq9Val> edreq9{}; 
        ///Enable asynchronous DMA request in stop mode for channel 10
        enum class edreq10Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 10.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 10.
        };
        namespace edreq10ValC{
            constexpr MPL::Value<edreq10Val,edreq10Val::v0> v0{};
            constexpr MPL::Value<edreq10Val,edreq10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,edreq10Val> edreq10{}; 
        ///Enable asynchronous DMA request in stop mode for channel 11
        enum class edreq11Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 11.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 11.
        };
        namespace edreq11ValC{
            constexpr MPL::Value<edreq11Val,edreq11Val::v0> v0{};
            constexpr MPL::Value<edreq11Val,edreq11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,edreq11Val> edreq11{}; 
        ///Enable asynchronous DMA request in stop mode for channel 12
        enum class edreq12Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 12.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 12.
        };
        namespace edreq12ValC{
            constexpr MPL::Value<edreq12Val,edreq12Val::v0> v0{};
            constexpr MPL::Value<edreq12Val,edreq12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,edreq12Val> edreq12{}; 
        ///Enable asynchronous DMA request in stop mode for channel 13
        enum class edreq13Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 13.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 13.
        };
        namespace edreq13ValC{
            constexpr MPL::Value<edreq13Val,edreq13Val::v0> v0{};
            constexpr MPL::Value<edreq13Val,edreq13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,edreq13Val> edreq13{}; 
        ///Enable asynchronous DMA request in stop mode for channel 14
        enum class edreq14Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 14.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 14.
        };
        namespace edreq14ValC{
            constexpr MPL::Value<edreq14Val,edreq14Val::v0> v0{};
            constexpr MPL::Value<edreq14Val,edreq14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,edreq14Val> edreq14{}; 
        ///Enable asynchronous DMA request in stop mode for channel 15
        enum class edreq15Val {
            v0=0x00000000,     ///<Disable asynchronous DMA request for channel 15.
            v1=0x00000001,     ///<Enable asynchronous DMA request for channel 15.
        };
        namespace edreq15ValC{
            constexpr MPL::Value<edreq15Val,edreq15Val::v0> v0{};
            constexpr MPL::Value<edreq15Val,edreq15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,edreq15Val> edreq15{}; 
    }
    namespace DmaDchpri3{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008100,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel.
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority.
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request.
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel.
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri2{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008101,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel.
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority.
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request.
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel.
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri1{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008102,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel.
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority.
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request.
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel.
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri0{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008103,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel.
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority.
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request.
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel.
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri7{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008104,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel.
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority.
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request.
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel.
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri6{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008105,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel.
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority.
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request.
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel.
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri5{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008106,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel.
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority.
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request.
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel.
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri4{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008107,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel.
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority.
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request.
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel.
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri11{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008108,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel.
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority.
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request.
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel.
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri10{    ///<Channel n Priority Register
        using Addr = Register::Address<0x40008109,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel.
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority.
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request.
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel.
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri9{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810a,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel.
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority.
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request.
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel.
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri8{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810b,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel.
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority.
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request.
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel.
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri15{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810c,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel.
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority.
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request.
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel.
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri14{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810d,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel.
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority.
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request.
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel.
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri13{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810e,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel.
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority.
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request.
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel.
        };
        namespace ecpValC{
            constexpr MPL::Value<ecpVal,ecpVal::v0> v0{};
            constexpr MPL::Value<ecpVal,ecpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ecpVal> ecp{}; 
    }
    namespace DmaDchpri12{    ///<Channel n Priority Register
        using Addr = Register::Address<0x4000810f,0xffffff30,0,unsigned char>;
        ///Channel n Arbitration Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///Disable Preempt Ability.
        enum class dpaVal {
            v0=0x00000000,     ///<Channel n can suspend a lower priority channel.
            v1=0x00000001,     ///<Channel n cannot suspend any channel, regardless of channel priority.
        };
        namespace dpaValC{
            constexpr MPL::Value<dpaVal,dpaVal::v0> v0{};
            constexpr MPL::Value<dpaVal,dpaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpaVal> dpa{}; 
        ///Enable Channel Preemption.
        enum class ecpVal {
            v0=0x00000000,     ///<Channel n cannot be suspended by a higher priority channel's service request.
            v1=0x00000001,     ///<Channel n can be temporarily suspended by the service request of a higher priority channel.
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
    namespace DmaTcd0Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009004,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd1Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009024,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd2Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009044,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd3Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009064,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd4Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009084,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd5Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400090a4,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd6Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400090c4,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd7Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400090e4,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd8Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009104,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd9Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009124,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd10Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009144,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd11Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009164,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd12Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x40009184,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd13Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400091a4,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd14Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400091c4,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd15Soff{    ///<TCD Signed Source Address Offset
        using Addr = Register::Address<0x400091e4,0xffff0000,0,unsigned>;
        ///Source address signed offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> soff{}; 
    }
    namespace DmaTcd0Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009006,0xffff0000,0,unsigned>;
        ///Destination data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class ssizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte burst (4 beats of 64 bits)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v000> v000{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v001> v001{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v010> v010{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v100> v100{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd1Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009026,0xffff0000,0,unsigned>;
        ///Destination data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class ssizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte burst (4 beats of 64 bits)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v000> v000{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v001> v001{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v010> v010{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v100> v100{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd2Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009046,0xffff0000,0,unsigned>;
        ///Destination data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class ssizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte burst (4 beats of 64 bits)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v000> v000{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v001> v001{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v010> v010{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v100> v100{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd3Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009066,0xffff0000,0,unsigned>;
        ///Destination data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class ssizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte burst (4 beats of 64 bits)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v000> v000{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v001> v001{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v010> v010{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v100> v100{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd4Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009086,0xffff0000,0,unsigned>;
        ///Destination data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class ssizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte burst (4 beats of 64 bits)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v000> v000{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v001> v001{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v010> v010{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v100> v100{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd5Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400090a6,0xffff0000,0,unsigned>;
        ///Destination data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class ssizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte burst (4 beats of 64 bits)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v000> v000{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v001> v001{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v010> v010{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v100> v100{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd6Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400090c6,0xffff0000,0,unsigned>;
        ///Destination data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class ssizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte burst (4 beats of 64 bits)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v000> v000{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v001> v001{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v010> v010{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v100> v100{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd7Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400090e6,0xffff0000,0,unsigned>;
        ///Destination data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class ssizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte burst (4 beats of 64 bits)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v000> v000{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v001> v001{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v010> v010{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v100> v100{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd8Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009106,0xffff0000,0,unsigned>;
        ///Destination data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class ssizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte burst (4 beats of 64 bits)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v000> v000{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v001> v001{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v010> v010{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v100> v100{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd9Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009126,0xffff0000,0,unsigned>;
        ///Destination data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class ssizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte burst (4 beats of 64 bits)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v000> v000{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v001> v001{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v010> v010{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v100> v100{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd10Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009146,0xffff0000,0,unsigned>;
        ///Destination data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class ssizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte burst (4 beats of 64 bits)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v000> v000{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v001> v001{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v010> v010{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v100> v100{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd11Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009166,0xffff0000,0,unsigned>;
        ///Destination data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class ssizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte burst (4 beats of 64 bits)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v000> v000{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v001> v001{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v010> v010{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v100> v100{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd12Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009186,0xffff0000,0,unsigned>;
        ///Destination data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class ssizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte burst (4 beats of 64 bits)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v000> v000{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v001> v001{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v010> v010{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v100> v100{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd13Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400091a6,0xffff0000,0,unsigned>;
        ///Destination data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class ssizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte burst (4 beats of 64 bits)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v000> v000{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v001> v001{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v010> v010{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v100> v100{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd14Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400091c6,0xffff0000,0,unsigned>;
        ///Destination data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class ssizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte burst (4 beats of 64 bits)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v000> v000{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v001> v001{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v010> v010{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v100> v100{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
    }
    namespace DmaTcd15Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x400091e6,0xffff0000,0,unsigned>;
        ///Destination data transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        enum class ssizeVal {
            v000=0x00000000,     ///<8-bit
            v001=0x00000001,     ///<16-bit
            v010=0x00000002,     ///<32-bit
            v100=0x00000004,     ///<16-byte
            v101=0x00000005,     ///<32-byte burst (4 beats of 64 bits)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v000> v000{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v001> v001{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v010> v010{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v100> v100{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ssizeVal> ssize{}; 
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
    namespace DmaTcd0NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009008,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
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
    namespace DmaTcd1NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009028,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
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
    namespace DmaTcd2NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009048,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
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
    namespace DmaTcd3NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009068,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
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
    namespace DmaTcd4NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009088,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
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
    namespace DmaTcd5NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400090a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
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
    namespace DmaTcd6NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400090c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
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
    namespace DmaTcd7NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400090e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
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
    namespace DmaTcd8NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009108,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
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
    namespace DmaTcd9NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009128,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
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
    namespace DmaTcd10NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009148,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
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
    namespace DmaTcd11NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009168,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
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
    namespace DmaTcd12NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x40009188,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
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
    namespace DmaTcd13NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400091a8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
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
    namespace DmaTcd14NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400091c8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
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
    namespace DmaTcd15NbytesMloffyes{    ///<TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
        using Addr = Register::Address<0x400091e8,0x00000000,0,unsigned>;
        ///Minor Byte Transfer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> mloff{}; 
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
    namespace DmaTcd0CiterElinkyes{    ///<TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x40009016,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009036,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009056,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009076,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009096,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400090b6,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400090d6,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400090f6,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009116,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009136,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009156,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009176,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x40009196,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400091b6,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400091d6,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400091f6,0xffff6000,0,unsigned>;
        ///Current Major Iteration Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> citer{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
    namespace DmaTcd0Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000901c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started.
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes.
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled.
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled.
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled.
            v1=0x00000001,     ///<The half-point interrupt is enabled.
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected.
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete.
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
            v0=0x00000000,     ///<The channel-to-channel linking is disabled.
            v1=0x00000001,     ///<The channel-to-channel linking is enabled.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each R/W.
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each R/W.
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd1Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000903c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started.
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes.
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled.
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled.
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled.
            v1=0x00000001,     ///<The half-point interrupt is enabled.
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected.
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete.
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
            v0=0x00000000,     ///<The channel-to-channel linking is disabled.
            v1=0x00000001,     ///<The channel-to-channel linking is enabled.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each R/W.
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each R/W.
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd2Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000905c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started.
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes.
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled.
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled.
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled.
            v1=0x00000001,     ///<The half-point interrupt is enabled.
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected.
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete.
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
            v0=0x00000000,     ///<The channel-to-channel linking is disabled.
            v1=0x00000001,     ///<The channel-to-channel linking is enabled.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each R/W.
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each R/W.
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd3Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000907c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started.
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes.
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled.
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled.
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled.
            v1=0x00000001,     ///<The half-point interrupt is enabled.
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected.
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete.
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
            v0=0x00000000,     ///<The channel-to-channel linking is disabled.
            v1=0x00000001,     ///<The channel-to-channel linking is enabled.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each R/W.
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each R/W.
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd4Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000909c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started.
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes.
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled.
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled.
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled.
            v1=0x00000001,     ///<The half-point interrupt is enabled.
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected.
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete.
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
            v0=0x00000000,     ///<The channel-to-channel linking is disabled.
            v1=0x00000001,     ///<The channel-to-channel linking is enabled.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each R/W.
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each R/W.
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd5Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400090bc,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started.
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes.
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled.
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled.
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled.
            v1=0x00000001,     ///<The half-point interrupt is enabled.
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected.
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete.
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
            v0=0x00000000,     ///<The channel-to-channel linking is disabled.
            v1=0x00000001,     ///<The channel-to-channel linking is enabled.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each R/W.
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each R/W.
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd6Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400090dc,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started.
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes.
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled.
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled.
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled.
            v1=0x00000001,     ///<The half-point interrupt is enabled.
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected.
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete.
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
            v0=0x00000000,     ///<The channel-to-channel linking is disabled.
            v1=0x00000001,     ///<The channel-to-channel linking is enabled.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each R/W.
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each R/W.
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd7Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400090fc,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started.
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes.
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled.
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled.
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled.
            v1=0x00000001,     ///<The half-point interrupt is enabled.
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected.
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete.
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
            v0=0x00000000,     ///<The channel-to-channel linking is disabled.
            v1=0x00000001,     ///<The channel-to-channel linking is enabled.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each R/W.
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each R/W.
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd8Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000911c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started.
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes.
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled.
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled.
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled.
            v1=0x00000001,     ///<The half-point interrupt is enabled.
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected.
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete.
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
            v0=0x00000000,     ///<The channel-to-channel linking is disabled.
            v1=0x00000001,     ///<The channel-to-channel linking is enabled.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each R/W.
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each R/W.
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd9Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000913c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started.
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes.
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled.
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled.
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled.
            v1=0x00000001,     ///<The half-point interrupt is enabled.
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected.
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete.
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
            v0=0x00000000,     ///<The channel-to-channel linking is disabled.
            v1=0x00000001,     ///<The channel-to-channel linking is enabled.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each R/W.
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each R/W.
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd10Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000915c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started.
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes.
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled.
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled.
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled.
            v1=0x00000001,     ///<The half-point interrupt is enabled.
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected.
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete.
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
            v0=0x00000000,     ///<The channel-to-channel linking is disabled.
            v1=0x00000001,     ///<The channel-to-channel linking is enabled.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each R/W.
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each R/W.
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd11Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000917c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started.
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes.
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled.
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled.
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled.
            v1=0x00000001,     ///<The half-point interrupt is enabled.
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected.
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete.
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
            v0=0x00000000,     ///<The channel-to-channel linking is disabled.
            v1=0x00000001,     ///<The channel-to-channel linking is enabled.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each R/W.
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each R/W.
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd12Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x4000919c,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started.
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes.
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled.
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled.
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled.
            v1=0x00000001,     ///<The half-point interrupt is enabled.
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected.
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete.
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
            v0=0x00000000,     ///<The channel-to-channel linking is disabled.
            v1=0x00000001,     ///<The channel-to-channel linking is enabled.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each R/W.
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each R/W.
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd13Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400091bc,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started.
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes.
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled.
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled.
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled.
            v1=0x00000001,     ///<The half-point interrupt is enabled.
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected.
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete.
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
            v0=0x00000000,     ///<The channel-to-channel linking is disabled.
            v1=0x00000001,     ///<The channel-to-channel linking is enabled.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each R/W.
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each R/W.
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd14Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400091dc,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started.
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes.
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled.
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled.
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled.
            v1=0x00000001,     ///<The half-point interrupt is enabled.
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected.
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete.
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
            v0=0x00000000,     ///<The channel-to-channel linking is disabled.
            v1=0x00000001,     ///<The channel-to-channel linking is enabled.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each R/W.
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each R/W.
        };
        namespace bwcValC{
            constexpr MPL::Value<bwcVal,bwcVal::v00> v00{};
            constexpr MPL::Value<bwcVal,bwcVal::v10> v10{};
            constexpr MPL::Value<bwcVal,bwcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,bwcVal> bwc{}; 
    }
    namespace DmaTcd15Csr{    ///<TCD Control and Status
        using Addr = Register::Address<0x400091fc,0xffff3000,0,unsigned>;
        ///Channel Start
        enum class startVal {
            v0=0x00000000,     ///<The channel is not explicitly started.
            v1=0x00000001,     ///<The channel is explicitly started via a software initiated service request.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Enable an interrupt when major iteration count completes.
        enum class intmajorVal {
            v0=0x00000000,     ///<The end-of-major loop interrupt is disabled.
            v1=0x00000001,     ///<The end-of-major loop interrupt is enabled.
        };
        namespace intmajorValC{
            constexpr MPL::Value<intmajorVal,intmajorVal::v0> v0{};
            constexpr MPL::Value<intmajorVal,intmajorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,intmajorVal> intmajor{}; 
        ///Enable an interrupt when major counter is half complete.
        enum class inthalfVal {
            v0=0x00000000,     ///<The half-point interrupt is disabled.
            v1=0x00000001,     ///<The half-point interrupt is enabled.
        };
        namespace inthalfValC{
            constexpr MPL::Value<inthalfVal,inthalfVal::v0> v0{};
            constexpr MPL::Value<inthalfVal,inthalfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inthalfVal> inthalf{}; 
        ///Disable Request
        enum class dreqVal {
            v0=0x00000000,     ///<The channel's ERQ bit is not affected.
            v1=0x00000001,     ///<The channel's ERQ bit is cleared when the major loop is complete.
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
            v0=0x00000000,     ///<The channel-to-channel linking is disabled.
            v1=0x00000001,     ///<The channel-to-channel linking is enabled.
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> majorlinkch{}; 
        ///Bandwidth Control
        enum class bwcVal {
            v00=0x00000000,     ///<No eDMA engine stalls
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each R/W.
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each R/W.
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
    namespace DmaTcd0BiterElinkyes{    ///<TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
        using Addr = Register::Address<0x4000901e,0xffff6000,0,unsigned>;
        ///Starting major iteration count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000903e,0xffff6000,0,unsigned>;
        ///Starting major iteration count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000905e,0xffff6000,0,unsigned>;
        ///Starting major iteration count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000907e,0xffff6000,0,unsigned>;
        ///Starting major iteration count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000909e,0xffff6000,0,unsigned>;
        ///Starting major iteration count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400090be,0xffff6000,0,unsigned>;
        ///Starting major iteration count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400090de,0xffff6000,0,unsigned>;
        ///Starting major iteration count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400090fe,0xffff6000,0,unsigned>;
        ///Starting major iteration count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000911e,0xffff6000,0,unsigned>;
        ///Starting major iteration count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000913e,0xffff6000,0,unsigned>;
        ///Starting major iteration count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000915e,0xffff6000,0,unsigned>;
        ///Starting major iteration count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000917e,0xffff6000,0,unsigned>;
        ///Starting major iteration count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x4000919e,0xffff6000,0,unsigned>;
        ///Starting major iteration count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400091be,0xffff6000,0,unsigned>;
        ///Starting major iteration count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400091de,0xffff6000,0,unsigned>;
        ///Starting major iteration count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
        using Addr = Register::Address<0x400091fe,0xffff6000,0,unsigned>;
        ///Starting major iteration count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> biter{}; 
        ///Link Channel Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> linkch{}; 
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
