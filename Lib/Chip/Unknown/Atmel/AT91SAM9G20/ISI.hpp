#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Image Sensor Interface
    namespace IsiCr1{    ///<ISI Control 1 Register
        using Addr = Register::Address<0xfffc0000,0x00000820,0,unsigned>;
        ///Image sensor interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> isiRst{}; 
        namespace IsirstValC{
        }
        ///Image sensor disable:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> isiDis{}; 
        namespace IsidisValC{
        }
        ///Horizontal synchronization polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsyncPol{}; 
        namespace HsyncpolValC{
        }
        ///Vertical synchronization polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vsyncPol{}; 
        namespace VsyncpolValC{
        }
        ///Pixel clock polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pixclkPol{}; 
        namespace PixclkpolValC{
        }
        ///Embedded synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> embSync{}; 
        namespace EmbsyncValC{
        }
        ///Embedded synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> crcSync{}; 
        namespace CrcsyncValC{
        }
        ///Frame rate [0..7]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> frate{}; 
        namespace FrateValC{
        }
        ///Full mode is allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> full{}; 
        namespace FullValC{
        }
        ///Threshold mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> thmask{}; 
        namespace ThmaskValC{
        }
        ///Enable the codec path enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> codecOn{}; 
        namespace CodeconValC{
        }
        ///Start of Line Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sld{}; 
        namespace SldValC{
        }
        ///Start of Frame Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> sfd{}; 
        namespace SfdValC{
        }
    }
    namespace IsiCr2{    ///<ISI Control 2 Register
        using Addr = Register::Address<0xfffc0004,0x08000000,0,unsigned>;
        ///Vertical size of the Image sensor [0..2047]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> imVsize{}; 
        namespace ImvsizeValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gsMode{}; 
        namespace GsmodeValC{
        }
        ///RGB input mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rgbMode{}; 
        namespace RgbmodeValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> grayscale{}; 
        namespace GrayscaleValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rgbSwap{}; 
        namespace RgbswapValC{
        }
        ///Color space for the image data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> colSpace{}; 
        namespace ColspaceValC{
        }
        ///Horizontal size of the Image sensor [0..2047]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> imHsize{}; 
        namespace ImhsizeValC{
        }
        ///Defines the YCC image data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> yccSwap{}; 
        namespace YccswapValC{
        }
        ///Defines RGB pattern when RGB_MODE is set to 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> rgbCfg{}; 
        namespace RgbcfgValC{
        }
    }
    namespace IsiSr{    ///<ISI Status Register
        using Addr = Register::Address<0xfffc0008,0xfffffc00,0,unsigned>;
        ///Start of frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
        ///Image Sensor Interface disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis{}; 
        namespace DisValC{
        }
        ///Software reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softrst{}; 
        namespace SoftrstValC{
        }
        ///Codec request pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cdcPnd{}; 
        namespace CdcpndValC{
        }
        ///CRC synchronization error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crcErr{}; 
        namespace CrcerrValC{
        }
        ///FIFO codec overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> foCOvf{}; 
        namespace FocovfValC{
        }
        ///FIFO preview overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> foPOvf{}; 
        namespace FopovfValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> foPEmp{}; 
        namespace FopempValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> foCEmp{}; 
        namespace FocempValC{
        }
        ///Frame rate overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frOvr{}; 
        namespace FrovrValC{
        }
    }
    namespace IsiIer{    ///<ISI Interrupt Enable Register
        using Addr = Register::Address<0xfffc000c,0xfffffc08,0,unsigned>;
        ///Start of Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
        ///Image Sensor Interface disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis{}; 
        namespace DisValC{
        }
        ///Soft Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softrst{}; 
        namespace SoftrstValC{
        }
        ///CRC synchronization error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crcErr{}; 
        namespace CrcerrValC{
        }
        ///FIFO codec Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> foCOvf{}; 
        namespace FocovfValC{
        }
        ///FIFO preview Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> foPOvf{}; 
        namespace FopovfValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> foPEmp{}; 
        namespace FopempValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> foCEmp{}; 
        namespace FocempValC{
        }
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frOvr{}; 
        namespace FrovrValC{
        }
    }
    namespace IsiIdr{    ///<ISI Interrupt Disable Register
        using Addr = Register::Address<0xfffc0010,0xfffffc08,0,unsigned>;
        ///Start of Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
        ///Image Sensor Interface disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis{}; 
        namespace DisValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softrst{}; 
        namespace SoftrstValC{
        }
        ///CRC synchronization error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crcErr{}; 
        namespace CrcerrValC{
        }
        ///FIFO codec overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> foCOvf{}; 
        namespace FocovfValC{
        }
        ///FIFO preview overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> foPOvf{}; 
        namespace FopovfValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> foPEmp{}; 
        namespace FopempValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> foCEmp{}; 
        namespace FocempValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frOvr{}; 
        namespace FrovrValC{
        }
    }
    namespace IsiImr{    ///<ISI Interrupt Mask Register
        using Addr = Register::Address<0xfffc0014,0xfffffc08,0,unsigned>;
        ///Start of Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
        ///Image sensor interface disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis{}; 
        namespace DisValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softrst{}; 
        namespace SoftrstValC{
        }
        ///CRC synchronization error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crcErr{}; 
        namespace CrcerrValC{
        }
        ///FIFO codec overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> foCOvf{}; 
        namespace FocovfValC{
        }
        ///FIFO preview overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> foPOvf{}; 
        namespace FopovfValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> foPEmp{}; 
        namespace FopempValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> foCEmp{}; 
        namespace FocempValC{
        }
        ///Frame Rate Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frOvr{}; 
        namespace FrovrValC{
        }
    }
    namespace IsiPsize{    ///<ISI Preview Size Register
        using Addr = Register::Address<0xfffc0020,0xfc00fc00,0,unsigned>;
        ///Vertical size for the preview path
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> prevVsize{}; 
        namespace PrevvsizeValC{
        }
        ///Horizontal size for the preview path
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> prevHsize{}; 
        namespace PrevhsizeValC{
        }
    }
    namespace IsiPdecf{    ///<ISI Preview Decimation Factor Register
        using Addr = Register::Address<0xfffc0024,0xffffff00,0,unsigned>;
        ///Decimation factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> decFactor{}; 
        namespace DecfactorValC{
        }
    }
    namespace IsiPpfbd{    ///<ISI Preview Primary FBD Register
        using Addr = Register::Address<0xfffc0028,0x00000000,0,unsigned>;
        ///Base address for preview frame buffer descriptor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> prevFbdAddr{}; 
        namespace PrevfbdaddrValC{
        }
    }
    namespace IsiCdba{    ///<ISI Codec DMA Base Address Register
        using Addr = Register::Address<0xfffc002c,0x00000000,0,unsigned>;
        ///Base address for codec DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> codecDmaAddr{}; 
        namespace CodecdmaaddrValC{
        }
    }
    namespace IsiY2rSet0{    ///<ISI CSC YCrCb To RGB Set 0 Register
        using Addr = Register::Address<0xfffc0030,0x00000000,0,unsigned>;
        ///Color Space Conversion Matrix Coefficient C0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> c0{}; 
        namespace C0ValC{
        }
        ///Color Space Conversion Matrix Coefficient C1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> c1{}; 
        namespace C1ValC{
        }
        ///Color Space Conversion Matrix Coefficient C2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> c2{}; 
        namespace C2ValC{
        }
        ///Color Space Conversion Matrix Coefficient C3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> c3{}; 
        namespace C3ValC{
        }
    }
    namespace IsiY2rSet1{    ///<ISI CSC YCrCb To RGB Set 1 Register
        using Addr = Register::Address<0xfffc0034,0xffff8e00,0,unsigned>;
        ///Color Space Conversion Matrix coefficient C4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> c4{}; 
        namespace C4ValC{
        }
        ///Color Space Conversion Luminance default offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> yoff{}; 
        namespace YoffValC{
        }
        ///Color Space Conversion Red Chrominance default offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> croff{}; 
        namespace CroffValC{
        }
        ///Color Space Conversion Blue Chrominance default offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cboff{}; 
        namespace CboffValC{
        }
    }
    namespace IsiR2ySet0{    ///<ISI CSC RGB To YCrCb Set 0 Register
        using Addr = Register::Address<0xfffc0038,0xfe000000,0,unsigned>;
        ///Color Space Conversion Matrix coefficient C0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> c0{}; 
        namespace C0ValC{
        }
        ///Color Space Conversion Matrix coefficient C1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> c1{}; 
        namespace C1ValC{
        }
        ///Color Space Conversion Matrix coefficient C2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> c2{}; 
        namespace C2ValC{
        }
        ///Color Space Conversion Red component offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> roff{}; 
        namespace RoffValC{
        }
    }
    namespace IsiR2ySet1{    ///<ISI CSC RGB To YCrCb Set 1 Register
        using Addr = Register::Address<0xfffc003c,0xfe000000,0,unsigned>;
        ///Color Space Conversion Matrix coefficient C3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> c3{}; 
        namespace C3ValC{
        }
        ///Color Space Conversion Matrix coefficient C4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> c4{}; 
        namespace C4ValC{
        }
        ///Color Space Conversion Matrix coefficient C5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> c5{}; 
        namespace C5ValC{
        }
        ///Color Space Conversion Green component offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> goff{}; 
        namespace GoffValC{
        }
    }
    namespace IsiR2ySet2{    ///<ISI CSC RGB To YCrCb Set 2 Register
        using Addr = Register::Address<0xfffc0040,0xfe000000,0,unsigned>;
        ///Color Space Conversion Matrix coefficient C6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> c6{}; 
        namespace C6ValC{
        }
        ///Color Space Conversion Matrix coefficient C7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> c7{}; 
        namespace C7ValC{
        }
        ///Color Space Conversion Matrix coefficient C8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> c8{}; 
        namespace C8ValC{
        }
        ///Color Space Conversion Blue component offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> boff{}; 
        namespace BoffValC{
        }
    }
}
