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
            v0=0x00000000,     ///<Fixed priority arbitration is used for channel selection.
            v1=0x00000001,     ///<Round robin arbitration is used for channel selection.
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
            v1=0x00000001,     ///<Cancel the remaining data transfer in the same fashion as the CX bit. Stop the executing channel and force the minor loop to finish. The cancel takes effect after the last write of the current read/write sequence. The ECX bit clears itself after the cancel is honored. In addition to cancelling the transfer, ECX treats the cancel as an error condition, thus updating the ES register and generating an optional error interrupt.
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
        ///Error Channel Number or Cancelled Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> errchn{}; 
        ///Channel Priority Error
        enum class CpeVal {
            v0=0x00000000,     ///<No channel priority error
            v1=0x00000001,     ///<The last recorded error was a configuration error in the channel priorities. Channel priorities are not unique.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,CpeVal> cpe{}; 
        namespace CpeValC{
            constexpr Register::FieldValue<decltype(cpe)::Type,CpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpe)::Type,CpeVal::v1> v1{};
        }
        ///Transfer Cancelled
        enum class EcxVal {
            v0=0x00000000,     ///<No cancelled transfers
            v1=0x00000001,     ///<The last recorded entry was a cancelled transfer by the error cancel transfer input
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
        using Addr = Register::Address<0x4000800c,0xfffffff0,0,unsigned>;
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
    }
    namespace DmaEei{    ///<Enable Error Interrupt Register
        using Addr = Register::Address<0x40008014,0xfffffff0,0,unsigned>;
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
        ///no description available
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
        ///no description available
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
        ///no description available
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
        ///no description available
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
        ///no description available
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
        ///no description available
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
        ///no description available
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
        ///no description available
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
        using Addr = Register::Address<0x40008024,0xfffffff0,0,unsigned>;
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
    }
    namespace DmaErr{    ///<Error Register
        using Addr = Register::Address<0x4000802c,0xfffffff0,0,unsigned>;
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
    }
    namespace DmaHrs{    ///<Hardware Request Status Register
        using Addr = Register::Address<0x40008034,0xfffffff0,0,unsigned>;
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
    namespace DmaTcd0Attr{    ///<TCD Transfer Attributes
        using Addr = Register::Address<0x40009006,0xffff0000,0,unsigned>;
        ///Destination Data Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///Destination Address Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///Source data transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ssize{}; 
        ///Source Address Modulo.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> smod{}; 
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
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
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
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
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
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
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
            v10=0x00000002,     ///<eDMA engine stalls for 4 cycles after each r/w
            v11=0x00000003,     ///<eDMA engine stalls for 8 cycles after each r/w
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,BwcVal> bwc{}; 
        namespace BwcValC{
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bwc)::Type,BwcVal::v11> v11{};
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
}
