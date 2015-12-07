#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Image Sensor Interface
    namespace IsiCfg1{    ///<ISI Configuration 1 Register
        using Addr = Register::Address<0xf0034000,0x00008023,0,unsigned>;
        ///Horizontal Synchronization Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsyncPol{}; 
        namespace HsyncpolValC{
        }
        ///Vertical Synchronization Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vsyncPol{}; 
        namespace VsyncpolValC{
        }
        ///Pixel Clock Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pixclkPol{}; 
        namespace PixclkpolValC{
        }
        ///Embedded Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> embSync{}; 
        namespace EmbsyncValC{
        }
        ///Embedded Synchronization Correction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> crcSync{}; 
        namespace CrcsyncValC{
        }
        ///Frame Rate [0..7]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> frate{}; 
        namespace FrateValC{
        }
        ///Disable Codec Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> discr{}; 
        namespace DiscrValC{
        }
        ///Full Mode is Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> full{}; 
        namespace FullValC{
        }
        ///Threshold Mask
        enum class ThmaskVal {
            beats4=0x00000000,     ///<Only 4 beats AHB burst allowed
            beats8=0x00000001,     ///<Only 4 and 8 beats AHB burst allowed
            beats16=0x00000002,     ///<4, 8 and 16 beats AHB burst allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,ThmaskVal> thmask{}; 
        namespace ThmaskValC{
            constexpr Register::FieldValue<decltype(thmask),ThmaskVal::beats4> beats4{};
            constexpr Register::FieldValue<decltype(thmask),ThmaskVal::beats8> beats8{};
            constexpr Register::FieldValue<decltype(thmask),ThmaskVal::beats16> beats16{};
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
    namespace IsiCfg2{    ///<ISI Configuration 2 Register
        using Addr = Register::Address<0xf0034004,0x08000000,0,unsigned>;
        ///Vertical Size of the Image Sensor [0..2047]:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> imVsize{}; 
        namespace ImvsizeValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gsMode{}; 
        namespace GsmodeValC{
        }
        ///RGB Input Mode:
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
        ///Color Space for the Image Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> colSpace{}; 
        namespace ColspaceValC{
        }
        ///Horizontal Size of the Image Sensor [0..2047]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> imHsize{}; 
        namespace ImhsizeValC{
        }
        ///Defines the YCC Image Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> yccSwap{}; 
        namespace YccswapValC{
        }
        ///Defines RGB Pattern when RGB_MODE is set to 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> rgbCfg{}; 
        namespace RgbcfgValC{
        }
    }
    namespace IsiPsize{    ///<ISI Preview Size Register
        using Addr = Register::Address<0xf0034008,0xfc00fc00,0,unsigned>;
        ///Vertical Size for the Preview Path
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> prevVsize{}; 
        namespace PrevvsizeValC{
        }
        ///Horizontal Size for the Preview Path
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> prevHsize{}; 
        namespace PrevhsizeValC{
        }
    }
    namespace IsiPdecf{    ///<ISI Preview Decimation Factor Register
        using Addr = Register::Address<0xf003400c,0xffffff00,0,unsigned>;
        ///Decimation Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> decFactor{}; 
        namespace DecfactorValC{
        }
    }
    namespace IsiY2rSet0{    ///<ISI CSC YCrCb To RGB Set 0 Register
        using Addr = Register::Address<0xf0034010,0x00000000,0,unsigned>;
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
        using Addr = Register::Address<0xf0034014,0xffff8e00,0,unsigned>;
        ///Color Space Conversion Matrix Coefficient C4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> c4{}; 
        namespace C4ValC{
        }
        ///Color Space Conversion Luminance Default Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> yoff{}; 
        namespace YoffValC{
        }
        ///Color Space Conversion Red Chrominance Default Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> croff{}; 
        namespace CroffValC{
        }
        ///Color Space Conversion Blue Chrominance Default Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cboff{}; 
        namespace CboffValC{
        }
    }
    namespace IsiR2ySet0{    ///<ISI CSC RGB To YCrCb Set 0 Register
        using Addr = Register::Address<0xf0034018,0xfe808080,0,unsigned>;
        ///Color Space Conversion Matrix Coefficient C0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> c0{}; 
        namespace C0ValC{
        }
        ///Color Space Conversion Matrix Coefficient C1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> c1{}; 
        namespace C1ValC{
        }
        ///Color Space Conversion Matrix Coefficient C2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> c2{}; 
        namespace C2ValC{
        }
        ///Color Space Conversion Red Component Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> roff{}; 
        namespace RoffValC{
        }
    }
    namespace IsiR2ySet1{    ///<ISI CSC RGB To YCrCb Set 1 Register
        using Addr = Register::Address<0xf003401c,0xfe808080,0,unsigned>;
        ///Color Space Conversion Matrix Coefficient C3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> c3{}; 
        namespace C3ValC{
        }
        ///Color Space Conversion Matrix Coefficient C4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> c4{}; 
        namespace C4ValC{
        }
        ///Color Space Conversion Matrix Coefficient C5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> c5{}; 
        namespace C5ValC{
        }
        ///Color Space Conversion Green Component Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> goff{}; 
        namespace GoffValC{
        }
    }
    namespace IsiR2ySet2{    ///<ISI CSC RGB To YCrCb Set 2 Register
        using Addr = Register::Address<0xf0034020,0xfe808080,0,unsigned>;
        ///Color Space Conversion Matrix Coefficient C6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> c6{}; 
        namespace C6ValC{
        }
        ///Color Space Conversion Matrix Coefficient C7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> c7{}; 
        namespace C7ValC{
        }
        ///Color Space Conversion Matrix Coefficient C8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> c8{}; 
        namespace C8ValC{
        }
        ///Color Space Conversion Blue Component Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> boff{}; 
        namespace BoffValC{
        }
    }
    namespace IsiCr{    ///<ISI Control Register
        using Addr = Register::Address<0xf0034024,0xfffffef8,0,unsigned>;
        ///ISI Module Enable Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> isiEn{}; 
        namespace IsienValC{
        }
        ///ISI Module Disable Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> isiDis{}; 
        namespace IsidisValC{
        }
        ///ISI Software Reset Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> isiSrst{}; 
        namespace IsisrstValC{
        }
        ///ISI Codec Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> isiCdc{}; 
        namespace IsicdcValC{
        }
    }
    namespace IsiSr{    ///<ISI Status Register
        using Addr = Register::Address<0xf0034028,0xf0f4faf8,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
        ///Module Disable Request has Terminated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disDone{}; 
        namespace DisdoneValC{
        }
        ///Module Software Reset Request has Terminated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srst{}; 
        namespace SrstValC{
        }
        ///Pending Codec Request (this bit is a status bit)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cdcPnd{}; 
        namespace CdcpndValC{
        }
        ///Vertical Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vsync{}; 
        namespace VsyncValC{
        }
        ///Preview DMA Transfer has Terminated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pxfrDone{}; 
        namespace PxfrdoneValC{
        }
        ///Codec DMA Transfer has Terminated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cxfrDone{}; 
        namespace CxfrdoneValC{
        }
        ///Synchronization in Progress (this is a status bit)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> sip{}; 
        namespace SipValC{
        }
        ///Preview Datapath Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pOvr{}; 
        namespace PovrValC{
        }
        ///Codec Datapath Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cOvr{}; 
        namespace CovrValC{
        }
        ///CRC Synchronization Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> crcErr{}; 
        namespace CrcerrValC{
        }
        ///Frame Rate Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> frOvr{}; 
        namespace FrovrValC{
        }
    }
    namespace IsiIer{    ///<ISI Interrupt Enable Register
        using Addr = Register::Address<0xf003402c,0xf0fcfbf9,0,unsigned>;
        ///Disable Done Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disDone{}; 
        namespace DisdoneValC{
        }
        ///Software Reset Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srst{}; 
        namespace SrstValC{
        }
        ///Vertical Synchronization Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vsync{}; 
        namespace VsyncValC{
        }
        ///Preview DMA Transfer Done Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pxfrDone{}; 
        namespace PxfrdoneValC{
        }
        ///Codec DMA Transfer Done Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cxfrDone{}; 
        namespace CxfrdoneValC{
        }
        ///Preview Datapath Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pOvr{}; 
        namespace PovrValC{
        }
        ///Codec Datapath Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cOvr{}; 
        namespace CovrValC{
        }
        ///Embedded Synchronization CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> crcErr{}; 
        namespace CrcerrValC{
        }
        ///Frame Rate Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> frOvr{}; 
        namespace FrovrValC{
        }
    }
    namespace IsiIdr{    ///<ISI Interrupt Disable Register
        using Addr = Register::Address<0xf0034030,0xf0fcfbf9,0,unsigned>;
        ///Disable Done Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disDone{}; 
        namespace DisdoneValC{
        }
        ///Software Reset Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srst{}; 
        namespace SrstValC{
        }
        ///Vertical Synchronization Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vsync{}; 
        namespace VsyncValC{
        }
        ///Preview DMA Transfer Done Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pxfrDone{}; 
        namespace PxfrdoneValC{
        }
        ///Codec DMA Transfer Done Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cxfrDone{}; 
        namespace CxfrdoneValC{
        }
        ///Preview Datapath Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pOvr{}; 
        namespace PovrValC{
        }
        ///Codec Datapath Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cOvr{}; 
        namespace CovrValC{
        }
        ///Embedded Synchronization CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> crcErr{}; 
        namespace CrcerrValC{
        }
        ///Frame Rate Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> frOvr{}; 
        namespace FrovrValC{
        }
    }
    namespace IsiImr{    ///<ISI Interrupt Mask Register
        using Addr = Register::Address<0xf0034034,0xf0fcfbf9,0,unsigned>;
        ///Module Disable Operation Completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disDone{}; 
        namespace DisdoneValC{
        }
        ///Software Reset Completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srst{}; 
        namespace SrstValC{
        }
        ///Vertical Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vsync{}; 
        namespace VsyncValC{
        }
        ///Preview DMA Transfer Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pxfrDone{}; 
        namespace PxfrdoneValC{
        }
        ///Codec DMA Transfer Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cxfrDone{}; 
        namespace CxfrdoneValC{
        }
        ///FIFO Preview Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pOvr{}; 
        namespace PovrValC{
        }
        ///FIFO Codec Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cOvr{}; 
        namespace CovrValC{
        }
        ///CRC Synchronization Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> crcErr{}; 
        namespace CrcerrValC{
        }
        ///Frame Rate Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> frOvr{}; 
        namespace FrovrValC{
        }
    }
    namespace IsiDmaCher{    ///<DMA Channel Enable Register
        using Addr = Register::Address<0xf0034038,0xfffffffc,0,unsigned>;
        ///Preview Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pChEn{}; 
        namespace PchenValC{
        }
        ///Codec Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cChEn{}; 
        namespace CchenValC{
        }
    }
    namespace IsiDmaChdr{    ///<DMA Channel Disable Register
        using Addr = Register::Address<0xf003403c,0xfffffffc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pChDis{}; 
        namespace PchdisValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cChDis{}; 
        namespace CchdisValC{
        }
    }
    namespace IsiDmaChsr{    ///<DMA Channel Status Register
        using Addr = Register::Address<0xf0034040,0xfffffffc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pChS{}; 
        namespace PchsValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cChS{}; 
        namespace CchsValC{
        }
    }
    namespace IsiDmaPAddr{    ///<DMA Preview Base Address Register
        using Addr = Register::Address<0xf0034044,0x00000003,0,unsigned>;
        ///Preview Image Base Address. (This address is word aligned.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> pAddr{}; 
        namespace PaddrValC{
        }
    }
    namespace IsiDmaPCtrl{    ///<DMA Preview Control Register
        using Addr = Register::Address<0xf0034048,0xfffffff0,0,unsigned>;
        ///Descriptor Fetch Control Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pFetch{}; 
        namespace PfetchValC{
        }
        ///Descriptor Writeback Control Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pWb{}; 
        namespace PwbValC{
        }
        ///Transfer Done Flag Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pIen{}; 
        namespace PienValC{
        }
        ///(This field is only updated in the memory.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pDone{}; 
        namespace PdoneValC{
        }
    }
    namespace IsiDmaPDscr{    ///<DMA Preview Descriptor Address Register
        using Addr = Register::Address<0xf003404c,0x00000003,0,unsigned>;
        ///Preview Descriptor Base Address (This address is word aligned.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> pDscr{}; 
        namespace PdscrValC{
        }
    }
    namespace IsiDmaCAddr{    ///<DMA Codec Base Address Register
        using Addr = Register::Address<0xf0034050,0x00000003,0,unsigned>;
        ///Codec Image Base Address (This address is word aligned.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> cAddr{}; 
        namespace CaddrValC{
        }
    }
    namespace IsiDmaCCtrl{    ///<DMA Codec Control Register
        using Addr = Register::Address<0xf0034054,0xfffffff0,0,unsigned>;
        ///Descriptor Fetch Control Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cFetch{}; 
        namespace CfetchValC{
        }
        ///Descriptor Writeback Control Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cWb{}; 
        namespace CwbValC{
        }
        ///Transfer Done flag control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cIen{}; 
        namespace CienValC{
        }
        ///(This field is only updated in the memory.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cDone{}; 
        namespace CdoneValC{
        }
    }
    namespace IsiDmaCDscr{    ///<DMA Codec Descriptor Address Register
        using Addr = Register::Address<0xf0034058,0x00000003,0,unsigned>;
        ///Codec Descriptor Base Address (This address is word aligned.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> cDscr{}; 
        namespace CdscrValC{
        }
    }
    namespace IsiWpcr{    ///<Write Protection Control Register
        using Addr = Register::Address<0xf00340e4,0x000000fe,0,unsigned>;
        ///Write Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpEn{}; 
        namespace WpenValC{
        }
        ///Write Protection KEY Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpKey{}; 
        namespace WpkeyValC{
        }
    }
    namespace IsiWpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0xf00340e8,0xff0000f0,0,unsigned>;
        ///Write Protection Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wpVs{}; 
        namespace WpvsValC{
        }
        ///Write Protection Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpVsrc{}; 
        namespace WpvsrcValC{
        }
    }
}
