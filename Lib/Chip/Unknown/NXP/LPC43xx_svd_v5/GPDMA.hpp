#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx General Purpose DMA (GPDMA) controller Modification date=1/19/2011 Major revision=0 Minor revision=7 
    namespace Noneintstat{    ///<DMA Interrupt Status Register
        using Addr = Register::Address<0x40002000,0xffffff00,0,unsigned>;
        ///Status of DMA channel interrupts after masking. Each bit represents one channel: 0 - the corresponding channel has no active interrupt request. 1 - the corresponding channel does have an active interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intstat0{}; 
        ///Status of DMA channel interrupts after masking. Each bit represents one channel: 0 - the corresponding channel has no active interrupt request. 1 - the corresponding channel does have an active interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> intstat1{}; 
        ///Status of DMA channel interrupts after masking. Each bit represents one channel: 0 - the corresponding channel has no active interrupt request. 1 - the corresponding channel does have an active interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> intstat2{}; 
        ///Status of DMA channel interrupts after masking. Each bit represents one channel: 0 - the corresponding channel has no active interrupt request. 1 - the corresponding channel does have an active interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intstat3{}; 
        ///Status of DMA channel interrupts after masking. Each bit represents one channel: 0 - the corresponding channel has no active interrupt request. 1 - the corresponding channel does have an active interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> intstat4{}; 
        ///Status of DMA channel interrupts after masking. Each bit represents one channel: 0 - the corresponding channel has no active interrupt request. 1 - the corresponding channel does have an active interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intstat5{}; 
        ///Status of DMA channel interrupts after masking. Each bit represents one channel: 0 - the corresponding channel has no active interrupt request. 1 - the corresponding channel does have an active interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> intstat6{}; 
        ///Status of DMA channel interrupts after masking. Each bit represents one channel: 0 - the corresponding channel has no active interrupt request. 1 - the corresponding channel does have an active interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> intstat7{}; 
    }
    namespace Noneinttcstat{    ///<DMA Interrupt Terminal Count Request Status Register
        using Addr = Register::Address<0x40002004,0xffffff00,0,unsigned>;
        ///Terminal count interrupt request status for DMA channels. Each bit represents one channel: 0 - the corresponding channel has no active terminal count interrupt request. 1 - the corresponding channel does have an active terminal count interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inttcstat0{}; 
        ///Terminal count interrupt request status for DMA channels. Each bit represents one channel: 0 - the corresponding channel has no active terminal count interrupt request. 1 - the corresponding channel does have an active terminal count interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inttcstat1{}; 
        ///Terminal count interrupt request status for DMA channels. Each bit represents one channel: 0 - the corresponding channel has no active terminal count interrupt request. 1 - the corresponding channel does have an active terminal count interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> inttcstat2{}; 
        ///Terminal count interrupt request status for DMA channels. Each bit represents one channel: 0 - the corresponding channel has no active terminal count interrupt request. 1 - the corresponding channel does have an active terminal count interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> inttcstat3{}; 
        ///Terminal count interrupt request status for DMA channels. Each bit represents one channel: 0 - the corresponding channel has no active terminal count interrupt request. 1 - the corresponding channel does have an active terminal count interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> inttcstat4{}; 
        ///Terminal count interrupt request status for DMA channels. Each bit represents one channel: 0 - the corresponding channel has no active terminal count interrupt request. 1 - the corresponding channel does have an active terminal count interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inttcstat5{}; 
        ///Terminal count interrupt request status for DMA channels. Each bit represents one channel: 0 - the corresponding channel has no active terminal count interrupt request. 1 - the corresponding channel does have an active terminal count interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inttcstat6{}; 
        ///Terminal count interrupt request status for DMA channels. Each bit represents one channel: 0 - the corresponding channel has no active terminal count interrupt request. 1 - the corresponding channel does have an active terminal count interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> inttcstat7{}; 
    }
    namespace Noneinttcclear{    ///<DMA Interrupt Terminal Count Request Clear Register
        using Addr = Register::Address<0x40002008,0xffffff00,0,unsigned>;
        ///Allows clearing the Terminal count interrupt request (IntTCStat) for DMA channels. Each bit represents one channel: 0 - writing 0 has no effect. 1 - clears the corresponding channel terminal count interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inttcclear0{}; 
        ///Allows clearing the Terminal count interrupt request (IntTCStat) for DMA channels. Each bit represents one channel: 0 - writing 0 has no effect. 1 - clears the corresponding channel terminal count interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inttcclear1{}; 
        ///Allows clearing the Terminal count interrupt request (IntTCStat) for DMA channels. Each bit represents one channel: 0 - writing 0 has no effect. 1 - clears the corresponding channel terminal count interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> inttcclear2{}; 
        ///Allows clearing the Terminal count interrupt request (IntTCStat) for DMA channels. Each bit represents one channel: 0 - writing 0 has no effect. 1 - clears the corresponding channel terminal count interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> inttcclear3{}; 
        ///Allows clearing the Terminal count interrupt request (IntTCStat) for DMA channels. Each bit represents one channel: 0 - writing 0 has no effect. 1 - clears the corresponding channel terminal count interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> inttcclear4{}; 
        ///Allows clearing the Terminal count interrupt request (IntTCStat) for DMA channels. Each bit represents one channel: 0 - writing 0 has no effect. 1 - clears the corresponding channel terminal count interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inttcclear5{}; 
        ///Allows clearing the Terminal count interrupt request (IntTCStat) for DMA channels. Each bit represents one channel: 0 - writing 0 has no effect. 1 - clears the corresponding channel terminal count interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inttcclear6{}; 
        ///Allows clearing the Terminal count interrupt request (IntTCStat) for DMA channels. Each bit represents one channel: 0 - writing 0 has no effect. 1 - clears the corresponding channel terminal count interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> inttcclear7{}; 
    }
    namespace Noneinterrstat{    ///<DMA Interrupt Error Status Register
        using Addr = Register::Address<0x4000200c,0xffffff00,0,unsigned>;
        ///Interrupt error status for DMA channels. Each bit represents one channel: 0 - the corresponding channel has no active error interrupt request. 1 - the corresponding channel does have an active error interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> interrstat0{}; 
        ///Interrupt error status for DMA channels. Each bit represents one channel: 0 - the corresponding channel has no active error interrupt request. 1 - the corresponding channel does have an active error interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> interrstat1{}; 
        ///Interrupt error status for DMA channels. Each bit represents one channel: 0 - the corresponding channel has no active error interrupt request. 1 - the corresponding channel does have an active error interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> interrstat2{}; 
        ///Interrupt error status for DMA channels. Each bit represents one channel: 0 - the corresponding channel has no active error interrupt request. 1 - the corresponding channel does have an active error interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> interrstat3{}; 
        ///Interrupt error status for DMA channels. Each bit represents one channel: 0 - the corresponding channel has no active error interrupt request. 1 - the corresponding channel does have an active error interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> interrstat4{}; 
        ///Interrupt error status for DMA channels. Each bit represents one channel: 0 - the corresponding channel has no active error interrupt request. 1 - the corresponding channel does have an active error interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> interrstat5{}; 
        ///Interrupt error status for DMA channels. Each bit represents one channel: 0 - the corresponding channel has no active error interrupt request. 1 - the corresponding channel does have an active error interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> interrstat6{}; 
        ///Interrupt error status for DMA channels. Each bit represents one channel: 0 - the corresponding channel has no active error interrupt request. 1 - the corresponding channel does have an active error interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> interrstat7{}; 
    }
    namespace Noneinterrclr{    ///<DMA Interrupt Error Clear Register
        using Addr = Register::Address<0x40002010,0xffffff00,0,unsigned>;
        ///Writing a 1 clears the error interrupt request (IntErrStat) for DMA channels. Each bit represents one channel: 0 - writing 0 has no effect. 1 - clears the corresponding channel error interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> interrclr0{}; 
        ///Writing a 1 clears the error interrupt request (IntErrStat) for DMA channels. Each bit represents one channel: 0 - writing 0 has no effect. 1 - clears the corresponding channel error interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> interrclr1{}; 
        ///Writing a 1 clears the error interrupt request (IntErrStat) for DMA channels. Each bit represents one channel: 0 - writing 0 has no effect. 1 - clears the corresponding channel error interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> interrclr2{}; 
        ///Writing a 1 clears the error interrupt request (IntErrStat) for DMA channels. Each bit represents one channel: 0 - writing 0 has no effect. 1 - clears the corresponding channel error interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> interrclr3{}; 
        ///Writing a 1 clears the error interrupt request (IntErrStat) for DMA channels. Each bit represents one channel: 0 - writing 0 has no effect. 1 - clears the corresponding channel error interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> interrclr4{}; 
        ///Writing a 1 clears the error interrupt request (IntErrStat) for DMA channels. Each bit represents one channel: 0 - writing 0 has no effect. 1 - clears the corresponding channel error interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> interrclr5{}; 
        ///Writing a 1 clears the error interrupt request (IntErrStat) for DMA channels. Each bit represents one channel: 0 - writing 0 has no effect. 1 - clears the corresponding channel error interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> interrclr6{}; 
        ///Writing a 1 clears the error interrupt request (IntErrStat) for DMA channels. Each bit represents one channel: 0 - writing 0 has no effect. 1 - clears the corresponding channel error interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> interrclr7{}; 
    }
    namespace Nonerawinttcstat{    ///<DMA Raw Interrupt Terminal Count Status Register
        using Addr = Register::Address<0x40002014,0xffffff00,0,unsigned>;
        ///Status of the terminal count interrupt for DMA channels prior to masking. Each bit represents one channel: 0 - the corresponding channel has no active terminal count interrupt request. 1 - the corresponding channel does have an active terminal count interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rawinttcstat0{}; 
        ///Status of the terminal count interrupt for DMA channels prior to masking. Each bit represents one channel: 0 - the corresponding channel has no active terminal count interrupt request. 1 - the corresponding channel does have an active terminal count interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rawinttcstat1{}; 
        ///Status of the terminal count interrupt for DMA channels prior to masking. Each bit represents one channel: 0 - the corresponding channel has no active terminal count interrupt request. 1 - the corresponding channel does have an active terminal count interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rawinttcstat2{}; 
        ///Status of the terminal count interrupt for DMA channels prior to masking. Each bit represents one channel: 0 - the corresponding channel has no active terminal count interrupt request. 1 - the corresponding channel does have an active terminal count interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rawinttcstat3{}; 
        ///Status of the terminal count interrupt for DMA channels prior to masking. Each bit represents one channel: 0 - the corresponding channel has no active terminal count interrupt request. 1 - the corresponding channel does have an active terminal count interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rawinttcstat4{}; 
        ///Status of the terminal count interrupt for DMA channels prior to masking. Each bit represents one channel: 0 - the corresponding channel has no active terminal count interrupt request. 1 - the corresponding channel does have an active terminal count interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rawinttcstat5{}; 
        ///Status of the terminal count interrupt for DMA channels prior to masking. Each bit represents one channel: 0 - the corresponding channel has no active terminal count interrupt request. 1 - the corresponding channel does have an active terminal count interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rawinttcstat6{}; 
        ///Status of the terminal count interrupt for DMA channels prior to masking. Each bit represents one channel: 0 - the corresponding channel has no active terminal count interrupt request. 1 - the corresponding channel does have an active terminal count interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rawinttcstat7{}; 
    }
    namespace Nonerawinterrstat{    ///<DMA Raw Error Interrupt Status Register
        using Addr = Register::Address<0x40002018,0xffffff00,0,unsigned>;
        ///Status of the error interrupt for DMA channels prior to masking. Each bit represents one channel: 0 - the corresponding channel has no active error interrupt request. 1 - the corresponding channel does have an active error interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rawinterrstat0{}; 
        ///Status of the error interrupt for DMA channels prior to masking. Each bit represents one channel: 0 - the corresponding channel has no active error interrupt request. 1 - the corresponding channel does have an active error interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rawinterrstat1{}; 
        ///Status of the error interrupt for DMA channels prior to masking. Each bit represents one channel: 0 - the corresponding channel has no active error interrupt request. 1 - the corresponding channel does have an active error interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rawinterrstat2{}; 
        ///Status of the error interrupt for DMA channels prior to masking. Each bit represents one channel: 0 - the corresponding channel has no active error interrupt request. 1 - the corresponding channel does have an active error interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rawinterrstat3{}; 
        ///Status of the error interrupt for DMA channels prior to masking. Each bit represents one channel: 0 - the corresponding channel has no active error interrupt request. 1 - the corresponding channel does have an active error interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rawinterrstat4{}; 
        ///Status of the error interrupt for DMA channels prior to masking. Each bit represents one channel: 0 - the corresponding channel has no active error interrupt request. 1 - the corresponding channel does have an active error interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rawinterrstat5{}; 
        ///Status of the error interrupt for DMA channels prior to masking. Each bit represents one channel: 0 - the corresponding channel has no active error interrupt request. 1 - the corresponding channel does have an active error interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rawinterrstat6{}; 
        ///Status of the error interrupt for DMA channels prior to masking. Each bit represents one channel: 0 - the corresponding channel has no active error interrupt request. 1 - the corresponding channel does have an active error interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rawinterrstat7{}; 
    }
    namespace Noneenbldchns{    ///<DMA Enabled Channel Register
        using Addr = Register::Address<0x4000201c,0xffffff00,0,unsigned>;
        ///Enable status for DMA channels. Each bit represents one channel: 0 - DMA channel is disabled. 1 - DMA channel is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enabledchannels0{}; 
        ///Enable status for DMA channels. Each bit represents one channel: 0 - DMA channel is disabled. 1 - DMA channel is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enabledchannels1{}; 
        ///Enable status for DMA channels. Each bit represents one channel: 0 - DMA channel is disabled. 1 - DMA channel is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enabledchannels2{}; 
        ///Enable status for DMA channels. Each bit represents one channel: 0 - DMA channel is disabled. 1 - DMA channel is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> enabledchannels3{}; 
        ///Enable status for DMA channels. Each bit represents one channel: 0 - DMA channel is disabled. 1 - DMA channel is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> enabledchannels4{}; 
        ///Enable status for DMA channels. Each bit represents one channel: 0 - DMA channel is disabled. 1 - DMA channel is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enabledchannels5{}; 
        ///Enable status for DMA channels. Each bit represents one channel: 0 - DMA channel is disabled. 1 - DMA channel is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> enabledchannels6{}; 
        ///Enable status for DMA channels. Each bit represents one channel: 0 - DMA channel is disabled. 1 - DMA channel is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> enabledchannels7{}; 
    }
    namespace Nonesoftbreq{    ///<DMA Software Burst Request Register
        using Addr = Register::Address<0x40002020,0xffff0000,0,unsigned>;
        ///Software burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function (refer to Table 136 for peripheral hardware connections to the DMA controller): 0 - writing 0 has no effect. 1 - writing 1 generates a DMA burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> softbreq0{}; 
        ///Software burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function (refer to Table 136 for peripheral hardware connections to the DMA controller): 0 - writing 0 has no effect. 1 - writing 1 generates a DMA burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> softbreq1{}; 
        ///Software burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function (refer to Table 136 for peripheral hardware connections to the DMA controller): 0 - writing 0 has no effect. 1 - writing 1 generates a DMA burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softbreq2{}; 
        ///Software burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function (refer to Table 136 for peripheral hardware connections to the DMA controller): 0 - writing 0 has no effect. 1 - writing 1 generates a DMA burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> softbreq3{}; 
        ///Software burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function (refer to Table 136 for peripheral hardware connections to the DMA controller): 0 - writing 0 has no effect. 1 - writing 1 generates a DMA burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> softbreq4{}; 
        ///Software burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function (refer to Table 136 for peripheral hardware connections to the DMA controller): 0 - writing 0 has no effect. 1 - writing 1 generates a DMA burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> softbreq5{}; 
        ///Software burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function (refer to Table 136 for peripheral hardware connections to the DMA controller): 0 - writing 0 has no effect. 1 - writing 1 generates a DMA burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> softbreq6{}; 
        ///Software burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function (refer to Table 136 for peripheral hardware connections to the DMA controller): 0 - writing 0 has no effect. 1 - writing 1 generates a DMA burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> softbreq7{}; 
        ///Software burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function (refer to Table 136 for peripheral hardware connections to the DMA controller): 0 - writing 0 has no effect. 1 - writing 1 generates a DMA burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> softbreq8{}; 
        ///Software burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function (refer to Table 136 for peripheral hardware connections to the DMA controller): 0 - writing 0 has no effect. 1 - writing 1 generates a DMA burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> softbreq9{}; 
        ///Software burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function (refer to Table 136 for peripheral hardware connections to the DMA controller): 0 - writing 0 has no effect. 1 - writing 1 generates a DMA burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> softbreq10{}; 
        ///Software burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function (refer to Table 136 for peripheral hardware connections to the DMA controller): 0 - writing 0 has no effect. 1 - writing 1 generates a DMA burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> softbreq11{}; 
        ///Software burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function (refer to Table 136 for peripheral hardware connections to the DMA controller): 0 - writing 0 has no effect. 1 - writing 1 generates a DMA burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> softbreq12{}; 
        ///Software burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function (refer to Table 136 for peripheral hardware connections to the DMA controller): 0 - writing 0 has no effect. 1 - writing 1 generates a DMA burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> softbreq13{}; 
        ///Software burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function (refer to Table 136 for peripheral hardware connections to the DMA controller): 0 - writing 0 has no effect. 1 - writing 1 generates a DMA burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> softbreq14{}; 
        ///Software burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function (refer to Table 136 for peripheral hardware connections to the DMA controller): 0 - writing 0 has no effect. 1 - writing 1 generates a DMA burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> softbreq15{}; 
    }
    namespace Nonesoftsreq{    ///<DMA Software Single Request Register
        using Addr = Register::Address<0x40002024,0xffff0000,0,unsigned>;
        ///Software single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> softsreq0{}; 
        ///Software single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> softsreq1{}; 
        ///Software single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softsreq2{}; 
        ///Software single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> softsreq3{}; 
        ///Software single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> softsreq4{}; 
        ///Software single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> softsreq5{}; 
        ///Software single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> softsreq6{}; 
        ///Software single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> softsreq7{}; 
        ///Software single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> softsreq8{}; 
        ///Software single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> softsreq9{}; 
        ///Software single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> softsreq10{}; 
        ///Software single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> softsreq11{}; 
        ///Software single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> softsreq12{}; 
        ///Software single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> softsreq13{}; 
        ///Software single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> softsreq14{}; 
        ///Software single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> softsreq15{}; 
    }
    namespace Nonesoftlbreq{    ///<DMA Software Last Burst Request Register
        using Addr = Register::Address<0x40002028,0xffff0000,0,unsigned>;
        ///Software last burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> softlbreq0{}; 
        ///Software last burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> softlbreq1{}; 
        ///Software last burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softlbreq2{}; 
        ///Software last burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> softlbreq3{}; 
        ///Software last burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> softlbreq4{}; 
        ///Software last burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> softlbreq5{}; 
        ///Software last burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> softlbreq6{}; 
        ///Software last burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> softlbreq7{}; 
        ///Software last burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> softlbreq8{}; 
        ///Software last burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> softlbreq9{}; 
        ///Software last burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> softlbreq10{}; 
        ///Software last burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> softlbreq11{}; 
        ///Software last burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> softlbreq12{}; 
        ///Software last burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> softlbreq13{}; 
        ///Software last burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> softlbreq14{}; 
        ///Software last burst request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last burst request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> softlbreq15{}; 
    }
    namespace Nonesoftlsreq{    ///<DMA Software Last Single Request Register
        using Addr = Register::Address<0x4000202c,0xffff0000,0,unsigned>;
        ///Software last single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> softlsreq0{}; 
        ///Software last single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> softlsreq1{}; 
        ///Software last single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softlsreq2{}; 
        ///Software last single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> softlsreq3{}; 
        ///Software last single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> softlsreq4{}; 
        ///Software last single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> softlsreq5{}; 
        ///Software last single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> softlsreq6{}; 
        ///Software last single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> softlsreq7{}; 
        ///Software last single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> softlsreq8{}; 
        ///Software last single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> softlsreq9{}; 
        ///Software last single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> softlsreq10{}; 
        ///Software last single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> softlsreq11{}; 
        ///Software last single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> softlsreq12{}; 
        ///Software last single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> softlsreq13{}; 
        ///Software last single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> softlsreq14{}; 
        ///Software last single transfer request flags for each of 16 possible sources. Each bit represents one DMA request line or peripheral function: 0 - writing 0 has no effect. 1 - writing 1 generates a DMA last single transfer request for the corresponding request line.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> softlsreq15{}; 
    }
    namespace Noneconfig{    ///<DMA Configuration Register
        using Addr = Register::Address<0x40002030,0xfffffff8,0,unsigned>;
        ///DMA Controller enable:
        enum class eVal {
            disabledDefault=0x00000000,     ///<Disabled (default). Disabling the DMA Controller reduces power consumption.
            enabled=0x00000001,     ///<Enabled
        };
        namespace eValC{
            constexpr MPL::Value<eVal,eVal::disabledDefault> disabledDefault{};
            constexpr MPL::Value<eVal,eVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,eVal> e{}; 
        ///AHB Master 0 endianness configuration:
        enum class m0Val {
            littleEndianMode=0x00000000,     ///<Little-endian mode (default).
            bigEndianMode=0x00000001,     ///<Big-endian mode.
        };
        namespace m0ValC{
            constexpr MPL::Value<m0Val,m0Val::littleEndianMode> littleEndianMode{};
            constexpr MPL::Value<m0Val,m0Val::bigEndianMode> bigEndianMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,m0Val> m0{}; 
        ///AHB Master 1 endianness configuration:
        enum class m1Val {
            littleEndianMode=0x00000000,     ///<Little-endian mode (default).
            bigEndianMode=0x00000001,     ///<Big-endian mode.
        };
        namespace m1ValC{
            constexpr MPL::Value<m1Val,m1Val::littleEndianMode> littleEndianMode{};
            constexpr MPL::Value<m1Val,m1Val::bigEndianMode> bigEndianMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,m1Val> m1{}; 
    }
    namespace Nonesync{    ///<DMA Synchronization Register
        using Addr = Register::Address<0x40002034,0xffff0000,0,unsigned>;
        ///Controls the synchronization logic for DMA request signals. Each bit represents one set of DMA request lines as described in the preceding text: 0 - synchronization logic for the corresponding DMA request signals are disabled. 1 - synchronization logic for the corresponding request line signals are enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacsync0{}; 
        ///Controls the synchronization logic for DMA request signals. Each bit represents one set of DMA request lines as described in the preceding text: 0 - synchronization logic for the corresponding DMA request signals are disabled. 1 - synchronization logic for the corresponding request line signals are enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmacsync1{}; 
        ///Controls the synchronization logic for DMA request signals. Each bit represents one set of DMA request lines as described in the preceding text: 0 - synchronization logic for the corresponding DMA request signals are disabled. 1 - synchronization logic for the corresponding request line signals are enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmacsync2{}; 
        ///Controls the synchronization logic for DMA request signals. Each bit represents one set of DMA request lines as described in the preceding text: 0 - synchronization logic for the corresponding DMA request signals are disabled. 1 - synchronization logic for the corresponding request line signals are enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmacsync3{}; 
        ///Controls the synchronization logic for DMA request signals. Each bit represents one set of DMA request lines as described in the preceding text: 0 - synchronization logic for the corresponding DMA request signals are disabled. 1 - synchronization logic for the corresponding request line signals are enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dmacsync4{}; 
        ///Controls the synchronization logic for DMA request signals. Each bit represents one set of DMA request lines as described in the preceding text: 0 - synchronization logic for the corresponding DMA request signals are disabled. 1 - synchronization logic for the corresponding request line signals are enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dmacsync5{}; 
        ///Controls the synchronization logic for DMA request signals. Each bit represents one set of DMA request lines as described in the preceding text: 0 - synchronization logic for the corresponding DMA request signals are disabled. 1 - synchronization logic for the corresponding request line signals are enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dmacsync6{}; 
        ///Controls the synchronization logic for DMA request signals. Each bit represents one set of DMA request lines as described in the preceding text: 0 - synchronization logic for the corresponding DMA request signals are disabled. 1 - synchronization logic for the corresponding request line signals are enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmacsync7{}; 
        ///Controls the synchronization logic for DMA request signals. Each bit represents one set of DMA request lines as described in the preceding text: 0 - synchronization logic for the corresponding DMA request signals are disabled. 1 - synchronization logic for the corresponding request line signals are enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dmacsync8{}; 
        ///Controls the synchronization logic for DMA request signals. Each bit represents one set of DMA request lines as described in the preceding text: 0 - synchronization logic for the corresponding DMA request signals are disabled. 1 - synchronization logic for the corresponding request line signals are enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dmacsync9{}; 
        ///Controls the synchronization logic for DMA request signals. Each bit represents one set of DMA request lines as described in the preceding text: 0 - synchronization logic for the corresponding DMA request signals are disabled. 1 - synchronization logic for the corresponding request line signals are enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dmacsync10{}; 
        ///Controls the synchronization logic for DMA request signals. Each bit represents one set of DMA request lines as described in the preceding text: 0 - synchronization logic for the corresponding DMA request signals are disabled. 1 - synchronization logic for the corresponding request line signals are enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmacsync11{}; 
        ///Controls the synchronization logic for DMA request signals. Each bit represents one set of DMA request lines as described in the preceding text: 0 - synchronization logic for the corresponding DMA request signals are disabled. 1 - synchronization logic for the corresponding request line signals are enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dmacsync12{}; 
        ///Controls the synchronization logic for DMA request signals. Each bit represents one set of DMA request lines as described in the preceding text: 0 - synchronization logic for the corresponding DMA request signals are disabled. 1 - synchronization logic for the corresponding request line signals are enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmacsync13{}; 
        ///Controls the synchronization logic for DMA request signals. Each bit represents one set of DMA request lines as described in the preceding text: 0 - synchronization logic for the corresponding DMA request signals are disabled. 1 - synchronization logic for the corresponding request line signals are enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dmacsync14{}; 
        ///Controls the synchronization logic for DMA request signals. Each bit represents one set of DMA request lines as described in the preceding text: 0 - synchronization logic for the corresponding DMA request signals are disabled. 1 - synchronization logic for the corresponding request line signals are enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dmacsync15{}; 
    }
    namespace Nonec0srcaddr{    ///<DMA Channel  Source Address Register
        using Addr = Register::Address<0x40002100,0x00000000,0,unsigned>;
        ///DMA source address. Reading this register will return the current source address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srcaddr{}; 
    }
    namespace Nonec1srcaddr{    ///<DMA Channel  Source Address Register
        using Addr = Register::Address<0x40002120,0x00000000,0,unsigned>;
        ///DMA source address. Reading this register will return the current source address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srcaddr{}; 
    }
    namespace Nonec2srcaddr{    ///<DMA Channel  Source Address Register
        using Addr = Register::Address<0x40002140,0x00000000,0,unsigned>;
        ///DMA source address. Reading this register will return the current source address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srcaddr{}; 
    }
    namespace Nonec3srcaddr{    ///<DMA Channel  Source Address Register
        using Addr = Register::Address<0x40002160,0x00000000,0,unsigned>;
        ///DMA source address. Reading this register will return the current source address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srcaddr{}; 
    }
    namespace Nonec4srcaddr{    ///<DMA Channel  Source Address Register
        using Addr = Register::Address<0x40002180,0x00000000,0,unsigned>;
        ///DMA source address. Reading this register will return the current source address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srcaddr{}; 
    }
    namespace Nonec5srcaddr{    ///<DMA Channel  Source Address Register
        using Addr = Register::Address<0x400021a0,0x00000000,0,unsigned>;
        ///DMA source address. Reading this register will return the current source address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srcaddr{}; 
    }
    namespace Nonec6srcaddr{    ///<DMA Channel  Source Address Register
        using Addr = Register::Address<0x400021c0,0x00000000,0,unsigned>;
        ///DMA source address. Reading this register will return the current source address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srcaddr{}; 
    }
    namespace Nonec7srcaddr{    ///<DMA Channel  Source Address Register
        using Addr = Register::Address<0x400021e0,0x00000000,0,unsigned>;
        ///DMA source address. Reading this register will return the current source address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srcaddr{}; 
    }
    namespace Nonec0destaddr{    ///<DMA Channel  Destination Address Register
        using Addr = Register::Address<0x40002104,0x00000000,0,unsigned>;
        ///DMA Destination address. Reading this register will return the current destination address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> destaddr{}; 
    }
    namespace Nonec1destaddr{    ///<DMA Channel  Destination Address Register
        using Addr = Register::Address<0x40002124,0x00000000,0,unsigned>;
        ///DMA Destination address. Reading this register will return the current destination address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> destaddr{}; 
    }
    namespace Nonec2destaddr{    ///<DMA Channel  Destination Address Register
        using Addr = Register::Address<0x40002144,0x00000000,0,unsigned>;
        ///DMA Destination address. Reading this register will return the current destination address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> destaddr{}; 
    }
    namespace Nonec3destaddr{    ///<DMA Channel  Destination Address Register
        using Addr = Register::Address<0x40002164,0x00000000,0,unsigned>;
        ///DMA Destination address. Reading this register will return the current destination address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> destaddr{}; 
    }
    namespace Nonec4destaddr{    ///<DMA Channel  Destination Address Register
        using Addr = Register::Address<0x40002184,0x00000000,0,unsigned>;
        ///DMA Destination address. Reading this register will return the current destination address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> destaddr{}; 
    }
    namespace Nonec5destaddr{    ///<DMA Channel  Destination Address Register
        using Addr = Register::Address<0x400021a4,0x00000000,0,unsigned>;
        ///DMA Destination address. Reading this register will return the current destination address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> destaddr{}; 
    }
    namespace Nonec6destaddr{    ///<DMA Channel  Destination Address Register
        using Addr = Register::Address<0x400021c4,0x00000000,0,unsigned>;
        ///DMA Destination address. Reading this register will return the current destination address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> destaddr{}; 
    }
    namespace Nonec7destaddr{    ///<DMA Channel  Destination Address Register
        using Addr = Register::Address<0x400021e4,0x00000000,0,unsigned>;
        ///DMA Destination address. Reading this register will return the current destination address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> destaddr{}; 
    }
    namespace Nonec0lli{    ///<DMA Channel Linked List Item Register
        using Addr = Register::Address<0x40002108,0x00000000,0,unsigned>;
        ///AHB master select for loading the next LLI:
        enum class lmVal {
            ahbMaster0=0x00000000,     ///<AHB Master 0.
            ahbMaster1=0x00000001,     ///<AHB Master 1.
        };
        namespace lmValC{
            constexpr MPL::Value<lmVal,lmVal::ahbMaster0> ahbMaster0{};
            constexpr MPL::Value<lmVal,lmVal::ahbMaster1> ahbMaster1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lmVal> lm{}; 
        ///Reserved, and must be written as 0, masked on read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> r{}; 
        ///Linked list item. Bits [31:2] of the address for the next LLI. Address bits [1:0] are 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> lli{}; 
    }
    namespace Nonec1lli{    ///<DMA Channel Linked List Item Register
        using Addr = Register::Address<0x40002128,0x00000000,0,unsigned>;
        ///AHB master select for loading the next LLI:
        enum class lmVal {
            ahbMaster0=0x00000000,     ///<AHB Master 0.
            ahbMaster1=0x00000001,     ///<AHB Master 1.
        };
        namespace lmValC{
            constexpr MPL::Value<lmVal,lmVal::ahbMaster0> ahbMaster0{};
            constexpr MPL::Value<lmVal,lmVal::ahbMaster1> ahbMaster1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lmVal> lm{}; 
        ///Reserved, and must be written as 0, masked on read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> r{}; 
        ///Linked list item. Bits [31:2] of the address for the next LLI. Address bits [1:0] are 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> lli{}; 
    }
    namespace Nonec2lli{    ///<DMA Channel Linked List Item Register
        using Addr = Register::Address<0x40002148,0x00000000,0,unsigned>;
        ///AHB master select for loading the next LLI:
        enum class lmVal {
            ahbMaster0=0x00000000,     ///<AHB Master 0.
            ahbMaster1=0x00000001,     ///<AHB Master 1.
        };
        namespace lmValC{
            constexpr MPL::Value<lmVal,lmVal::ahbMaster0> ahbMaster0{};
            constexpr MPL::Value<lmVal,lmVal::ahbMaster1> ahbMaster1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lmVal> lm{}; 
        ///Reserved, and must be written as 0, masked on read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> r{}; 
        ///Linked list item. Bits [31:2] of the address for the next LLI. Address bits [1:0] are 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> lli{}; 
    }
    namespace Nonec3lli{    ///<DMA Channel Linked List Item Register
        using Addr = Register::Address<0x40002168,0x00000000,0,unsigned>;
        ///AHB master select for loading the next LLI:
        enum class lmVal {
            ahbMaster0=0x00000000,     ///<AHB Master 0.
            ahbMaster1=0x00000001,     ///<AHB Master 1.
        };
        namespace lmValC{
            constexpr MPL::Value<lmVal,lmVal::ahbMaster0> ahbMaster0{};
            constexpr MPL::Value<lmVal,lmVal::ahbMaster1> ahbMaster1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lmVal> lm{}; 
        ///Reserved, and must be written as 0, masked on read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> r{}; 
        ///Linked list item. Bits [31:2] of the address for the next LLI. Address bits [1:0] are 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> lli{}; 
    }
    namespace Nonec4lli{    ///<DMA Channel Linked List Item Register
        using Addr = Register::Address<0x40002188,0x00000000,0,unsigned>;
        ///AHB master select for loading the next LLI:
        enum class lmVal {
            ahbMaster0=0x00000000,     ///<AHB Master 0.
            ahbMaster1=0x00000001,     ///<AHB Master 1.
        };
        namespace lmValC{
            constexpr MPL::Value<lmVal,lmVal::ahbMaster0> ahbMaster0{};
            constexpr MPL::Value<lmVal,lmVal::ahbMaster1> ahbMaster1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lmVal> lm{}; 
        ///Reserved, and must be written as 0, masked on read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> r{}; 
        ///Linked list item. Bits [31:2] of the address for the next LLI. Address bits [1:0] are 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> lli{}; 
    }
    namespace Nonec5lli{    ///<DMA Channel Linked List Item Register
        using Addr = Register::Address<0x400021a8,0x00000000,0,unsigned>;
        ///AHB master select for loading the next LLI:
        enum class lmVal {
            ahbMaster0=0x00000000,     ///<AHB Master 0.
            ahbMaster1=0x00000001,     ///<AHB Master 1.
        };
        namespace lmValC{
            constexpr MPL::Value<lmVal,lmVal::ahbMaster0> ahbMaster0{};
            constexpr MPL::Value<lmVal,lmVal::ahbMaster1> ahbMaster1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lmVal> lm{}; 
        ///Reserved, and must be written as 0, masked on read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> r{}; 
        ///Linked list item. Bits [31:2] of the address for the next LLI. Address bits [1:0] are 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> lli{}; 
    }
    namespace Nonec6lli{    ///<DMA Channel Linked List Item Register
        using Addr = Register::Address<0x400021c8,0x00000000,0,unsigned>;
        ///AHB master select for loading the next LLI:
        enum class lmVal {
            ahbMaster0=0x00000000,     ///<AHB Master 0.
            ahbMaster1=0x00000001,     ///<AHB Master 1.
        };
        namespace lmValC{
            constexpr MPL::Value<lmVal,lmVal::ahbMaster0> ahbMaster0{};
            constexpr MPL::Value<lmVal,lmVal::ahbMaster1> ahbMaster1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lmVal> lm{}; 
        ///Reserved, and must be written as 0, masked on read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> r{}; 
        ///Linked list item. Bits [31:2] of the address for the next LLI. Address bits [1:0] are 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> lli{}; 
    }
    namespace Nonec7lli{    ///<DMA Channel Linked List Item Register
        using Addr = Register::Address<0x400021e8,0x00000000,0,unsigned>;
        ///AHB master select for loading the next LLI:
        enum class lmVal {
            ahbMaster0=0x00000000,     ///<AHB Master 0.
            ahbMaster1=0x00000001,     ///<AHB Master 1.
        };
        namespace lmValC{
            constexpr MPL::Value<lmVal,lmVal::ahbMaster0> ahbMaster0{};
            constexpr MPL::Value<lmVal,lmVal::ahbMaster1> ahbMaster1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lmVal> lm{}; 
        ///Reserved, and must be written as 0, masked on read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> r{}; 
        ///Linked list item. Bits [31:2] of the address for the next LLI. Address bits [1:0] are 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> lli{}; 
    }
    namespace Nonec0control{    ///<DMA Channel  Control Register
        using Addr = Register::Address<0x4000210c,0x00000000,0,unsigned>;
        ///Transfer size in byte. A write to this field sets the size of the transfer when the DMA Controller is the flow controller. The transfer size value must be set before the channel is enabled. Transfer size is updated as data transfers are completed. A read from this field indicates the number of transfers completed on the destination bus. Reading the register when the channel is active does not give useful information because by the time that the software has processed the value read, the channel might have progressed. It is intended to be used only when a channel is enabled and then disabled. The transfer size value is not used if the DMA Controller is not the flow controller.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> transfersize{}; 
        ///Source burst size. Indicates the number of transfers that make up a source burst. This value must be set to the burst size of the source peripheral, or if the source is memory, to the memory boundary size (see Figure 3). The burst size is the amount of data that is transferred when the BREQ signal goes active in the source peripheral.
        enum class sbsizeVal {
            sourceBurst1=0x00000000,     ///<Source burst size = 1
            sourceBurst4=0x00000001,     ///<Source burst size = 4
            sourceBurst8=0x00000002,     ///<Source burst size = 8
            sourceBurst16=0x00000003,     ///<Source burst size = 16
            sourceBurst32=0x00000004,     ///<Source burst size = 32
            sourceBurst64=0x00000005,     ///<Source burst size = 64
            sourceBurst128=0x00000006,     ///<Source burst size = 128
            sourceBurst256=0x00000007,     ///<Source burst size = 256
        };
        namespace sbsizeValC{
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst1> sourceBurst1{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst4> sourceBurst4{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst8> sourceBurst8{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst16> sourceBurst16{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst32> sourceBurst32{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst64> sourceBurst64{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst128> sourceBurst128{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst256> sourceBurst256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,sbsizeVal> sbsize{}; 
        ///Destination burst size. Indicates the number of transfers that make up a destination burst transfer request. This value must be set to the burst size of the destination peripheral or, if the destination is memory, to the memory boundary size. The burst size is the amount of data that is transferred when the BREQ signal goes active in the destination peripheral.
        enum class dbsizeVal {
            destinationBurst1=0x00000000,     ///<Destination burst size = 1
            destinationBurst4=0x00000001,     ///<Destination burst size = 4
            destinationBurst8=0x00000002,     ///<Destination burst size = 8
            destinationBurst16=0x00000003,     ///<Destination burst size = 16
            destinationBurst32=0x00000004,     ///<Destination burst size = 32
            destinationBurst64=0x00000005,     ///<Destination burst size = 64
            destinationBurst128=0x00000006,     ///<Destination burst size = 128
            destinationBurst256=0x00000007,     ///<Destination burst size = 256
        };
        namespace dbsizeValC{
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst1> destinationBurst1{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst4> destinationBurst4{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst8> destinationBurst8{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst16> destinationBurst16{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst32> destinationBurst32{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst64> destinationBurst64{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst128> destinationBurst128{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst256> destinationBurst256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,dbsizeVal> dbsize{}; 
        ///Source transfer width. Transfers wider than the AHB master bus width are illegal. The source and destination widths can be different from each other. The hardware automatically packs and unpacks the data as required. 0x3 to 0x7 - Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> swidth{}; 
        ///Destination transfer width. Transfers wider than the AHB master bus width are not supported. The source and destination widths can be different from each other. The hardware automatically packs and unpacks the data as required. 0x3 to 0x7 - Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///Source AHB master select:
        enum class sVal {
            ahbMaster0Selecte=0x00000000,     ///<AHB Master 0 selected for source transfer.
            ahbMaster1Selecte=0x00000001,     ///<AHB Master 1 selected for source transfer.
        };
        namespace sValC{
            constexpr MPL::Value<sVal,sVal::ahbMaster0Selecte> ahbMaster0Selecte{};
            constexpr MPL::Value<sVal,sVal::ahbMaster1Selecte> ahbMaster1Selecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,sVal> s{}; 
        ///Destination AHB master select: Only Master1 can access a peripheral. Master0 can only access memory.
        enum class dVal {
            ahbMaster0Selecte=0x00000000,     ///<AHB Master 0 selected for destination transfer.
            ahbMaster1Selecte=0x00000001,     ///<AHB Master 1 selected for destination transfer.
        };
        namespace dValC{
            constexpr MPL::Value<dVal,dVal::ahbMaster0Selecte> ahbMaster0Selecte{};
            constexpr MPL::Value<dVal,dVal::ahbMaster1Selecte> ahbMaster1Selecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,dVal> d{}; 
        ///Source increment:
        enum class siVal {
            notIncrement=0x00000000,     ///<The source address is not incremented after each transfer.
            increment=0x00000001,     ///<The source address is incremented after each transfer.
        };
        namespace siValC{
            constexpr MPL::Value<siVal,siVal::notIncrement> notIncrement{};
            constexpr MPL::Value<siVal,siVal::increment> increment{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,siVal> si{}; 
        ///Destination increment:
        enum class diVal {
            theDestinationAddr=0x00000000,     ///<The destination address is not incremented after each transfer.
            theDestinationAddr=0x00000001,     ///<The destination address is incremented after each transfer.
        };
        namespace diValC{
            constexpr MPL::Value<diVal,diVal::theDestinationAddr> theDestinationAddr{};
            constexpr MPL::Value<diVal,diVal::theDestinationAddr> theDestinationAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,diVal> di{}; 
        ///Indicates that the access is in user mode or privileged mode:
        enum class prot1Val {
            accessIsInUserMo=0x00000000,     ///<Access is in user mode
            accessIsInPrivile=0x00000001,     ///<Access is in privileged mode.
        };
        namespace prot1ValC{
            constexpr MPL::Value<prot1Val,prot1Val::accessIsInUserMo> accessIsInUserMo{};
            constexpr MPL::Value<prot1Val,prot1Val::accessIsInPrivile> accessIsInPrivile{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,prot1Val> prot1{}; 
        ///Indicates that the access is bufferable or not bufferable:
        enum class prot2Val {
            accessIsNotBuffer=0x00000000,     ///<Access is not bufferable.
            accessIsBufferable=0x00000001,     ///<Access is bufferable.
        };
        namespace prot2ValC{
            constexpr MPL::Value<prot2Val,prot2Val::accessIsNotBuffer> accessIsNotBuffer{};
            constexpr MPL::Value<prot2Val,prot2Val::accessIsBufferable> accessIsBufferable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,prot2Val> prot2{}; 
        ///Indicates that the access is cacheable or not cacheable:
        enum class prot3Val {
            accessIsNotCachea=0x00000000,     ///<Access is not cacheable.
            accessIsCacheable=0x00000001,     ///<Access is cacheable.
        };
        namespace prot3ValC{
            constexpr MPL::Value<prot3Val,prot3Val::accessIsNotCachea> accessIsNotCachea{};
            constexpr MPL::Value<prot3Val,prot3Val::accessIsCacheable> accessIsCacheable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,prot3Val> prot3{}; 
        ///Terminal count interrupt enable bit.
        enum class iVal {
            theTerminalCountI=0x00000000,     ///<The terminal count interrupt is disabled.
            theTerminalCountI=0x00000001,     ///<The terminal count interrupt is enabled.
        };
        namespace iValC{
            constexpr MPL::Value<iVal,iVal::theTerminalCountI> theTerminalCountI{};
            constexpr MPL::Value<iVal,iVal::theTerminalCountI> theTerminalCountI{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,iVal> i{}; 
    }
    namespace Nonec1control{    ///<DMA Channel  Control Register
        using Addr = Register::Address<0x4000212c,0x00000000,0,unsigned>;
        ///Transfer size in byte. A write to this field sets the size of the transfer when the DMA Controller is the flow controller. The transfer size value must be set before the channel is enabled. Transfer size is updated as data transfers are completed. A read from this field indicates the number of transfers completed on the destination bus. Reading the register when the channel is active does not give useful information because by the time that the software has processed the value read, the channel might have progressed. It is intended to be used only when a channel is enabled and then disabled. The transfer size value is not used if the DMA Controller is not the flow controller.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> transfersize{}; 
        ///Source burst size. Indicates the number of transfers that make up a source burst. This value must be set to the burst size of the source peripheral, or if the source is memory, to the memory boundary size (see Figure 3). The burst size is the amount of data that is transferred when the BREQ signal goes active in the source peripheral.
        enum class sbsizeVal {
            sourceBurst1=0x00000000,     ///<Source burst size = 1
            sourceBurst4=0x00000001,     ///<Source burst size = 4
            sourceBurst8=0x00000002,     ///<Source burst size = 8
            sourceBurst16=0x00000003,     ///<Source burst size = 16
            sourceBurst32=0x00000004,     ///<Source burst size = 32
            sourceBurst64=0x00000005,     ///<Source burst size = 64
            sourceBurst128=0x00000006,     ///<Source burst size = 128
            sourceBurst256=0x00000007,     ///<Source burst size = 256
        };
        namespace sbsizeValC{
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst1> sourceBurst1{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst4> sourceBurst4{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst8> sourceBurst8{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst16> sourceBurst16{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst32> sourceBurst32{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst64> sourceBurst64{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst128> sourceBurst128{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst256> sourceBurst256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,sbsizeVal> sbsize{}; 
        ///Destination burst size. Indicates the number of transfers that make up a destination burst transfer request. This value must be set to the burst size of the destination peripheral or, if the destination is memory, to the memory boundary size. The burst size is the amount of data that is transferred when the BREQ signal goes active in the destination peripheral.
        enum class dbsizeVal {
            destinationBurst1=0x00000000,     ///<Destination burst size = 1
            destinationBurst4=0x00000001,     ///<Destination burst size = 4
            destinationBurst8=0x00000002,     ///<Destination burst size = 8
            destinationBurst16=0x00000003,     ///<Destination burst size = 16
            destinationBurst32=0x00000004,     ///<Destination burst size = 32
            destinationBurst64=0x00000005,     ///<Destination burst size = 64
            destinationBurst128=0x00000006,     ///<Destination burst size = 128
            destinationBurst256=0x00000007,     ///<Destination burst size = 256
        };
        namespace dbsizeValC{
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst1> destinationBurst1{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst4> destinationBurst4{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst8> destinationBurst8{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst16> destinationBurst16{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst32> destinationBurst32{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst64> destinationBurst64{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst128> destinationBurst128{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst256> destinationBurst256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,dbsizeVal> dbsize{}; 
        ///Source transfer width. Transfers wider than the AHB master bus width are illegal. The source and destination widths can be different from each other. The hardware automatically packs and unpacks the data as required. 0x3 to 0x7 - Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> swidth{}; 
        ///Destination transfer width. Transfers wider than the AHB master bus width are not supported. The source and destination widths can be different from each other. The hardware automatically packs and unpacks the data as required. 0x3 to 0x7 - Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///Source AHB master select:
        enum class sVal {
            ahbMaster0Selecte=0x00000000,     ///<AHB Master 0 selected for source transfer.
            ahbMaster1Selecte=0x00000001,     ///<AHB Master 1 selected for source transfer.
        };
        namespace sValC{
            constexpr MPL::Value<sVal,sVal::ahbMaster0Selecte> ahbMaster0Selecte{};
            constexpr MPL::Value<sVal,sVal::ahbMaster1Selecte> ahbMaster1Selecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,sVal> s{}; 
        ///Destination AHB master select: Only Master1 can access a peripheral. Master0 can only access memory.
        enum class dVal {
            ahbMaster0Selecte=0x00000000,     ///<AHB Master 0 selected for destination transfer.
            ahbMaster1Selecte=0x00000001,     ///<AHB Master 1 selected for destination transfer.
        };
        namespace dValC{
            constexpr MPL::Value<dVal,dVal::ahbMaster0Selecte> ahbMaster0Selecte{};
            constexpr MPL::Value<dVal,dVal::ahbMaster1Selecte> ahbMaster1Selecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,dVal> d{}; 
        ///Source increment:
        enum class siVal {
            notIncrement=0x00000000,     ///<The source address is not incremented after each transfer.
            increment=0x00000001,     ///<The source address is incremented after each transfer.
        };
        namespace siValC{
            constexpr MPL::Value<siVal,siVal::notIncrement> notIncrement{};
            constexpr MPL::Value<siVal,siVal::increment> increment{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,siVal> si{}; 
        ///Destination increment:
        enum class diVal {
            theDestinationAddr=0x00000000,     ///<The destination address is not incremented after each transfer.
            theDestinationAddr=0x00000001,     ///<The destination address is incremented after each transfer.
        };
        namespace diValC{
            constexpr MPL::Value<diVal,diVal::theDestinationAddr> theDestinationAddr{};
            constexpr MPL::Value<diVal,diVal::theDestinationAddr> theDestinationAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,diVal> di{}; 
        ///Indicates that the access is in user mode or privileged mode:
        enum class prot1Val {
            accessIsInUserMo=0x00000000,     ///<Access is in user mode
            accessIsInPrivile=0x00000001,     ///<Access is in privileged mode.
        };
        namespace prot1ValC{
            constexpr MPL::Value<prot1Val,prot1Val::accessIsInUserMo> accessIsInUserMo{};
            constexpr MPL::Value<prot1Val,prot1Val::accessIsInPrivile> accessIsInPrivile{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,prot1Val> prot1{}; 
        ///Indicates that the access is bufferable or not bufferable:
        enum class prot2Val {
            accessIsNotBuffer=0x00000000,     ///<Access is not bufferable.
            accessIsBufferable=0x00000001,     ///<Access is bufferable.
        };
        namespace prot2ValC{
            constexpr MPL::Value<prot2Val,prot2Val::accessIsNotBuffer> accessIsNotBuffer{};
            constexpr MPL::Value<prot2Val,prot2Val::accessIsBufferable> accessIsBufferable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,prot2Val> prot2{}; 
        ///Indicates that the access is cacheable or not cacheable:
        enum class prot3Val {
            accessIsNotCachea=0x00000000,     ///<Access is not cacheable.
            accessIsCacheable=0x00000001,     ///<Access is cacheable.
        };
        namespace prot3ValC{
            constexpr MPL::Value<prot3Val,prot3Val::accessIsNotCachea> accessIsNotCachea{};
            constexpr MPL::Value<prot3Val,prot3Val::accessIsCacheable> accessIsCacheable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,prot3Val> prot3{}; 
        ///Terminal count interrupt enable bit.
        enum class iVal {
            theTerminalCountI=0x00000000,     ///<The terminal count interrupt is disabled.
            theTerminalCountI=0x00000001,     ///<The terminal count interrupt is enabled.
        };
        namespace iValC{
            constexpr MPL::Value<iVal,iVal::theTerminalCountI> theTerminalCountI{};
            constexpr MPL::Value<iVal,iVal::theTerminalCountI> theTerminalCountI{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,iVal> i{}; 
    }
    namespace Nonec2control{    ///<DMA Channel  Control Register
        using Addr = Register::Address<0x4000214c,0x00000000,0,unsigned>;
        ///Transfer size in byte. A write to this field sets the size of the transfer when the DMA Controller is the flow controller. The transfer size value must be set before the channel is enabled. Transfer size is updated as data transfers are completed. A read from this field indicates the number of transfers completed on the destination bus. Reading the register when the channel is active does not give useful information because by the time that the software has processed the value read, the channel might have progressed. It is intended to be used only when a channel is enabled and then disabled. The transfer size value is not used if the DMA Controller is not the flow controller.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> transfersize{}; 
        ///Source burst size. Indicates the number of transfers that make up a source burst. This value must be set to the burst size of the source peripheral, or if the source is memory, to the memory boundary size (see Figure 3). The burst size is the amount of data that is transferred when the BREQ signal goes active in the source peripheral.
        enum class sbsizeVal {
            sourceBurst1=0x00000000,     ///<Source burst size = 1
            sourceBurst4=0x00000001,     ///<Source burst size = 4
            sourceBurst8=0x00000002,     ///<Source burst size = 8
            sourceBurst16=0x00000003,     ///<Source burst size = 16
            sourceBurst32=0x00000004,     ///<Source burst size = 32
            sourceBurst64=0x00000005,     ///<Source burst size = 64
            sourceBurst128=0x00000006,     ///<Source burst size = 128
            sourceBurst256=0x00000007,     ///<Source burst size = 256
        };
        namespace sbsizeValC{
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst1> sourceBurst1{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst4> sourceBurst4{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst8> sourceBurst8{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst16> sourceBurst16{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst32> sourceBurst32{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst64> sourceBurst64{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst128> sourceBurst128{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst256> sourceBurst256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,sbsizeVal> sbsize{}; 
        ///Destination burst size. Indicates the number of transfers that make up a destination burst transfer request. This value must be set to the burst size of the destination peripheral or, if the destination is memory, to the memory boundary size. The burst size is the amount of data that is transferred when the BREQ signal goes active in the destination peripheral.
        enum class dbsizeVal {
            destinationBurst1=0x00000000,     ///<Destination burst size = 1
            destinationBurst4=0x00000001,     ///<Destination burst size = 4
            destinationBurst8=0x00000002,     ///<Destination burst size = 8
            destinationBurst16=0x00000003,     ///<Destination burst size = 16
            destinationBurst32=0x00000004,     ///<Destination burst size = 32
            destinationBurst64=0x00000005,     ///<Destination burst size = 64
            destinationBurst128=0x00000006,     ///<Destination burst size = 128
            destinationBurst256=0x00000007,     ///<Destination burst size = 256
        };
        namespace dbsizeValC{
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst1> destinationBurst1{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst4> destinationBurst4{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst8> destinationBurst8{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst16> destinationBurst16{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst32> destinationBurst32{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst64> destinationBurst64{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst128> destinationBurst128{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst256> destinationBurst256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,dbsizeVal> dbsize{}; 
        ///Source transfer width. Transfers wider than the AHB master bus width are illegal. The source and destination widths can be different from each other. The hardware automatically packs and unpacks the data as required. 0x3 to 0x7 - Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> swidth{}; 
        ///Destination transfer width. Transfers wider than the AHB master bus width are not supported. The source and destination widths can be different from each other. The hardware automatically packs and unpacks the data as required. 0x3 to 0x7 - Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///Source AHB master select:
        enum class sVal {
            ahbMaster0Selecte=0x00000000,     ///<AHB Master 0 selected for source transfer.
            ahbMaster1Selecte=0x00000001,     ///<AHB Master 1 selected for source transfer.
        };
        namespace sValC{
            constexpr MPL::Value<sVal,sVal::ahbMaster0Selecte> ahbMaster0Selecte{};
            constexpr MPL::Value<sVal,sVal::ahbMaster1Selecte> ahbMaster1Selecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,sVal> s{}; 
        ///Destination AHB master select: Only Master1 can access a peripheral. Master0 can only access memory.
        enum class dVal {
            ahbMaster0Selecte=0x00000000,     ///<AHB Master 0 selected for destination transfer.
            ahbMaster1Selecte=0x00000001,     ///<AHB Master 1 selected for destination transfer.
        };
        namespace dValC{
            constexpr MPL::Value<dVal,dVal::ahbMaster0Selecte> ahbMaster0Selecte{};
            constexpr MPL::Value<dVal,dVal::ahbMaster1Selecte> ahbMaster1Selecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,dVal> d{}; 
        ///Source increment:
        enum class siVal {
            notIncrement=0x00000000,     ///<The source address is not incremented after each transfer.
            increment=0x00000001,     ///<The source address is incremented after each transfer.
        };
        namespace siValC{
            constexpr MPL::Value<siVal,siVal::notIncrement> notIncrement{};
            constexpr MPL::Value<siVal,siVal::increment> increment{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,siVal> si{}; 
        ///Destination increment:
        enum class diVal {
            theDestinationAddr=0x00000000,     ///<The destination address is not incremented after each transfer.
            theDestinationAddr=0x00000001,     ///<The destination address is incremented after each transfer.
        };
        namespace diValC{
            constexpr MPL::Value<diVal,diVal::theDestinationAddr> theDestinationAddr{};
            constexpr MPL::Value<diVal,diVal::theDestinationAddr> theDestinationAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,diVal> di{}; 
        ///Indicates that the access is in user mode or privileged mode:
        enum class prot1Val {
            accessIsInUserMo=0x00000000,     ///<Access is in user mode
            accessIsInPrivile=0x00000001,     ///<Access is in privileged mode.
        };
        namespace prot1ValC{
            constexpr MPL::Value<prot1Val,prot1Val::accessIsInUserMo> accessIsInUserMo{};
            constexpr MPL::Value<prot1Val,prot1Val::accessIsInPrivile> accessIsInPrivile{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,prot1Val> prot1{}; 
        ///Indicates that the access is bufferable or not bufferable:
        enum class prot2Val {
            accessIsNotBuffer=0x00000000,     ///<Access is not bufferable.
            accessIsBufferable=0x00000001,     ///<Access is bufferable.
        };
        namespace prot2ValC{
            constexpr MPL::Value<prot2Val,prot2Val::accessIsNotBuffer> accessIsNotBuffer{};
            constexpr MPL::Value<prot2Val,prot2Val::accessIsBufferable> accessIsBufferable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,prot2Val> prot2{}; 
        ///Indicates that the access is cacheable or not cacheable:
        enum class prot3Val {
            accessIsNotCachea=0x00000000,     ///<Access is not cacheable.
            accessIsCacheable=0x00000001,     ///<Access is cacheable.
        };
        namespace prot3ValC{
            constexpr MPL::Value<prot3Val,prot3Val::accessIsNotCachea> accessIsNotCachea{};
            constexpr MPL::Value<prot3Val,prot3Val::accessIsCacheable> accessIsCacheable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,prot3Val> prot3{}; 
        ///Terminal count interrupt enable bit.
        enum class iVal {
            theTerminalCountI=0x00000000,     ///<The terminal count interrupt is disabled.
            theTerminalCountI=0x00000001,     ///<The terminal count interrupt is enabled.
        };
        namespace iValC{
            constexpr MPL::Value<iVal,iVal::theTerminalCountI> theTerminalCountI{};
            constexpr MPL::Value<iVal,iVal::theTerminalCountI> theTerminalCountI{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,iVal> i{}; 
    }
    namespace Nonec3control{    ///<DMA Channel  Control Register
        using Addr = Register::Address<0x4000216c,0x00000000,0,unsigned>;
        ///Transfer size in byte. A write to this field sets the size of the transfer when the DMA Controller is the flow controller. The transfer size value must be set before the channel is enabled. Transfer size is updated as data transfers are completed. A read from this field indicates the number of transfers completed on the destination bus. Reading the register when the channel is active does not give useful information because by the time that the software has processed the value read, the channel might have progressed. It is intended to be used only when a channel is enabled and then disabled. The transfer size value is not used if the DMA Controller is not the flow controller.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> transfersize{}; 
        ///Source burst size. Indicates the number of transfers that make up a source burst. This value must be set to the burst size of the source peripheral, or if the source is memory, to the memory boundary size (see Figure 3). The burst size is the amount of data that is transferred when the BREQ signal goes active in the source peripheral.
        enum class sbsizeVal {
            sourceBurst1=0x00000000,     ///<Source burst size = 1
            sourceBurst4=0x00000001,     ///<Source burst size = 4
            sourceBurst8=0x00000002,     ///<Source burst size = 8
            sourceBurst16=0x00000003,     ///<Source burst size = 16
            sourceBurst32=0x00000004,     ///<Source burst size = 32
            sourceBurst64=0x00000005,     ///<Source burst size = 64
            sourceBurst128=0x00000006,     ///<Source burst size = 128
            sourceBurst256=0x00000007,     ///<Source burst size = 256
        };
        namespace sbsizeValC{
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst1> sourceBurst1{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst4> sourceBurst4{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst8> sourceBurst8{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst16> sourceBurst16{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst32> sourceBurst32{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst64> sourceBurst64{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst128> sourceBurst128{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst256> sourceBurst256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,sbsizeVal> sbsize{}; 
        ///Destination burst size. Indicates the number of transfers that make up a destination burst transfer request. This value must be set to the burst size of the destination peripheral or, if the destination is memory, to the memory boundary size. The burst size is the amount of data that is transferred when the BREQ signal goes active in the destination peripheral.
        enum class dbsizeVal {
            destinationBurst1=0x00000000,     ///<Destination burst size = 1
            destinationBurst4=0x00000001,     ///<Destination burst size = 4
            destinationBurst8=0x00000002,     ///<Destination burst size = 8
            destinationBurst16=0x00000003,     ///<Destination burst size = 16
            destinationBurst32=0x00000004,     ///<Destination burst size = 32
            destinationBurst64=0x00000005,     ///<Destination burst size = 64
            destinationBurst128=0x00000006,     ///<Destination burst size = 128
            destinationBurst256=0x00000007,     ///<Destination burst size = 256
        };
        namespace dbsizeValC{
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst1> destinationBurst1{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst4> destinationBurst4{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst8> destinationBurst8{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst16> destinationBurst16{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst32> destinationBurst32{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst64> destinationBurst64{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst128> destinationBurst128{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst256> destinationBurst256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,dbsizeVal> dbsize{}; 
        ///Source transfer width. Transfers wider than the AHB master bus width are illegal. The source and destination widths can be different from each other. The hardware automatically packs and unpacks the data as required. 0x3 to 0x7 - Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> swidth{}; 
        ///Destination transfer width. Transfers wider than the AHB master bus width are not supported. The source and destination widths can be different from each other. The hardware automatically packs and unpacks the data as required. 0x3 to 0x7 - Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///Source AHB master select:
        enum class sVal {
            ahbMaster0Selecte=0x00000000,     ///<AHB Master 0 selected for source transfer.
            ahbMaster1Selecte=0x00000001,     ///<AHB Master 1 selected for source transfer.
        };
        namespace sValC{
            constexpr MPL::Value<sVal,sVal::ahbMaster0Selecte> ahbMaster0Selecte{};
            constexpr MPL::Value<sVal,sVal::ahbMaster1Selecte> ahbMaster1Selecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,sVal> s{}; 
        ///Destination AHB master select: Only Master1 can access a peripheral. Master0 can only access memory.
        enum class dVal {
            ahbMaster0Selecte=0x00000000,     ///<AHB Master 0 selected for destination transfer.
            ahbMaster1Selecte=0x00000001,     ///<AHB Master 1 selected for destination transfer.
        };
        namespace dValC{
            constexpr MPL::Value<dVal,dVal::ahbMaster0Selecte> ahbMaster0Selecte{};
            constexpr MPL::Value<dVal,dVal::ahbMaster1Selecte> ahbMaster1Selecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,dVal> d{}; 
        ///Source increment:
        enum class siVal {
            notIncrement=0x00000000,     ///<The source address is not incremented after each transfer.
            increment=0x00000001,     ///<The source address is incremented after each transfer.
        };
        namespace siValC{
            constexpr MPL::Value<siVal,siVal::notIncrement> notIncrement{};
            constexpr MPL::Value<siVal,siVal::increment> increment{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,siVal> si{}; 
        ///Destination increment:
        enum class diVal {
            theDestinationAddr=0x00000000,     ///<The destination address is not incremented after each transfer.
            theDestinationAddr=0x00000001,     ///<The destination address is incremented after each transfer.
        };
        namespace diValC{
            constexpr MPL::Value<diVal,diVal::theDestinationAddr> theDestinationAddr{};
            constexpr MPL::Value<diVal,diVal::theDestinationAddr> theDestinationAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,diVal> di{}; 
        ///Indicates that the access is in user mode or privileged mode:
        enum class prot1Val {
            accessIsInUserMo=0x00000000,     ///<Access is in user mode
            accessIsInPrivile=0x00000001,     ///<Access is in privileged mode.
        };
        namespace prot1ValC{
            constexpr MPL::Value<prot1Val,prot1Val::accessIsInUserMo> accessIsInUserMo{};
            constexpr MPL::Value<prot1Val,prot1Val::accessIsInPrivile> accessIsInPrivile{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,prot1Val> prot1{}; 
        ///Indicates that the access is bufferable or not bufferable:
        enum class prot2Val {
            accessIsNotBuffer=0x00000000,     ///<Access is not bufferable.
            accessIsBufferable=0x00000001,     ///<Access is bufferable.
        };
        namespace prot2ValC{
            constexpr MPL::Value<prot2Val,prot2Val::accessIsNotBuffer> accessIsNotBuffer{};
            constexpr MPL::Value<prot2Val,prot2Val::accessIsBufferable> accessIsBufferable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,prot2Val> prot2{}; 
        ///Indicates that the access is cacheable or not cacheable:
        enum class prot3Val {
            accessIsNotCachea=0x00000000,     ///<Access is not cacheable.
            accessIsCacheable=0x00000001,     ///<Access is cacheable.
        };
        namespace prot3ValC{
            constexpr MPL::Value<prot3Val,prot3Val::accessIsNotCachea> accessIsNotCachea{};
            constexpr MPL::Value<prot3Val,prot3Val::accessIsCacheable> accessIsCacheable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,prot3Val> prot3{}; 
        ///Terminal count interrupt enable bit.
        enum class iVal {
            theTerminalCountI=0x00000000,     ///<The terminal count interrupt is disabled.
            theTerminalCountI=0x00000001,     ///<The terminal count interrupt is enabled.
        };
        namespace iValC{
            constexpr MPL::Value<iVal,iVal::theTerminalCountI> theTerminalCountI{};
            constexpr MPL::Value<iVal,iVal::theTerminalCountI> theTerminalCountI{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,iVal> i{}; 
    }
    namespace Nonec4control{    ///<DMA Channel  Control Register
        using Addr = Register::Address<0x4000218c,0x00000000,0,unsigned>;
        ///Transfer size in byte. A write to this field sets the size of the transfer when the DMA Controller is the flow controller. The transfer size value must be set before the channel is enabled. Transfer size is updated as data transfers are completed. A read from this field indicates the number of transfers completed on the destination bus. Reading the register when the channel is active does not give useful information because by the time that the software has processed the value read, the channel might have progressed. It is intended to be used only when a channel is enabled and then disabled. The transfer size value is not used if the DMA Controller is not the flow controller.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> transfersize{}; 
        ///Source burst size. Indicates the number of transfers that make up a source burst. This value must be set to the burst size of the source peripheral, or if the source is memory, to the memory boundary size (see Figure 3). The burst size is the amount of data that is transferred when the BREQ signal goes active in the source peripheral.
        enum class sbsizeVal {
            sourceBurst1=0x00000000,     ///<Source burst size = 1
            sourceBurst4=0x00000001,     ///<Source burst size = 4
            sourceBurst8=0x00000002,     ///<Source burst size = 8
            sourceBurst16=0x00000003,     ///<Source burst size = 16
            sourceBurst32=0x00000004,     ///<Source burst size = 32
            sourceBurst64=0x00000005,     ///<Source burst size = 64
            sourceBurst128=0x00000006,     ///<Source burst size = 128
            sourceBurst256=0x00000007,     ///<Source burst size = 256
        };
        namespace sbsizeValC{
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst1> sourceBurst1{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst4> sourceBurst4{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst8> sourceBurst8{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst16> sourceBurst16{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst32> sourceBurst32{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst64> sourceBurst64{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst128> sourceBurst128{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst256> sourceBurst256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,sbsizeVal> sbsize{}; 
        ///Destination burst size. Indicates the number of transfers that make up a destination burst transfer request. This value must be set to the burst size of the destination peripheral or, if the destination is memory, to the memory boundary size. The burst size is the amount of data that is transferred when the BREQ signal goes active in the destination peripheral.
        enum class dbsizeVal {
            destinationBurst1=0x00000000,     ///<Destination burst size = 1
            destinationBurst4=0x00000001,     ///<Destination burst size = 4
            destinationBurst8=0x00000002,     ///<Destination burst size = 8
            destinationBurst16=0x00000003,     ///<Destination burst size = 16
            destinationBurst32=0x00000004,     ///<Destination burst size = 32
            destinationBurst64=0x00000005,     ///<Destination burst size = 64
            destinationBurst128=0x00000006,     ///<Destination burst size = 128
            destinationBurst256=0x00000007,     ///<Destination burst size = 256
        };
        namespace dbsizeValC{
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst1> destinationBurst1{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst4> destinationBurst4{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst8> destinationBurst8{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst16> destinationBurst16{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst32> destinationBurst32{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst64> destinationBurst64{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst128> destinationBurst128{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst256> destinationBurst256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,dbsizeVal> dbsize{}; 
        ///Source transfer width. Transfers wider than the AHB master bus width are illegal. The source and destination widths can be different from each other. The hardware automatically packs and unpacks the data as required. 0x3 to 0x7 - Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> swidth{}; 
        ///Destination transfer width. Transfers wider than the AHB master bus width are not supported. The source and destination widths can be different from each other. The hardware automatically packs and unpacks the data as required. 0x3 to 0x7 - Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///Source AHB master select:
        enum class sVal {
            ahbMaster0Selecte=0x00000000,     ///<AHB Master 0 selected for source transfer.
            ahbMaster1Selecte=0x00000001,     ///<AHB Master 1 selected for source transfer.
        };
        namespace sValC{
            constexpr MPL::Value<sVal,sVal::ahbMaster0Selecte> ahbMaster0Selecte{};
            constexpr MPL::Value<sVal,sVal::ahbMaster1Selecte> ahbMaster1Selecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,sVal> s{}; 
        ///Destination AHB master select: Only Master1 can access a peripheral. Master0 can only access memory.
        enum class dVal {
            ahbMaster0Selecte=0x00000000,     ///<AHB Master 0 selected for destination transfer.
            ahbMaster1Selecte=0x00000001,     ///<AHB Master 1 selected for destination transfer.
        };
        namespace dValC{
            constexpr MPL::Value<dVal,dVal::ahbMaster0Selecte> ahbMaster0Selecte{};
            constexpr MPL::Value<dVal,dVal::ahbMaster1Selecte> ahbMaster1Selecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,dVal> d{}; 
        ///Source increment:
        enum class siVal {
            notIncrement=0x00000000,     ///<The source address is not incremented after each transfer.
            increment=0x00000001,     ///<The source address is incremented after each transfer.
        };
        namespace siValC{
            constexpr MPL::Value<siVal,siVal::notIncrement> notIncrement{};
            constexpr MPL::Value<siVal,siVal::increment> increment{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,siVal> si{}; 
        ///Destination increment:
        enum class diVal {
            theDestinationAddr=0x00000000,     ///<The destination address is not incremented after each transfer.
            theDestinationAddr=0x00000001,     ///<The destination address is incremented after each transfer.
        };
        namespace diValC{
            constexpr MPL::Value<diVal,diVal::theDestinationAddr> theDestinationAddr{};
            constexpr MPL::Value<diVal,diVal::theDestinationAddr> theDestinationAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,diVal> di{}; 
        ///Indicates that the access is in user mode or privileged mode:
        enum class prot1Val {
            accessIsInUserMo=0x00000000,     ///<Access is in user mode
            accessIsInPrivile=0x00000001,     ///<Access is in privileged mode.
        };
        namespace prot1ValC{
            constexpr MPL::Value<prot1Val,prot1Val::accessIsInUserMo> accessIsInUserMo{};
            constexpr MPL::Value<prot1Val,prot1Val::accessIsInPrivile> accessIsInPrivile{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,prot1Val> prot1{}; 
        ///Indicates that the access is bufferable or not bufferable:
        enum class prot2Val {
            accessIsNotBuffer=0x00000000,     ///<Access is not bufferable.
            accessIsBufferable=0x00000001,     ///<Access is bufferable.
        };
        namespace prot2ValC{
            constexpr MPL::Value<prot2Val,prot2Val::accessIsNotBuffer> accessIsNotBuffer{};
            constexpr MPL::Value<prot2Val,prot2Val::accessIsBufferable> accessIsBufferable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,prot2Val> prot2{}; 
        ///Indicates that the access is cacheable or not cacheable:
        enum class prot3Val {
            accessIsNotCachea=0x00000000,     ///<Access is not cacheable.
            accessIsCacheable=0x00000001,     ///<Access is cacheable.
        };
        namespace prot3ValC{
            constexpr MPL::Value<prot3Val,prot3Val::accessIsNotCachea> accessIsNotCachea{};
            constexpr MPL::Value<prot3Val,prot3Val::accessIsCacheable> accessIsCacheable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,prot3Val> prot3{}; 
        ///Terminal count interrupt enable bit.
        enum class iVal {
            theTerminalCountI=0x00000000,     ///<The terminal count interrupt is disabled.
            theTerminalCountI=0x00000001,     ///<The terminal count interrupt is enabled.
        };
        namespace iValC{
            constexpr MPL::Value<iVal,iVal::theTerminalCountI> theTerminalCountI{};
            constexpr MPL::Value<iVal,iVal::theTerminalCountI> theTerminalCountI{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,iVal> i{}; 
    }
    namespace Nonec5control{    ///<DMA Channel  Control Register
        using Addr = Register::Address<0x400021ac,0x00000000,0,unsigned>;
        ///Transfer size in byte. A write to this field sets the size of the transfer when the DMA Controller is the flow controller. The transfer size value must be set before the channel is enabled. Transfer size is updated as data transfers are completed. A read from this field indicates the number of transfers completed on the destination bus. Reading the register when the channel is active does not give useful information because by the time that the software has processed the value read, the channel might have progressed. It is intended to be used only when a channel is enabled and then disabled. The transfer size value is not used if the DMA Controller is not the flow controller.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> transfersize{}; 
        ///Source burst size. Indicates the number of transfers that make up a source burst. This value must be set to the burst size of the source peripheral, or if the source is memory, to the memory boundary size (see Figure 3). The burst size is the amount of data that is transferred when the BREQ signal goes active in the source peripheral.
        enum class sbsizeVal {
            sourceBurst1=0x00000000,     ///<Source burst size = 1
            sourceBurst4=0x00000001,     ///<Source burst size = 4
            sourceBurst8=0x00000002,     ///<Source burst size = 8
            sourceBurst16=0x00000003,     ///<Source burst size = 16
            sourceBurst32=0x00000004,     ///<Source burst size = 32
            sourceBurst64=0x00000005,     ///<Source burst size = 64
            sourceBurst128=0x00000006,     ///<Source burst size = 128
            sourceBurst256=0x00000007,     ///<Source burst size = 256
        };
        namespace sbsizeValC{
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst1> sourceBurst1{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst4> sourceBurst4{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst8> sourceBurst8{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst16> sourceBurst16{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst32> sourceBurst32{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst64> sourceBurst64{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst128> sourceBurst128{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst256> sourceBurst256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,sbsizeVal> sbsize{}; 
        ///Destination burst size. Indicates the number of transfers that make up a destination burst transfer request. This value must be set to the burst size of the destination peripheral or, if the destination is memory, to the memory boundary size. The burst size is the amount of data that is transferred when the BREQ signal goes active in the destination peripheral.
        enum class dbsizeVal {
            destinationBurst1=0x00000000,     ///<Destination burst size = 1
            destinationBurst4=0x00000001,     ///<Destination burst size = 4
            destinationBurst8=0x00000002,     ///<Destination burst size = 8
            destinationBurst16=0x00000003,     ///<Destination burst size = 16
            destinationBurst32=0x00000004,     ///<Destination burst size = 32
            destinationBurst64=0x00000005,     ///<Destination burst size = 64
            destinationBurst128=0x00000006,     ///<Destination burst size = 128
            destinationBurst256=0x00000007,     ///<Destination burst size = 256
        };
        namespace dbsizeValC{
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst1> destinationBurst1{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst4> destinationBurst4{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst8> destinationBurst8{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst16> destinationBurst16{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst32> destinationBurst32{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst64> destinationBurst64{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst128> destinationBurst128{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst256> destinationBurst256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,dbsizeVal> dbsize{}; 
        ///Source transfer width. Transfers wider than the AHB master bus width are illegal. The source and destination widths can be different from each other. The hardware automatically packs and unpacks the data as required. 0x3 to 0x7 - Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> swidth{}; 
        ///Destination transfer width. Transfers wider than the AHB master bus width are not supported. The source and destination widths can be different from each other. The hardware automatically packs and unpacks the data as required. 0x3 to 0x7 - Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///Source AHB master select:
        enum class sVal {
            ahbMaster0Selecte=0x00000000,     ///<AHB Master 0 selected for source transfer.
            ahbMaster1Selecte=0x00000001,     ///<AHB Master 1 selected for source transfer.
        };
        namespace sValC{
            constexpr MPL::Value<sVal,sVal::ahbMaster0Selecte> ahbMaster0Selecte{};
            constexpr MPL::Value<sVal,sVal::ahbMaster1Selecte> ahbMaster1Selecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,sVal> s{}; 
        ///Destination AHB master select: Only Master1 can access a peripheral. Master0 can only access memory.
        enum class dVal {
            ahbMaster0Selecte=0x00000000,     ///<AHB Master 0 selected for destination transfer.
            ahbMaster1Selecte=0x00000001,     ///<AHB Master 1 selected for destination transfer.
        };
        namespace dValC{
            constexpr MPL::Value<dVal,dVal::ahbMaster0Selecte> ahbMaster0Selecte{};
            constexpr MPL::Value<dVal,dVal::ahbMaster1Selecte> ahbMaster1Selecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,dVal> d{}; 
        ///Source increment:
        enum class siVal {
            notIncrement=0x00000000,     ///<The source address is not incremented after each transfer.
            increment=0x00000001,     ///<The source address is incremented after each transfer.
        };
        namespace siValC{
            constexpr MPL::Value<siVal,siVal::notIncrement> notIncrement{};
            constexpr MPL::Value<siVal,siVal::increment> increment{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,siVal> si{}; 
        ///Destination increment:
        enum class diVal {
            theDestinationAddr=0x00000000,     ///<The destination address is not incremented after each transfer.
            theDestinationAddr=0x00000001,     ///<The destination address is incremented after each transfer.
        };
        namespace diValC{
            constexpr MPL::Value<diVal,diVal::theDestinationAddr> theDestinationAddr{};
            constexpr MPL::Value<diVal,diVal::theDestinationAddr> theDestinationAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,diVal> di{}; 
        ///Indicates that the access is in user mode or privileged mode:
        enum class prot1Val {
            accessIsInUserMo=0x00000000,     ///<Access is in user mode
            accessIsInPrivile=0x00000001,     ///<Access is in privileged mode.
        };
        namespace prot1ValC{
            constexpr MPL::Value<prot1Val,prot1Val::accessIsInUserMo> accessIsInUserMo{};
            constexpr MPL::Value<prot1Val,prot1Val::accessIsInPrivile> accessIsInPrivile{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,prot1Val> prot1{}; 
        ///Indicates that the access is bufferable or not bufferable:
        enum class prot2Val {
            accessIsNotBuffer=0x00000000,     ///<Access is not bufferable.
            accessIsBufferable=0x00000001,     ///<Access is bufferable.
        };
        namespace prot2ValC{
            constexpr MPL::Value<prot2Val,prot2Val::accessIsNotBuffer> accessIsNotBuffer{};
            constexpr MPL::Value<prot2Val,prot2Val::accessIsBufferable> accessIsBufferable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,prot2Val> prot2{}; 
        ///Indicates that the access is cacheable or not cacheable:
        enum class prot3Val {
            accessIsNotCachea=0x00000000,     ///<Access is not cacheable.
            accessIsCacheable=0x00000001,     ///<Access is cacheable.
        };
        namespace prot3ValC{
            constexpr MPL::Value<prot3Val,prot3Val::accessIsNotCachea> accessIsNotCachea{};
            constexpr MPL::Value<prot3Val,prot3Val::accessIsCacheable> accessIsCacheable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,prot3Val> prot3{}; 
        ///Terminal count interrupt enable bit.
        enum class iVal {
            theTerminalCountI=0x00000000,     ///<The terminal count interrupt is disabled.
            theTerminalCountI=0x00000001,     ///<The terminal count interrupt is enabled.
        };
        namespace iValC{
            constexpr MPL::Value<iVal,iVal::theTerminalCountI> theTerminalCountI{};
            constexpr MPL::Value<iVal,iVal::theTerminalCountI> theTerminalCountI{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,iVal> i{}; 
    }
    namespace Nonec6control{    ///<DMA Channel  Control Register
        using Addr = Register::Address<0x400021cc,0x00000000,0,unsigned>;
        ///Transfer size in byte. A write to this field sets the size of the transfer when the DMA Controller is the flow controller. The transfer size value must be set before the channel is enabled. Transfer size is updated as data transfers are completed. A read from this field indicates the number of transfers completed on the destination bus. Reading the register when the channel is active does not give useful information because by the time that the software has processed the value read, the channel might have progressed. It is intended to be used only when a channel is enabled and then disabled. The transfer size value is not used if the DMA Controller is not the flow controller.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> transfersize{}; 
        ///Source burst size. Indicates the number of transfers that make up a source burst. This value must be set to the burst size of the source peripheral, or if the source is memory, to the memory boundary size (see Figure 3). The burst size is the amount of data that is transferred when the BREQ signal goes active in the source peripheral.
        enum class sbsizeVal {
            sourceBurst1=0x00000000,     ///<Source burst size = 1
            sourceBurst4=0x00000001,     ///<Source burst size = 4
            sourceBurst8=0x00000002,     ///<Source burst size = 8
            sourceBurst16=0x00000003,     ///<Source burst size = 16
            sourceBurst32=0x00000004,     ///<Source burst size = 32
            sourceBurst64=0x00000005,     ///<Source burst size = 64
            sourceBurst128=0x00000006,     ///<Source burst size = 128
            sourceBurst256=0x00000007,     ///<Source burst size = 256
        };
        namespace sbsizeValC{
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst1> sourceBurst1{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst4> sourceBurst4{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst8> sourceBurst8{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst16> sourceBurst16{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst32> sourceBurst32{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst64> sourceBurst64{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst128> sourceBurst128{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst256> sourceBurst256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,sbsizeVal> sbsize{}; 
        ///Destination burst size. Indicates the number of transfers that make up a destination burst transfer request. This value must be set to the burst size of the destination peripheral or, if the destination is memory, to the memory boundary size. The burst size is the amount of data that is transferred when the BREQ signal goes active in the destination peripheral.
        enum class dbsizeVal {
            destinationBurst1=0x00000000,     ///<Destination burst size = 1
            destinationBurst4=0x00000001,     ///<Destination burst size = 4
            destinationBurst8=0x00000002,     ///<Destination burst size = 8
            destinationBurst16=0x00000003,     ///<Destination burst size = 16
            destinationBurst32=0x00000004,     ///<Destination burst size = 32
            destinationBurst64=0x00000005,     ///<Destination burst size = 64
            destinationBurst128=0x00000006,     ///<Destination burst size = 128
            destinationBurst256=0x00000007,     ///<Destination burst size = 256
        };
        namespace dbsizeValC{
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst1> destinationBurst1{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst4> destinationBurst4{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst8> destinationBurst8{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst16> destinationBurst16{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst32> destinationBurst32{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst64> destinationBurst64{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst128> destinationBurst128{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst256> destinationBurst256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,dbsizeVal> dbsize{}; 
        ///Source transfer width. Transfers wider than the AHB master bus width are illegal. The source and destination widths can be different from each other. The hardware automatically packs and unpacks the data as required. 0x3 to 0x7 - Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> swidth{}; 
        ///Destination transfer width. Transfers wider than the AHB master bus width are not supported. The source and destination widths can be different from each other. The hardware automatically packs and unpacks the data as required. 0x3 to 0x7 - Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///Source AHB master select:
        enum class sVal {
            ahbMaster0Selecte=0x00000000,     ///<AHB Master 0 selected for source transfer.
            ahbMaster1Selecte=0x00000001,     ///<AHB Master 1 selected for source transfer.
        };
        namespace sValC{
            constexpr MPL::Value<sVal,sVal::ahbMaster0Selecte> ahbMaster0Selecte{};
            constexpr MPL::Value<sVal,sVal::ahbMaster1Selecte> ahbMaster1Selecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,sVal> s{}; 
        ///Destination AHB master select: Only Master1 can access a peripheral. Master0 can only access memory.
        enum class dVal {
            ahbMaster0Selecte=0x00000000,     ///<AHB Master 0 selected for destination transfer.
            ahbMaster1Selecte=0x00000001,     ///<AHB Master 1 selected for destination transfer.
        };
        namespace dValC{
            constexpr MPL::Value<dVal,dVal::ahbMaster0Selecte> ahbMaster0Selecte{};
            constexpr MPL::Value<dVal,dVal::ahbMaster1Selecte> ahbMaster1Selecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,dVal> d{}; 
        ///Source increment:
        enum class siVal {
            notIncrement=0x00000000,     ///<The source address is not incremented after each transfer.
            increment=0x00000001,     ///<The source address is incremented after each transfer.
        };
        namespace siValC{
            constexpr MPL::Value<siVal,siVal::notIncrement> notIncrement{};
            constexpr MPL::Value<siVal,siVal::increment> increment{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,siVal> si{}; 
        ///Destination increment:
        enum class diVal {
            theDestinationAddr=0x00000000,     ///<The destination address is not incremented after each transfer.
            theDestinationAddr=0x00000001,     ///<The destination address is incremented after each transfer.
        };
        namespace diValC{
            constexpr MPL::Value<diVal,diVal::theDestinationAddr> theDestinationAddr{};
            constexpr MPL::Value<diVal,diVal::theDestinationAddr> theDestinationAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,diVal> di{}; 
        ///Indicates that the access is in user mode or privileged mode:
        enum class prot1Val {
            accessIsInUserMo=0x00000000,     ///<Access is in user mode
            accessIsInPrivile=0x00000001,     ///<Access is in privileged mode.
        };
        namespace prot1ValC{
            constexpr MPL::Value<prot1Val,prot1Val::accessIsInUserMo> accessIsInUserMo{};
            constexpr MPL::Value<prot1Val,prot1Val::accessIsInPrivile> accessIsInPrivile{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,prot1Val> prot1{}; 
        ///Indicates that the access is bufferable or not bufferable:
        enum class prot2Val {
            accessIsNotBuffer=0x00000000,     ///<Access is not bufferable.
            accessIsBufferable=0x00000001,     ///<Access is bufferable.
        };
        namespace prot2ValC{
            constexpr MPL::Value<prot2Val,prot2Val::accessIsNotBuffer> accessIsNotBuffer{};
            constexpr MPL::Value<prot2Val,prot2Val::accessIsBufferable> accessIsBufferable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,prot2Val> prot2{}; 
        ///Indicates that the access is cacheable or not cacheable:
        enum class prot3Val {
            accessIsNotCachea=0x00000000,     ///<Access is not cacheable.
            accessIsCacheable=0x00000001,     ///<Access is cacheable.
        };
        namespace prot3ValC{
            constexpr MPL::Value<prot3Val,prot3Val::accessIsNotCachea> accessIsNotCachea{};
            constexpr MPL::Value<prot3Val,prot3Val::accessIsCacheable> accessIsCacheable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,prot3Val> prot3{}; 
        ///Terminal count interrupt enable bit.
        enum class iVal {
            theTerminalCountI=0x00000000,     ///<The terminal count interrupt is disabled.
            theTerminalCountI=0x00000001,     ///<The terminal count interrupt is enabled.
        };
        namespace iValC{
            constexpr MPL::Value<iVal,iVal::theTerminalCountI> theTerminalCountI{};
            constexpr MPL::Value<iVal,iVal::theTerminalCountI> theTerminalCountI{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,iVal> i{}; 
    }
    namespace Nonec7control{    ///<DMA Channel  Control Register
        using Addr = Register::Address<0x400021ec,0x00000000,0,unsigned>;
        ///Transfer size in byte. A write to this field sets the size of the transfer when the DMA Controller is the flow controller. The transfer size value must be set before the channel is enabled. Transfer size is updated as data transfers are completed. A read from this field indicates the number of transfers completed on the destination bus. Reading the register when the channel is active does not give useful information because by the time that the software has processed the value read, the channel might have progressed. It is intended to be used only when a channel is enabled and then disabled. The transfer size value is not used if the DMA Controller is not the flow controller.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> transfersize{}; 
        ///Source burst size. Indicates the number of transfers that make up a source burst. This value must be set to the burst size of the source peripheral, or if the source is memory, to the memory boundary size (see Figure 3). The burst size is the amount of data that is transferred when the BREQ signal goes active in the source peripheral.
        enum class sbsizeVal {
            sourceBurst1=0x00000000,     ///<Source burst size = 1
            sourceBurst4=0x00000001,     ///<Source burst size = 4
            sourceBurst8=0x00000002,     ///<Source burst size = 8
            sourceBurst16=0x00000003,     ///<Source burst size = 16
            sourceBurst32=0x00000004,     ///<Source burst size = 32
            sourceBurst64=0x00000005,     ///<Source burst size = 64
            sourceBurst128=0x00000006,     ///<Source burst size = 128
            sourceBurst256=0x00000007,     ///<Source burst size = 256
        };
        namespace sbsizeValC{
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst1> sourceBurst1{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst4> sourceBurst4{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst8> sourceBurst8{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst16> sourceBurst16{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst32> sourceBurst32{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst64> sourceBurst64{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst128> sourceBurst128{};
            constexpr MPL::Value<sbsizeVal,sbsizeVal::sourceBurst256> sourceBurst256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,sbsizeVal> sbsize{}; 
        ///Destination burst size. Indicates the number of transfers that make up a destination burst transfer request. This value must be set to the burst size of the destination peripheral or, if the destination is memory, to the memory boundary size. The burst size is the amount of data that is transferred when the BREQ signal goes active in the destination peripheral.
        enum class dbsizeVal {
            destinationBurst1=0x00000000,     ///<Destination burst size = 1
            destinationBurst4=0x00000001,     ///<Destination burst size = 4
            destinationBurst8=0x00000002,     ///<Destination burst size = 8
            destinationBurst16=0x00000003,     ///<Destination burst size = 16
            destinationBurst32=0x00000004,     ///<Destination burst size = 32
            destinationBurst64=0x00000005,     ///<Destination burst size = 64
            destinationBurst128=0x00000006,     ///<Destination burst size = 128
            destinationBurst256=0x00000007,     ///<Destination burst size = 256
        };
        namespace dbsizeValC{
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst1> destinationBurst1{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst4> destinationBurst4{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst8> destinationBurst8{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst16> destinationBurst16{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst32> destinationBurst32{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst64> destinationBurst64{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst128> destinationBurst128{};
            constexpr MPL::Value<dbsizeVal,dbsizeVal::destinationBurst256> destinationBurst256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,dbsizeVal> dbsize{}; 
        ///Source transfer width. Transfers wider than the AHB master bus width are illegal. The source and destination widths can be different from each other. The hardware automatically packs and unpacks the data as required. 0x3 to 0x7 - Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> swidth{}; 
        ///Destination transfer width. Transfers wider than the AHB master bus width are not supported. The source and destination widths can be different from each other. The hardware automatically packs and unpacks the data as required. 0x3 to 0x7 - Reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///Source AHB master select:
        enum class sVal {
            ahbMaster0Selecte=0x00000000,     ///<AHB Master 0 selected for source transfer.
            ahbMaster1Selecte=0x00000001,     ///<AHB Master 1 selected for source transfer.
        };
        namespace sValC{
            constexpr MPL::Value<sVal,sVal::ahbMaster0Selecte> ahbMaster0Selecte{};
            constexpr MPL::Value<sVal,sVal::ahbMaster1Selecte> ahbMaster1Selecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,sVal> s{}; 
        ///Destination AHB master select: Only Master1 can access a peripheral. Master0 can only access memory.
        enum class dVal {
            ahbMaster0Selecte=0x00000000,     ///<AHB Master 0 selected for destination transfer.
            ahbMaster1Selecte=0x00000001,     ///<AHB Master 1 selected for destination transfer.
        };
        namespace dValC{
            constexpr MPL::Value<dVal,dVal::ahbMaster0Selecte> ahbMaster0Selecte{};
            constexpr MPL::Value<dVal,dVal::ahbMaster1Selecte> ahbMaster1Selecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,dVal> d{}; 
        ///Source increment:
        enum class siVal {
            notIncrement=0x00000000,     ///<The source address is not incremented after each transfer.
            increment=0x00000001,     ///<The source address is incremented after each transfer.
        };
        namespace siValC{
            constexpr MPL::Value<siVal,siVal::notIncrement> notIncrement{};
            constexpr MPL::Value<siVal,siVal::increment> increment{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,siVal> si{}; 
        ///Destination increment:
        enum class diVal {
            theDestinationAddr=0x00000000,     ///<The destination address is not incremented after each transfer.
            theDestinationAddr=0x00000001,     ///<The destination address is incremented after each transfer.
        };
        namespace diValC{
            constexpr MPL::Value<diVal,diVal::theDestinationAddr> theDestinationAddr{};
            constexpr MPL::Value<diVal,diVal::theDestinationAddr> theDestinationAddr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,diVal> di{}; 
        ///Indicates that the access is in user mode or privileged mode:
        enum class prot1Val {
            accessIsInUserMo=0x00000000,     ///<Access is in user mode
            accessIsInPrivile=0x00000001,     ///<Access is in privileged mode.
        };
        namespace prot1ValC{
            constexpr MPL::Value<prot1Val,prot1Val::accessIsInUserMo> accessIsInUserMo{};
            constexpr MPL::Value<prot1Val,prot1Val::accessIsInPrivile> accessIsInPrivile{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,prot1Val> prot1{}; 
        ///Indicates that the access is bufferable or not bufferable:
        enum class prot2Val {
            accessIsNotBuffer=0x00000000,     ///<Access is not bufferable.
            accessIsBufferable=0x00000001,     ///<Access is bufferable.
        };
        namespace prot2ValC{
            constexpr MPL::Value<prot2Val,prot2Val::accessIsNotBuffer> accessIsNotBuffer{};
            constexpr MPL::Value<prot2Val,prot2Val::accessIsBufferable> accessIsBufferable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,prot2Val> prot2{}; 
        ///Indicates that the access is cacheable or not cacheable:
        enum class prot3Val {
            accessIsNotCachea=0x00000000,     ///<Access is not cacheable.
            accessIsCacheable=0x00000001,     ///<Access is cacheable.
        };
        namespace prot3ValC{
            constexpr MPL::Value<prot3Val,prot3Val::accessIsNotCachea> accessIsNotCachea{};
            constexpr MPL::Value<prot3Val,prot3Val::accessIsCacheable> accessIsCacheable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,prot3Val> prot3{}; 
        ///Terminal count interrupt enable bit.
        enum class iVal {
            theTerminalCountI=0x00000000,     ///<The terminal count interrupt is disabled.
            theTerminalCountI=0x00000001,     ///<The terminal count interrupt is enabled.
        };
        namespace iValC{
            constexpr MPL::Value<iVal,iVal::theTerminalCountI> theTerminalCountI{};
            constexpr MPL::Value<iVal,iVal::theTerminalCountI> theTerminalCountI{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,iVal> i{}; 
    }
    namespace Nonec0config{    ///<DMA Channel Configuration Register
        using Addr = Register::Address<0x40002110,0xfff80000,0,unsigned>;
        ///Channel enable. Reading this bit indicates whether a channel is currently enabled or disabled: The Channel Enable bit status can also be found by reading the EnbldChns Register. A channel can be disabled by clearing the Enable bit. This causes the current AHB transfer (if one is in progress) to complete and the channel is then disabled. Any data in the FIFO of the relevant channel is lost. Restarting the channel by setting the Channel Enable bit has unpredictable effects, the channel must be fully re-initialized. The channel is also disabled, and Channel Enable bit cleared, when the last LLI is reached, the DMA transfer is completed, or if a channel error is encountered. If a channel must be disabled without losing data in the FIFO, the Halt bit must be set so that further DMA requests are ignored. The Active bit must then be polled until it reaches 0, indicating that there is no data left in the FIFO. Finally, the Channel Enable bit can be cleared.
        enum class eVal {
            channelDisabled=0x00000000,     ///<Channel disabled.
            channelEnabled=0x00000001,     ///<Channel enabled.
        };
        namespace eValC{
            constexpr MPL::Value<eVal,eVal::channelDisabled> channelDisabled{};
            constexpr MPL::Value<eVal,eVal::channelEnabled> channelEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,eVal> e{}; 
        ///Source peripheral. This value selects the DMA source request peripheral. This field is ignored if the source of the transfer is from memory. See Table 136 for details.
        enum class srcperipheralVal {
            sourceEqSpifi=0x00000000,     ///<Source = SPIFI
            sourceEqTimer0Mat=0x00000001,     ///<Source = Timer 0 match 0/UART0 transmit
            sourceEqTimer0Mat=0x00000002,     ///<Source = Timer 0 match 1/UART0 receive
            sourceEqTimer1Mat=0x00000003,     ///<Source = Timer 1 match 0/UART1 transmit
            sourceEqTimer1Mat=0x00000004,     ///<Source = Timer 1 match 1/UART 1 receive
            sourceEqTimer2Mat=0x00000005,     ///<Source = Timer 2 match 0/UART 2 transmit
            sourceEqTimer2Mat=0x00000006,     ///<Source = Timer 2 match 1/UART 2 receive
            sourceEqTimer3Mat=0x00000007,     ///<Source = Timer 3 match 0/UART3 transmit/SCT DMA request 0
            sourceEqTimer3Mat=0x00000008,     ///<Source = Timer 3 match 1/UART3 receive/SCT DMA request 1
            sourceEqSsp0Receiv=0x00000009,     ///<Source = SSP0 receive/I2S channel 0
            sourceEqSsp0Transm=0x0000000a,     ///<Source = SSP0 transmit/I2S channel 1
            sourceEqSsp1Receiv=0x0000000b,     ///<Source = SSP1 receive
            sourceEqSsp1Transm=0x0000000c,     ///<Source = SSP1 transmit
            sourceEqAdc0=0x0000000d,     ///<Source = ADC0
            sourceEqAdc1=0x0000000e,     ///<Source = ADC1
            sourceEqDac=0x0000000f,     ///<Source = DAC
        };
        namespace srcperipheralValC{
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSpifi> sourceEqSpifi{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer0Mat> sourceEqTimer0Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer0Mat> sourceEqTimer0Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer1Mat> sourceEqTimer1Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer1Mat> sourceEqTimer1Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer2Mat> sourceEqTimer2Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer2Mat> sourceEqTimer2Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer3Mat> sourceEqTimer3Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer3Mat> sourceEqTimer3Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp0Receiv> sourceEqSsp0Receiv{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp0Transm> sourceEqSsp0Transm{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp1Receiv> sourceEqSsp1Receiv{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp1Transm> sourceEqSsp1Transm{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqAdc0> sourceEqAdc0{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqAdc1> sourceEqAdc1{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqDac> sourceEqDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1),Register::ReadWriteAccess,srcperipheralVal> srcperipheral{}; 
        ///Destination peripheral. This value selects the DMA destination request peripheral. This field is ignored if the destination of the transfer is to memory. See Table 136 for details.
        enum class destperipheralVal {
            destinationEqSpifi=0x00000000,     ///<Destination = SPIFI
            destinationEqTimer=0x00000001,     ///<Destination = Timer 0 match 0/UART0 transmit
            destinationEqTimer=0x00000002,     ///<Destination = Timer 0 match 1/UART0 receive
            destinationEqTimer=0x00000003,     ///<Destination = Timer 1 match 0/UART1 transmit
            destinationEqTimer=0x00000004,     ///<Destination = Timer 1 match 1/UART 1 receive
            destinationEqTimer=0x00000005,     ///<Destination = Timer 2 match 0/UART 2 transmit
            destinationEqTimer=0x00000006,     ///<Destination = Timer 2 match 1/UART 2 receive
            destinationEqTimer=0x00000007,     ///<Destination = Timer 3 match 0/UART3 transmit/SCT DMA request 0
            destinationEqTimer=0x00000008,     ///<Destination = Timer 3 match 1/UART3 receive/SCT DMA request 1
            destinationEqSsp0R=0x00000009,     ///<Destination = SSP0 receive/I2S channel 0
            destinationEqSsp0T=0x0000000a,     ///<Destination = SSP0 transmit/I2S channel 1
            destinationEqSsp1R=0x0000000b,     ///<Destination = SSP1 receive
            destinationEqSsp1T=0x0000000c,     ///<Destination = SSP1 transmit
            destinationEqAdc0=0x0000000d,     ///<Destination = ADC0
            destinationEqAdc1=0x0000000e,     ///<Destination = ADC1
            destinationEqDac=0x0000000f,     ///<Destination = DAC
        };
        namespace destperipheralValC{
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSpifi> destinationEqSpifi{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp0R> destinationEqSsp0R{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp0T> destinationEqSsp0T{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp1R> destinationEqSsp1R{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp1T> destinationEqSsp1T{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqAdc0> destinationEqAdc0{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqAdc1> destinationEqAdc1{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqDac> destinationEqDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,destperipheralVal> destperipheral{}; 
        ///Flow control and transfer type. This value indicates the flow controller and transfer type. The flow controller can be the DMA Controller, the source peripheral, or the destination peripheral. The transfer type can be memory-to-memory, memory-to-peripheral, peripheral-to-memory, or peripheral-to-peripheral. Refer to Table 157 for the encoding of this field.
        enum class flowcntrlVal {
            memoryToMemoryDm=0x00000000,     ///<Memory to memory (DMA control)
            memoryToPeripheral=0x00000001,     ///<Memory to peripheral (DMA control)
            peripheralToMemory=0x00000002,     ///<Peripheral to memory (DMA control)
            sourcePeripheralTo=0x00000003,     ///<Source peripheral to destination peripheral (DMA control)
            sourcePeripheralTo=0x00000004,     ///<Source peripheral to destination peripheral (destination control)
            memoryToPeripheral=0x00000005,     ///<Memory to peripheral (peripheral control)
            peripheralToMemory=0x00000006,     ///<Peripheral to memory (peripheral control)
            sourcePeripheralTo=0x00000007,     ///<Source peripheral to destination peripheral (source control)
        };
        namespace flowcntrlValC{
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToMemoryDm> memoryToMemoryDm{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToPeripheral> memoryToPeripheral{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::peripheralToMemory> peripheralToMemory{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToPeripheral> memoryToPeripheral{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::peripheralToMemory> peripheralToMemory{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,flowcntrlVal> flowcntrl{}; 
        ///Interrupt error mask. When cleared, this bit masks out the error interrupt of the relevant channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ie{}; 
        ///Terminal count interrupt mask. When cleared, this bit masks out the terminal count interrupt of the relevant channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> itc{}; 
        ///Lock. When set, this bit enables locked transfers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> l{}; 
        ///Active: 0 = there is no data in the FIFO of the channel. 1 = the channel FIFO has data. This value can be used with the Halt and Channel Enable bits to cleanly disable a DMA channel. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> a{}; 
        ///Halt: 0 = enable DMA requests. 1 = ignore further source DMA requests. The contents of the channel FIFO are drained. This value can be used with the Active and Channel Enable bits to cleanly disable a DMA channel.
        enum class hVal {
            enableDmaRequests=0x00000000,     ///<Enable DMA requests.
            ignoreFurtherSourc=0x00000001,     ///<Ignore further source DMA requests.
        };
        namespace hValC{
            constexpr MPL::Value<hVal,hVal::enableDmaRequests> enableDmaRequests{};
            constexpr MPL::Value<hVal,hVal::ignoreFurtherSourc> ignoreFurtherSourc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,hVal> h{}; 
    }
    namespace Nonec1config{    ///<DMA Channel Configuration Register
        using Addr = Register::Address<0x40002130,0xfff80000,0,unsigned>;
        ///Channel enable. Reading this bit indicates whether a channel is currently enabled or disabled: The Channel Enable bit status can also be found by reading the EnbldChns Register. A channel can be disabled by clearing the Enable bit. This causes the current AHB transfer (if one is in progress) to complete and the channel is then disabled. Any data in the FIFO of the relevant channel is lost. Restarting the channel by setting the Channel Enable bit has unpredictable effects, the channel must be fully re-initialized. The channel is also disabled, and Channel Enable bit cleared, when the last LLI is reached, the DMA transfer is completed, or if a channel error is encountered. If a channel must be disabled without losing data in the FIFO, the Halt bit must be set so that further DMA requests are ignored. The Active bit must then be polled until it reaches 0, indicating that there is no data left in the FIFO. Finally, the Channel Enable bit can be cleared.
        enum class eVal {
            channelDisabled=0x00000000,     ///<Channel disabled.
            channelEnabled=0x00000001,     ///<Channel enabled.
        };
        namespace eValC{
            constexpr MPL::Value<eVal,eVal::channelDisabled> channelDisabled{};
            constexpr MPL::Value<eVal,eVal::channelEnabled> channelEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,eVal> e{}; 
        ///Source peripheral. This value selects the DMA source request peripheral. This field is ignored if the source of the transfer is from memory. See Table 136 for details.
        enum class srcperipheralVal {
            sourceEqSpifi=0x00000000,     ///<Source = SPIFI
            sourceEqTimer0Mat=0x00000001,     ///<Source = Timer 0 match 0/UART0 transmit
            sourceEqTimer0Mat=0x00000002,     ///<Source = Timer 0 match 1/UART0 receive
            sourceEqTimer1Mat=0x00000003,     ///<Source = Timer 1 match 0/UART1 transmit
            sourceEqTimer1Mat=0x00000004,     ///<Source = Timer 1 match 1/UART 1 receive
            sourceEqTimer2Mat=0x00000005,     ///<Source = Timer 2 match 0/UART 2 transmit
            sourceEqTimer2Mat=0x00000006,     ///<Source = Timer 2 match 1/UART 2 receive
            sourceEqTimer3Mat=0x00000007,     ///<Source = Timer 3 match 0/UART3 transmit/SCT DMA request 0
            sourceEqTimer3Mat=0x00000008,     ///<Source = Timer 3 match 1/UART3 receive/SCT DMA request 1
            sourceEqSsp0Receiv=0x00000009,     ///<Source = SSP0 receive/I2S channel 0
            sourceEqSsp0Transm=0x0000000a,     ///<Source = SSP0 transmit/I2S channel 1
            sourceEqSsp1Receiv=0x0000000b,     ///<Source = SSP1 receive
            sourceEqSsp1Transm=0x0000000c,     ///<Source = SSP1 transmit
            sourceEqAdc0=0x0000000d,     ///<Source = ADC0
            sourceEqAdc1=0x0000000e,     ///<Source = ADC1
            sourceEqDac=0x0000000f,     ///<Source = DAC
        };
        namespace srcperipheralValC{
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSpifi> sourceEqSpifi{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer0Mat> sourceEqTimer0Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer0Mat> sourceEqTimer0Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer1Mat> sourceEqTimer1Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer1Mat> sourceEqTimer1Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer2Mat> sourceEqTimer2Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer2Mat> sourceEqTimer2Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer3Mat> sourceEqTimer3Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer3Mat> sourceEqTimer3Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp0Receiv> sourceEqSsp0Receiv{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp0Transm> sourceEqSsp0Transm{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp1Receiv> sourceEqSsp1Receiv{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp1Transm> sourceEqSsp1Transm{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqAdc0> sourceEqAdc0{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqAdc1> sourceEqAdc1{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqDac> sourceEqDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1),Register::ReadWriteAccess,srcperipheralVal> srcperipheral{}; 
        ///Destination peripheral. This value selects the DMA destination request peripheral. This field is ignored if the destination of the transfer is to memory. See Table 136 for details.
        enum class destperipheralVal {
            destinationEqSpifi=0x00000000,     ///<Destination = SPIFI
            destinationEqTimer=0x00000001,     ///<Destination = Timer 0 match 0/UART0 transmit
            destinationEqTimer=0x00000002,     ///<Destination = Timer 0 match 1/UART0 receive
            destinationEqTimer=0x00000003,     ///<Destination = Timer 1 match 0/UART1 transmit
            destinationEqTimer=0x00000004,     ///<Destination = Timer 1 match 1/UART 1 receive
            destinationEqTimer=0x00000005,     ///<Destination = Timer 2 match 0/UART 2 transmit
            destinationEqTimer=0x00000006,     ///<Destination = Timer 2 match 1/UART 2 receive
            destinationEqTimer=0x00000007,     ///<Destination = Timer 3 match 0/UART3 transmit/SCT DMA request 0
            destinationEqTimer=0x00000008,     ///<Destination = Timer 3 match 1/UART3 receive/SCT DMA request 1
            destinationEqSsp0R=0x00000009,     ///<Destination = SSP0 receive/I2S channel 0
            destinationEqSsp0T=0x0000000a,     ///<Destination = SSP0 transmit/I2S channel 1
            destinationEqSsp1R=0x0000000b,     ///<Destination = SSP1 receive
            destinationEqSsp1T=0x0000000c,     ///<Destination = SSP1 transmit
            destinationEqAdc0=0x0000000d,     ///<Destination = ADC0
            destinationEqAdc1=0x0000000e,     ///<Destination = ADC1
            destinationEqDac=0x0000000f,     ///<Destination = DAC
        };
        namespace destperipheralValC{
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSpifi> destinationEqSpifi{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp0R> destinationEqSsp0R{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp0T> destinationEqSsp0T{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp1R> destinationEqSsp1R{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp1T> destinationEqSsp1T{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqAdc0> destinationEqAdc0{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqAdc1> destinationEqAdc1{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqDac> destinationEqDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,destperipheralVal> destperipheral{}; 
        ///Flow control and transfer type. This value indicates the flow controller and transfer type. The flow controller can be the DMA Controller, the source peripheral, or the destination peripheral. The transfer type can be memory-to-memory, memory-to-peripheral, peripheral-to-memory, or peripheral-to-peripheral. Refer to Table 157 for the encoding of this field.
        enum class flowcntrlVal {
            memoryToMemoryDm=0x00000000,     ///<Memory to memory (DMA control)
            memoryToPeripheral=0x00000001,     ///<Memory to peripheral (DMA control)
            peripheralToMemory=0x00000002,     ///<Peripheral to memory (DMA control)
            sourcePeripheralTo=0x00000003,     ///<Source peripheral to destination peripheral (DMA control)
            sourcePeripheralTo=0x00000004,     ///<Source peripheral to destination peripheral (destination control)
            memoryToPeripheral=0x00000005,     ///<Memory to peripheral (peripheral control)
            peripheralToMemory=0x00000006,     ///<Peripheral to memory (peripheral control)
            sourcePeripheralTo=0x00000007,     ///<Source peripheral to destination peripheral (source control)
        };
        namespace flowcntrlValC{
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToMemoryDm> memoryToMemoryDm{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToPeripheral> memoryToPeripheral{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::peripheralToMemory> peripheralToMemory{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToPeripheral> memoryToPeripheral{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::peripheralToMemory> peripheralToMemory{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,flowcntrlVal> flowcntrl{}; 
        ///Interrupt error mask. When cleared, this bit masks out the error interrupt of the relevant channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ie{}; 
        ///Terminal count interrupt mask. When cleared, this bit masks out the terminal count interrupt of the relevant channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> itc{}; 
        ///Lock. When set, this bit enables locked transfers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> l{}; 
        ///Active: 0 = there is no data in the FIFO of the channel. 1 = the channel FIFO has data. This value can be used with the Halt and Channel Enable bits to cleanly disable a DMA channel. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> a{}; 
        ///Halt: 0 = enable DMA requests. 1 = ignore further source DMA requests. The contents of the channel FIFO are drained. This value can be used with the Active and Channel Enable bits to cleanly disable a DMA channel.
        enum class hVal {
            enableDmaRequests=0x00000000,     ///<Enable DMA requests.
            ignoreFurtherSourc=0x00000001,     ///<Ignore further source DMA requests.
        };
        namespace hValC{
            constexpr MPL::Value<hVal,hVal::enableDmaRequests> enableDmaRequests{};
            constexpr MPL::Value<hVal,hVal::ignoreFurtherSourc> ignoreFurtherSourc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,hVal> h{}; 
    }
    namespace Nonec2config{    ///<DMA Channel Configuration Register
        using Addr = Register::Address<0x40002150,0xfff80000,0,unsigned>;
        ///Channel enable. Reading this bit indicates whether a channel is currently enabled or disabled: The Channel Enable bit status can also be found by reading the EnbldChns Register. A channel can be disabled by clearing the Enable bit. This causes the current AHB transfer (if one is in progress) to complete and the channel is then disabled. Any data in the FIFO of the relevant channel is lost. Restarting the channel by setting the Channel Enable bit has unpredictable effects, the channel must be fully re-initialized. The channel is also disabled, and Channel Enable bit cleared, when the last LLI is reached, the DMA transfer is completed, or if a channel error is encountered. If a channel must be disabled without losing data in the FIFO, the Halt bit must be set so that further DMA requests are ignored. The Active bit must then be polled until it reaches 0, indicating that there is no data left in the FIFO. Finally, the Channel Enable bit can be cleared.
        enum class eVal {
            channelDisabled=0x00000000,     ///<Channel disabled.
            channelEnabled=0x00000001,     ///<Channel enabled.
        };
        namespace eValC{
            constexpr MPL::Value<eVal,eVal::channelDisabled> channelDisabled{};
            constexpr MPL::Value<eVal,eVal::channelEnabled> channelEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,eVal> e{}; 
        ///Source peripheral. This value selects the DMA source request peripheral. This field is ignored if the source of the transfer is from memory. See Table 136 for details.
        enum class srcperipheralVal {
            sourceEqSpifi=0x00000000,     ///<Source = SPIFI
            sourceEqTimer0Mat=0x00000001,     ///<Source = Timer 0 match 0/UART0 transmit
            sourceEqTimer0Mat=0x00000002,     ///<Source = Timer 0 match 1/UART0 receive
            sourceEqTimer1Mat=0x00000003,     ///<Source = Timer 1 match 0/UART1 transmit
            sourceEqTimer1Mat=0x00000004,     ///<Source = Timer 1 match 1/UART 1 receive
            sourceEqTimer2Mat=0x00000005,     ///<Source = Timer 2 match 0/UART 2 transmit
            sourceEqTimer2Mat=0x00000006,     ///<Source = Timer 2 match 1/UART 2 receive
            sourceEqTimer3Mat=0x00000007,     ///<Source = Timer 3 match 0/UART3 transmit/SCT DMA request 0
            sourceEqTimer3Mat=0x00000008,     ///<Source = Timer 3 match 1/UART3 receive/SCT DMA request 1
            sourceEqSsp0Receiv=0x00000009,     ///<Source = SSP0 receive/I2S channel 0
            sourceEqSsp0Transm=0x0000000a,     ///<Source = SSP0 transmit/I2S channel 1
            sourceEqSsp1Receiv=0x0000000b,     ///<Source = SSP1 receive
            sourceEqSsp1Transm=0x0000000c,     ///<Source = SSP1 transmit
            sourceEqAdc0=0x0000000d,     ///<Source = ADC0
            sourceEqAdc1=0x0000000e,     ///<Source = ADC1
            sourceEqDac=0x0000000f,     ///<Source = DAC
        };
        namespace srcperipheralValC{
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSpifi> sourceEqSpifi{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer0Mat> sourceEqTimer0Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer0Mat> sourceEqTimer0Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer1Mat> sourceEqTimer1Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer1Mat> sourceEqTimer1Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer2Mat> sourceEqTimer2Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer2Mat> sourceEqTimer2Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer3Mat> sourceEqTimer3Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer3Mat> sourceEqTimer3Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp0Receiv> sourceEqSsp0Receiv{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp0Transm> sourceEqSsp0Transm{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp1Receiv> sourceEqSsp1Receiv{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp1Transm> sourceEqSsp1Transm{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqAdc0> sourceEqAdc0{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqAdc1> sourceEqAdc1{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqDac> sourceEqDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1),Register::ReadWriteAccess,srcperipheralVal> srcperipheral{}; 
        ///Destination peripheral. This value selects the DMA destination request peripheral. This field is ignored if the destination of the transfer is to memory. See Table 136 for details.
        enum class destperipheralVal {
            destinationEqSpifi=0x00000000,     ///<Destination = SPIFI
            destinationEqTimer=0x00000001,     ///<Destination = Timer 0 match 0/UART0 transmit
            destinationEqTimer=0x00000002,     ///<Destination = Timer 0 match 1/UART0 receive
            destinationEqTimer=0x00000003,     ///<Destination = Timer 1 match 0/UART1 transmit
            destinationEqTimer=0x00000004,     ///<Destination = Timer 1 match 1/UART 1 receive
            destinationEqTimer=0x00000005,     ///<Destination = Timer 2 match 0/UART 2 transmit
            destinationEqTimer=0x00000006,     ///<Destination = Timer 2 match 1/UART 2 receive
            destinationEqTimer=0x00000007,     ///<Destination = Timer 3 match 0/UART3 transmit/SCT DMA request 0
            destinationEqTimer=0x00000008,     ///<Destination = Timer 3 match 1/UART3 receive/SCT DMA request 1
            destinationEqSsp0R=0x00000009,     ///<Destination = SSP0 receive/I2S channel 0
            destinationEqSsp0T=0x0000000a,     ///<Destination = SSP0 transmit/I2S channel 1
            destinationEqSsp1R=0x0000000b,     ///<Destination = SSP1 receive
            destinationEqSsp1T=0x0000000c,     ///<Destination = SSP1 transmit
            destinationEqAdc0=0x0000000d,     ///<Destination = ADC0
            destinationEqAdc1=0x0000000e,     ///<Destination = ADC1
            destinationEqDac=0x0000000f,     ///<Destination = DAC
        };
        namespace destperipheralValC{
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSpifi> destinationEqSpifi{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp0R> destinationEqSsp0R{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp0T> destinationEqSsp0T{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp1R> destinationEqSsp1R{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp1T> destinationEqSsp1T{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqAdc0> destinationEqAdc0{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqAdc1> destinationEqAdc1{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqDac> destinationEqDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,destperipheralVal> destperipheral{}; 
        ///Flow control and transfer type. This value indicates the flow controller and transfer type. The flow controller can be the DMA Controller, the source peripheral, or the destination peripheral. The transfer type can be memory-to-memory, memory-to-peripheral, peripheral-to-memory, or peripheral-to-peripheral. Refer to Table 157 for the encoding of this field.
        enum class flowcntrlVal {
            memoryToMemoryDm=0x00000000,     ///<Memory to memory (DMA control)
            memoryToPeripheral=0x00000001,     ///<Memory to peripheral (DMA control)
            peripheralToMemory=0x00000002,     ///<Peripheral to memory (DMA control)
            sourcePeripheralTo=0x00000003,     ///<Source peripheral to destination peripheral (DMA control)
            sourcePeripheralTo=0x00000004,     ///<Source peripheral to destination peripheral (destination control)
            memoryToPeripheral=0x00000005,     ///<Memory to peripheral (peripheral control)
            peripheralToMemory=0x00000006,     ///<Peripheral to memory (peripheral control)
            sourcePeripheralTo=0x00000007,     ///<Source peripheral to destination peripheral (source control)
        };
        namespace flowcntrlValC{
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToMemoryDm> memoryToMemoryDm{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToPeripheral> memoryToPeripheral{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::peripheralToMemory> peripheralToMemory{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToPeripheral> memoryToPeripheral{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::peripheralToMemory> peripheralToMemory{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,flowcntrlVal> flowcntrl{}; 
        ///Interrupt error mask. When cleared, this bit masks out the error interrupt of the relevant channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ie{}; 
        ///Terminal count interrupt mask. When cleared, this bit masks out the terminal count interrupt of the relevant channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> itc{}; 
        ///Lock. When set, this bit enables locked transfers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> l{}; 
        ///Active: 0 = there is no data in the FIFO of the channel. 1 = the channel FIFO has data. This value can be used with the Halt and Channel Enable bits to cleanly disable a DMA channel. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> a{}; 
        ///Halt: 0 = enable DMA requests. 1 = ignore further source DMA requests. The contents of the channel FIFO are drained. This value can be used with the Active and Channel Enable bits to cleanly disable a DMA channel.
        enum class hVal {
            enableDmaRequests=0x00000000,     ///<Enable DMA requests.
            ignoreFurtherSourc=0x00000001,     ///<Ignore further source DMA requests.
        };
        namespace hValC{
            constexpr MPL::Value<hVal,hVal::enableDmaRequests> enableDmaRequests{};
            constexpr MPL::Value<hVal,hVal::ignoreFurtherSourc> ignoreFurtherSourc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,hVal> h{}; 
    }
    namespace Nonec3config{    ///<DMA Channel Configuration Register
        using Addr = Register::Address<0x40002170,0xfff80000,0,unsigned>;
        ///Channel enable. Reading this bit indicates whether a channel is currently enabled or disabled: The Channel Enable bit status can also be found by reading the EnbldChns Register. A channel can be disabled by clearing the Enable bit. This causes the current AHB transfer (if one is in progress) to complete and the channel is then disabled. Any data in the FIFO of the relevant channel is lost. Restarting the channel by setting the Channel Enable bit has unpredictable effects, the channel must be fully re-initialized. The channel is also disabled, and Channel Enable bit cleared, when the last LLI is reached, the DMA transfer is completed, or if a channel error is encountered. If a channel must be disabled without losing data in the FIFO, the Halt bit must be set so that further DMA requests are ignored. The Active bit must then be polled until it reaches 0, indicating that there is no data left in the FIFO. Finally, the Channel Enable bit can be cleared.
        enum class eVal {
            channelDisabled=0x00000000,     ///<Channel disabled.
            channelEnabled=0x00000001,     ///<Channel enabled.
        };
        namespace eValC{
            constexpr MPL::Value<eVal,eVal::channelDisabled> channelDisabled{};
            constexpr MPL::Value<eVal,eVal::channelEnabled> channelEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,eVal> e{}; 
        ///Source peripheral. This value selects the DMA source request peripheral. This field is ignored if the source of the transfer is from memory. See Table 136 for details.
        enum class srcperipheralVal {
            sourceEqSpifi=0x00000000,     ///<Source = SPIFI
            sourceEqTimer0Mat=0x00000001,     ///<Source = Timer 0 match 0/UART0 transmit
            sourceEqTimer0Mat=0x00000002,     ///<Source = Timer 0 match 1/UART0 receive
            sourceEqTimer1Mat=0x00000003,     ///<Source = Timer 1 match 0/UART1 transmit
            sourceEqTimer1Mat=0x00000004,     ///<Source = Timer 1 match 1/UART 1 receive
            sourceEqTimer2Mat=0x00000005,     ///<Source = Timer 2 match 0/UART 2 transmit
            sourceEqTimer2Mat=0x00000006,     ///<Source = Timer 2 match 1/UART 2 receive
            sourceEqTimer3Mat=0x00000007,     ///<Source = Timer 3 match 0/UART3 transmit/SCT DMA request 0
            sourceEqTimer3Mat=0x00000008,     ///<Source = Timer 3 match 1/UART3 receive/SCT DMA request 1
            sourceEqSsp0Receiv=0x00000009,     ///<Source = SSP0 receive/I2S channel 0
            sourceEqSsp0Transm=0x0000000a,     ///<Source = SSP0 transmit/I2S channel 1
            sourceEqSsp1Receiv=0x0000000b,     ///<Source = SSP1 receive
            sourceEqSsp1Transm=0x0000000c,     ///<Source = SSP1 transmit
            sourceEqAdc0=0x0000000d,     ///<Source = ADC0
            sourceEqAdc1=0x0000000e,     ///<Source = ADC1
            sourceEqDac=0x0000000f,     ///<Source = DAC
        };
        namespace srcperipheralValC{
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSpifi> sourceEqSpifi{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer0Mat> sourceEqTimer0Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer0Mat> sourceEqTimer0Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer1Mat> sourceEqTimer1Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer1Mat> sourceEqTimer1Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer2Mat> sourceEqTimer2Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer2Mat> sourceEqTimer2Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer3Mat> sourceEqTimer3Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer3Mat> sourceEqTimer3Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp0Receiv> sourceEqSsp0Receiv{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp0Transm> sourceEqSsp0Transm{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp1Receiv> sourceEqSsp1Receiv{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp1Transm> sourceEqSsp1Transm{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqAdc0> sourceEqAdc0{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqAdc1> sourceEqAdc1{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqDac> sourceEqDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1),Register::ReadWriteAccess,srcperipheralVal> srcperipheral{}; 
        ///Destination peripheral. This value selects the DMA destination request peripheral. This field is ignored if the destination of the transfer is to memory. See Table 136 for details.
        enum class destperipheralVal {
            destinationEqSpifi=0x00000000,     ///<Destination = SPIFI
            destinationEqTimer=0x00000001,     ///<Destination = Timer 0 match 0/UART0 transmit
            destinationEqTimer=0x00000002,     ///<Destination = Timer 0 match 1/UART0 receive
            destinationEqTimer=0x00000003,     ///<Destination = Timer 1 match 0/UART1 transmit
            destinationEqTimer=0x00000004,     ///<Destination = Timer 1 match 1/UART 1 receive
            destinationEqTimer=0x00000005,     ///<Destination = Timer 2 match 0/UART 2 transmit
            destinationEqTimer=0x00000006,     ///<Destination = Timer 2 match 1/UART 2 receive
            destinationEqTimer=0x00000007,     ///<Destination = Timer 3 match 0/UART3 transmit/SCT DMA request 0
            destinationEqTimer=0x00000008,     ///<Destination = Timer 3 match 1/UART3 receive/SCT DMA request 1
            destinationEqSsp0R=0x00000009,     ///<Destination = SSP0 receive/I2S channel 0
            destinationEqSsp0T=0x0000000a,     ///<Destination = SSP0 transmit/I2S channel 1
            destinationEqSsp1R=0x0000000b,     ///<Destination = SSP1 receive
            destinationEqSsp1T=0x0000000c,     ///<Destination = SSP1 transmit
            destinationEqAdc0=0x0000000d,     ///<Destination = ADC0
            destinationEqAdc1=0x0000000e,     ///<Destination = ADC1
            destinationEqDac=0x0000000f,     ///<Destination = DAC
        };
        namespace destperipheralValC{
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSpifi> destinationEqSpifi{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp0R> destinationEqSsp0R{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp0T> destinationEqSsp0T{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp1R> destinationEqSsp1R{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp1T> destinationEqSsp1T{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqAdc0> destinationEqAdc0{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqAdc1> destinationEqAdc1{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqDac> destinationEqDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,destperipheralVal> destperipheral{}; 
        ///Flow control and transfer type. This value indicates the flow controller and transfer type. The flow controller can be the DMA Controller, the source peripheral, or the destination peripheral. The transfer type can be memory-to-memory, memory-to-peripheral, peripheral-to-memory, or peripheral-to-peripheral. Refer to Table 157 for the encoding of this field.
        enum class flowcntrlVal {
            memoryToMemoryDm=0x00000000,     ///<Memory to memory (DMA control)
            memoryToPeripheral=0x00000001,     ///<Memory to peripheral (DMA control)
            peripheralToMemory=0x00000002,     ///<Peripheral to memory (DMA control)
            sourcePeripheralTo=0x00000003,     ///<Source peripheral to destination peripheral (DMA control)
            sourcePeripheralTo=0x00000004,     ///<Source peripheral to destination peripheral (destination control)
            memoryToPeripheral=0x00000005,     ///<Memory to peripheral (peripheral control)
            peripheralToMemory=0x00000006,     ///<Peripheral to memory (peripheral control)
            sourcePeripheralTo=0x00000007,     ///<Source peripheral to destination peripheral (source control)
        };
        namespace flowcntrlValC{
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToMemoryDm> memoryToMemoryDm{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToPeripheral> memoryToPeripheral{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::peripheralToMemory> peripheralToMemory{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToPeripheral> memoryToPeripheral{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::peripheralToMemory> peripheralToMemory{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,flowcntrlVal> flowcntrl{}; 
        ///Interrupt error mask. When cleared, this bit masks out the error interrupt of the relevant channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ie{}; 
        ///Terminal count interrupt mask. When cleared, this bit masks out the terminal count interrupt of the relevant channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> itc{}; 
        ///Lock. When set, this bit enables locked transfers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> l{}; 
        ///Active: 0 = there is no data in the FIFO of the channel. 1 = the channel FIFO has data. This value can be used with the Halt and Channel Enable bits to cleanly disable a DMA channel. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> a{}; 
        ///Halt: 0 = enable DMA requests. 1 = ignore further source DMA requests. The contents of the channel FIFO are drained. This value can be used with the Active and Channel Enable bits to cleanly disable a DMA channel.
        enum class hVal {
            enableDmaRequests=0x00000000,     ///<Enable DMA requests.
            ignoreFurtherSourc=0x00000001,     ///<Ignore further source DMA requests.
        };
        namespace hValC{
            constexpr MPL::Value<hVal,hVal::enableDmaRequests> enableDmaRequests{};
            constexpr MPL::Value<hVal,hVal::ignoreFurtherSourc> ignoreFurtherSourc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,hVal> h{}; 
    }
    namespace Nonec4config{    ///<DMA Channel Configuration Register
        using Addr = Register::Address<0x40002190,0xfff80000,0,unsigned>;
        ///Channel enable. Reading this bit indicates whether a channel is currently enabled or disabled: The Channel Enable bit status can also be found by reading the EnbldChns Register. A channel can be disabled by clearing the Enable bit. This causes the current AHB transfer (if one is in progress) to complete and the channel is then disabled. Any data in the FIFO of the relevant channel is lost. Restarting the channel by setting the Channel Enable bit has unpredictable effects, the channel must be fully re-initialized. The channel is also disabled, and Channel Enable bit cleared, when the last LLI is reached, the DMA transfer is completed, or if a channel error is encountered. If a channel must be disabled without losing data in the FIFO, the Halt bit must be set so that further DMA requests are ignored. The Active bit must then be polled until it reaches 0, indicating that there is no data left in the FIFO. Finally, the Channel Enable bit can be cleared.
        enum class eVal {
            channelDisabled=0x00000000,     ///<Channel disabled.
            channelEnabled=0x00000001,     ///<Channel enabled.
        };
        namespace eValC{
            constexpr MPL::Value<eVal,eVal::channelDisabled> channelDisabled{};
            constexpr MPL::Value<eVal,eVal::channelEnabled> channelEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,eVal> e{}; 
        ///Source peripheral. This value selects the DMA source request peripheral. This field is ignored if the source of the transfer is from memory. See Table 136 for details.
        enum class srcperipheralVal {
            sourceEqSpifi=0x00000000,     ///<Source = SPIFI
            sourceEqTimer0Mat=0x00000001,     ///<Source = Timer 0 match 0/UART0 transmit
            sourceEqTimer0Mat=0x00000002,     ///<Source = Timer 0 match 1/UART0 receive
            sourceEqTimer1Mat=0x00000003,     ///<Source = Timer 1 match 0/UART1 transmit
            sourceEqTimer1Mat=0x00000004,     ///<Source = Timer 1 match 1/UART 1 receive
            sourceEqTimer2Mat=0x00000005,     ///<Source = Timer 2 match 0/UART 2 transmit
            sourceEqTimer2Mat=0x00000006,     ///<Source = Timer 2 match 1/UART 2 receive
            sourceEqTimer3Mat=0x00000007,     ///<Source = Timer 3 match 0/UART3 transmit/SCT DMA request 0
            sourceEqTimer3Mat=0x00000008,     ///<Source = Timer 3 match 1/UART3 receive/SCT DMA request 1
            sourceEqSsp0Receiv=0x00000009,     ///<Source = SSP0 receive/I2S channel 0
            sourceEqSsp0Transm=0x0000000a,     ///<Source = SSP0 transmit/I2S channel 1
            sourceEqSsp1Receiv=0x0000000b,     ///<Source = SSP1 receive
            sourceEqSsp1Transm=0x0000000c,     ///<Source = SSP1 transmit
            sourceEqAdc0=0x0000000d,     ///<Source = ADC0
            sourceEqAdc1=0x0000000e,     ///<Source = ADC1
            sourceEqDac=0x0000000f,     ///<Source = DAC
        };
        namespace srcperipheralValC{
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSpifi> sourceEqSpifi{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer0Mat> sourceEqTimer0Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer0Mat> sourceEqTimer0Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer1Mat> sourceEqTimer1Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer1Mat> sourceEqTimer1Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer2Mat> sourceEqTimer2Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer2Mat> sourceEqTimer2Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer3Mat> sourceEqTimer3Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer3Mat> sourceEqTimer3Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp0Receiv> sourceEqSsp0Receiv{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp0Transm> sourceEqSsp0Transm{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp1Receiv> sourceEqSsp1Receiv{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp1Transm> sourceEqSsp1Transm{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqAdc0> sourceEqAdc0{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqAdc1> sourceEqAdc1{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqDac> sourceEqDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1),Register::ReadWriteAccess,srcperipheralVal> srcperipheral{}; 
        ///Destination peripheral. This value selects the DMA destination request peripheral. This field is ignored if the destination of the transfer is to memory. See Table 136 for details.
        enum class destperipheralVal {
            destinationEqSpifi=0x00000000,     ///<Destination = SPIFI
            destinationEqTimer=0x00000001,     ///<Destination = Timer 0 match 0/UART0 transmit
            destinationEqTimer=0x00000002,     ///<Destination = Timer 0 match 1/UART0 receive
            destinationEqTimer=0x00000003,     ///<Destination = Timer 1 match 0/UART1 transmit
            destinationEqTimer=0x00000004,     ///<Destination = Timer 1 match 1/UART 1 receive
            destinationEqTimer=0x00000005,     ///<Destination = Timer 2 match 0/UART 2 transmit
            destinationEqTimer=0x00000006,     ///<Destination = Timer 2 match 1/UART 2 receive
            destinationEqTimer=0x00000007,     ///<Destination = Timer 3 match 0/UART3 transmit/SCT DMA request 0
            destinationEqTimer=0x00000008,     ///<Destination = Timer 3 match 1/UART3 receive/SCT DMA request 1
            destinationEqSsp0R=0x00000009,     ///<Destination = SSP0 receive/I2S channel 0
            destinationEqSsp0T=0x0000000a,     ///<Destination = SSP0 transmit/I2S channel 1
            destinationEqSsp1R=0x0000000b,     ///<Destination = SSP1 receive
            destinationEqSsp1T=0x0000000c,     ///<Destination = SSP1 transmit
            destinationEqAdc0=0x0000000d,     ///<Destination = ADC0
            destinationEqAdc1=0x0000000e,     ///<Destination = ADC1
            destinationEqDac=0x0000000f,     ///<Destination = DAC
        };
        namespace destperipheralValC{
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSpifi> destinationEqSpifi{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp0R> destinationEqSsp0R{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp0T> destinationEqSsp0T{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp1R> destinationEqSsp1R{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp1T> destinationEqSsp1T{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqAdc0> destinationEqAdc0{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqAdc1> destinationEqAdc1{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqDac> destinationEqDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,destperipheralVal> destperipheral{}; 
        ///Flow control and transfer type. This value indicates the flow controller and transfer type. The flow controller can be the DMA Controller, the source peripheral, or the destination peripheral. The transfer type can be memory-to-memory, memory-to-peripheral, peripheral-to-memory, or peripheral-to-peripheral. Refer to Table 157 for the encoding of this field.
        enum class flowcntrlVal {
            memoryToMemoryDm=0x00000000,     ///<Memory to memory (DMA control)
            memoryToPeripheral=0x00000001,     ///<Memory to peripheral (DMA control)
            peripheralToMemory=0x00000002,     ///<Peripheral to memory (DMA control)
            sourcePeripheralTo=0x00000003,     ///<Source peripheral to destination peripheral (DMA control)
            sourcePeripheralTo=0x00000004,     ///<Source peripheral to destination peripheral (destination control)
            memoryToPeripheral=0x00000005,     ///<Memory to peripheral (peripheral control)
            peripheralToMemory=0x00000006,     ///<Peripheral to memory (peripheral control)
            sourcePeripheralTo=0x00000007,     ///<Source peripheral to destination peripheral (source control)
        };
        namespace flowcntrlValC{
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToMemoryDm> memoryToMemoryDm{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToPeripheral> memoryToPeripheral{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::peripheralToMemory> peripheralToMemory{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToPeripheral> memoryToPeripheral{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::peripheralToMemory> peripheralToMemory{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,flowcntrlVal> flowcntrl{}; 
        ///Interrupt error mask. When cleared, this bit masks out the error interrupt of the relevant channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ie{}; 
        ///Terminal count interrupt mask. When cleared, this bit masks out the terminal count interrupt of the relevant channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> itc{}; 
        ///Lock. When set, this bit enables locked transfers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> l{}; 
        ///Active: 0 = there is no data in the FIFO of the channel. 1 = the channel FIFO has data. This value can be used with the Halt and Channel Enable bits to cleanly disable a DMA channel. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> a{}; 
        ///Halt: 0 = enable DMA requests. 1 = ignore further source DMA requests. The contents of the channel FIFO are drained. This value can be used with the Active and Channel Enable bits to cleanly disable a DMA channel.
        enum class hVal {
            enableDmaRequests=0x00000000,     ///<Enable DMA requests.
            ignoreFurtherSourc=0x00000001,     ///<Ignore further source DMA requests.
        };
        namespace hValC{
            constexpr MPL::Value<hVal,hVal::enableDmaRequests> enableDmaRequests{};
            constexpr MPL::Value<hVal,hVal::ignoreFurtherSourc> ignoreFurtherSourc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,hVal> h{}; 
    }
    namespace Nonec5config{    ///<DMA Channel Configuration Register
        using Addr = Register::Address<0x400021b0,0xfff80000,0,unsigned>;
        ///Channel enable. Reading this bit indicates whether a channel is currently enabled or disabled: The Channel Enable bit status can also be found by reading the EnbldChns Register. A channel can be disabled by clearing the Enable bit. This causes the current AHB transfer (if one is in progress) to complete and the channel is then disabled. Any data in the FIFO of the relevant channel is lost. Restarting the channel by setting the Channel Enable bit has unpredictable effects, the channel must be fully re-initialized. The channel is also disabled, and Channel Enable bit cleared, when the last LLI is reached, the DMA transfer is completed, or if a channel error is encountered. If a channel must be disabled without losing data in the FIFO, the Halt bit must be set so that further DMA requests are ignored. The Active bit must then be polled until it reaches 0, indicating that there is no data left in the FIFO. Finally, the Channel Enable bit can be cleared.
        enum class eVal {
            channelDisabled=0x00000000,     ///<Channel disabled.
            channelEnabled=0x00000001,     ///<Channel enabled.
        };
        namespace eValC{
            constexpr MPL::Value<eVal,eVal::channelDisabled> channelDisabled{};
            constexpr MPL::Value<eVal,eVal::channelEnabled> channelEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,eVal> e{}; 
        ///Source peripheral. This value selects the DMA source request peripheral. This field is ignored if the source of the transfer is from memory. See Table 136 for details.
        enum class srcperipheralVal {
            sourceEqSpifi=0x00000000,     ///<Source = SPIFI
            sourceEqTimer0Mat=0x00000001,     ///<Source = Timer 0 match 0/UART0 transmit
            sourceEqTimer0Mat=0x00000002,     ///<Source = Timer 0 match 1/UART0 receive
            sourceEqTimer1Mat=0x00000003,     ///<Source = Timer 1 match 0/UART1 transmit
            sourceEqTimer1Mat=0x00000004,     ///<Source = Timer 1 match 1/UART 1 receive
            sourceEqTimer2Mat=0x00000005,     ///<Source = Timer 2 match 0/UART 2 transmit
            sourceEqTimer2Mat=0x00000006,     ///<Source = Timer 2 match 1/UART 2 receive
            sourceEqTimer3Mat=0x00000007,     ///<Source = Timer 3 match 0/UART3 transmit/SCT DMA request 0
            sourceEqTimer3Mat=0x00000008,     ///<Source = Timer 3 match 1/UART3 receive/SCT DMA request 1
            sourceEqSsp0Receiv=0x00000009,     ///<Source = SSP0 receive/I2S channel 0
            sourceEqSsp0Transm=0x0000000a,     ///<Source = SSP0 transmit/I2S channel 1
            sourceEqSsp1Receiv=0x0000000b,     ///<Source = SSP1 receive
            sourceEqSsp1Transm=0x0000000c,     ///<Source = SSP1 transmit
            sourceEqAdc0=0x0000000d,     ///<Source = ADC0
            sourceEqAdc1=0x0000000e,     ///<Source = ADC1
            sourceEqDac=0x0000000f,     ///<Source = DAC
        };
        namespace srcperipheralValC{
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSpifi> sourceEqSpifi{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer0Mat> sourceEqTimer0Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer0Mat> sourceEqTimer0Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer1Mat> sourceEqTimer1Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer1Mat> sourceEqTimer1Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer2Mat> sourceEqTimer2Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer2Mat> sourceEqTimer2Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer3Mat> sourceEqTimer3Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer3Mat> sourceEqTimer3Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp0Receiv> sourceEqSsp0Receiv{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp0Transm> sourceEqSsp0Transm{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp1Receiv> sourceEqSsp1Receiv{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp1Transm> sourceEqSsp1Transm{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqAdc0> sourceEqAdc0{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqAdc1> sourceEqAdc1{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqDac> sourceEqDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1),Register::ReadWriteAccess,srcperipheralVal> srcperipheral{}; 
        ///Destination peripheral. This value selects the DMA destination request peripheral. This field is ignored if the destination of the transfer is to memory. See Table 136 for details.
        enum class destperipheralVal {
            destinationEqSpifi=0x00000000,     ///<Destination = SPIFI
            destinationEqTimer=0x00000001,     ///<Destination = Timer 0 match 0/UART0 transmit
            destinationEqTimer=0x00000002,     ///<Destination = Timer 0 match 1/UART0 receive
            destinationEqTimer=0x00000003,     ///<Destination = Timer 1 match 0/UART1 transmit
            destinationEqTimer=0x00000004,     ///<Destination = Timer 1 match 1/UART 1 receive
            destinationEqTimer=0x00000005,     ///<Destination = Timer 2 match 0/UART 2 transmit
            destinationEqTimer=0x00000006,     ///<Destination = Timer 2 match 1/UART 2 receive
            destinationEqTimer=0x00000007,     ///<Destination = Timer 3 match 0/UART3 transmit/SCT DMA request 0
            destinationEqTimer=0x00000008,     ///<Destination = Timer 3 match 1/UART3 receive/SCT DMA request 1
            destinationEqSsp0R=0x00000009,     ///<Destination = SSP0 receive/I2S channel 0
            destinationEqSsp0T=0x0000000a,     ///<Destination = SSP0 transmit/I2S channel 1
            destinationEqSsp1R=0x0000000b,     ///<Destination = SSP1 receive
            destinationEqSsp1T=0x0000000c,     ///<Destination = SSP1 transmit
            destinationEqAdc0=0x0000000d,     ///<Destination = ADC0
            destinationEqAdc1=0x0000000e,     ///<Destination = ADC1
            destinationEqDac=0x0000000f,     ///<Destination = DAC
        };
        namespace destperipheralValC{
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSpifi> destinationEqSpifi{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp0R> destinationEqSsp0R{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp0T> destinationEqSsp0T{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp1R> destinationEqSsp1R{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp1T> destinationEqSsp1T{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqAdc0> destinationEqAdc0{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqAdc1> destinationEqAdc1{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqDac> destinationEqDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,destperipheralVal> destperipheral{}; 
        ///Flow control and transfer type. This value indicates the flow controller and transfer type. The flow controller can be the DMA Controller, the source peripheral, or the destination peripheral. The transfer type can be memory-to-memory, memory-to-peripheral, peripheral-to-memory, or peripheral-to-peripheral. Refer to Table 157 for the encoding of this field.
        enum class flowcntrlVal {
            memoryToMemoryDm=0x00000000,     ///<Memory to memory (DMA control)
            memoryToPeripheral=0x00000001,     ///<Memory to peripheral (DMA control)
            peripheralToMemory=0x00000002,     ///<Peripheral to memory (DMA control)
            sourcePeripheralTo=0x00000003,     ///<Source peripheral to destination peripheral (DMA control)
            sourcePeripheralTo=0x00000004,     ///<Source peripheral to destination peripheral (destination control)
            memoryToPeripheral=0x00000005,     ///<Memory to peripheral (peripheral control)
            peripheralToMemory=0x00000006,     ///<Peripheral to memory (peripheral control)
            sourcePeripheralTo=0x00000007,     ///<Source peripheral to destination peripheral (source control)
        };
        namespace flowcntrlValC{
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToMemoryDm> memoryToMemoryDm{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToPeripheral> memoryToPeripheral{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::peripheralToMemory> peripheralToMemory{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToPeripheral> memoryToPeripheral{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::peripheralToMemory> peripheralToMemory{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,flowcntrlVal> flowcntrl{}; 
        ///Interrupt error mask. When cleared, this bit masks out the error interrupt of the relevant channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ie{}; 
        ///Terminal count interrupt mask. When cleared, this bit masks out the terminal count interrupt of the relevant channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> itc{}; 
        ///Lock. When set, this bit enables locked transfers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> l{}; 
        ///Active: 0 = there is no data in the FIFO of the channel. 1 = the channel FIFO has data. This value can be used with the Halt and Channel Enable bits to cleanly disable a DMA channel. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> a{}; 
        ///Halt: 0 = enable DMA requests. 1 = ignore further source DMA requests. The contents of the channel FIFO are drained. This value can be used with the Active and Channel Enable bits to cleanly disable a DMA channel.
        enum class hVal {
            enableDmaRequests=0x00000000,     ///<Enable DMA requests.
            ignoreFurtherSourc=0x00000001,     ///<Ignore further source DMA requests.
        };
        namespace hValC{
            constexpr MPL::Value<hVal,hVal::enableDmaRequests> enableDmaRequests{};
            constexpr MPL::Value<hVal,hVal::ignoreFurtherSourc> ignoreFurtherSourc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,hVal> h{}; 
    }
    namespace Nonec6config{    ///<DMA Channel Configuration Register
        using Addr = Register::Address<0x400021d0,0xfff80000,0,unsigned>;
        ///Channel enable. Reading this bit indicates whether a channel is currently enabled or disabled: The Channel Enable bit status can also be found by reading the EnbldChns Register. A channel can be disabled by clearing the Enable bit. This causes the current AHB transfer (if one is in progress) to complete and the channel is then disabled. Any data in the FIFO of the relevant channel is lost. Restarting the channel by setting the Channel Enable bit has unpredictable effects, the channel must be fully re-initialized. The channel is also disabled, and Channel Enable bit cleared, when the last LLI is reached, the DMA transfer is completed, or if a channel error is encountered. If a channel must be disabled without losing data in the FIFO, the Halt bit must be set so that further DMA requests are ignored. The Active bit must then be polled until it reaches 0, indicating that there is no data left in the FIFO. Finally, the Channel Enable bit can be cleared.
        enum class eVal {
            channelDisabled=0x00000000,     ///<Channel disabled.
            channelEnabled=0x00000001,     ///<Channel enabled.
        };
        namespace eValC{
            constexpr MPL::Value<eVal,eVal::channelDisabled> channelDisabled{};
            constexpr MPL::Value<eVal,eVal::channelEnabled> channelEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,eVal> e{}; 
        ///Source peripheral. This value selects the DMA source request peripheral. This field is ignored if the source of the transfer is from memory. See Table 136 for details.
        enum class srcperipheralVal {
            sourceEqSpifi=0x00000000,     ///<Source = SPIFI
            sourceEqTimer0Mat=0x00000001,     ///<Source = Timer 0 match 0/UART0 transmit
            sourceEqTimer0Mat=0x00000002,     ///<Source = Timer 0 match 1/UART0 receive
            sourceEqTimer1Mat=0x00000003,     ///<Source = Timer 1 match 0/UART1 transmit
            sourceEqTimer1Mat=0x00000004,     ///<Source = Timer 1 match 1/UART 1 receive
            sourceEqTimer2Mat=0x00000005,     ///<Source = Timer 2 match 0/UART 2 transmit
            sourceEqTimer2Mat=0x00000006,     ///<Source = Timer 2 match 1/UART 2 receive
            sourceEqTimer3Mat=0x00000007,     ///<Source = Timer 3 match 0/UART3 transmit/SCT DMA request 0
            sourceEqTimer3Mat=0x00000008,     ///<Source = Timer 3 match 1/UART3 receive/SCT DMA request 1
            sourceEqSsp0Receiv=0x00000009,     ///<Source = SSP0 receive/I2S channel 0
            sourceEqSsp0Transm=0x0000000a,     ///<Source = SSP0 transmit/I2S channel 1
            sourceEqSsp1Receiv=0x0000000b,     ///<Source = SSP1 receive
            sourceEqSsp1Transm=0x0000000c,     ///<Source = SSP1 transmit
            sourceEqAdc0=0x0000000d,     ///<Source = ADC0
            sourceEqAdc1=0x0000000e,     ///<Source = ADC1
            sourceEqDac=0x0000000f,     ///<Source = DAC
        };
        namespace srcperipheralValC{
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSpifi> sourceEqSpifi{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer0Mat> sourceEqTimer0Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer0Mat> sourceEqTimer0Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer1Mat> sourceEqTimer1Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer1Mat> sourceEqTimer1Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer2Mat> sourceEqTimer2Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer2Mat> sourceEqTimer2Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer3Mat> sourceEqTimer3Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer3Mat> sourceEqTimer3Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp0Receiv> sourceEqSsp0Receiv{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp0Transm> sourceEqSsp0Transm{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp1Receiv> sourceEqSsp1Receiv{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp1Transm> sourceEqSsp1Transm{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqAdc0> sourceEqAdc0{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqAdc1> sourceEqAdc1{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqDac> sourceEqDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1),Register::ReadWriteAccess,srcperipheralVal> srcperipheral{}; 
        ///Destination peripheral. This value selects the DMA destination request peripheral. This field is ignored if the destination of the transfer is to memory. See Table 136 for details.
        enum class destperipheralVal {
            destinationEqSpifi=0x00000000,     ///<Destination = SPIFI
            destinationEqTimer=0x00000001,     ///<Destination = Timer 0 match 0/UART0 transmit
            destinationEqTimer=0x00000002,     ///<Destination = Timer 0 match 1/UART0 receive
            destinationEqTimer=0x00000003,     ///<Destination = Timer 1 match 0/UART1 transmit
            destinationEqTimer=0x00000004,     ///<Destination = Timer 1 match 1/UART 1 receive
            destinationEqTimer=0x00000005,     ///<Destination = Timer 2 match 0/UART 2 transmit
            destinationEqTimer=0x00000006,     ///<Destination = Timer 2 match 1/UART 2 receive
            destinationEqTimer=0x00000007,     ///<Destination = Timer 3 match 0/UART3 transmit/SCT DMA request 0
            destinationEqTimer=0x00000008,     ///<Destination = Timer 3 match 1/UART3 receive/SCT DMA request 1
            destinationEqSsp0R=0x00000009,     ///<Destination = SSP0 receive/I2S channel 0
            destinationEqSsp0T=0x0000000a,     ///<Destination = SSP0 transmit/I2S channel 1
            destinationEqSsp1R=0x0000000b,     ///<Destination = SSP1 receive
            destinationEqSsp1T=0x0000000c,     ///<Destination = SSP1 transmit
            destinationEqAdc0=0x0000000d,     ///<Destination = ADC0
            destinationEqAdc1=0x0000000e,     ///<Destination = ADC1
            destinationEqDac=0x0000000f,     ///<Destination = DAC
        };
        namespace destperipheralValC{
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSpifi> destinationEqSpifi{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp0R> destinationEqSsp0R{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp0T> destinationEqSsp0T{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp1R> destinationEqSsp1R{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp1T> destinationEqSsp1T{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqAdc0> destinationEqAdc0{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqAdc1> destinationEqAdc1{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqDac> destinationEqDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,destperipheralVal> destperipheral{}; 
        ///Flow control and transfer type. This value indicates the flow controller and transfer type. The flow controller can be the DMA Controller, the source peripheral, or the destination peripheral. The transfer type can be memory-to-memory, memory-to-peripheral, peripheral-to-memory, or peripheral-to-peripheral. Refer to Table 157 for the encoding of this field.
        enum class flowcntrlVal {
            memoryToMemoryDm=0x00000000,     ///<Memory to memory (DMA control)
            memoryToPeripheral=0x00000001,     ///<Memory to peripheral (DMA control)
            peripheralToMemory=0x00000002,     ///<Peripheral to memory (DMA control)
            sourcePeripheralTo=0x00000003,     ///<Source peripheral to destination peripheral (DMA control)
            sourcePeripheralTo=0x00000004,     ///<Source peripheral to destination peripheral (destination control)
            memoryToPeripheral=0x00000005,     ///<Memory to peripheral (peripheral control)
            peripheralToMemory=0x00000006,     ///<Peripheral to memory (peripheral control)
            sourcePeripheralTo=0x00000007,     ///<Source peripheral to destination peripheral (source control)
        };
        namespace flowcntrlValC{
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToMemoryDm> memoryToMemoryDm{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToPeripheral> memoryToPeripheral{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::peripheralToMemory> peripheralToMemory{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToPeripheral> memoryToPeripheral{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::peripheralToMemory> peripheralToMemory{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,flowcntrlVal> flowcntrl{}; 
        ///Interrupt error mask. When cleared, this bit masks out the error interrupt of the relevant channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ie{}; 
        ///Terminal count interrupt mask. When cleared, this bit masks out the terminal count interrupt of the relevant channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> itc{}; 
        ///Lock. When set, this bit enables locked transfers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> l{}; 
        ///Active: 0 = there is no data in the FIFO of the channel. 1 = the channel FIFO has data. This value can be used with the Halt and Channel Enable bits to cleanly disable a DMA channel. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> a{}; 
        ///Halt: 0 = enable DMA requests. 1 = ignore further source DMA requests. The contents of the channel FIFO are drained. This value can be used with the Active and Channel Enable bits to cleanly disable a DMA channel.
        enum class hVal {
            enableDmaRequests=0x00000000,     ///<Enable DMA requests.
            ignoreFurtherSourc=0x00000001,     ///<Ignore further source DMA requests.
        };
        namespace hValC{
            constexpr MPL::Value<hVal,hVal::enableDmaRequests> enableDmaRequests{};
            constexpr MPL::Value<hVal,hVal::ignoreFurtherSourc> ignoreFurtherSourc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,hVal> h{}; 
    }
    namespace Nonec7config{    ///<DMA Channel Configuration Register
        using Addr = Register::Address<0x400021f0,0xfff80000,0,unsigned>;
        ///Channel enable. Reading this bit indicates whether a channel is currently enabled or disabled: The Channel Enable bit status can also be found by reading the EnbldChns Register. A channel can be disabled by clearing the Enable bit. This causes the current AHB transfer (if one is in progress) to complete and the channel is then disabled. Any data in the FIFO of the relevant channel is lost. Restarting the channel by setting the Channel Enable bit has unpredictable effects, the channel must be fully re-initialized. The channel is also disabled, and Channel Enable bit cleared, when the last LLI is reached, the DMA transfer is completed, or if a channel error is encountered. If a channel must be disabled without losing data in the FIFO, the Halt bit must be set so that further DMA requests are ignored. The Active bit must then be polled until it reaches 0, indicating that there is no data left in the FIFO. Finally, the Channel Enable bit can be cleared.
        enum class eVal {
            channelDisabled=0x00000000,     ///<Channel disabled.
            channelEnabled=0x00000001,     ///<Channel enabled.
        };
        namespace eValC{
            constexpr MPL::Value<eVal,eVal::channelDisabled> channelDisabled{};
            constexpr MPL::Value<eVal,eVal::channelEnabled> channelEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,eVal> e{}; 
        ///Source peripheral. This value selects the DMA source request peripheral. This field is ignored if the source of the transfer is from memory. See Table 136 for details.
        enum class srcperipheralVal {
            sourceEqSpifi=0x00000000,     ///<Source = SPIFI
            sourceEqTimer0Mat=0x00000001,     ///<Source = Timer 0 match 0/UART0 transmit
            sourceEqTimer0Mat=0x00000002,     ///<Source = Timer 0 match 1/UART0 receive
            sourceEqTimer1Mat=0x00000003,     ///<Source = Timer 1 match 0/UART1 transmit
            sourceEqTimer1Mat=0x00000004,     ///<Source = Timer 1 match 1/UART 1 receive
            sourceEqTimer2Mat=0x00000005,     ///<Source = Timer 2 match 0/UART 2 transmit
            sourceEqTimer2Mat=0x00000006,     ///<Source = Timer 2 match 1/UART 2 receive
            sourceEqTimer3Mat=0x00000007,     ///<Source = Timer 3 match 0/UART3 transmit/SCT DMA request 0
            sourceEqTimer3Mat=0x00000008,     ///<Source = Timer 3 match 1/UART3 receive/SCT DMA request 1
            sourceEqSsp0Receiv=0x00000009,     ///<Source = SSP0 receive/I2S channel 0
            sourceEqSsp0Transm=0x0000000a,     ///<Source = SSP0 transmit/I2S channel 1
            sourceEqSsp1Receiv=0x0000000b,     ///<Source = SSP1 receive
            sourceEqSsp1Transm=0x0000000c,     ///<Source = SSP1 transmit
            sourceEqAdc0=0x0000000d,     ///<Source = ADC0
            sourceEqAdc1=0x0000000e,     ///<Source = ADC1
            sourceEqDac=0x0000000f,     ///<Source = DAC
        };
        namespace srcperipheralValC{
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSpifi> sourceEqSpifi{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer0Mat> sourceEqTimer0Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer0Mat> sourceEqTimer0Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer1Mat> sourceEqTimer1Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer1Mat> sourceEqTimer1Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer2Mat> sourceEqTimer2Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer2Mat> sourceEqTimer2Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer3Mat> sourceEqTimer3Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqTimer3Mat> sourceEqTimer3Mat{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp0Receiv> sourceEqSsp0Receiv{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp0Transm> sourceEqSsp0Transm{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp1Receiv> sourceEqSsp1Receiv{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqSsp1Transm> sourceEqSsp1Transm{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqAdc0> sourceEqAdc0{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqAdc1> sourceEqAdc1{};
            constexpr MPL::Value<srcperipheralVal,srcperipheralVal::sourceEqDac> sourceEqDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1),Register::ReadWriteAccess,srcperipheralVal> srcperipheral{}; 
        ///Destination peripheral. This value selects the DMA destination request peripheral. This field is ignored if the destination of the transfer is to memory. See Table 136 for details.
        enum class destperipheralVal {
            destinationEqSpifi=0x00000000,     ///<Destination = SPIFI
            destinationEqTimer=0x00000001,     ///<Destination = Timer 0 match 0/UART0 transmit
            destinationEqTimer=0x00000002,     ///<Destination = Timer 0 match 1/UART0 receive
            destinationEqTimer=0x00000003,     ///<Destination = Timer 1 match 0/UART1 transmit
            destinationEqTimer=0x00000004,     ///<Destination = Timer 1 match 1/UART 1 receive
            destinationEqTimer=0x00000005,     ///<Destination = Timer 2 match 0/UART 2 transmit
            destinationEqTimer=0x00000006,     ///<Destination = Timer 2 match 1/UART 2 receive
            destinationEqTimer=0x00000007,     ///<Destination = Timer 3 match 0/UART3 transmit/SCT DMA request 0
            destinationEqTimer=0x00000008,     ///<Destination = Timer 3 match 1/UART3 receive/SCT DMA request 1
            destinationEqSsp0R=0x00000009,     ///<Destination = SSP0 receive/I2S channel 0
            destinationEqSsp0T=0x0000000a,     ///<Destination = SSP0 transmit/I2S channel 1
            destinationEqSsp1R=0x0000000b,     ///<Destination = SSP1 receive
            destinationEqSsp1T=0x0000000c,     ///<Destination = SSP1 transmit
            destinationEqAdc0=0x0000000d,     ///<Destination = ADC0
            destinationEqAdc1=0x0000000e,     ///<Destination = ADC1
            destinationEqDac=0x0000000f,     ///<Destination = DAC
        };
        namespace destperipheralValC{
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSpifi> destinationEqSpifi{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqTimer> destinationEqTimer{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp0R> destinationEqSsp0R{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp0T> destinationEqSsp0T{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp1R> destinationEqSsp1R{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqSsp1T> destinationEqSsp1T{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqAdc0> destinationEqAdc0{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqAdc1> destinationEqAdc1{};
            constexpr MPL::Value<destperipheralVal,destperipheralVal::destinationEqDac> destinationEqDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,destperipheralVal> destperipheral{}; 
        ///Flow control and transfer type. This value indicates the flow controller and transfer type. The flow controller can be the DMA Controller, the source peripheral, or the destination peripheral. The transfer type can be memory-to-memory, memory-to-peripheral, peripheral-to-memory, or peripheral-to-peripheral. Refer to Table 157 for the encoding of this field.
        enum class flowcntrlVal {
            memoryToMemoryDm=0x00000000,     ///<Memory to memory (DMA control)
            memoryToPeripheral=0x00000001,     ///<Memory to peripheral (DMA control)
            peripheralToMemory=0x00000002,     ///<Peripheral to memory (DMA control)
            sourcePeripheralTo=0x00000003,     ///<Source peripheral to destination peripheral (DMA control)
            sourcePeripheralTo=0x00000004,     ///<Source peripheral to destination peripheral (destination control)
            memoryToPeripheral=0x00000005,     ///<Memory to peripheral (peripheral control)
            peripheralToMemory=0x00000006,     ///<Peripheral to memory (peripheral control)
            sourcePeripheralTo=0x00000007,     ///<Source peripheral to destination peripheral (source control)
        };
        namespace flowcntrlValC{
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToMemoryDm> memoryToMemoryDm{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToPeripheral> memoryToPeripheral{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::peripheralToMemory> peripheralToMemory{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::memoryToPeripheral> memoryToPeripheral{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::peripheralToMemory> peripheralToMemory{};
            constexpr MPL::Value<flowcntrlVal,flowcntrlVal::sourcePeripheralTo> sourcePeripheralTo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,flowcntrlVal> flowcntrl{}; 
        ///Interrupt error mask. When cleared, this bit masks out the error interrupt of the relevant channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ie{}; 
        ///Terminal count interrupt mask. When cleared, this bit masks out the terminal count interrupt of the relevant channel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> itc{}; 
        ///Lock. When set, this bit enables locked transfers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> l{}; 
        ///Active: 0 = there is no data in the FIFO of the channel. 1 = the channel FIFO has data. This value can be used with the Halt and Channel Enable bits to cleanly disable a DMA channel. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> a{}; 
        ///Halt: 0 = enable DMA requests. 1 = ignore further source DMA requests. The contents of the channel FIFO are drained. This value can be used with the Active and Channel Enable bits to cleanly disable a DMA channel.
        enum class hVal {
            enableDmaRequests=0x00000000,     ///<Enable DMA requests.
            ignoreFurtherSourc=0x00000001,     ///<Ignore further source DMA requests.
        };
        namespace hValC{
            constexpr MPL::Value<hVal,hVal::enableDmaRequests> enableDmaRequests{};
            constexpr MPL::Value<hVal,hVal::ignoreFurtherSourc> ignoreFurtherSourc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,hVal> h{}; 
    }
}
