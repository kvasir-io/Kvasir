#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Image Sensor Interface
    namespace IsiCfg1{    ///<ISI Configuration 1 Register
        using Addr = Register::Address<0xf8048000,0x00008023,0,unsigned>;
        ///Horizontal Synchronization Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsyncPol{}; 
        ///Vertical Synchronization Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vsyncPol{}; 
        ///Pixel Clock Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pixclkPol{}; 
        ///Embedded Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> embSync{}; 
        ///Embedded Synchronization Correction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> crcSync{}; 
        ///Frame Rate [0..7]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> frate{}; 
        ///Disable Codec Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> discr{}; 
        ///Full Mode is Allowed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> full{}; 
        ///Threshold Mask
        enum class ThmaskVal {
            beats4=0x00000000,     ///<Only 4 beats AHB burst allowed
            beats8=0x00000001,     ///<Only 4 and 8 beats AHB burst allowed
            beats16=0x00000002,     ///<4, 8 and 16 beats AHB burst allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,ThmaskVal> thmask{}; 
        namespace ThmaskValC{
            constexpr Register::FieldValue<decltype(thmask)::Type,ThmaskVal::beats4> beats4{};
            constexpr Register::FieldValue<decltype(thmask)::Type,ThmaskVal::beats8> beats8{};
            constexpr Register::FieldValue<decltype(thmask)::Type,ThmaskVal::beats16> beats16{};
        }
        ///Start of Line Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sld{}; 
        ///Start of Frame Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> sfd{}; 
    }
    namespace IsiCfg2{    ///<ISI Configuration 2 Register
        using Addr = Register::Address<0xf8048004,0x08000000,0,unsigned>;
        ///Vertical Size of the Image Sensor [0..2047]:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> imVsize{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gsMode{}; 
        ///RGB Input Mode:
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rgbMode{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> grayscale{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rgbSwap{}; 
        ///Color Space for the Image Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> colSpace{}; 
        ///Horizontal Size of the Image Sensor [0..2047]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> imHsize{}; 
        ///Defines the YCC Image Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> yccSwap{}; 
        ///Defines RGB Pattern when RGB_MODE is set to 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> rgbCfg{}; 
    }
    namespace IsiPsize{    ///<ISI Preview Size Register
        using Addr = Register::Address<0xf8048008,0xfc00fc00,0,unsigned>;
        ///Vertical Size for the Preview Path
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> prevVsize{}; 
        ///Horizontal Size for the Preview Path
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> prevHsize{}; 
    }
    namespace IsiPdecf{    ///<ISI Preview Decimation Factor Register
        using Addr = Register::Address<0xf804800c,0xffffff00,0,unsigned>;
        ///Decimation Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> decFactor{}; 
    }
    namespace IsiY2rSet0{    ///<ISI CSC YCrCb To RGB Set 0 Register
        using Addr = Register::Address<0xf8048010,0x00000000,0,unsigned>;
        ///Color Space Conversion Matrix Coefficient C0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> c0{}; 
        ///Color Space Conversion Matrix Coefficient C1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> c1{}; 
        ///Color Space Conversion Matrix Coefficient C2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> c2{}; 
        ///Color Space Conversion Matrix Coefficient C3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> c3{}; 
    }
    namespace IsiY2rSet1{    ///<ISI CSC YCrCb To RGB Set 1 Register
        using Addr = Register::Address<0xf8048014,0xffff8e00,0,unsigned>;
        ///Color Space Conversion Matrix Coefficient C4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> c4{}; 
        ///Color Space Conversion Luminance Default Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> yoff{}; 
        ///Color Space Conversion Red Chrominance Default Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> croff{}; 
        ///Color Space Conversion Blue Chrominance Default Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cboff{}; 
    }
    namespace IsiR2ySet0{    ///<ISI CSC RGB To YCrCb Set 0 Register
        using Addr = Register::Address<0xf8048018,0xfe808080,0,unsigned>;
        ///Color Space Conversion Matrix Coefficient C0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> c0{}; 
        ///Color Space Conversion Matrix Coefficient C1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> c1{}; 
        ///Color Space Conversion Matrix Coefficient C2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> c2{}; 
        ///Color Space Conversion Red Component Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> roff{}; 
    }
    namespace IsiR2ySet1{    ///<ISI CSC RGB To YCrCb Set 1 Register
        using Addr = Register::Address<0xf804801c,0xfe808080,0,unsigned>;
        ///Color Space Conversion Matrix Coefficient C3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> c3{}; 
        ///Color Space Conversion Matrix Coefficient C4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> c4{}; 
        ///Color Space Conversion Matrix Coefficient C5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> c5{}; 
        ///Color Space Conversion Green Component Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> goff{}; 
    }
    namespace IsiR2ySet2{    ///<ISI CSC RGB To YCrCb Set 2 Register
        using Addr = Register::Address<0xf8048020,0xfe808080,0,unsigned>;
        ///Color Space Conversion Matrix Coefficient C6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> c6{}; 
        ///Color Space Conversion Matrix Coefficient C7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> c7{}; 
        ///Color Space Conversion Matrix Coefficient C8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> c8{}; 
        ///Color Space Conversion Blue Component Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> boff{}; 
    }
    namespace IsiCr{    ///<ISI Control Register
        using Addr = Register::Address<0xf8048024,0xfffffef8,0,unsigned>;
        ///ISI Module Enable Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> isiEn{}; 
        ///ISI Module Disable Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> isiDis{}; 
        ///ISI Software Reset Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> isiSrst{}; 
        ///ISI Codec Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> isiCdc{}; 
    }
    namespace IsiSr{    ///<ISI Status Register
        using Addr = Register::Address<0xf8048028,0xf0f4faf8,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Module Disable Request has Terminated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disDone{}; 
        ///Module Software Reset Request has Terminated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srst{}; 
        ///Pending Codec Request (this bit is a status bit)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cdcPnd{}; 
        ///Vertical Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vsync{}; 
        ///Preview DMA Transfer has Terminated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pxfrDone{}; 
        ///Codec DMA Transfer has Terminated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cxfrDone{}; 
        ///Synchronization in Progress (this is a status bit)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> sip{}; 
        ///Preview Datapath Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pOvr{}; 
        ///Codec Datapath Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cOvr{}; 
        ///CRC Synchronization Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> crcErr{}; 
        ///Frame Rate Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> frOvr{}; 
    }
    namespace IsiIer{    ///<ISI Interrupt Enable Register
        using Addr = Register::Address<0xf804802c,0xf0fcfbf9,0,unsigned>;
        ///Disable Done Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disDone{}; 
        ///Software Reset Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srst{}; 
        ///Vertical Synchronization Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vsync{}; 
        ///Preview DMA Transfer Done Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pxfrDone{}; 
        ///Codec DMA Transfer Done Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cxfrDone{}; 
        ///Preview Datapath Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pOvr{}; 
        ///Codec Datapath Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cOvr{}; 
        ///Embedded Synchronization CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> crcErr{}; 
        ///Frame Rate Overflow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> frOvr{}; 
    }
    namespace IsiIdr{    ///<ISI Interrupt Disable Register
        using Addr = Register::Address<0xf8048030,0xf0fcfbf9,0,unsigned>;
        ///Disable Done Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disDone{}; 
        ///Software Reset Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srst{}; 
        ///Vertical Synchronization Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vsync{}; 
        ///Preview DMA Transfer Done Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pxfrDone{}; 
        ///Codec DMA Transfer Done Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cxfrDone{}; 
        ///Preview Datapath Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pOvr{}; 
        ///Codec Datapath Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cOvr{}; 
        ///Embedded Synchronization CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> crcErr{}; 
        ///Frame Rate Overflow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> frOvr{}; 
    }
    namespace IsiImr{    ///<ISI Interrupt Mask Register
        using Addr = Register::Address<0xf8048034,0xf0fcfbf9,0,unsigned>;
        ///Module Disable Operation Completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disDone{}; 
        ///Software Reset Completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srst{}; 
        ///Vertical Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vsync{}; 
        ///Preview DMA Transfer Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pxfrDone{}; 
        ///Codec DMA Transfer Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cxfrDone{}; 
        ///FIFO Preview Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pOvr{}; 
        ///FIFO Codec Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cOvr{}; 
        ///CRC Synchronization Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> crcErr{}; 
        ///Frame Rate Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> frOvr{}; 
    }
    namespace IsiDmaCher{    ///<DMA Channel Enable Register
        using Addr = Register::Address<0xf8048038,0xfffffffc,0,unsigned>;
        ///Preview Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pChEn{}; 
        ///Codec Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cChEn{}; 
    }
    namespace IsiDmaChdr{    ///<DMA Channel Disable Register
        using Addr = Register::Address<0xf804803c,0xfffffffc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pChDis{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cChDis{}; 
    }
    namespace IsiDmaChsr{    ///<DMA Channel Status Register
        using Addr = Register::Address<0xf8048040,0xfffffffc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pChS{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cChS{}; 
    }
    namespace IsiDmaPAddr{    ///<DMA Preview Base Address Register
        using Addr = Register::Address<0xf8048044,0x00000003,0,unsigned>;
        ///Preview Image Base Address. (This address is word aligned.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> pAddr{}; 
    }
    namespace IsiDmaPCtrl{    ///<DMA Preview Control Register
        using Addr = Register::Address<0xf8048048,0xfffffff0,0,unsigned>;
        ///Descriptor Fetch Control Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pFetch{}; 
        ///Descriptor Writeback Control Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pWb{}; 
        ///Transfer Done Flag Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pIen{}; 
        ///(This field is only updated in the memory.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pDone{}; 
    }
    namespace IsiDmaPDscr{    ///<DMA Preview Descriptor Address Register
        using Addr = Register::Address<0xf804804c,0x00000003,0,unsigned>;
        ///Preview Descriptor Base Address (This address is word aligned.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> pDscr{}; 
    }
    namespace IsiDmaCAddr{    ///<DMA Codec Base Address Register
        using Addr = Register::Address<0xf8048050,0x00000003,0,unsigned>;
        ///Codec Image Base Address (This address is word aligned.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> cAddr{}; 
    }
    namespace IsiDmaCCtrl{    ///<DMA Codec Control Register
        using Addr = Register::Address<0xf8048054,0xfffffff0,0,unsigned>;
        ///Descriptor Fetch Control Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cFetch{}; 
        ///Descriptor Writeback Control Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cWb{}; 
        ///Transfer Done flag control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cIen{}; 
        ///(This field is only updated in the memory.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cDone{}; 
    }
    namespace IsiDmaCDscr{    ///<DMA Codec Descriptor Address Register
        using Addr = Register::Address<0xf8048058,0x00000003,0,unsigned>;
        ///Codec Descriptor Base Address (This address is word aligned.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> cDscr{}; 
    }
    namespace IsiWpcr{    ///<Write Protection Control Register
        using Addr = Register::Address<0xf80480e4,0x000000fe,0,unsigned>;
        ///Write Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpEn{}; 
        ///Write Protection KEY Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpKey{}; 
    }
    namespace IsiWpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0xf80480e8,0xff0000f0,0,unsigned>;
        ///Write Protection Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wpVs{}; 
        ///Write Protection Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpVsrc{}; 
    }
}
