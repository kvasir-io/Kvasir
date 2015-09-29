#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA Controller
    namespace DmaSar0{    ///<Source Address Register
        using Addr = Register::Address<0x40008100,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace DmaDar0{    ///<Destination Address Register
        using Addr = Register::Address<0x40008104,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace DmaDsrBcr0{    ///<DMA Status Register / Byte Count Register
        using Addr = Register::Address<0x40008108,0x88000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> bcr{}; 
        ///Transactions Done
        enum class doneVal {
            v0=0x00000000,     ///<DMA transfer is not yet complete. Writing a 0 has no effect.
            v1=0x00000001,     ///<DMA transfer completed. Writing a 1 to this bit clears all DMA status bits and should be used in an interrupt service routine to clear the DMA interrupt and error bits.
        };
        namespace doneValC{
            constexpr MPL::Value<doneVal,doneVal::v0> v0{};
            constexpr MPL::Value<doneVal,doneVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,doneVal> done{}; 
        ///Busy
        enum class bsyVal {
            v0=0x00000000,     ///<DMA channel is inactive. Cleared when the DMA has finished the last transaction.
            v1=0x00000001,     ///<BSY is set the first time the channel is enabled after a transfer is initiated.
        };
        namespace bsyValC{
            constexpr MPL::Value<bsyVal,bsyVal::v0> v0{};
            constexpr MPL::Value<bsyVal,bsyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,bsyVal> bsy{}; 
        ///Request
        enum class reqVal {
            v0=0x00000000,     ///<No request is pending or the channel is currently active. Cleared when the channel is selected.
            v1=0x00000001,     ///<The DMA channel has a transfer remaining and the channel is not selected.
        };
        namespace reqValC{
            constexpr MPL::Value<reqVal,reqVal::v0> v0{};
            constexpr MPL::Value<reqVal,reqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,reqVal> req{}; 
        ///Bus Error on Destination
        enum class bedVal {
            v0=0x00000000,     ///<No bus error occurred.
            v1=0x00000001,     ///<The DMA channel terminated with a bus error during the write portion of a transfer.
        };
        namespace bedValC{
            constexpr MPL::Value<bedVal,bedVal::v0> v0{};
            constexpr MPL::Value<bedVal,bedVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,bedVal> bed{}; 
        ///Bus Error on Source
        enum class besVal {
            v0=0x00000000,     ///<No bus error occurred.
            v1=0x00000001,     ///<The DMA channel terminated with a bus error during the read portion of a transfer.
        };
        namespace besValC{
            constexpr MPL::Value<besVal,besVal::v0> v0{};
            constexpr MPL::Value<besVal,besVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,besVal> bes{}; 
        ///Configuration Error
        enum class ceVal {
            v0=0x00000000,     ///<No configuration error exists.
            v1=0x00000001,     ///<A configuration error has occurred.
        };
        namespace ceValC{
            constexpr MPL::Value<ceVal,ceVal::v0> v0{};
            constexpr MPL::Value<ceVal,ceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ceVal> ce{}; 
    }
    namespace DmaDsr0{    ///<DMA_DSR0 register.
        using Addr = Register::Address<0x4000810b,0xffffffff,0,unsigned char>;
    }
    namespace DmaDcr0{    ///<DMA Control Register
        using Addr = Register::Address<0x4000810c,0x0f000040,0,unsigned>;
        ///Link Channel 2
        enum class lch2Val {
            v00=0x00000000,     ///<DMA Channel 0
            v01=0x00000001,     ///<DMA Channel 1
            v10=0x00000002,     ///<DMA Channel 2
            v11=0x00000003,     ///<DMA Channel 3
        };
        namespace lch2ValC{
            constexpr MPL::Value<lch2Val,lch2Val::v00> v00{};
            constexpr MPL::Value<lch2Val,lch2Val::v01> v01{};
            constexpr MPL::Value<lch2Val,lch2Val::v10> v10{};
            constexpr MPL::Value<lch2Val,lch2Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,lch2Val> lch2{}; 
        ///Link Channel 1
        enum class lch1Val {
            v00=0x00000000,     ///<DMA Channel 0
            v01=0x00000001,     ///<DMA Channel 1
            v10=0x00000002,     ///<DMA Channel 2
            v11=0x00000003,     ///<DMA Channel 3
        };
        namespace lch1ValC{
            constexpr MPL::Value<lch1Val,lch1Val::v00> v00{};
            constexpr MPL::Value<lch1Val,lch1Val::v01> v01{};
            constexpr MPL::Value<lch1Val,lch1Val::v10> v10{};
            constexpr MPL::Value<lch1Val,lch1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,lch1Val> lch1{}; 
        ///Link Channel Control
        enum class linkccVal {
            v00=0x00000000,     ///<No channel-to-channel linking
            v01=0x00000001,     ///<Perform a link to channel LCH1 after each cycle-steal transfer followed by a link to LCH2 after the BCR decrements to 0.
            v10=0x00000002,     ///<Perform a link to channel LCH1 after each cycle-steal transfer
            v11=0x00000003,     ///<Perform a link to channel LCH1 after the BCR decrements to 0.
        };
        namespace linkccValC{
            constexpr MPL::Value<linkccVal,linkccVal::v00> v00{};
            constexpr MPL::Value<linkccVal,linkccVal::v01> v01{};
            constexpr MPL::Value<linkccVal,linkccVal::v10> v10{};
            constexpr MPL::Value<linkccVal,linkccVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,linkccVal> linkcc{}; 
        ///Disable Request
        enum class dReqVal {
            v0=0x00000000,     ///<ERQ bit is not affected.
            v1=0x00000001,     ///<ERQ bit is cleared when the BCR is exhausted.
        };
        namespace dReqValC{
            constexpr MPL::Value<dReqVal,dReqVal::v0> v0{};
            constexpr MPL::Value<dReqVal,dReqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dReqVal> dReq{}; 
        ///Destination Address Modulo
        enum class dmodVal {
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
        namespace dmodValC{
            constexpr MPL::Value<dmodVal,dmodVal::v0000> v0000{};
            constexpr MPL::Value<dmodVal,dmodVal::v0001> v0001{};
            constexpr MPL::Value<dmodVal,dmodVal::v0010> v0010{};
            constexpr MPL::Value<dmodVal,dmodVal::v0011> v0011{};
            constexpr MPL::Value<dmodVal,dmodVal::v0100> v0100{};
            constexpr MPL::Value<dmodVal,dmodVal::v0101> v0101{};
            constexpr MPL::Value<dmodVal,dmodVal::v0110> v0110{};
            constexpr MPL::Value<dmodVal,dmodVal::v0111> v0111{};
            constexpr MPL::Value<dmodVal,dmodVal::v1000> v1000{};
            constexpr MPL::Value<dmodVal,dmodVal::v1001> v1001{};
            constexpr MPL::Value<dmodVal,dmodVal::v1010> v1010{};
            constexpr MPL::Value<dmodVal,dmodVal::v1011> v1011{};
            constexpr MPL::Value<dmodVal,dmodVal::v1100> v1100{};
            constexpr MPL::Value<dmodVal,dmodVal::v1101> v1101{};
            constexpr MPL::Value<dmodVal,dmodVal::v1110> v1110{};
            constexpr MPL::Value<dmodVal,dmodVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,dmodVal> dmod{}; 
        ///Source Address Modulo
        enum class smodVal {
            v0000=0x00000000,     ///<Buffer disabled
            v0001=0x00000001,     ///<Circular buffer size is 16 bytes.
            v0010=0x00000002,     ///<Circular buffer size is 32 bytes.
            v0011=0x00000003,     ///<Circular buffer size is 64 bytes.
            v0100=0x00000004,     ///<Circular buffer size is 128 bytes.
            v0101=0x00000005,     ///<Circular buffer size is 256 bytes.
            v0110=0x00000006,     ///<Circular buffer size is 512 bytes.
            v0111=0x00000007,     ///<Circular buffer size is 1 KB.
            v1000=0x00000008,     ///<Circular buffer size is 2 KB.
            v1001=0x00000009,     ///<Circular buffer size is 4 KB.
            v1010=0x0000000a,     ///<Circular buffer size is 8 KB.
            v1011=0x0000000b,     ///<Circular buffer size is 16 KB.
            v1100=0x0000000c,     ///<Circular buffer size is 32 KB.
            v1101=0x0000000d,     ///<Circular buffer size is 64 KB.
            v1110=0x0000000e,     ///<Circular buffer size is 128 KB.
            v1111=0x0000000f,     ///<Circular buffer size is 256 KB.
        };
        namespace smodValC{
            constexpr MPL::Value<smodVal,smodVal::v0000> v0000{};
            constexpr MPL::Value<smodVal,smodVal::v0001> v0001{};
            constexpr MPL::Value<smodVal,smodVal::v0010> v0010{};
            constexpr MPL::Value<smodVal,smodVal::v0011> v0011{};
            constexpr MPL::Value<smodVal,smodVal::v0100> v0100{};
            constexpr MPL::Value<smodVal,smodVal::v0101> v0101{};
            constexpr MPL::Value<smodVal,smodVal::v0110> v0110{};
            constexpr MPL::Value<smodVal,smodVal::v0111> v0111{};
            constexpr MPL::Value<smodVal,smodVal::v1000> v1000{};
            constexpr MPL::Value<smodVal,smodVal::v1001> v1001{};
            constexpr MPL::Value<smodVal,smodVal::v1010> v1010{};
            constexpr MPL::Value<smodVal,smodVal::v1011> v1011{};
            constexpr MPL::Value<smodVal,smodVal::v1100> v1100{};
            constexpr MPL::Value<smodVal,smodVal::v1101> v1101{};
            constexpr MPL::Value<smodVal,smodVal::v1110> v1110{};
            constexpr MPL::Value<smodVal,smodVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,smodVal> smod{}; 
        ///Start Transfer
        enum class startVal {
            v0=0x00000000,     ///<DMA inactive
            v1=0x00000001,     ///<The DMA begins the transfer in accordance to the values in the TCDn. START is cleared automatically after one module clock and always reads as logic 0.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,startVal> start{}; 
        ///Destination Size
        enum class dsizeVal {
            v00=0x00000000,     ///<32-bit
            v01=0x00000001,     ///<8-bit
            v10=0x00000002,     ///<16-bit
            v11=0x00000003,     ///<Reserved (generates a configuration error (DSRn[CE]) if incorrectly specified at time of channel activation)
        };
        namespace dsizeValC{
            constexpr MPL::Value<dsizeVal,dsizeVal::v00> v00{};
            constexpr MPL::Value<dsizeVal,dsizeVal::v01> v01{};
            constexpr MPL::Value<dsizeVal,dsizeVal::v10> v10{};
            constexpr MPL::Value<dsizeVal,dsizeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,dsizeVal> dsize{}; 
        ///Destination Increment
        enum class dincVal {
            v0=0x00000000,     ///<No change to the DAR after a successful transfer.
            v1=0x00000001,     ///<The DAR increments by 1, 2, 4 depending upon the size of the transfer.
        };
        namespace dincValC{
            constexpr MPL::Value<dincVal,dincVal::v0> v0{};
            constexpr MPL::Value<dincVal,dincVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,dincVal> dinc{}; 
        ///Source Size
        enum class ssizeVal {
            v00=0x00000000,     ///<32-bit
            v01=0x00000001,     ///<8-bit
            v10=0x00000002,     ///<16-bit
            v11=0x00000003,     ///<Reserved (generates a configuration error (DSRn[CE]) if incorrectly specified at time of channel activation)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v00> v00{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v01> v01{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v10> v10{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Increment
        enum class sincVal {
            v0=0x00000000,     ///<No change to SAR after a successful transfer.
            v1=0x00000001,     ///<The SAR increments by 1, 2, 4 as determined by the transfer size.
        };
        namespace sincValC{
            constexpr MPL::Value<sincVal,sincVal::v0> v0{};
            constexpr MPL::Value<sincVal,sincVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sincVal> sinc{}; 
        ///Enable asynchronous DMA requests
        enum class eadreqVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace eadreqValC{
            constexpr MPL::Value<eadreqVal,eadreqVal::v0> v0{};
            constexpr MPL::Value<eadreqVal,eadreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,eadreqVal> eadreq{}; 
        ///Auto-align
        enum class aaVal {
            v0=0x00000000,     ///<Auto-align disabled
            v1=0x00000001,     ///<If SSIZE indicates a transfer no smaller than DSIZE, source accesses are auto-aligned; otherwise, destination accesses are auto-aligned. Source alignment takes precedence over destination alignment. If auto-alignment is enabled, the appropriate address register increments, regardless of DINC or SINC.
        };
        namespace aaValC{
            constexpr MPL::Value<aaVal,aaVal::v0> v0{};
            constexpr MPL::Value<aaVal,aaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,aaVal> aa{}; 
        ///Cycle Steal
        enum class csVal {
            v0=0x00000000,     ///<DMA continuously makes read/write transfers until the BCR decrements to 0.
            v1=0x00000001,     ///<Forces a single read/write transfer per request.
        };
        namespace csValC{
            constexpr MPL::Value<csVal,csVal::v0> v0{};
            constexpr MPL::Value<csVal,csVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,csVal> cs{}; 
        ///Enable Peripheral Request
        enum class erqVal {
            v0=0x00000000,     ///<Peripheral request is ignored.
            v1=0x00000001,     ///<Enables peripheral request to initiate transfer. A software-initiated request (setting START) is always enabled.
        };
        namespace erqValC{
            constexpr MPL::Value<erqVal,erqVal::v0> v0{};
            constexpr MPL::Value<erqVal,erqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,erqVal> erq{}; 
        ///Enable Interrupt on Completion of Transfer
        enum class eintVal {
            v0=0x00000000,     ///<No interrupt is generated.
            v1=0x00000001,     ///<Interrupt signal is enabled.
        };
        namespace eintValC{
            constexpr MPL::Value<eintVal,eintVal::v0> v0{};
            constexpr MPL::Value<eintVal,eintVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,eintVal> eint{}; 
    }
    namespace DmaSar1{    ///<Source Address Register
        using Addr = Register::Address<0x40008110,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace DmaDar1{    ///<Destination Address Register
        using Addr = Register::Address<0x40008114,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace DmaDsrBcr1{    ///<DMA Status Register / Byte Count Register
        using Addr = Register::Address<0x40008118,0x88000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> bcr{}; 
        ///Transactions Done
        enum class doneVal {
            v0=0x00000000,     ///<DMA transfer is not yet complete. Writing a 0 has no effect.
            v1=0x00000001,     ///<DMA transfer completed. Writing a 1 to this bit clears all DMA status bits and should be used in an interrupt service routine to clear the DMA interrupt and error bits.
        };
        namespace doneValC{
            constexpr MPL::Value<doneVal,doneVal::v0> v0{};
            constexpr MPL::Value<doneVal,doneVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,doneVal> done{}; 
        ///Busy
        enum class bsyVal {
            v0=0x00000000,     ///<DMA channel is inactive. Cleared when the DMA has finished the last transaction.
            v1=0x00000001,     ///<BSY is set the first time the channel is enabled after a transfer is initiated.
        };
        namespace bsyValC{
            constexpr MPL::Value<bsyVal,bsyVal::v0> v0{};
            constexpr MPL::Value<bsyVal,bsyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,bsyVal> bsy{}; 
        ///Request
        enum class reqVal {
            v0=0x00000000,     ///<No request is pending or the channel is currently active. Cleared when the channel is selected.
            v1=0x00000001,     ///<The DMA channel has a transfer remaining and the channel is not selected.
        };
        namespace reqValC{
            constexpr MPL::Value<reqVal,reqVal::v0> v0{};
            constexpr MPL::Value<reqVal,reqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,reqVal> req{}; 
        ///Bus Error on Destination
        enum class bedVal {
            v0=0x00000000,     ///<No bus error occurred.
            v1=0x00000001,     ///<The DMA channel terminated with a bus error during the write portion of a transfer.
        };
        namespace bedValC{
            constexpr MPL::Value<bedVal,bedVal::v0> v0{};
            constexpr MPL::Value<bedVal,bedVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,bedVal> bed{}; 
        ///Bus Error on Source
        enum class besVal {
            v0=0x00000000,     ///<No bus error occurred.
            v1=0x00000001,     ///<The DMA channel terminated with a bus error during the read portion of a transfer.
        };
        namespace besValC{
            constexpr MPL::Value<besVal,besVal::v0> v0{};
            constexpr MPL::Value<besVal,besVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,besVal> bes{}; 
        ///Configuration Error
        enum class ceVal {
            v0=0x00000000,     ///<No configuration error exists.
            v1=0x00000001,     ///<A configuration error has occurred.
        };
        namespace ceValC{
            constexpr MPL::Value<ceVal,ceVal::v0> v0{};
            constexpr MPL::Value<ceVal,ceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ceVal> ce{}; 
    }
    namespace DmaDsr1{    ///<DMA_DSR1 register.
        using Addr = Register::Address<0x4000811b,0xffffffff,0,unsigned char>;
    }
    namespace DmaDcr1{    ///<DMA Control Register
        using Addr = Register::Address<0x4000811c,0x0f000040,0,unsigned>;
        ///Link Channel 2
        enum class lch2Val {
            v00=0x00000000,     ///<DMA Channel 0
            v01=0x00000001,     ///<DMA Channel 1
            v10=0x00000002,     ///<DMA Channel 2
            v11=0x00000003,     ///<DMA Channel 3
        };
        namespace lch2ValC{
            constexpr MPL::Value<lch2Val,lch2Val::v00> v00{};
            constexpr MPL::Value<lch2Val,lch2Val::v01> v01{};
            constexpr MPL::Value<lch2Val,lch2Val::v10> v10{};
            constexpr MPL::Value<lch2Val,lch2Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,lch2Val> lch2{}; 
        ///Link Channel 1
        enum class lch1Val {
            v00=0x00000000,     ///<DMA Channel 0
            v01=0x00000001,     ///<DMA Channel 1
            v10=0x00000002,     ///<DMA Channel 2
            v11=0x00000003,     ///<DMA Channel 3
        };
        namespace lch1ValC{
            constexpr MPL::Value<lch1Val,lch1Val::v00> v00{};
            constexpr MPL::Value<lch1Val,lch1Val::v01> v01{};
            constexpr MPL::Value<lch1Val,lch1Val::v10> v10{};
            constexpr MPL::Value<lch1Val,lch1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,lch1Val> lch1{}; 
        ///Link Channel Control
        enum class linkccVal {
            v00=0x00000000,     ///<No channel-to-channel linking
            v01=0x00000001,     ///<Perform a link to channel LCH1 after each cycle-steal transfer followed by a link to LCH2 after the BCR decrements to 0.
            v10=0x00000002,     ///<Perform a link to channel LCH1 after each cycle-steal transfer
            v11=0x00000003,     ///<Perform a link to channel LCH1 after the BCR decrements to 0.
        };
        namespace linkccValC{
            constexpr MPL::Value<linkccVal,linkccVal::v00> v00{};
            constexpr MPL::Value<linkccVal,linkccVal::v01> v01{};
            constexpr MPL::Value<linkccVal,linkccVal::v10> v10{};
            constexpr MPL::Value<linkccVal,linkccVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,linkccVal> linkcc{}; 
        ///Disable Request
        enum class dReqVal {
            v0=0x00000000,     ///<ERQ bit is not affected.
            v1=0x00000001,     ///<ERQ bit is cleared when the BCR is exhausted.
        };
        namespace dReqValC{
            constexpr MPL::Value<dReqVal,dReqVal::v0> v0{};
            constexpr MPL::Value<dReqVal,dReqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dReqVal> dReq{}; 
        ///Destination Address Modulo
        enum class dmodVal {
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
        namespace dmodValC{
            constexpr MPL::Value<dmodVal,dmodVal::v0000> v0000{};
            constexpr MPL::Value<dmodVal,dmodVal::v0001> v0001{};
            constexpr MPL::Value<dmodVal,dmodVal::v0010> v0010{};
            constexpr MPL::Value<dmodVal,dmodVal::v0011> v0011{};
            constexpr MPL::Value<dmodVal,dmodVal::v0100> v0100{};
            constexpr MPL::Value<dmodVal,dmodVal::v0101> v0101{};
            constexpr MPL::Value<dmodVal,dmodVal::v0110> v0110{};
            constexpr MPL::Value<dmodVal,dmodVal::v0111> v0111{};
            constexpr MPL::Value<dmodVal,dmodVal::v1000> v1000{};
            constexpr MPL::Value<dmodVal,dmodVal::v1001> v1001{};
            constexpr MPL::Value<dmodVal,dmodVal::v1010> v1010{};
            constexpr MPL::Value<dmodVal,dmodVal::v1011> v1011{};
            constexpr MPL::Value<dmodVal,dmodVal::v1100> v1100{};
            constexpr MPL::Value<dmodVal,dmodVal::v1101> v1101{};
            constexpr MPL::Value<dmodVal,dmodVal::v1110> v1110{};
            constexpr MPL::Value<dmodVal,dmodVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,dmodVal> dmod{}; 
        ///Source Address Modulo
        enum class smodVal {
            v0000=0x00000000,     ///<Buffer disabled
            v0001=0x00000001,     ///<Circular buffer size is 16 bytes.
            v0010=0x00000002,     ///<Circular buffer size is 32 bytes.
            v0011=0x00000003,     ///<Circular buffer size is 64 bytes.
            v0100=0x00000004,     ///<Circular buffer size is 128 bytes.
            v0101=0x00000005,     ///<Circular buffer size is 256 bytes.
            v0110=0x00000006,     ///<Circular buffer size is 512 bytes.
            v0111=0x00000007,     ///<Circular buffer size is 1 KB.
            v1000=0x00000008,     ///<Circular buffer size is 2 KB.
            v1001=0x00000009,     ///<Circular buffer size is 4 KB.
            v1010=0x0000000a,     ///<Circular buffer size is 8 KB.
            v1011=0x0000000b,     ///<Circular buffer size is 16 KB.
            v1100=0x0000000c,     ///<Circular buffer size is 32 KB.
            v1101=0x0000000d,     ///<Circular buffer size is 64 KB.
            v1110=0x0000000e,     ///<Circular buffer size is 128 KB.
            v1111=0x0000000f,     ///<Circular buffer size is 256 KB.
        };
        namespace smodValC{
            constexpr MPL::Value<smodVal,smodVal::v0000> v0000{};
            constexpr MPL::Value<smodVal,smodVal::v0001> v0001{};
            constexpr MPL::Value<smodVal,smodVal::v0010> v0010{};
            constexpr MPL::Value<smodVal,smodVal::v0011> v0011{};
            constexpr MPL::Value<smodVal,smodVal::v0100> v0100{};
            constexpr MPL::Value<smodVal,smodVal::v0101> v0101{};
            constexpr MPL::Value<smodVal,smodVal::v0110> v0110{};
            constexpr MPL::Value<smodVal,smodVal::v0111> v0111{};
            constexpr MPL::Value<smodVal,smodVal::v1000> v1000{};
            constexpr MPL::Value<smodVal,smodVal::v1001> v1001{};
            constexpr MPL::Value<smodVal,smodVal::v1010> v1010{};
            constexpr MPL::Value<smodVal,smodVal::v1011> v1011{};
            constexpr MPL::Value<smodVal,smodVal::v1100> v1100{};
            constexpr MPL::Value<smodVal,smodVal::v1101> v1101{};
            constexpr MPL::Value<smodVal,smodVal::v1110> v1110{};
            constexpr MPL::Value<smodVal,smodVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,smodVal> smod{}; 
        ///Start Transfer
        enum class startVal {
            v0=0x00000000,     ///<DMA inactive
            v1=0x00000001,     ///<The DMA begins the transfer in accordance to the values in the TCDn. START is cleared automatically after one module clock and always reads as logic 0.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,startVal> start{}; 
        ///Destination Size
        enum class dsizeVal {
            v00=0x00000000,     ///<32-bit
            v01=0x00000001,     ///<8-bit
            v10=0x00000002,     ///<16-bit
            v11=0x00000003,     ///<Reserved (generates a configuration error (DSRn[CE]) if incorrectly specified at time of channel activation)
        };
        namespace dsizeValC{
            constexpr MPL::Value<dsizeVal,dsizeVal::v00> v00{};
            constexpr MPL::Value<dsizeVal,dsizeVal::v01> v01{};
            constexpr MPL::Value<dsizeVal,dsizeVal::v10> v10{};
            constexpr MPL::Value<dsizeVal,dsizeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,dsizeVal> dsize{}; 
        ///Destination Increment
        enum class dincVal {
            v0=0x00000000,     ///<No change to the DAR after a successful transfer.
            v1=0x00000001,     ///<The DAR increments by 1, 2, 4 depending upon the size of the transfer.
        };
        namespace dincValC{
            constexpr MPL::Value<dincVal,dincVal::v0> v0{};
            constexpr MPL::Value<dincVal,dincVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,dincVal> dinc{}; 
        ///Source Size
        enum class ssizeVal {
            v00=0x00000000,     ///<32-bit
            v01=0x00000001,     ///<8-bit
            v10=0x00000002,     ///<16-bit
            v11=0x00000003,     ///<Reserved (generates a configuration error (DSRn[CE]) if incorrectly specified at time of channel activation)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v00> v00{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v01> v01{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v10> v10{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Increment
        enum class sincVal {
            v0=0x00000000,     ///<No change to SAR after a successful transfer.
            v1=0x00000001,     ///<The SAR increments by 1, 2, 4 as determined by the transfer size.
        };
        namespace sincValC{
            constexpr MPL::Value<sincVal,sincVal::v0> v0{};
            constexpr MPL::Value<sincVal,sincVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sincVal> sinc{}; 
        ///Enable asynchronous DMA requests
        enum class eadreqVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace eadreqValC{
            constexpr MPL::Value<eadreqVal,eadreqVal::v0> v0{};
            constexpr MPL::Value<eadreqVal,eadreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,eadreqVal> eadreq{}; 
        ///Auto-align
        enum class aaVal {
            v0=0x00000000,     ///<Auto-align disabled
            v1=0x00000001,     ///<If SSIZE indicates a transfer no smaller than DSIZE, source accesses are auto-aligned; otherwise, destination accesses are auto-aligned. Source alignment takes precedence over destination alignment. If auto-alignment is enabled, the appropriate address register increments, regardless of DINC or SINC.
        };
        namespace aaValC{
            constexpr MPL::Value<aaVal,aaVal::v0> v0{};
            constexpr MPL::Value<aaVal,aaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,aaVal> aa{}; 
        ///Cycle Steal
        enum class csVal {
            v0=0x00000000,     ///<DMA continuously makes read/write transfers until the BCR decrements to 0.
            v1=0x00000001,     ///<Forces a single read/write transfer per request.
        };
        namespace csValC{
            constexpr MPL::Value<csVal,csVal::v0> v0{};
            constexpr MPL::Value<csVal,csVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,csVal> cs{}; 
        ///Enable Peripheral Request
        enum class erqVal {
            v0=0x00000000,     ///<Peripheral request is ignored.
            v1=0x00000001,     ///<Enables peripheral request to initiate transfer. A software-initiated request (setting START) is always enabled.
        };
        namespace erqValC{
            constexpr MPL::Value<erqVal,erqVal::v0> v0{};
            constexpr MPL::Value<erqVal,erqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,erqVal> erq{}; 
        ///Enable Interrupt on Completion of Transfer
        enum class eintVal {
            v0=0x00000000,     ///<No interrupt is generated.
            v1=0x00000001,     ///<Interrupt signal is enabled.
        };
        namespace eintValC{
            constexpr MPL::Value<eintVal,eintVal::v0> v0{};
            constexpr MPL::Value<eintVal,eintVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,eintVal> eint{}; 
    }
    namespace DmaSar2{    ///<Source Address Register
        using Addr = Register::Address<0x40008120,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace DmaDar2{    ///<Destination Address Register
        using Addr = Register::Address<0x40008124,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace DmaDsrBcr2{    ///<DMA Status Register / Byte Count Register
        using Addr = Register::Address<0x40008128,0x88000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> bcr{}; 
        ///Transactions Done
        enum class doneVal {
            v0=0x00000000,     ///<DMA transfer is not yet complete. Writing a 0 has no effect.
            v1=0x00000001,     ///<DMA transfer completed. Writing a 1 to this bit clears all DMA status bits and should be used in an interrupt service routine to clear the DMA interrupt and error bits.
        };
        namespace doneValC{
            constexpr MPL::Value<doneVal,doneVal::v0> v0{};
            constexpr MPL::Value<doneVal,doneVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,doneVal> done{}; 
        ///Busy
        enum class bsyVal {
            v0=0x00000000,     ///<DMA channel is inactive. Cleared when the DMA has finished the last transaction.
            v1=0x00000001,     ///<BSY is set the first time the channel is enabled after a transfer is initiated.
        };
        namespace bsyValC{
            constexpr MPL::Value<bsyVal,bsyVal::v0> v0{};
            constexpr MPL::Value<bsyVal,bsyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,bsyVal> bsy{}; 
        ///Request
        enum class reqVal {
            v0=0x00000000,     ///<No request is pending or the channel is currently active. Cleared when the channel is selected.
            v1=0x00000001,     ///<The DMA channel has a transfer remaining and the channel is not selected.
        };
        namespace reqValC{
            constexpr MPL::Value<reqVal,reqVal::v0> v0{};
            constexpr MPL::Value<reqVal,reqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,reqVal> req{}; 
        ///Bus Error on Destination
        enum class bedVal {
            v0=0x00000000,     ///<No bus error occurred.
            v1=0x00000001,     ///<The DMA channel terminated with a bus error during the write portion of a transfer.
        };
        namespace bedValC{
            constexpr MPL::Value<bedVal,bedVal::v0> v0{};
            constexpr MPL::Value<bedVal,bedVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,bedVal> bed{}; 
        ///Bus Error on Source
        enum class besVal {
            v0=0x00000000,     ///<No bus error occurred.
            v1=0x00000001,     ///<The DMA channel terminated with a bus error during the read portion of a transfer.
        };
        namespace besValC{
            constexpr MPL::Value<besVal,besVal::v0> v0{};
            constexpr MPL::Value<besVal,besVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,besVal> bes{}; 
        ///Configuration Error
        enum class ceVal {
            v0=0x00000000,     ///<No configuration error exists.
            v1=0x00000001,     ///<A configuration error has occurred.
        };
        namespace ceValC{
            constexpr MPL::Value<ceVal,ceVal::v0> v0{};
            constexpr MPL::Value<ceVal,ceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ceVal> ce{}; 
    }
    namespace DmaDsr2{    ///<DMA_DSR2 register.
        using Addr = Register::Address<0x4000812b,0xffffffff,0,unsigned char>;
    }
    namespace DmaDcr2{    ///<DMA Control Register
        using Addr = Register::Address<0x4000812c,0x0f000040,0,unsigned>;
        ///Link Channel 2
        enum class lch2Val {
            v00=0x00000000,     ///<DMA Channel 0
            v01=0x00000001,     ///<DMA Channel 1
            v10=0x00000002,     ///<DMA Channel 2
            v11=0x00000003,     ///<DMA Channel 3
        };
        namespace lch2ValC{
            constexpr MPL::Value<lch2Val,lch2Val::v00> v00{};
            constexpr MPL::Value<lch2Val,lch2Val::v01> v01{};
            constexpr MPL::Value<lch2Val,lch2Val::v10> v10{};
            constexpr MPL::Value<lch2Val,lch2Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,lch2Val> lch2{}; 
        ///Link Channel 1
        enum class lch1Val {
            v00=0x00000000,     ///<DMA Channel 0
            v01=0x00000001,     ///<DMA Channel 1
            v10=0x00000002,     ///<DMA Channel 2
            v11=0x00000003,     ///<DMA Channel 3
        };
        namespace lch1ValC{
            constexpr MPL::Value<lch1Val,lch1Val::v00> v00{};
            constexpr MPL::Value<lch1Val,lch1Val::v01> v01{};
            constexpr MPL::Value<lch1Val,lch1Val::v10> v10{};
            constexpr MPL::Value<lch1Val,lch1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,lch1Val> lch1{}; 
        ///Link Channel Control
        enum class linkccVal {
            v00=0x00000000,     ///<No channel-to-channel linking
            v01=0x00000001,     ///<Perform a link to channel LCH1 after each cycle-steal transfer followed by a link to LCH2 after the BCR decrements to 0.
            v10=0x00000002,     ///<Perform a link to channel LCH1 after each cycle-steal transfer
            v11=0x00000003,     ///<Perform a link to channel LCH1 after the BCR decrements to 0.
        };
        namespace linkccValC{
            constexpr MPL::Value<linkccVal,linkccVal::v00> v00{};
            constexpr MPL::Value<linkccVal,linkccVal::v01> v01{};
            constexpr MPL::Value<linkccVal,linkccVal::v10> v10{};
            constexpr MPL::Value<linkccVal,linkccVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,linkccVal> linkcc{}; 
        ///Disable Request
        enum class dReqVal {
            v0=0x00000000,     ///<ERQ bit is not affected.
            v1=0x00000001,     ///<ERQ bit is cleared when the BCR is exhausted.
        };
        namespace dReqValC{
            constexpr MPL::Value<dReqVal,dReqVal::v0> v0{};
            constexpr MPL::Value<dReqVal,dReqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dReqVal> dReq{}; 
        ///Destination Address Modulo
        enum class dmodVal {
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
        namespace dmodValC{
            constexpr MPL::Value<dmodVal,dmodVal::v0000> v0000{};
            constexpr MPL::Value<dmodVal,dmodVal::v0001> v0001{};
            constexpr MPL::Value<dmodVal,dmodVal::v0010> v0010{};
            constexpr MPL::Value<dmodVal,dmodVal::v0011> v0011{};
            constexpr MPL::Value<dmodVal,dmodVal::v0100> v0100{};
            constexpr MPL::Value<dmodVal,dmodVal::v0101> v0101{};
            constexpr MPL::Value<dmodVal,dmodVal::v0110> v0110{};
            constexpr MPL::Value<dmodVal,dmodVal::v0111> v0111{};
            constexpr MPL::Value<dmodVal,dmodVal::v1000> v1000{};
            constexpr MPL::Value<dmodVal,dmodVal::v1001> v1001{};
            constexpr MPL::Value<dmodVal,dmodVal::v1010> v1010{};
            constexpr MPL::Value<dmodVal,dmodVal::v1011> v1011{};
            constexpr MPL::Value<dmodVal,dmodVal::v1100> v1100{};
            constexpr MPL::Value<dmodVal,dmodVal::v1101> v1101{};
            constexpr MPL::Value<dmodVal,dmodVal::v1110> v1110{};
            constexpr MPL::Value<dmodVal,dmodVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,dmodVal> dmod{}; 
        ///Source Address Modulo
        enum class smodVal {
            v0000=0x00000000,     ///<Buffer disabled
            v0001=0x00000001,     ///<Circular buffer size is 16 bytes.
            v0010=0x00000002,     ///<Circular buffer size is 32 bytes.
            v0011=0x00000003,     ///<Circular buffer size is 64 bytes.
            v0100=0x00000004,     ///<Circular buffer size is 128 bytes.
            v0101=0x00000005,     ///<Circular buffer size is 256 bytes.
            v0110=0x00000006,     ///<Circular buffer size is 512 bytes.
            v0111=0x00000007,     ///<Circular buffer size is 1 KB.
            v1000=0x00000008,     ///<Circular buffer size is 2 KB.
            v1001=0x00000009,     ///<Circular buffer size is 4 KB.
            v1010=0x0000000a,     ///<Circular buffer size is 8 KB.
            v1011=0x0000000b,     ///<Circular buffer size is 16 KB.
            v1100=0x0000000c,     ///<Circular buffer size is 32 KB.
            v1101=0x0000000d,     ///<Circular buffer size is 64 KB.
            v1110=0x0000000e,     ///<Circular buffer size is 128 KB.
            v1111=0x0000000f,     ///<Circular buffer size is 256 KB.
        };
        namespace smodValC{
            constexpr MPL::Value<smodVal,smodVal::v0000> v0000{};
            constexpr MPL::Value<smodVal,smodVal::v0001> v0001{};
            constexpr MPL::Value<smodVal,smodVal::v0010> v0010{};
            constexpr MPL::Value<smodVal,smodVal::v0011> v0011{};
            constexpr MPL::Value<smodVal,smodVal::v0100> v0100{};
            constexpr MPL::Value<smodVal,smodVal::v0101> v0101{};
            constexpr MPL::Value<smodVal,smodVal::v0110> v0110{};
            constexpr MPL::Value<smodVal,smodVal::v0111> v0111{};
            constexpr MPL::Value<smodVal,smodVal::v1000> v1000{};
            constexpr MPL::Value<smodVal,smodVal::v1001> v1001{};
            constexpr MPL::Value<smodVal,smodVal::v1010> v1010{};
            constexpr MPL::Value<smodVal,smodVal::v1011> v1011{};
            constexpr MPL::Value<smodVal,smodVal::v1100> v1100{};
            constexpr MPL::Value<smodVal,smodVal::v1101> v1101{};
            constexpr MPL::Value<smodVal,smodVal::v1110> v1110{};
            constexpr MPL::Value<smodVal,smodVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,smodVal> smod{}; 
        ///Start Transfer
        enum class startVal {
            v0=0x00000000,     ///<DMA inactive
            v1=0x00000001,     ///<The DMA begins the transfer in accordance to the values in the TCDn. START is cleared automatically after one module clock and always reads as logic 0.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,startVal> start{}; 
        ///Destination Size
        enum class dsizeVal {
            v00=0x00000000,     ///<32-bit
            v01=0x00000001,     ///<8-bit
            v10=0x00000002,     ///<16-bit
            v11=0x00000003,     ///<Reserved (generates a configuration error (DSRn[CE]) if incorrectly specified at time of channel activation)
        };
        namespace dsizeValC{
            constexpr MPL::Value<dsizeVal,dsizeVal::v00> v00{};
            constexpr MPL::Value<dsizeVal,dsizeVal::v01> v01{};
            constexpr MPL::Value<dsizeVal,dsizeVal::v10> v10{};
            constexpr MPL::Value<dsizeVal,dsizeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,dsizeVal> dsize{}; 
        ///Destination Increment
        enum class dincVal {
            v0=0x00000000,     ///<No change to the DAR after a successful transfer.
            v1=0x00000001,     ///<The DAR increments by 1, 2, 4 depending upon the size of the transfer.
        };
        namespace dincValC{
            constexpr MPL::Value<dincVal,dincVal::v0> v0{};
            constexpr MPL::Value<dincVal,dincVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,dincVal> dinc{}; 
        ///Source Size
        enum class ssizeVal {
            v00=0x00000000,     ///<32-bit
            v01=0x00000001,     ///<8-bit
            v10=0x00000002,     ///<16-bit
            v11=0x00000003,     ///<Reserved (generates a configuration error (DSRn[CE]) if incorrectly specified at time of channel activation)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v00> v00{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v01> v01{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v10> v10{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Increment
        enum class sincVal {
            v0=0x00000000,     ///<No change to SAR after a successful transfer.
            v1=0x00000001,     ///<The SAR increments by 1, 2, 4 as determined by the transfer size.
        };
        namespace sincValC{
            constexpr MPL::Value<sincVal,sincVal::v0> v0{};
            constexpr MPL::Value<sincVal,sincVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sincVal> sinc{}; 
        ///Enable asynchronous DMA requests
        enum class eadreqVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace eadreqValC{
            constexpr MPL::Value<eadreqVal,eadreqVal::v0> v0{};
            constexpr MPL::Value<eadreqVal,eadreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,eadreqVal> eadreq{}; 
        ///Auto-align
        enum class aaVal {
            v0=0x00000000,     ///<Auto-align disabled
            v1=0x00000001,     ///<If SSIZE indicates a transfer no smaller than DSIZE, source accesses are auto-aligned; otherwise, destination accesses are auto-aligned. Source alignment takes precedence over destination alignment. If auto-alignment is enabled, the appropriate address register increments, regardless of DINC or SINC.
        };
        namespace aaValC{
            constexpr MPL::Value<aaVal,aaVal::v0> v0{};
            constexpr MPL::Value<aaVal,aaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,aaVal> aa{}; 
        ///Cycle Steal
        enum class csVal {
            v0=0x00000000,     ///<DMA continuously makes read/write transfers until the BCR decrements to 0.
            v1=0x00000001,     ///<Forces a single read/write transfer per request.
        };
        namespace csValC{
            constexpr MPL::Value<csVal,csVal::v0> v0{};
            constexpr MPL::Value<csVal,csVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,csVal> cs{}; 
        ///Enable Peripheral Request
        enum class erqVal {
            v0=0x00000000,     ///<Peripheral request is ignored.
            v1=0x00000001,     ///<Enables peripheral request to initiate transfer. A software-initiated request (setting START) is always enabled.
        };
        namespace erqValC{
            constexpr MPL::Value<erqVal,erqVal::v0> v0{};
            constexpr MPL::Value<erqVal,erqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,erqVal> erq{}; 
        ///Enable Interrupt on Completion of Transfer
        enum class eintVal {
            v0=0x00000000,     ///<No interrupt is generated.
            v1=0x00000001,     ///<Interrupt signal is enabled.
        };
        namespace eintValC{
            constexpr MPL::Value<eintVal,eintVal::v0> v0{};
            constexpr MPL::Value<eintVal,eintVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,eintVal> eint{}; 
    }
    namespace DmaSar3{    ///<Source Address Register
        using Addr = Register::Address<0x40008130,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sar{}; 
    }
    namespace DmaDar3{    ///<Destination Address Register
        using Addr = Register::Address<0x40008134,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dar{}; 
    }
    namespace DmaDsrBcr3{    ///<DMA Status Register / Byte Count Register
        using Addr = Register::Address<0x40008138,0x88000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> bcr{}; 
        ///Transactions Done
        enum class doneVal {
            v0=0x00000000,     ///<DMA transfer is not yet complete. Writing a 0 has no effect.
            v1=0x00000001,     ///<DMA transfer completed. Writing a 1 to this bit clears all DMA status bits and should be used in an interrupt service routine to clear the DMA interrupt and error bits.
        };
        namespace doneValC{
            constexpr MPL::Value<doneVal,doneVal::v0> v0{};
            constexpr MPL::Value<doneVal,doneVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,doneVal> done{}; 
        ///Busy
        enum class bsyVal {
            v0=0x00000000,     ///<DMA channel is inactive. Cleared when the DMA has finished the last transaction.
            v1=0x00000001,     ///<BSY is set the first time the channel is enabled after a transfer is initiated.
        };
        namespace bsyValC{
            constexpr MPL::Value<bsyVal,bsyVal::v0> v0{};
            constexpr MPL::Value<bsyVal,bsyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,bsyVal> bsy{}; 
        ///Request
        enum class reqVal {
            v0=0x00000000,     ///<No request is pending or the channel is currently active. Cleared when the channel is selected.
            v1=0x00000001,     ///<The DMA channel has a transfer remaining and the channel is not selected.
        };
        namespace reqValC{
            constexpr MPL::Value<reqVal,reqVal::v0> v0{};
            constexpr MPL::Value<reqVal,reqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,reqVal> req{}; 
        ///Bus Error on Destination
        enum class bedVal {
            v0=0x00000000,     ///<No bus error occurred.
            v1=0x00000001,     ///<The DMA channel terminated with a bus error during the write portion of a transfer.
        };
        namespace bedValC{
            constexpr MPL::Value<bedVal,bedVal::v0> v0{};
            constexpr MPL::Value<bedVal,bedVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,bedVal> bed{}; 
        ///Bus Error on Source
        enum class besVal {
            v0=0x00000000,     ///<No bus error occurred.
            v1=0x00000001,     ///<The DMA channel terminated with a bus error during the read portion of a transfer.
        };
        namespace besValC{
            constexpr MPL::Value<besVal,besVal::v0> v0{};
            constexpr MPL::Value<besVal,besVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,besVal> bes{}; 
        ///Configuration Error
        enum class ceVal {
            v0=0x00000000,     ///<No configuration error exists.
            v1=0x00000001,     ///<A configuration error has occurred.
        };
        namespace ceValC{
            constexpr MPL::Value<ceVal,ceVal::v0> v0{};
            constexpr MPL::Value<ceVal,ceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ceVal> ce{}; 
    }
    namespace DmaDsr3{    ///<DMA_DSR3 register.
        using Addr = Register::Address<0x4000813b,0xffffffff,0,unsigned char>;
    }
    namespace DmaDcr3{    ///<DMA Control Register
        using Addr = Register::Address<0x4000813c,0x0f000040,0,unsigned>;
        ///Link Channel 2
        enum class lch2Val {
            v00=0x00000000,     ///<DMA Channel 0
            v01=0x00000001,     ///<DMA Channel 1
            v10=0x00000002,     ///<DMA Channel 2
            v11=0x00000003,     ///<DMA Channel 3
        };
        namespace lch2ValC{
            constexpr MPL::Value<lch2Val,lch2Val::v00> v00{};
            constexpr MPL::Value<lch2Val,lch2Val::v01> v01{};
            constexpr MPL::Value<lch2Val,lch2Val::v10> v10{};
            constexpr MPL::Value<lch2Val,lch2Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,lch2Val> lch2{}; 
        ///Link Channel 1
        enum class lch1Val {
            v00=0x00000000,     ///<DMA Channel 0
            v01=0x00000001,     ///<DMA Channel 1
            v10=0x00000002,     ///<DMA Channel 2
            v11=0x00000003,     ///<DMA Channel 3
        };
        namespace lch1ValC{
            constexpr MPL::Value<lch1Val,lch1Val::v00> v00{};
            constexpr MPL::Value<lch1Val,lch1Val::v01> v01{};
            constexpr MPL::Value<lch1Val,lch1Val::v10> v10{};
            constexpr MPL::Value<lch1Val,lch1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,lch1Val> lch1{}; 
        ///Link Channel Control
        enum class linkccVal {
            v00=0x00000000,     ///<No channel-to-channel linking
            v01=0x00000001,     ///<Perform a link to channel LCH1 after each cycle-steal transfer followed by a link to LCH2 after the BCR decrements to 0.
            v10=0x00000002,     ///<Perform a link to channel LCH1 after each cycle-steal transfer
            v11=0x00000003,     ///<Perform a link to channel LCH1 after the BCR decrements to 0.
        };
        namespace linkccValC{
            constexpr MPL::Value<linkccVal,linkccVal::v00> v00{};
            constexpr MPL::Value<linkccVal,linkccVal::v01> v01{};
            constexpr MPL::Value<linkccVal,linkccVal::v10> v10{};
            constexpr MPL::Value<linkccVal,linkccVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,linkccVal> linkcc{}; 
        ///Disable Request
        enum class dReqVal {
            v0=0x00000000,     ///<ERQ bit is not affected.
            v1=0x00000001,     ///<ERQ bit is cleared when the BCR is exhausted.
        };
        namespace dReqValC{
            constexpr MPL::Value<dReqVal,dReqVal::v0> v0{};
            constexpr MPL::Value<dReqVal,dReqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dReqVal> dReq{}; 
        ///Destination Address Modulo
        enum class dmodVal {
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
        namespace dmodValC{
            constexpr MPL::Value<dmodVal,dmodVal::v0000> v0000{};
            constexpr MPL::Value<dmodVal,dmodVal::v0001> v0001{};
            constexpr MPL::Value<dmodVal,dmodVal::v0010> v0010{};
            constexpr MPL::Value<dmodVal,dmodVal::v0011> v0011{};
            constexpr MPL::Value<dmodVal,dmodVal::v0100> v0100{};
            constexpr MPL::Value<dmodVal,dmodVal::v0101> v0101{};
            constexpr MPL::Value<dmodVal,dmodVal::v0110> v0110{};
            constexpr MPL::Value<dmodVal,dmodVal::v0111> v0111{};
            constexpr MPL::Value<dmodVal,dmodVal::v1000> v1000{};
            constexpr MPL::Value<dmodVal,dmodVal::v1001> v1001{};
            constexpr MPL::Value<dmodVal,dmodVal::v1010> v1010{};
            constexpr MPL::Value<dmodVal,dmodVal::v1011> v1011{};
            constexpr MPL::Value<dmodVal,dmodVal::v1100> v1100{};
            constexpr MPL::Value<dmodVal,dmodVal::v1101> v1101{};
            constexpr MPL::Value<dmodVal,dmodVal::v1110> v1110{};
            constexpr MPL::Value<dmodVal,dmodVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,dmodVal> dmod{}; 
        ///Source Address Modulo
        enum class smodVal {
            v0000=0x00000000,     ///<Buffer disabled
            v0001=0x00000001,     ///<Circular buffer size is 16 bytes.
            v0010=0x00000002,     ///<Circular buffer size is 32 bytes.
            v0011=0x00000003,     ///<Circular buffer size is 64 bytes.
            v0100=0x00000004,     ///<Circular buffer size is 128 bytes.
            v0101=0x00000005,     ///<Circular buffer size is 256 bytes.
            v0110=0x00000006,     ///<Circular buffer size is 512 bytes.
            v0111=0x00000007,     ///<Circular buffer size is 1 KB.
            v1000=0x00000008,     ///<Circular buffer size is 2 KB.
            v1001=0x00000009,     ///<Circular buffer size is 4 KB.
            v1010=0x0000000a,     ///<Circular buffer size is 8 KB.
            v1011=0x0000000b,     ///<Circular buffer size is 16 KB.
            v1100=0x0000000c,     ///<Circular buffer size is 32 KB.
            v1101=0x0000000d,     ///<Circular buffer size is 64 KB.
            v1110=0x0000000e,     ///<Circular buffer size is 128 KB.
            v1111=0x0000000f,     ///<Circular buffer size is 256 KB.
        };
        namespace smodValC{
            constexpr MPL::Value<smodVal,smodVal::v0000> v0000{};
            constexpr MPL::Value<smodVal,smodVal::v0001> v0001{};
            constexpr MPL::Value<smodVal,smodVal::v0010> v0010{};
            constexpr MPL::Value<smodVal,smodVal::v0011> v0011{};
            constexpr MPL::Value<smodVal,smodVal::v0100> v0100{};
            constexpr MPL::Value<smodVal,smodVal::v0101> v0101{};
            constexpr MPL::Value<smodVal,smodVal::v0110> v0110{};
            constexpr MPL::Value<smodVal,smodVal::v0111> v0111{};
            constexpr MPL::Value<smodVal,smodVal::v1000> v1000{};
            constexpr MPL::Value<smodVal,smodVal::v1001> v1001{};
            constexpr MPL::Value<smodVal,smodVal::v1010> v1010{};
            constexpr MPL::Value<smodVal,smodVal::v1011> v1011{};
            constexpr MPL::Value<smodVal,smodVal::v1100> v1100{};
            constexpr MPL::Value<smodVal,smodVal::v1101> v1101{};
            constexpr MPL::Value<smodVal,smodVal::v1110> v1110{};
            constexpr MPL::Value<smodVal,smodVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,smodVal> smod{}; 
        ///Start Transfer
        enum class startVal {
            v0=0x00000000,     ///<DMA inactive
            v1=0x00000001,     ///<The DMA begins the transfer in accordance to the values in the TCDn. START is cleared automatically after one module clock and always reads as logic 0.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::v0> v0{};
            constexpr MPL::Value<startVal,startVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,startVal> start{}; 
        ///Destination Size
        enum class dsizeVal {
            v00=0x00000000,     ///<32-bit
            v01=0x00000001,     ///<8-bit
            v10=0x00000002,     ///<16-bit
            v11=0x00000003,     ///<Reserved (generates a configuration error (DSRn[CE]) if incorrectly specified at time of channel activation)
        };
        namespace dsizeValC{
            constexpr MPL::Value<dsizeVal,dsizeVal::v00> v00{};
            constexpr MPL::Value<dsizeVal,dsizeVal::v01> v01{};
            constexpr MPL::Value<dsizeVal,dsizeVal::v10> v10{};
            constexpr MPL::Value<dsizeVal,dsizeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,dsizeVal> dsize{}; 
        ///Destination Increment
        enum class dincVal {
            v0=0x00000000,     ///<No change to the DAR after a successful transfer.
            v1=0x00000001,     ///<The DAR increments by 1, 2, 4 depending upon the size of the transfer.
        };
        namespace dincValC{
            constexpr MPL::Value<dincVal,dincVal::v0> v0{};
            constexpr MPL::Value<dincVal,dincVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,dincVal> dinc{}; 
        ///Source Size
        enum class ssizeVal {
            v00=0x00000000,     ///<32-bit
            v01=0x00000001,     ///<8-bit
            v10=0x00000002,     ///<16-bit
            v11=0x00000003,     ///<Reserved (generates a configuration error (DSRn[CE]) if incorrectly specified at time of channel activation)
        };
        namespace ssizeValC{
            constexpr MPL::Value<ssizeVal,ssizeVal::v00> v00{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v01> v01{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v10> v10{};
            constexpr MPL::Value<ssizeVal,ssizeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,ssizeVal> ssize{}; 
        ///Source Increment
        enum class sincVal {
            v0=0x00000000,     ///<No change to SAR after a successful transfer.
            v1=0x00000001,     ///<The SAR increments by 1, 2, 4 as determined by the transfer size.
        };
        namespace sincValC{
            constexpr MPL::Value<sincVal,sincVal::v0> v0{};
            constexpr MPL::Value<sincVal,sincVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,sincVal> sinc{}; 
        ///Enable asynchronous DMA requests
        enum class eadreqVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace eadreqValC{
            constexpr MPL::Value<eadreqVal,eadreqVal::v0> v0{};
            constexpr MPL::Value<eadreqVal,eadreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,eadreqVal> eadreq{}; 
        ///Auto-align
        enum class aaVal {
            v0=0x00000000,     ///<Auto-align disabled
            v1=0x00000001,     ///<If SSIZE indicates a transfer no smaller than DSIZE, source accesses are auto-aligned; otherwise, destination accesses are auto-aligned. Source alignment takes precedence over destination alignment. If auto-alignment is enabled, the appropriate address register increments, regardless of DINC or SINC.
        };
        namespace aaValC{
            constexpr MPL::Value<aaVal,aaVal::v0> v0{};
            constexpr MPL::Value<aaVal,aaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,aaVal> aa{}; 
        ///Cycle Steal
        enum class csVal {
            v0=0x00000000,     ///<DMA continuously makes read/write transfers until the BCR decrements to 0.
            v1=0x00000001,     ///<Forces a single read/write transfer per request.
        };
        namespace csValC{
            constexpr MPL::Value<csVal,csVal::v0> v0{};
            constexpr MPL::Value<csVal,csVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,csVal> cs{}; 
        ///Enable Peripheral Request
        enum class erqVal {
            v0=0x00000000,     ///<Peripheral request is ignored.
            v1=0x00000001,     ///<Enables peripheral request to initiate transfer. A software-initiated request (setting START) is always enabled.
        };
        namespace erqValC{
            constexpr MPL::Value<erqVal,erqVal::v0> v0{};
            constexpr MPL::Value<erqVal,erqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,erqVal> erq{}; 
        ///Enable Interrupt on Completion of Transfer
        enum class eintVal {
            v0=0x00000000,     ///<No interrupt is generated.
            v1=0x00000001,     ///<Interrupt signal is enabled.
        };
        namespace eintValC{
            constexpr MPL::Value<eintVal,eintVal::v0> v0{};
            constexpr MPL::Value<eintVal,eintVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,eintVal> eint{}; 
    }
}
