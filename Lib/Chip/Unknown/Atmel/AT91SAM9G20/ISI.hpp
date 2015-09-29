#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Image Sensor Interface
    namespace IsiCr1{    ///<ISI Control 1 Register
        using Addr = Register::Address<0xfffc0000,0x00000820,0,unsigned>;
        ///Image sensor interface reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> isiRst{}; 
        ///Image sensor disable:
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> isiDis{}; 
        ///Horizontal synchronization polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsyncPol{}; 
        ///Vertical synchronization polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vsyncPol{}; 
        ///Pixel clock polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pixclkPol{}; 
        ///Embedded synchronization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> embSync{}; 
        ///Embedded synchronization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> crcSync{}; 
        ///Frame rate [0..7]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> frate{}; 
        ///Full mode is allowed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> full{}; 
        ///Threshold mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> thmask{}; 
        ///Enable the codec path enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> codecOn{}; 
        ///Start of Line Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sld{}; 
        ///Start of Frame Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> sfd{}; 
    }
    namespace IsiCr2{    ///<ISI Control 2 Register
        using Addr = Register::Address<0xfffc0004,0x08000000,0,unsigned>;
        ///Vertical size of the Image sensor [0..2047]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> imVsize{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gsMode{}; 
        ///RGB input mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rgbMode{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> grayscale{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rgbSwap{}; 
        ///Color space for the image data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> colSpace{}; 
        ///Horizontal size of the Image sensor [0..2047]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> imHsize{}; 
        ///Defines the YCC image data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> yccSwap{}; 
        ///Defines RGB pattern when RGB_MODE is set to 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> rgbCfg{}; 
    }
    namespace IsiSr{    ///<ISI Status Register
        using Addr = Register::Address<0xfffc0008,0xfffffc00,0,unsigned>;
        ///Start of frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sof{}; 
        ///Image Sensor Interface disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis{}; 
        ///Software reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softrst{}; 
        ///Codec request pending
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cdcPnd{}; 
        ///CRC synchronization error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crcErr{}; 
        ///FIFO codec overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> foCOvf{}; 
        ///FIFO preview overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> foPOvf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> foPEmp{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> foCEmp{}; 
        ///Frame rate overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frOvr{}; 
    }
    namespace IsiIer{    ///<ISI Interrupt Enable Register
        using Addr = Register::Address<0xfffc000c,0xfffffc08,0,unsigned>;
        ///Start of Frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sof{}; 
        ///Image Sensor Interface disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis{}; 
        ///Soft Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softrst{}; 
        ///CRC synchronization error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crcErr{}; 
        ///FIFO codec Overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> foCOvf{}; 
        ///FIFO preview Overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> foPOvf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> foPEmp{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> foCEmp{}; 
        ///Frame overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frOvr{}; 
    }
    namespace IsiIdr{    ///<ISI Interrupt Disable Register
        using Addr = Register::Address<0xfffc0010,0xfffffc08,0,unsigned>;
        ///Start of Frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sof{}; 
        ///Image Sensor Interface disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softrst{}; 
        ///CRC synchronization error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crcErr{}; 
        ///FIFO codec overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> foCOvf{}; 
        ///FIFO preview overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> foPOvf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> foPEmp{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> foCEmp{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frOvr{}; 
    }
    namespace IsiImr{    ///<ISI Interrupt Mask Register
        using Addr = Register::Address<0xfffc0014,0xfffffc08,0,unsigned>;
        ///Start of Frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sof{}; 
        ///Image sensor interface disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softrst{}; 
        ///CRC synchronization error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crcErr{}; 
        ///FIFO codec overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> foCOvf{}; 
        ///FIFO preview overflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> foPOvf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> foPEmp{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> foCEmp{}; 
        ///Frame Rate Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frOvr{}; 
    }
    namespace IsiPsize{    ///<ISI Preview Size Register
        using Addr = Register::Address<0xfffc0020,0xfc00fc00,0,unsigned>;
        ///Vertical size for the preview path
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> prevVsize{}; 
        ///Horizontal size for the preview path
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> prevHsize{}; 
    }
    namespace IsiPdecf{    ///<ISI Preview Decimation Factor Register
        using Addr = Register::Address<0xfffc0024,0xffffff00,0,unsigned>;
        ///Decimation factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> decFactor{}; 
    }
    namespace IsiPpfbd{    ///<ISI Preview Primary FBD Register
        using Addr = Register::Address<0xfffc0028,0x00000000,0,unsigned>;
        ///Base address for preview frame buffer descriptor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> prevFbdAddr{}; 
    }
    namespace IsiCdba{    ///<ISI Codec DMA Base Address Register
        using Addr = Register::Address<0xfffc002c,0x00000000,0,unsigned>;
        ///Base address for codec DMA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> codecDmaAddr{}; 
    }
    namespace IsiY2rSet0{    ///<ISI CSC YCrCb To RGB Set 0 Register
        using Addr = Register::Address<0xfffc0030,0x00000000,0,unsigned>;
        ///Color Space Conversion Matrix Coefficient C0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> c0{}; 
        ///Color Space Conversion Matrix Coefficient C1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> c1{}; 
        ///Color Space Conversion Matrix Coefficient C2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> c2{}; 
        ///Color Space Conversion Matrix Coefficient C3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> c3{}; 
    }
    namespace IsiY2rSet1{    ///<ISI CSC YCrCb To RGB Set 1 Register
        using Addr = Register::Address<0xfffc0034,0xffff8e00,0,unsigned>;
        ///Color Space Conversion Matrix coefficient C4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> c4{}; 
        ///Color Space Conversion Luminance default offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> yoff{}; 
        ///Color Space Conversion Red Chrominance default offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> croff{}; 
        ///Color Space Conversion Blue Chrominance default offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cboff{}; 
    }
    namespace IsiR2ySet0{    ///<ISI CSC RGB To YCrCb Set 0 Register
        using Addr = Register::Address<0xfffc0038,0xfe000000,0,unsigned>;
        ///Color Space Conversion Matrix coefficient C0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> c0{}; 
        ///Color Space Conversion Matrix coefficient C1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> c1{}; 
        ///Color Space Conversion Matrix coefficient C2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> c2{}; 
        ///Color Space Conversion Red component offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> roff{}; 
    }
    namespace IsiR2ySet1{    ///<ISI CSC RGB To YCrCb Set 1 Register
        using Addr = Register::Address<0xfffc003c,0xfe000000,0,unsigned>;
        ///Color Space Conversion Matrix coefficient C3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> c3{}; 
        ///Color Space Conversion Matrix coefficient C4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> c4{}; 
        ///Color Space Conversion Matrix coefficient C5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> c5{}; 
        ///Color Space Conversion Green component offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> goff{}; 
    }
    namespace IsiR2ySet2{    ///<ISI CSC RGB To YCrCb Set 2 Register
        using Addr = Register::Address<0xfffc0040,0xfe000000,0,unsigned>;
        ///Color Space Conversion Matrix coefficient C6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> c6{}; 
        ///Color Space Conversion Matrix coefficient C7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> c7{}; 
        ///Color Space Conversion Matrix coefficient C8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> c8{}; 
        ///Color Space Conversion Blue component offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> boff{}; 
    }
}
