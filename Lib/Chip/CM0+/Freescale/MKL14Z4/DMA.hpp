#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DMA Controller
    namespace DmaSar0{    ///<Source Address Register
        using Addr = Register::Address<0x40008100,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace DmaDar0{    ///<Destination Address Register
        using Addr = Register::Address<0x40008104,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace DmaDsrBcr0{    ///<DMA Status Register / Byte Count Register
        using Addr = Register::Address<0x40008108,0x88000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> bcr{}; 
        ///Transactions done
        enum class DoneVal {
            v0=0x00000000,     ///<DMA transfer is not yet complete. Writing a 0 has no effect.
            v1=0x00000001,     ///<DMA transfer completed. Writing a 1 to this bit clears all DMA status bits and should be used in an interrupt service routine to clear the DMA interrupt and error bits.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,DoneVal> done{}; 
        namespace DoneValC{
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::v0> v0{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::v1> v1{};
        }
        ///Busy
        enum class BsyVal {
            v0=0x00000000,     ///<DMA channel is inactive. Cleared when the DMA has finished the last transaction.
            v1=0x00000001,     ///<BSY is set the first time the channel is enabled after a transfer is initiated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BsyVal> bsy{}; 
        namespace BsyValC{
            constexpr Register::FieldValue<decltype(bsy)::Type,BsyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bsy)::Type,BsyVal::v1> v1{};
        }
        ///Request
        enum class ReqVal {
            v0=0x00000000,     ///<No request is pending or the channel is currently active. Cleared when the channel is selected.
            v1=0x00000001,     ///<The DMA channel has a transfer remaining and the channel is not selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ReqVal> req{}; 
        namespace ReqValC{
            constexpr Register::FieldValue<decltype(req)::Type,ReqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(req)::Type,ReqVal::v1> v1{};
        }
        ///Bus error on destination
        enum class BedVal {
            v0=0x00000000,     ///<No bus error occurred.
            v1=0x00000001,     ///<The DMA channel terminated with a bus error during the write portion of a transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BedVal> bed{}; 
        namespace BedValC{
            constexpr Register::FieldValue<decltype(bed)::Type,BedVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bed)::Type,BedVal::v1> v1{};
        }
        ///Bus error on source
        enum class BesVal {
            v0=0x00000000,     ///<No bus error occurred.
            v1=0x00000001,     ///<The DMA channel terminated with a bus error during the read portion of a transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BesVal> bes{}; 
        namespace BesValC{
            constexpr Register::FieldValue<decltype(bes)::Type,BesVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bes)::Type,BesVal::v1> v1{};
        }
        ///Configuration error
        enum class CeVal {
            v0=0x00000000,     ///<No configuration error exists.
            v1=0x00000001,     ///<A configuration error has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CeVal> ce{}; 
        namespace CeValC{
            constexpr Register::FieldValue<decltype(ce)::Type,CeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ce)::Type,CeVal::v1> v1{};
        }
    }
    namespace DmaDsr0{    ///<DMA_DSR0 register.
        using Addr = Register::Address<0x4000810b,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DmaDcr0{    ///<DMA Control Register
        using Addr = Register::Address<0x4000810c,0x0f000040,0x00000000,unsigned>;
        ///Link channel 2
        enum class Lch2Val {
            v00=0x00000000,     ///<DMA Channel 0
            v01=0x00000001,     ///<DMA Channel 1
            v10=0x00000002,     ///<DMA Channel 2
            v11=0x00000003,     ///<DMA Channel 3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Lch2Val> lch2{}; 
        namespace Lch2ValC{
            constexpr Register::FieldValue<decltype(lch2)::Type,Lch2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(lch2)::Type,Lch2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(lch2)::Type,Lch2Val::v10> v10{};
            constexpr Register::FieldValue<decltype(lch2)::Type,Lch2Val::v11> v11{};
        }
        ///Link channel 1
        enum class Lch1Val {
            v00=0x00000000,     ///<DMA Channel 0
            v01=0x00000001,     ///<DMA Channel 1
            v10=0x00000002,     ///<DMA Channel 2
            v11=0x00000003,     ///<DMA Channel 3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Lch1Val> lch1{}; 
        namespace Lch1ValC{
            constexpr Register::FieldValue<decltype(lch1)::Type,Lch1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(lch1)::Type,Lch1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(lch1)::Type,Lch1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(lch1)::Type,Lch1Val::v11> v11{};
        }
        ///Link channel control
        enum class LinkccVal {
            v00=0x00000000,     ///<No channel-to-channel linking
            v01=0x00000001,     ///<Perform a link to channel LCH1 after each cycle-steal transfer followed by a link to LCH2 after the BCR decrements to zero
            v10=0x00000002,     ///<Perform a link to channel LCH1 after each cycle-steal transfer
            v11=0x00000003,     ///<Perform a link to channel LCH1 after the BCR decrements to zero
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,LinkccVal> linkcc{}; 
        namespace LinkccValC{
            constexpr Register::FieldValue<decltype(linkcc)::Type,LinkccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(linkcc)::Type,LinkccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(linkcc)::Type,LinkccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(linkcc)::Type,LinkccVal::v11> v11{};
        }
        ///Disable request
        enum class DreqVal {
            v0=0x00000000,     ///<ERQ bit is not affected.
            v1=0x00000001,     ///<ERQ bit is cleared when the BCR is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DreqVal> dReq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dReq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dReq)::Type,DreqVal::v1> v1{};
        }
        ///Destination address modulo
        enum class DmodVal {
            v0000=0x00000000,     ///<Buffer disabled
            v0001=0x00000001,     ///<Circular buffer size is 16 bytes
            v0010=0x00000002,     ///<Circular buffer size is 32 bytes
            v0011=0x00000003,     ///<Circular buffer size is 64 bytes
            v0100=0x00000004,     ///<Circular buffer size is 128 bytes
            v0101=0x00000005,     ///<Circular buffer size is 256 bytes
            v0110=0x00000006,     ///<Circular buffer size is 512 bytes
            v0111=0x00000007,     ///<Circular buffer size is 1 KB
            v1000=0x00000008,     ///<Circular buffer size is 2 KB
            v1001=0x00000009,     ///<Circular buffer size is 4 KB
            v1010=0x0000000a,     ///<Circular buffer size is 8 KB
            v1011=0x0000000b,     ///<Circular buffer size is 16 KB
            v1100=0x0000000c,     ///<Circular buffer size is 32 KB
            v1101=0x0000000d,     ///<Circular buffer size is 64 KB
            v1110=0x0000000e,     ///<Circular buffer size is 128 KB
            v1111=0x0000000f,     ///<Circular buffer size is 256 KB
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,DmodVal> dmod{}; 
        namespace DmodValC{
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1111> v1111{};
        }
        ///Source address modulo
        enum class SmodVal {
            v0000=0x00000000,     ///<Buffer disabled
            v0001=0x00000001,     ///<Circular buffer size is 16 bytes
            v0010=0x00000002,     ///<Circular buffer size is 32 bytes
            v0011=0x00000003,     ///<Circular buffer size is 64 bytes
            v0100=0x00000004,     ///<Circular buffer size is 128 bytes
            v0101=0x00000005,     ///<Circular buffer size is 256 bytes
            v0110=0x00000006,     ///<Circular buffer size is 512 bytes
            v0111=0x00000007,     ///<Circular buffer size is 1 KB
            v1000=0x00000008,     ///<Circular buffer size is 2 KB
            v1001=0x00000009,     ///<Circular buffer size is 4 KB
            v1010=0x0000000a,     ///<Circular buffer size is 8 KB
            v1011=0x0000000b,     ///<Circular buffer size is 16 KB
            v1100=0x0000000c,     ///<Circular buffer size is 32 KB
            v1101=0x0000000d,     ///<Circular buffer size is 64 KB
            v1110=0x0000000e,     ///<Circular buffer size is 128 KB
            v1111=0x0000000f,     ///<Circular buffer size is 256 KB
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,SmodVal> smod{}; 
        namespace SmodValC{
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1111> v1111{};
        }
        ///Start transfer
        enum class StartVal {
            v0=0x00000000,     ///<DMA inactive
            v1=0x00000001,     ///<The DMA begins the transfer in accordance to the values in the TCDn. START is cleared automatically after one module clock and always reads as logic 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Destination size
        enum class DsizeVal {
            v00=0x00000000,     ///<32-bit
            v01=0x00000001,     ///<8-bit
            v10=0x00000002,     ///<16-bit
            v11=0x00000003,     ///<Reserved (generates a configuration error (DSRn[CE]) if incorrectly specified at time of channel activation)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,DsizeVal> dsize{}; 
        namespace DsizeValC{
            constexpr Register::FieldValue<decltype(dsize)::Type,DsizeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(dsize)::Type,DsizeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(dsize)::Type,DsizeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(dsize)::Type,DsizeVal::v11> v11{};
        }
        ///Destination increment
        enum class DincVal {
            v0=0x00000000,     ///<No change to the DAR after a successful transfer.
            v1=0x00000001,     ///<The DAR increments by 1, 2, 4 depending upon the size of the transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,DincVal> dinc{}; 
        namespace DincValC{
            constexpr Register::FieldValue<decltype(dinc)::Type,DincVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dinc)::Type,DincVal::v1> v1{};
        }
        ///Source size
        enum class SsizeVal {
            v00=0x00000000,     ///<32-bit
            v01=0x00000001,     ///<8-bit
            v10=0x00000002,     ///<16-bit
            v11=0x00000003,     ///<Reserved (generates a configuration error (DSRn[CE]) if incorrectly specified at time of channel activation)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v11> v11{};
        }
        ///Source increment
        enum class SincVal {
            v0=0x00000000,     ///<No change to SAR after a successful transfer.
            v1=0x00000001,     ///<The SAR increments by 1, 2, 4 as determined by the transfer size.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,SincVal> sinc{}; 
        namespace SincValC{
            constexpr Register::FieldValue<decltype(sinc)::Type,SincVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sinc)::Type,SincVal::v1> v1{};
        }
        ///Enable asynchronous DMA requests
        enum class EadreqVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,EadreqVal> eadreq{}; 
        namespace EadreqValC{
            constexpr Register::FieldValue<decltype(eadreq)::Type,EadreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eadreq)::Type,EadreqVal::v1> v1{};
        }
        ///Auto-align
        enum class AaVal {
            v0=0x00000000,     ///<Auto-align disabled
            v1=0x00000001,     ///<If SSIZE indicates a transfer no smaller than DSIZE, source accesses are auto-aligned; otherwise, destination accesses are auto-aligned. Source alignment takes precedence over destination alignment. If auto-alignment is enabled, the appropriate address register increments, regardless of DINC or SINC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,AaVal> aa{}; 
        namespace AaValC{
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v1> v1{};
        }
        ///Cycle steal
        enum class CsVal {
            v0=0x00000000,     ///<DMA continuously makes read/write transfers until the BCR decrements to 0.
            v1=0x00000001,     ///<Forces a single read/write transfer per request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,CsVal> cs{}; 
        namespace CsValC{
            constexpr Register::FieldValue<decltype(cs)::Type,CsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cs)::Type,CsVal::v1> v1{};
        }
        ///Enable peripheral request
        enum class ErqVal {
            v0=0x00000000,     ///<Peripheral request is ignored.
            v1=0x00000001,     ///<Enables peripheral request, defined by the appropriate REQC[DMACn] field, to initiate transfer. A software-initiated request (setting the START bit) is always enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ErqVal> erq{}; 
        namespace ErqValC{
            constexpr Register::FieldValue<decltype(erq)::Type,ErqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erq)::Type,ErqVal::v1> v1{};
        }
        ///Enable interrupt on completion of transfer
        enum class EintVal {
            v0=0x00000000,     ///<No interrupt is generated.
            v1=0x00000001,     ///<Interrupt signal is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,EintVal> eint{}; 
        namespace EintValC{
            constexpr Register::FieldValue<decltype(eint)::Type,EintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eint)::Type,EintVal::v1> v1{};
        }
    }
    namespace DmaSar1{    ///<Source Address Register
        using Addr = Register::Address<0x40008110,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace DmaDar1{    ///<Destination Address Register
        using Addr = Register::Address<0x40008114,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace DmaDsrBcr1{    ///<DMA Status Register / Byte Count Register
        using Addr = Register::Address<0x40008118,0x88000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> bcr{}; 
        ///Transactions done
        enum class DoneVal {
            v0=0x00000000,     ///<DMA transfer is not yet complete. Writing a 0 has no effect.
            v1=0x00000001,     ///<DMA transfer completed. Writing a 1 to this bit clears all DMA status bits and should be used in an interrupt service routine to clear the DMA interrupt and error bits.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,DoneVal> done{}; 
        namespace DoneValC{
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::v0> v0{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::v1> v1{};
        }
        ///Busy
        enum class BsyVal {
            v0=0x00000000,     ///<DMA channel is inactive. Cleared when the DMA has finished the last transaction.
            v1=0x00000001,     ///<BSY is set the first time the channel is enabled after a transfer is initiated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BsyVal> bsy{}; 
        namespace BsyValC{
            constexpr Register::FieldValue<decltype(bsy)::Type,BsyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bsy)::Type,BsyVal::v1> v1{};
        }
        ///Request
        enum class ReqVal {
            v0=0x00000000,     ///<No request is pending or the channel is currently active. Cleared when the channel is selected.
            v1=0x00000001,     ///<The DMA channel has a transfer remaining and the channel is not selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ReqVal> req{}; 
        namespace ReqValC{
            constexpr Register::FieldValue<decltype(req)::Type,ReqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(req)::Type,ReqVal::v1> v1{};
        }
        ///Bus error on destination
        enum class BedVal {
            v0=0x00000000,     ///<No bus error occurred.
            v1=0x00000001,     ///<The DMA channel terminated with a bus error during the write portion of a transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BedVal> bed{}; 
        namespace BedValC{
            constexpr Register::FieldValue<decltype(bed)::Type,BedVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bed)::Type,BedVal::v1> v1{};
        }
        ///Bus error on source
        enum class BesVal {
            v0=0x00000000,     ///<No bus error occurred.
            v1=0x00000001,     ///<The DMA channel terminated with a bus error during the read portion of a transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BesVal> bes{}; 
        namespace BesValC{
            constexpr Register::FieldValue<decltype(bes)::Type,BesVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bes)::Type,BesVal::v1> v1{};
        }
        ///Configuration error
        enum class CeVal {
            v0=0x00000000,     ///<No configuration error exists.
            v1=0x00000001,     ///<A configuration error has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CeVal> ce{}; 
        namespace CeValC{
            constexpr Register::FieldValue<decltype(ce)::Type,CeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ce)::Type,CeVal::v1> v1{};
        }
    }
    namespace DmaDsr1{    ///<DMA_DSR1 register.
        using Addr = Register::Address<0x4000811b,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DmaDcr1{    ///<DMA Control Register
        using Addr = Register::Address<0x4000811c,0x0f000040,0x00000000,unsigned>;
        ///Link channel 2
        enum class Lch2Val {
            v00=0x00000000,     ///<DMA Channel 0
            v01=0x00000001,     ///<DMA Channel 1
            v10=0x00000002,     ///<DMA Channel 2
            v11=0x00000003,     ///<DMA Channel 3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Lch2Val> lch2{}; 
        namespace Lch2ValC{
            constexpr Register::FieldValue<decltype(lch2)::Type,Lch2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(lch2)::Type,Lch2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(lch2)::Type,Lch2Val::v10> v10{};
            constexpr Register::FieldValue<decltype(lch2)::Type,Lch2Val::v11> v11{};
        }
        ///Link channel 1
        enum class Lch1Val {
            v00=0x00000000,     ///<DMA Channel 0
            v01=0x00000001,     ///<DMA Channel 1
            v10=0x00000002,     ///<DMA Channel 2
            v11=0x00000003,     ///<DMA Channel 3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Lch1Val> lch1{}; 
        namespace Lch1ValC{
            constexpr Register::FieldValue<decltype(lch1)::Type,Lch1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(lch1)::Type,Lch1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(lch1)::Type,Lch1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(lch1)::Type,Lch1Val::v11> v11{};
        }
        ///Link channel control
        enum class LinkccVal {
            v00=0x00000000,     ///<No channel-to-channel linking
            v01=0x00000001,     ///<Perform a link to channel LCH1 after each cycle-steal transfer followed by a link to LCH2 after the BCR decrements to zero
            v10=0x00000002,     ///<Perform a link to channel LCH1 after each cycle-steal transfer
            v11=0x00000003,     ///<Perform a link to channel LCH1 after the BCR decrements to zero
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,LinkccVal> linkcc{}; 
        namespace LinkccValC{
            constexpr Register::FieldValue<decltype(linkcc)::Type,LinkccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(linkcc)::Type,LinkccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(linkcc)::Type,LinkccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(linkcc)::Type,LinkccVal::v11> v11{};
        }
        ///Disable request
        enum class DreqVal {
            v0=0x00000000,     ///<ERQ bit is not affected.
            v1=0x00000001,     ///<ERQ bit is cleared when the BCR is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DreqVal> dReq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dReq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dReq)::Type,DreqVal::v1> v1{};
        }
        ///Destination address modulo
        enum class DmodVal {
            v0000=0x00000000,     ///<Buffer disabled
            v0001=0x00000001,     ///<Circular buffer size is 16 bytes
            v0010=0x00000002,     ///<Circular buffer size is 32 bytes
            v0011=0x00000003,     ///<Circular buffer size is 64 bytes
            v0100=0x00000004,     ///<Circular buffer size is 128 bytes
            v0101=0x00000005,     ///<Circular buffer size is 256 bytes
            v0110=0x00000006,     ///<Circular buffer size is 512 bytes
            v0111=0x00000007,     ///<Circular buffer size is 1 KB
            v1000=0x00000008,     ///<Circular buffer size is 2 KB
            v1001=0x00000009,     ///<Circular buffer size is 4 KB
            v1010=0x0000000a,     ///<Circular buffer size is 8 KB
            v1011=0x0000000b,     ///<Circular buffer size is 16 KB
            v1100=0x0000000c,     ///<Circular buffer size is 32 KB
            v1101=0x0000000d,     ///<Circular buffer size is 64 KB
            v1110=0x0000000e,     ///<Circular buffer size is 128 KB
            v1111=0x0000000f,     ///<Circular buffer size is 256 KB
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,DmodVal> dmod{}; 
        namespace DmodValC{
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1111> v1111{};
        }
        ///Source address modulo
        enum class SmodVal {
            v0000=0x00000000,     ///<Buffer disabled
            v0001=0x00000001,     ///<Circular buffer size is 16 bytes
            v0010=0x00000002,     ///<Circular buffer size is 32 bytes
            v0011=0x00000003,     ///<Circular buffer size is 64 bytes
            v0100=0x00000004,     ///<Circular buffer size is 128 bytes
            v0101=0x00000005,     ///<Circular buffer size is 256 bytes
            v0110=0x00000006,     ///<Circular buffer size is 512 bytes
            v0111=0x00000007,     ///<Circular buffer size is 1 KB
            v1000=0x00000008,     ///<Circular buffer size is 2 KB
            v1001=0x00000009,     ///<Circular buffer size is 4 KB
            v1010=0x0000000a,     ///<Circular buffer size is 8 KB
            v1011=0x0000000b,     ///<Circular buffer size is 16 KB
            v1100=0x0000000c,     ///<Circular buffer size is 32 KB
            v1101=0x0000000d,     ///<Circular buffer size is 64 KB
            v1110=0x0000000e,     ///<Circular buffer size is 128 KB
            v1111=0x0000000f,     ///<Circular buffer size is 256 KB
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,SmodVal> smod{}; 
        namespace SmodValC{
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1111> v1111{};
        }
        ///Start transfer
        enum class StartVal {
            v0=0x00000000,     ///<DMA inactive
            v1=0x00000001,     ///<The DMA begins the transfer in accordance to the values in the TCDn. START is cleared automatically after one module clock and always reads as logic 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Destination size
        enum class DsizeVal {
            v00=0x00000000,     ///<32-bit
            v01=0x00000001,     ///<8-bit
            v10=0x00000002,     ///<16-bit
            v11=0x00000003,     ///<Reserved (generates a configuration error (DSRn[CE]) if incorrectly specified at time of channel activation)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,DsizeVal> dsize{}; 
        namespace DsizeValC{
            constexpr Register::FieldValue<decltype(dsize)::Type,DsizeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(dsize)::Type,DsizeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(dsize)::Type,DsizeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(dsize)::Type,DsizeVal::v11> v11{};
        }
        ///Destination increment
        enum class DincVal {
            v0=0x00000000,     ///<No change to the DAR after a successful transfer.
            v1=0x00000001,     ///<The DAR increments by 1, 2, 4 depending upon the size of the transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,DincVal> dinc{}; 
        namespace DincValC{
            constexpr Register::FieldValue<decltype(dinc)::Type,DincVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dinc)::Type,DincVal::v1> v1{};
        }
        ///Source size
        enum class SsizeVal {
            v00=0x00000000,     ///<32-bit
            v01=0x00000001,     ///<8-bit
            v10=0x00000002,     ///<16-bit
            v11=0x00000003,     ///<Reserved (generates a configuration error (DSRn[CE]) if incorrectly specified at time of channel activation)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v11> v11{};
        }
        ///Source increment
        enum class SincVal {
            v0=0x00000000,     ///<No change to SAR after a successful transfer.
            v1=0x00000001,     ///<The SAR increments by 1, 2, 4 as determined by the transfer size.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,SincVal> sinc{}; 
        namespace SincValC{
            constexpr Register::FieldValue<decltype(sinc)::Type,SincVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sinc)::Type,SincVal::v1> v1{};
        }
        ///Enable asynchronous DMA requests
        enum class EadreqVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,EadreqVal> eadreq{}; 
        namespace EadreqValC{
            constexpr Register::FieldValue<decltype(eadreq)::Type,EadreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eadreq)::Type,EadreqVal::v1> v1{};
        }
        ///Auto-align
        enum class AaVal {
            v0=0x00000000,     ///<Auto-align disabled
            v1=0x00000001,     ///<If SSIZE indicates a transfer no smaller than DSIZE, source accesses are auto-aligned; otherwise, destination accesses are auto-aligned. Source alignment takes precedence over destination alignment. If auto-alignment is enabled, the appropriate address register increments, regardless of DINC or SINC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,AaVal> aa{}; 
        namespace AaValC{
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v1> v1{};
        }
        ///Cycle steal
        enum class CsVal {
            v0=0x00000000,     ///<DMA continuously makes read/write transfers until the BCR decrements to 0.
            v1=0x00000001,     ///<Forces a single read/write transfer per request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,CsVal> cs{}; 
        namespace CsValC{
            constexpr Register::FieldValue<decltype(cs)::Type,CsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cs)::Type,CsVal::v1> v1{};
        }
        ///Enable peripheral request
        enum class ErqVal {
            v0=0x00000000,     ///<Peripheral request is ignored.
            v1=0x00000001,     ///<Enables peripheral request, defined by the appropriate REQC[DMACn] field, to initiate transfer. A software-initiated request (setting the START bit) is always enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ErqVal> erq{}; 
        namespace ErqValC{
            constexpr Register::FieldValue<decltype(erq)::Type,ErqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erq)::Type,ErqVal::v1> v1{};
        }
        ///Enable interrupt on completion of transfer
        enum class EintVal {
            v0=0x00000000,     ///<No interrupt is generated.
            v1=0x00000001,     ///<Interrupt signal is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,EintVal> eint{}; 
        namespace EintValC{
            constexpr Register::FieldValue<decltype(eint)::Type,EintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eint)::Type,EintVal::v1> v1{};
        }
    }
    namespace DmaSar2{    ///<Source Address Register
        using Addr = Register::Address<0x40008120,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace DmaDar2{    ///<Destination Address Register
        using Addr = Register::Address<0x40008124,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace DmaDsrBcr2{    ///<DMA Status Register / Byte Count Register
        using Addr = Register::Address<0x40008128,0x88000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> bcr{}; 
        ///Transactions done
        enum class DoneVal {
            v0=0x00000000,     ///<DMA transfer is not yet complete. Writing a 0 has no effect.
            v1=0x00000001,     ///<DMA transfer completed. Writing a 1 to this bit clears all DMA status bits and should be used in an interrupt service routine to clear the DMA interrupt and error bits.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,DoneVal> done{}; 
        namespace DoneValC{
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::v0> v0{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::v1> v1{};
        }
        ///Busy
        enum class BsyVal {
            v0=0x00000000,     ///<DMA channel is inactive. Cleared when the DMA has finished the last transaction.
            v1=0x00000001,     ///<BSY is set the first time the channel is enabled after a transfer is initiated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BsyVal> bsy{}; 
        namespace BsyValC{
            constexpr Register::FieldValue<decltype(bsy)::Type,BsyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bsy)::Type,BsyVal::v1> v1{};
        }
        ///Request
        enum class ReqVal {
            v0=0x00000000,     ///<No request is pending or the channel is currently active. Cleared when the channel is selected.
            v1=0x00000001,     ///<The DMA channel has a transfer remaining and the channel is not selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ReqVal> req{}; 
        namespace ReqValC{
            constexpr Register::FieldValue<decltype(req)::Type,ReqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(req)::Type,ReqVal::v1> v1{};
        }
        ///Bus error on destination
        enum class BedVal {
            v0=0x00000000,     ///<No bus error occurred.
            v1=0x00000001,     ///<The DMA channel terminated with a bus error during the write portion of a transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BedVal> bed{}; 
        namespace BedValC{
            constexpr Register::FieldValue<decltype(bed)::Type,BedVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bed)::Type,BedVal::v1> v1{};
        }
        ///Bus error on source
        enum class BesVal {
            v0=0x00000000,     ///<No bus error occurred.
            v1=0x00000001,     ///<The DMA channel terminated with a bus error during the read portion of a transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BesVal> bes{}; 
        namespace BesValC{
            constexpr Register::FieldValue<decltype(bes)::Type,BesVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bes)::Type,BesVal::v1> v1{};
        }
        ///Configuration error
        enum class CeVal {
            v0=0x00000000,     ///<No configuration error exists.
            v1=0x00000001,     ///<A configuration error has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CeVal> ce{}; 
        namespace CeValC{
            constexpr Register::FieldValue<decltype(ce)::Type,CeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ce)::Type,CeVal::v1> v1{};
        }
    }
    namespace DmaDsr2{    ///<DMA_DSR2 register.
        using Addr = Register::Address<0x4000812b,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DmaDcr2{    ///<DMA Control Register
        using Addr = Register::Address<0x4000812c,0x0f000040,0x00000000,unsigned>;
        ///Link channel 2
        enum class Lch2Val {
            v00=0x00000000,     ///<DMA Channel 0
            v01=0x00000001,     ///<DMA Channel 1
            v10=0x00000002,     ///<DMA Channel 2
            v11=0x00000003,     ///<DMA Channel 3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Lch2Val> lch2{}; 
        namespace Lch2ValC{
            constexpr Register::FieldValue<decltype(lch2)::Type,Lch2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(lch2)::Type,Lch2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(lch2)::Type,Lch2Val::v10> v10{};
            constexpr Register::FieldValue<decltype(lch2)::Type,Lch2Val::v11> v11{};
        }
        ///Link channel 1
        enum class Lch1Val {
            v00=0x00000000,     ///<DMA Channel 0
            v01=0x00000001,     ///<DMA Channel 1
            v10=0x00000002,     ///<DMA Channel 2
            v11=0x00000003,     ///<DMA Channel 3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Lch1Val> lch1{}; 
        namespace Lch1ValC{
            constexpr Register::FieldValue<decltype(lch1)::Type,Lch1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(lch1)::Type,Lch1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(lch1)::Type,Lch1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(lch1)::Type,Lch1Val::v11> v11{};
        }
        ///Link channel control
        enum class LinkccVal {
            v00=0x00000000,     ///<No channel-to-channel linking
            v01=0x00000001,     ///<Perform a link to channel LCH1 after each cycle-steal transfer followed by a link to LCH2 after the BCR decrements to zero
            v10=0x00000002,     ///<Perform a link to channel LCH1 after each cycle-steal transfer
            v11=0x00000003,     ///<Perform a link to channel LCH1 after the BCR decrements to zero
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,LinkccVal> linkcc{}; 
        namespace LinkccValC{
            constexpr Register::FieldValue<decltype(linkcc)::Type,LinkccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(linkcc)::Type,LinkccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(linkcc)::Type,LinkccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(linkcc)::Type,LinkccVal::v11> v11{};
        }
        ///Disable request
        enum class DreqVal {
            v0=0x00000000,     ///<ERQ bit is not affected.
            v1=0x00000001,     ///<ERQ bit is cleared when the BCR is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DreqVal> dReq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dReq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dReq)::Type,DreqVal::v1> v1{};
        }
        ///Destination address modulo
        enum class DmodVal {
            v0000=0x00000000,     ///<Buffer disabled
            v0001=0x00000001,     ///<Circular buffer size is 16 bytes
            v0010=0x00000002,     ///<Circular buffer size is 32 bytes
            v0011=0x00000003,     ///<Circular buffer size is 64 bytes
            v0100=0x00000004,     ///<Circular buffer size is 128 bytes
            v0101=0x00000005,     ///<Circular buffer size is 256 bytes
            v0110=0x00000006,     ///<Circular buffer size is 512 bytes
            v0111=0x00000007,     ///<Circular buffer size is 1 KB
            v1000=0x00000008,     ///<Circular buffer size is 2 KB
            v1001=0x00000009,     ///<Circular buffer size is 4 KB
            v1010=0x0000000a,     ///<Circular buffer size is 8 KB
            v1011=0x0000000b,     ///<Circular buffer size is 16 KB
            v1100=0x0000000c,     ///<Circular buffer size is 32 KB
            v1101=0x0000000d,     ///<Circular buffer size is 64 KB
            v1110=0x0000000e,     ///<Circular buffer size is 128 KB
            v1111=0x0000000f,     ///<Circular buffer size is 256 KB
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,DmodVal> dmod{}; 
        namespace DmodValC{
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1111> v1111{};
        }
        ///Source address modulo
        enum class SmodVal {
            v0000=0x00000000,     ///<Buffer disabled
            v0001=0x00000001,     ///<Circular buffer size is 16 bytes
            v0010=0x00000002,     ///<Circular buffer size is 32 bytes
            v0011=0x00000003,     ///<Circular buffer size is 64 bytes
            v0100=0x00000004,     ///<Circular buffer size is 128 bytes
            v0101=0x00000005,     ///<Circular buffer size is 256 bytes
            v0110=0x00000006,     ///<Circular buffer size is 512 bytes
            v0111=0x00000007,     ///<Circular buffer size is 1 KB
            v1000=0x00000008,     ///<Circular buffer size is 2 KB
            v1001=0x00000009,     ///<Circular buffer size is 4 KB
            v1010=0x0000000a,     ///<Circular buffer size is 8 KB
            v1011=0x0000000b,     ///<Circular buffer size is 16 KB
            v1100=0x0000000c,     ///<Circular buffer size is 32 KB
            v1101=0x0000000d,     ///<Circular buffer size is 64 KB
            v1110=0x0000000e,     ///<Circular buffer size is 128 KB
            v1111=0x0000000f,     ///<Circular buffer size is 256 KB
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,SmodVal> smod{}; 
        namespace SmodValC{
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1111> v1111{};
        }
        ///Start transfer
        enum class StartVal {
            v0=0x00000000,     ///<DMA inactive
            v1=0x00000001,     ///<The DMA begins the transfer in accordance to the values in the TCDn. START is cleared automatically after one module clock and always reads as logic 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Destination size
        enum class DsizeVal {
            v00=0x00000000,     ///<32-bit
            v01=0x00000001,     ///<8-bit
            v10=0x00000002,     ///<16-bit
            v11=0x00000003,     ///<Reserved (generates a configuration error (DSRn[CE]) if incorrectly specified at time of channel activation)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,DsizeVal> dsize{}; 
        namespace DsizeValC{
            constexpr Register::FieldValue<decltype(dsize)::Type,DsizeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(dsize)::Type,DsizeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(dsize)::Type,DsizeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(dsize)::Type,DsizeVal::v11> v11{};
        }
        ///Destination increment
        enum class DincVal {
            v0=0x00000000,     ///<No change to the DAR after a successful transfer.
            v1=0x00000001,     ///<The DAR increments by 1, 2, 4 depending upon the size of the transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,DincVal> dinc{}; 
        namespace DincValC{
            constexpr Register::FieldValue<decltype(dinc)::Type,DincVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dinc)::Type,DincVal::v1> v1{};
        }
        ///Source size
        enum class SsizeVal {
            v00=0x00000000,     ///<32-bit
            v01=0x00000001,     ///<8-bit
            v10=0x00000002,     ///<16-bit
            v11=0x00000003,     ///<Reserved (generates a configuration error (DSRn[CE]) if incorrectly specified at time of channel activation)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v11> v11{};
        }
        ///Source increment
        enum class SincVal {
            v0=0x00000000,     ///<No change to SAR after a successful transfer.
            v1=0x00000001,     ///<The SAR increments by 1, 2, 4 as determined by the transfer size.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,SincVal> sinc{}; 
        namespace SincValC{
            constexpr Register::FieldValue<decltype(sinc)::Type,SincVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sinc)::Type,SincVal::v1> v1{};
        }
        ///Enable asynchronous DMA requests
        enum class EadreqVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,EadreqVal> eadreq{}; 
        namespace EadreqValC{
            constexpr Register::FieldValue<decltype(eadreq)::Type,EadreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eadreq)::Type,EadreqVal::v1> v1{};
        }
        ///Auto-align
        enum class AaVal {
            v0=0x00000000,     ///<Auto-align disabled
            v1=0x00000001,     ///<If SSIZE indicates a transfer no smaller than DSIZE, source accesses are auto-aligned; otherwise, destination accesses are auto-aligned. Source alignment takes precedence over destination alignment. If auto-alignment is enabled, the appropriate address register increments, regardless of DINC or SINC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,AaVal> aa{}; 
        namespace AaValC{
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v1> v1{};
        }
        ///Cycle steal
        enum class CsVal {
            v0=0x00000000,     ///<DMA continuously makes read/write transfers until the BCR decrements to 0.
            v1=0x00000001,     ///<Forces a single read/write transfer per request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,CsVal> cs{}; 
        namespace CsValC{
            constexpr Register::FieldValue<decltype(cs)::Type,CsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cs)::Type,CsVal::v1> v1{};
        }
        ///Enable peripheral request
        enum class ErqVal {
            v0=0x00000000,     ///<Peripheral request is ignored.
            v1=0x00000001,     ///<Enables peripheral request, defined by the appropriate REQC[DMACn] field, to initiate transfer. A software-initiated request (setting the START bit) is always enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ErqVal> erq{}; 
        namespace ErqValC{
            constexpr Register::FieldValue<decltype(erq)::Type,ErqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erq)::Type,ErqVal::v1> v1{};
        }
        ///Enable interrupt on completion of transfer
        enum class EintVal {
            v0=0x00000000,     ///<No interrupt is generated.
            v1=0x00000001,     ///<Interrupt signal is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,EintVal> eint{}; 
        namespace EintValC{
            constexpr Register::FieldValue<decltype(eint)::Type,EintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eint)::Type,EintVal::v1> v1{};
        }
    }
    namespace DmaSar3{    ///<Source Address Register
        using Addr = Register::Address<0x40008130,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace DmaDar3{    ///<Destination Address Register
        using Addr = Register::Address<0x40008134,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace DmaDsrBcr3{    ///<DMA Status Register / Byte Count Register
        using Addr = Register::Address<0x40008138,0x88000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> bcr{}; 
        ///Transactions done
        enum class DoneVal {
            v0=0x00000000,     ///<DMA transfer is not yet complete. Writing a 0 has no effect.
            v1=0x00000001,     ///<DMA transfer completed. Writing a 1 to this bit clears all DMA status bits and should be used in an interrupt service routine to clear the DMA interrupt and error bits.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,DoneVal> done{}; 
        namespace DoneValC{
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::v0> v0{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::v1> v1{};
        }
        ///Busy
        enum class BsyVal {
            v0=0x00000000,     ///<DMA channel is inactive. Cleared when the DMA has finished the last transaction.
            v1=0x00000001,     ///<BSY is set the first time the channel is enabled after a transfer is initiated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BsyVal> bsy{}; 
        namespace BsyValC{
            constexpr Register::FieldValue<decltype(bsy)::Type,BsyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bsy)::Type,BsyVal::v1> v1{};
        }
        ///Request
        enum class ReqVal {
            v0=0x00000000,     ///<No request is pending or the channel is currently active. Cleared when the channel is selected.
            v1=0x00000001,     ///<The DMA channel has a transfer remaining and the channel is not selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ReqVal> req{}; 
        namespace ReqValC{
            constexpr Register::FieldValue<decltype(req)::Type,ReqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(req)::Type,ReqVal::v1> v1{};
        }
        ///Bus error on destination
        enum class BedVal {
            v0=0x00000000,     ///<No bus error occurred.
            v1=0x00000001,     ///<The DMA channel terminated with a bus error during the write portion of a transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BedVal> bed{}; 
        namespace BedValC{
            constexpr Register::FieldValue<decltype(bed)::Type,BedVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bed)::Type,BedVal::v1> v1{};
        }
        ///Bus error on source
        enum class BesVal {
            v0=0x00000000,     ///<No bus error occurred.
            v1=0x00000001,     ///<The DMA channel terminated with a bus error during the read portion of a transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BesVal> bes{}; 
        namespace BesValC{
            constexpr Register::FieldValue<decltype(bes)::Type,BesVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bes)::Type,BesVal::v1> v1{};
        }
        ///Configuration error
        enum class CeVal {
            v0=0x00000000,     ///<No configuration error exists.
            v1=0x00000001,     ///<A configuration error has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CeVal> ce{}; 
        namespace CeValC{
            constexpr Register::FieldValue<decltype(ce)::Type,CeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ce)::Type,CeVal::v1> v1{};
        }
    }
    namespace DmaDsr3{    ///<DMA_DSR3 register.
        using Addr = Register::Address<0x4000813b,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DmaDcr3{    ///<DMA Control Register
        using Addr = Register::Address<0x4000813c,0x0f000040,0x00000000,unsigned>;
        ///Link channel 2
        enum class Lch2Val {
            v00=0x00000000,     ///<DMA Channel 0
            v01=0x00000001,     ///<DMA Channel 1
            v10=0x00000002,     ///<DMA Channel 2
            v11=0x00000003,     ///<DMA Channel 3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Lch2Val> lch2{}; 
        namespace Lch2ValC{
            constexpr Register::FieldValue<decltype(lch2)::Type,Lch2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(lch2)::Type,Lch2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(lch2)::Type,Lch2Val::v10> v10{};
            constexpr Register::FieldValue<decltype(lch2)::Type,Lch2Val::v11> v11{};
        }
        ///Link channel 1
        enum class Lch1Val {
            v00=0x00000000,     ///<DMA Channel 0
            v01=0x00000001,     ///<DMA Channel 1
            v10=0x00000002,     ///<DMA Channel 2
            v11=0x00000003,     ///<DMA Channel 3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Lch1Val> lch1{}; 
        namespace Lch1ValC{
            constexpr Register::FieldValue<decltype(lch1)::Type,Lch1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(lch1)::Type,Lch1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(lch1)::Type,Lch1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(lch1)::Type,Lch1Val::v11> v11{};
        }
        ///Link channel control
        enum class LinkccVal {
            v00=0x00000000,     ///<No channel-to-channel linking
            v01=0x00000001,     ///<Perform a link to channel LCH1 after each cycle-steal transfer followed by a link to LCH2 after the BCR decrements to zero
            v10=0x00000002,     ///<Perform a link to channel LCH1 after each cycle-steal transfer
            v11=0x00000003,     ///<Perform a link to channel LCH1 after the BCR decrements to zero
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,LinkccVal> linkcc{}; 
        namespace LinkccValC{
            constexpr Register::FieldValue<decltype(linkcc)::Type,LinkccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(linkcc)::Type,LinkccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(linkcc)::Type,LinkccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(linkcc)::Type,LinkccVal::v11> v11{};
        }
        ///Disable request
        enum class DreqVal {
            v0=0x00000000,     ///<ERQ bit is not affected.
            v1=0x00000001,     ///<ERQ bit is cleared when the BCR is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DreqVal> dReq{}; 
        namespace DreqValC{
            constexpr Register::FieldValue<decltype(dReq)::Type,DreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dReq)::Type,DreqVal::v1> v1{};
        }
        ///Destination address modulo
        enum class DmodVal {
            v0000=0x00000000,     ///<Buffer disabled
            v0001=0x00000001,     ///<Circular buffer size is 16 bytes
            v0010=0x00000002,     ///<Circular buffer size is 32 bytes
            v0011=0x00000003,     ///<Circular buffer size is 64 bytes
            v0100=0x00000004,     ///<Circular buffer size is 128 bytes
            v0101=0x00000005,     ///<Circular buffer size is 256 bytes
            v0110=0x00000006,     ///<Circular buffer size is 512 bytes
            v0111=0x00000007,     ///<Circular buffer size is 1 KB
            v1000=0x00000008,     ///<Circular buffer size is 2 KB
            v1001=0x00000009,     ///<Circular buffer size is 4 KB
            v1010=0x0000000a,     ///<Circular buffer size is 8 KB
            v1011=0x0000000b,     ///<Circular buffer size is 16 KB
            v1100=0x0000000c,     ///<Circular buffer size is 32 KB
            v1101=0x0000000d,     ///<Circular buffer size is 64 KB
            v1110=0x0000000e,     ///<Circular buffer size is 128 KB
            v1111=0x0000000f,     ///<Circular buffer size is 256 KB
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,DmodVal> dmod{}; 
        namespace DmodValC{
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(dmod)::Type,DmodVal::v1111> v1111{};
        }
        ///Source address modulo
        enum class SmodVal {
            v0000=0x00000000,     ///<Buffer disabled
            v0001=0x00000001,     ///<Circular buffer size is 16 bytes
            v0010=0x00000002,     ///<Circular buffer size is 32 bytes
            v0011=0x00000003,     ///<Circular buffer size is 64 bytes
            v0100=0x00000004,     ///<Circular buffer size is 128 bytes
            v0101=0x00000005,     ///<Circular buffer size is 256 bytes
            v0110=0x00000006,     ///<Circular buffer size is 512 bytes
            v0111=0x00000007,     ///<Circular buffer size is 1 KB
            v1000=0x00000008,     ///<Circular buffer size is 2 KB
            v1001=0x00000009,     ///<Circular buffer size is 4 KB
            v1010=0x0000000a,     ///<Circular buffer size is 8 KB
            v1011=0x0000000b,     ///<Circular buffer size is 16 KB
            v1100=0x0000000c,     ///<Circular buffer size is 32 KB
            v1101=0x0000000d,     ///<Circular buffer size is 64 KB
            v1110=0x0000000e,     ///<Circular buffer size is 128 KB
            v1111=0x0000000f,     ///<Circular buffer size is 256 KB
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,SmodVal> smod{}; 
        namespace SmodValC{
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::v1111> v1111{};
        }
        ///Start transfer
        enum class StartVal {
            v0=0x00000000,     ///<DMA inactive
            v1=0x00000001,     ///<The DMA begins the transfer in accordance to the values in the TCDn. START is cleared automatically after one module clock and always reads as logic 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::v1> v1{};
        }
        ///Destination size
        enum class DsizeVal {
            v00=0x00000000,     ///<32-bit
            v01=0x00000001,     ///<8-bit
            v10=0x00000002,     ///<16-bit
            v11=0x00000003,     ///<Reserved (generates a configuration error (DSRn[CE]) if incorrectly specified at time of channel activation)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,DsizeVal> dsize{}; 
        namespace DsizeValC{
            constexpr Register::FieldValue<decltype(dsize)::Type,DsizeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(dsize)::Type,DsizeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(dsize)::Type,DsizeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(dsize)::Type,DsizeVal::v11> v11{};
        }
        ///Destination increment
        enum class DincVal {
            v0=0x00000000,     ///<No change to the DAR after a successful transfer.
            v1=0x00000001,     ///<The DAR increments by 1, 2, 4 depending upon the size of the transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,DincVal> dinc{}; 
        namespace DincValC{
            constexpr Register::FieldValue<decltype(dinc)::Type,DincVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dinc)::Type,DincVal::v1> v1{};
        }
        ///Source size
        enum class SsizeVal {
            v00=0x00000000,     ///<32-bit
            v01=0x00000001,     ///<8-bit
            v10=0x00000002,     ///<16-bit
            v11=0x00000003,     ///<Reserved (generates a configuration error (DSRn[CE]) if incorrectly specified at time of channel activation)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,SsizeVal> ssize{}; 
        namespace SsizeValC{
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ssize)::Type,SsizeVal::v11> v11{};
        }
        ///Source increment
        enum class SincVal {
            v0=0x00000000,     ///<No change to SAR after a successful transfer.
            v1=0x00000001,     ///<The SAR increments by 1, 2, 4 as determined by the transfer size.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,SincVal> sinc{}; 
        namespace SincValC{
            constexpr Register::FieldValue<decltype(sinc)::Type,SincVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sinc)::Type,SincVal::v1> v1{};
        }
        ///Enable asynchronous DMA requests
        enum class EadreqVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,EadreqVal> eadreq{}; 
        namespace EadreqValC{
            constexpr Register::FieldValue<decltype(eadreq)::Type,EadreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eadreq)::Type,EadreqVal::v1> v1{};
        }
        ///Auto-align
        enum class AaVal {
            v0=0x00000000,     ///<Auto-align disabled
            v1=0x00000001,     ///<If SSIZE indicates a transfer no smaller than DSIZE, source accesses are auto-aligned; otherwise, destination accesses are auto-aligned. Source alignment takes precedence over destination alignment. If auto-alignment is enabled, the appropriate address register increments, regardless of DINC or SINC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,AaVal> aa{}; 
        namespace AaValC{
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v1> v1{};
        }
        ///Cycle steal
        enum class CsVal {
            v0=0x00000000,     ///<DMA continuously makes read/write transfers until the BCR decrements to 0.
            v1=0x00000001,     ///<Forces a single read/write transfer per request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,CsVal> cs{}; 
        namespace CsValC{
            constexpr Register::FieldValue<decltype(cs)::Type,CsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cs)::Type,CsVal::v1> v1{};
        }
        ///Enable peripheral request
        enum class ErqVal {
            v0=0x00000000,     ///<Peripheral request is ignored.
            v1=0x00000001,     ///<Enables peripheral request, defined by the appropriate REQC[DMACn] field, to initiate transfer. A software-initiated request (setting the START bit) is always enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ErqVal> erq{}; 
        namespace ErqValC{
            constexpr Register::FieldValue<decltype(erq)::Type,ErqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erq)::Type,ErqVal::v1> v1{};
        }
        ///Enable interrupt on completion of transfer
        enum class EintVal {
            v0=0x00000000,     ///<No interrupt is generated.
            v1=0x00000001,     ///<Interrupt signal is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,EintVal> eint{}; 
        namespace EintValC{
            constexpr Register::FieldValue<decltype(eint)::Type,EintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eint)::Type,EintVal::v1> v1{};
        }
    }
}
