#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Image Sensor Interface
    namespace NoneisiCfg1{    ///<ISI Configuration 1 Register
        using Addr = Register::Address<0xfffb4000,0x00008023,0,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> thmask{}; 
        ///Start of Line Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sld{}; 
        ///Start of Frame Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> sfd{}; 
    }
    namespace NoneisiCfg2{    ///<ISI Configuration 2 Register
        using Addr = Register::Address<0xfffb4004,0x08000000,0,unsigned>;
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
    namespace NoneisiPsize{    ///<ISI Preview Size Register
        using Addr = Register::Address<0xfffb4008,0xfc00fc00,0,unsigned>;
        ///Vertical Size for the Preview Path
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> prevVsize{}; 
        ///Horizontal Size for the Preview Path
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> prevHsize{}; 
    }
    namespace NoneisiPdecf{    ///<ISI Preview Decimation Factor Register
        using Addr = Register::Address<0xfffb400c,0xffffff00,0,unsigned>;
        ///Decimation Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> decFactor{}; 
    }
    namespace NoneisiY2rSet0{    ///<ISI CSC YCrCb To RGB Set 0 Register
        using Addr = Register::Address<0xfffb4010,0x00000000,0,unsigned>;
        ///Color Space Conversion Matrix Coefficient C0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> c0{}; 
        ///Color Space Conversion Matrix Coefficient C1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> c1{}; 
        ///Color Space Conversion Matrix Coefficient C2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> c2{}; 
        ///Color Space Conversion Matrix Coefficient C3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> c3{}; 
    }
    namespace NoneisiY2rSet1{    ///<ISI CSC YCrCb To RGB Set 1 Register
        using Addr = Register::Address<0xfffb4014,0xffff8e00,0,unsigned>;
        ///Color Space Conversion Matrix Coefficient C4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> c4{}; 
        ///Color Space Conversion Luminance Default Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> yoff{}; 
        ///Color Space Conversion Red Chrominance Default Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> croff{}; 
        ///Color Space Conversion Blue Chrominance Default Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cboff{}; 
    }
    namespace NoneisiR2ySet0{    ///<ISI CSC RGB To YCrCb Set 0 Register
        using Addr = Register::Address<0xfffb4018,0xfe000000,0,unsigned>;
        ///Color Space Conversion Matrix Coefficient C0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> c0{}; 
        ///Color Space Conversion Matrix Coefficient C1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> c1{}; 
        ///Color Space Conversion Matrix Coefficient C2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> c2{}; 
        ///Color Space Conversion Red Component Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> roff{}; 
    }
    namespace NoneisiR2ySet1{    ///<ISI CSC RGB To YCrCb Set 1 Register
        using Addr = Register::Address<0xfffb401c,0xfe000000,0,unsigned>;
        ///Color Space Conversion Matrix Coefficient C3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> c3{}; 
        ///Color Space Conversion Matrix Coefficient C4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> c4{}; 
        ///Color Space Conversion Matrix Coefficient C5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> c5{}; 
        ///Color Space Conversion Green Component Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> goff{}; 
    }
    namespace NoneisiR2ySet2{    ///<ISI CSC RGB To YCrCb Set 2 Register
        using Addr = Register::Address<0xfffb4020,0xfe000000,0,unsigned>;
        ///Color Space Conversion Matrix Coefficient C6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> c6{}; 
        ///Color Space Conversion Matrix Coefficient C7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> c7{}; 
        ///Color Space Conversion Matrix Coefficient C8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> c8{}; 
        ///Color Space Conversion Blue Component Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> boff{}; 
    }
    namespace NoneisiCr{    ///<ISI Control Register
        using Addr = Register::Address<0xfffb4024,0xfffffef8,0,unsigned>;
        ///ISI Module Enable Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> isiEn{}; 
        ///ISI Module Disable Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> isiDis{}; 
        ///ISI Software Reset Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> isiSrst{}; 
        ///ISI Codec Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> isiCdc{}; 
    }
    namespace NoneisiSr{    ///<ISI Status Register
        using Addr = Register::Address<0xfffb4028,0xf0f4faf8,0,unsigned>;
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
    namespace NoneisiIer{    ///<ISI Interrupt Enable Register
        using Addr = Register::Address<0xfffb402c,0xf0fcfbf9,0,unsigned>;
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
    namespace NoneisiIdr{    ///<ISI Interrupt Disable Register
        using Addr = Register::Address<0xfffb4030,0xf0fcfbf9,0,unsigned>;
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
    namespace NoneisiImr{    ///<ISI Interrupt Mask Register
        using Addr = Register::Address<0xfffb4034,0xf0fcfbf9,0,unsigned>;
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
    namespace NonedmaCher{    ///<DMA Channel Enable Register
        using Addr = Register::Address<0xfffb4038,0xfffffffc,0,unsigned>;
        ///Preview Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pChEn{}; 
        ///Codec Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cChEn{}; 
    }
    namespace NonedmaChdr{    ///<DMA Channel Disable Register
        using Addr = Register::Address<0xfffb403c,0xfffffffc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pChDis{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cChDis{}; 
    }
    namespace NonedmaChsr{    ///<DMA Channel Status Register
        using Addr = Register::Address<0xfffb4040,0xfffffffc,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pChS{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cChS{}; 
    }
    namespace NonedmaPAddr{    ///<DMA Preview Base Address Register
        using Addr = Register::Address<0xfffb4044,0x00000003,0,unsigned>;
        ///Preview Image Base Address. (This address is word aligned.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> pAddr{}; 
    }
    namespace NonedmaPCtrl{    ///<DMA Preview Control Register
        using Addr = Register::Address<0xfffb4048,0xfffffff0,0,unsigned>;
        ///Descriptor Fetch Control Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pFetch{}; 
        ///Descriptor Writeback Control Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pWb{}; 
        ///Transfer Done Flag Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pIen{}; 
        ///(This field is only updated in the memory.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pDone{}; 
    }
    namespace NonedmaPDscr{    ///<DMA Preview Descriptor Address Register
        using Addr = Register::Address<0xfffb404c,0x00000003,0,unsigned>;
        ///Preview Descriptor Base Address (This address is word aligned.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> pDscr{}; 
    }
    namespace NonedmaCAddr{    ///<DMA Codec Base Address Register
        using Addr = Register::Address<0xfffb4050,0x00000003,0,unsigned>;
        ///Codec Image Base Address (This address is word aligned.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> cAddr{}; 
    }
    namespace NonedmaCCtrl{    ///<DMA Codec Control Register
        using Addr = Register::Address<0xfffb4054,0xfffffff0,0,unsigned>;
        ///Descriptor Fetch Control Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cFetch{}; 
        ///Descriptor Writeback Control Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cWb{}; 
        ///Transfer Done flag control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cIen{}; 
        ///(This field is only updated in the memory.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cDone{}; 
    }
    namespace NonedmaCDscr{    ///<DMA Codec Descriptor Address Register
        using Addr = Register::Address<0xfffb4058,0x00000003,0,unsigned>;
        ///Codec Descriptor Base Address (This address is word aligned.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> cDscr{}; 
    }
    namespace NoneisiWpcr{    ///<Write Protection Control Register
        using Addr = Register::Address<0xfffb40e4,0x000000fe,0,unsigned>;
        ///Write Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpEn{}; 
        ///Write Protection KEY Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpKey{}; 
    }
    namespace NoneisiWpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0xfffb40e8,0xff0000f0,0,unsigned>;
        ///Write Protection Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wpVs{}; 
        ///Write Protection Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpVsrc{}; 
    }
}
