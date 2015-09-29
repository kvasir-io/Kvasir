#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//LCD-TFT Controller
    namespace Nonesscr{    ///<Synchronization Size Configuration
          Register
        using Addr = Register::Address<0x40016808,0xfc00f800,0,unsigned>;
        ///Horizontal Synchronization Width (in
              units of pixel clock period)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> hsw{}; 
        ///Vertical Synchronization Height (in
              units of horizontal scan line)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> vsh{}; 
    }
    namespace Nonebpcr{    ///<Back Porch Configuration
          Register
        using Addr = Register::Address<0x4001680c,0xfc00f800,0,unsigned>;
        ///Accumulated Horizontal back porch (in
              units of pixel clock period)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> ahbp{}; 
        ///Accumulated Vertical back porch (in
              units of horizontal scan line)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> avbp{}; 
    }
    namespace Noneawcr{    ///<Active Width Configuration
          Register
        using Addr = Register::Address<0x40016810,0xfc00f800,0,unsigned>;
        ///AAV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> aav{}; 
        ///Accumulated Active Height (in units of
              horizontal scan line)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> aah{}; 
    }
    namespace Nonetwcr{    ///<Total Width Configuration
          Register
        using Addr = Register::Address<0x40016814,0xfc00f800,0,unsigned>;
        ///Total Width (in units of pixel clock
              period)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> totalw{}; 
        ///Total Height (in units of horizontal
              scan line)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> totalh{}; 
    }
    namespace Nonegcr{    ///<Global Control Register
        using Addr = Register::Address<0x40016818,0x0ffe888e,0,unsigned>;
        ///Horizontal Synchronization
              Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> hspol{}; 
        ///Vertical Synchronization
              Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> vspol{}; 
        ///Data Enable Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> depol{}; 
        ///Pixel Clock Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pcpol{}; 
        ///Dither Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> den{}; 
        ///Dither Red Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> drw{}; 
        ///Dither Green Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> dgw{}; 
        ///Dither Blue Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> dbw{}; 
        ///LCD-TFT controller enable
              bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ltdcen{}; 
    }
    namespace Nonesrcr{    ///<Shadow Reload Configuration
          Register
        using Addr = Register::Address<0x40016824,0xfffffffc,0,unsigned>;
        ///Vertical Blanking Reload
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vbr{}; 
        ///Immediate Reload
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> imr{}; 
    }
    namespace Nonebccr{    ///<Background Color Configuration
          Register
        using Addr = Register::Address<0x4001682c,0xff000000,0,unsigned>;
        ///Background Color Red value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> bc{}; 
    }
    namespace Noneier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40016834,0xfffffff0,0,unsigned>;
        ///Register Reload interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rrie{}; 
        ///Transfer Error Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> terrie{}; 
        ///FIFO Underrun Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fuie{}; 
        ///Line Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lie{}; 
    }
    namespace Noneisr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40016838,0xfffffff0,0,unsigned>;
        ///Register Reload Interrupt
              Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rrif{}; 
        ///Transfer Error interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> terrif{}; 
        ///FIFO Underrun Interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fuif{}; 
        ///Line Interrupt flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lif{}; 
    }
    namespace Noneicr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x4001683c,0xfffffff0,0,unsigned>;
        ///Clears Register Reload Interrupt
              Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crrif{}; 
        ///Clears the Transfer Error Interrupt
              Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cterrif{}; 
        ///Clears the FIFO Underrun Interrupt
              flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cfuif{}; 
        ///Clears the Line Interrupt
              Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clif{}; 
    }
    namespace Nonelipcr{    ///<Line Interrupt Position Configuration
          Register
        using Addr = Register::Address<0x40016840,0xfffff800,0,unsigned>;
        ///Line Interrupt Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> lipos{}; 
    }
    namespace Nonecpsr{    ///<Current Position Status
          Register
        using Addr = Register::Address<0x40016844,0x00000000,0,unsigned>;
        ///Current X Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cxpos{}; 
        ///Current Y Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cypos{}; 
    }
    namespace Nonecdsr{    ///<Current Display Status
          Register
        using Addr = Register::Address<0x40016848,0xfffffff0,0,unsigned>;
        ///Horizontal Synchronization display
              Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hsyncs{}; 
        ///Vertical Synchronization display
              Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vsyncs{}; 
        ///Horizontal Data Enable display
              Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hdes{}; 
        ///Vertical Data Enable display
              Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vdes{}; 
    }
    namespace Nonel1cr{    ///<Layerx Control Register
        using Addr = Register::Address<0x40016884,0xffffffec,0,unsigned>;
        ///Color Look-Up Table Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cluten{}; 
        ///Color Keying Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> colken{}; 
        ///Layer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> len{}; 
    }
    namespace Nonel1whpcr{    ///<Layerx Window Horizontal Position
          Configuration Register
        using Addr = Register::Address<0x40016888,0xf000f000,0,unsigned>;
        ///Window Horizontal Stop
              Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> whsppos{}; 
        ///Window Horizontal Start
              Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> whstpos{}; 
    }
    namespace Nonel1wvpcr{    ///<Layerx Window Vertical Position
          Configuration Register
        using Addr = Register::Address<0x4001688c,0xf800f800,0,unsigned>;
        ///Window Vertical Stop
              Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> wvsppos{}; 
        ///Window Vertical Start
              Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> wvstpos{}; 
    }
    namespace Nonel1ckcr{    ///<Layerx Color Keying Configuration
          Register
        using Addr = Register::Address<0x40016890,0xff000000,0,unsigned>;
        ///Color Key Red value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckred{}; 
        ///Color Key Green value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ckgreen{}; 
        ///Color Key Blue value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ckblue{}; 
    }
    namespace Nonel1pfcr{    ///<Layerx Pixel Format Configuration
          Register
        using Addr = Register::Address<0x40016894,0xfffffff8,0,unsigned>;
        ///Pixel Format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pf{}; 
    }
    namespace Nonel1cacr{    ///<Layerx Constant Alpha Configuration
          Register
        using Addr = Register::Address<0x40016898,0xffffff00,0,unsigned>;
        ///Constant Alpha
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> consta{}; 
    }
    namespace Nonel1dccr{    ///<Layerx Default Color Configuration
          Register
        using Addr = Register::Address<0x4001689c,0x00000000,0,unsigned>;
        ///Default Color Alpha
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dcalpha{}; 
        ///Default Color Red
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dcred{}; 
        ///Default Color Green
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dcgreen{}; 
        ///Default Color Blue
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dcblue{}; 
    }
    namespace Nonel1bfcr{    ///<Layerx Blending Factors Configuration
          Register
        using Addr = Register::Address<0x400168a0,0xfffff8f8,0,unsigned>;
        ///Blending Factor 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> bf1{}; 
        ///Blending Factor 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bf2{}; 
    }
    namespace Nonel1cfbar{    ///<Layerx Color Frame Buffer Address
          Register
        using Addr = Register::Address<0x400168ac,0x00000000,0,unsigned>;
        ///Color Frame Buffer Start
              Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cfbadd{}; 
    }
    namespace Nonel1cfblr{    ///<Layerx Color Frame Buffer Length
          Register
        using Addr = Register::Address<0x400168b0,0xe000e000,0,unsigned>;
        ///Color Frame Buffer Pitch in
              bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,16),Register::ReadWriteAccess,unsigned> cfbp{}; 
        ///Color Frame Buffer Line
              Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cfbll{}; 
    }
    namespace Nonel1cfblnr{    ///<Layerx ColorFrame Buffer Line Number
          Register
        using Addr = Register::Address<0x400168b4,0xfffff800,0,unsigned>;
        ///Frame Buffer Line Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> cfblnbr{}; 
    }
    namespace Nonel1clutwr{    ///<Layerx CLUT Write Register
        using Addr = Register::Address<0x400168c4,0x00000000,0,unsigned>;
        ///CLUT Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clutadd{}; 
        ///Red value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        ///Green value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        ///Blue value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
    }
    namespace Nonel2cr{    ///<Layerx Control Register
        using Addr = Register::Address<0x40016904,0xffffffec,0,unsigned>;
        ///Color Look-Up Table Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cluten{}; 
        ///Color Keying Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> colken{}; 
        ///Layer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> len{}; 
    }
    namespace Nonel2whpcr{    ///<Layerx Window Horizontal Position
          Configuration Register
        using Addr = Register::Address<0x40016908,0xf000f000,0,unsigned>;
        ///Window Horizontal Stop
              Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> whsppos{}; 
        ///Window Horizontal Start
              Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> whstpos{}; 
    }
    namespace Nonel2wvpcr{    ///<Layerx Window Vertical Position
          Configuration Register
        using Addr = Register::Address<0x4001690c,0xf800f800,0,unsigned>;
        ///Window Vertical Stop
              Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> wvsppos{}; 
        ///Window Vertical Start
              Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> wvstpos{}; 
    }
    namespace Nonel2ckcr{    ///<Layerx Color Keying Configuration
          Register
        using Addr = Register::Address<0x40016910,0xff000000,0,unsigned>;
        ///Color Key Red value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,15),Register::ReadWriteAccess,unsigned> ckred{}; 
        ///Color Key Green value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ckgreen{}; 
        ///Color Key Blue value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ckblue{}; 
    }
    namespace Nonel2pfcr{    ///<Layerx Pixel Format Configuration
          Register
        using Addr = Register::Address<0x40016914,0xfffffff8,0,unsigned>;
        ///Pixel Format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pf{}; 
    }
    namespace Nonel2cacr{    ///<Layerx Constant Alpha Configuration
          Register
        using Addr = Register::Address<0x40016918,0xffffff00,0,unsigned>;
        ///Constant Alpha
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> consta{}; 
    }
    namespace Nonel2dccr{    ///<Layerx Default Color Configuration
          Register
        using Addr = Register::Address<0x4001691c,0x00000000,0,unsigned>;
        ///Default Color Alpha
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dcalpha{}; 
        ///Default Color Red
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dcred{}; 
        ///Default Color Green
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dcgreen{}; 
        ///Default Color Blue
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dcblue{}; 
    }
    namespace Nonel2bfcr{    ///<Layerx Blending Factors Configuration
          Register
        using Addr = Register::Address<0x40016920,0xfffff8f8,0,unsigned>;
        ///Blending Factor 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> bf1{}; 
        ///Blending Factor 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bf2{}; 
    }
    namespace Nonel2cfbar{    ///<Layerx Color Frame Buffer Address
          Register
        using Addr = Register::Address<0x4001692c,0x00000000,0,unsigned>;
        ///Color Frame Buffer Start
              Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cfbadd{}; 
    }
    namespace Nonel2cfblr{    ///<Layerx Color Frame Buffer Length
          Register
        using Addr = Register::Address<0x40016930,0xe000e000,0,unsigned>;
        ///Color Frame Buffer Pitch in
              bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,16),Register::ReadWriteAccess,unsigned> cfbp{}; 
        ///Color Frame Buffer Line
              Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cfbll{}; 
    }
    namespace Nonel2cfblnr{    ///<Layerx ColorFrame Buffer Line Number
          Register
        using Addr = Register::Address<0x40016934,0xfffff800,0,unsigned>;
        ///Frame Buffer Line Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> cfblnbr{}; 
    }
    namespace Nonel2clutwr{    ///<Layerx CLUT Write Register
        using Addr = Register::Address<0x40016944,0x00000000,0,unsigned>;
        ///CLUT Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clutadd{}; 
        ///Red value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        ///Green value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        ///Blue value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
    }
}
