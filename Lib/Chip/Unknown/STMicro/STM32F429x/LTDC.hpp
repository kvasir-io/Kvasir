#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//LCD-TFT Controller
    namespace Nonesscr{    ///<Synchronization Size Configuration
          Register
        using Addr = Register::Address<0x40016808,0xfc00f800,0,unsigned>;
        ///Horizontal Synchronization Width (in
              units of pixel clock period)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> hsw{}; 
        namespace HswValC{
        }
        ///Vertical Synchronization Height (in
              units of horizontal scan line)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> vsh{}; 
        namespace VshValC{
        }
    }
    namespace Nonebpcr{    ///<Back Porch Configuration
          Register
        using Addr = Register::Address<0x4001680c,0xfc00f800,0,unsigned>;
        ///Accumulated Horizontal back porch (in
              units of pixel clock period)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> ahbp{}; 
        namespace AhbpValC{
        }
        ///Accumulated Vertical back porch (in
              units of horizontal scan line)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> avbp{}; 
        namespace AvbpValC{
        }
    }
    namespace Noneawcr{    ///<Active Width Configuration
          Register
        using Addr = Register::Address<0x40016810,0xfc00f800,0,unsigned>;
        ///AAV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> aav{}; 
        namespace AavValC{
        }
        ///Accumulated Active Height (in units of
              horizontal scan line)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> aah{}; 
        namespace AahValC{
        }
    }
    namespace Nonetwcr{    ///<Total Width Configuration
          Register
        using Addr = Register::Address<0x40016814,0xfc00f800,0,unsigned>;
        ///Total Width (in units of pixel clock
              period)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> totalw{}; 
        namespace TotalwValC{
        }
        ///Total Height (in units of horizontal
              scan line)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> totalh{}; 
        namespace TotalhValC{
        }
    }
    namespace Nonegcr{    ///<Global Control Register
        using Addr = Register::Address<0x40016818,0x0ffe888e,0,unsigned>;
        ///Horizontal Synchronization
              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> hspol{}; 
        namespace HspolValC{
        }
        ///Vertical Synchronization
              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> vspol{}; 
        namespace VspolValC{
        }
        ///Data Enable Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> depol{}; 
        namespace DepolValC{
        }
        ///Pixel Clock Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pcpol{}; 
        namespace PcpolValC{
        }
        ///Dither Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> den{}; 
        namespace DenValC{
        }
        ///Dither Red Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> drw{}; 
        namespace DrwValC{
        }
        ///Dither Green Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> dgw{}; 
        namespace DgwValC{
        }
        ///Dither Blue Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> dbw{}; 
        namespace DbwValC{
        }
        ///LCD-TFT controller enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ltdcen{}; 
        namespace LtdcenValC{
        }
    }
    namespace Nonesrcr{    ///<Shadow Reload Configuration
          Register
        using Addr = Register::Address<0x40016824,0xfffffffc,0,unsigned>;
        ///Vertical Blanking Reload
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vbr{}; 
        namespace VbrValC{
        }
        ///Immediate Reload
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> imr{}; 
        namespace ImrValC{
        }
    }
    namespace Nonebccr{    ///<Background Color Configuration
          Register
        using Addr = Register::Address<0x4001682c,0xff000000,0,unsigned>;
        ///Background Color Red value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> bc{}; 
        namespace BcValC{
        }
    }
    namespace Noneier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40016834,0xfffffff0,0,unsigned>;
        ///Register Reload interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rrie{}; 
        namespace RrieValC{
        }
        ///Transfer Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> terrie{}; 
        namespace TerrieValC{
        }
        ///FIFO Underrun Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fuie{}; 
        namespace FuieValC{
        }
        ///Line Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lie{}; 
        namespace LieValC{
        }
    }
    namespace Noneisr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40016838,0xfffffff0,0,unsigned>;
        ///Register Reload Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rrif{}; 
        namespace RrifValC{
        }
        ///Transfer Error interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> terrif{}; 
        namespace TerrifValC{
        }
        ///FIFO Underrun Interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fuif{}; 
        namespace FuifValC{
        }
        ///Line Interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lif{}; 
        namespace LifValC{
        }
    }
    namespace Noneicr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x4001683c,0xfffffff0,0,unsigned>;
        ///Clears Register Reload Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crrif{}; 
        namespace CrrifValC{
        }
        ///Clears the Transfer Error Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cterrif{}; 
        namespace CterrifValC{
        }
        ///Clears the FIFO Underrun Interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cfuif{}; 
        namespace CfuifValC{
        }
        ///Clears the Line Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clif{}; 
        namespace ClifValC{
        }
    }
    namespace Nonelipcr{    ///<Line Interrupt Position Configuration
          Register
        using Addr = Register::Address<0x40016840,0xfffff800,0,unsigned>;
        ///Line Interrupt Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> lipos{}; 
        namespace LiposValC{
        }
    }
    namespace Nonecpsr{    ///<Current Position Status
          Register
        using Addr = Register::Address<0x40016844,0x00000000,0,unsigned>;
        ///Current X Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cxpos{}; 
        namespace CxposValC{
        }
        ///Current Y Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cypos{}; 
        namespace CyposValC{
        }
    }
    namespace Nonecdsr{    ///<Current Display Status
          Register
        using Addr = Register::Address<0x40016848,0xfffffff0,0,unsigned>;
        ///Horizontal Synchronization display
              Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hsyncs{}; 
        namespace HsyncsValC{
        }
        ///Vertical Synchronization display
              Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vsyncs{}; 
        namespace VsyncsValC{
        }
        ///Horizontal Data Enable display
              Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hdes{}; 
        namespace HdesValC{
        }
        ///Vertical Data Enable display
              Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vdes{}; 
        namespace VdesValC{
        }
    }
    namespace Nonel1cr{    ///<Layerx Control Register
        using Addr = Register::Address<0x40016884,0xffffffec,0,unsigned>;
        ///Color Look-Up Table Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cluten{}; 
        namespace ClutenValC{
        }
        ///Color Keying Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> colken{}; 
        namespace ColkenValC{
        }
        ///Layer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> len{}; 
        namespace LenValC{
        }
    }
    namespace Nonel1whpcr{    ///<Layerx Window Horizontal Position
          Configuration Register
        using Addr = Register::Address<0x40016888,0xf000f000,0,unsigned>;
        ///Window Horizontal Stop
              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> whsppos{}; 
        namespace WhspposValC{
        }
        ///Window Horizontal Start
              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> whstpos{}; 
        namespace WhstposValC{
        }
    }
    namespace Nonel1wvpcr{    ///<Layerx Window Vertical Position
          Configuration Register
        using Addr = Register::Address<0x4001688c,0xf800f800,0,unsigned>;
        ///Window Vertical Stop
              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> wvsppos{}; 
        namespace WvspposValC{
        }
        ///Window Vertical Start
              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> wvstpos{}; 
        namespace WvstposValC{
        }
    }
    namespace Nonel1ckcr{    ///<Layerx Color Keying Configuration
          Register
        using Addr = Register::Address<0x40016890,0xff000000,0,unsigned>;
        ///Color Key Red value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckred{}; 
        namespace CkredValC{
        }
        ///Color Key Green value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ckgreen{}; 
        namespace CkgreenValC{
        }
        ///Color Key Blue value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ckblue{}; 
        namespace CkblueValC{
        }
    }
    namespace Nonel1pfcr{    ///<Layerx Pixel Format Configuration
          Register
        using Addr = Register::Address<0x40016894,0xfffffff8,0,unsigned>;
        ///Pixel Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
    }
    namespace Nonel1cacr{    ///<Layerx Constant Alpha Configuration
          Register
        using Addr = Register::Address<0x40016898,0xffffff00,0,unsigned>;
        ///Constant Alpha
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> consta{}; 
        namespace ConstaValC{
        }
    }
    namespace Nonel1dccr{    ///<Layerx Default Color Configuration
          Register
        using Addr = Register::Address<0x4001689c,0x00000000,0,unsigned>;
        ///Default Color Alpha
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dcalpha{}; 
        namespace DcalphaValC{
        }
        ///Default Color Red
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dcred{}; 
        namespace DcredValC{
        }
        ///Default Color Green
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dcgreen{}; 
        namespace DcgreenValC{
        }
        ///Default Color Blue
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dcblue{}; 
        namespace DcblueValC{
        }
    }
    namespace Nonel1bfcr{    ///<Layerx Blending Factors Configuration
          Register
        using Addr = Register::Address<0x400168a0,0xfffff8f8,0,unsigned>;
        ///Blending Factor 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> bf1{}; 
        namespace Bf1ValC{
        }
        ///Blending Factor 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bf2{}; 
        namespace Bf2ValC{
        }
    }
    namespace Nonel1cfbar{    ///<Layerx Color Frame Buffer Address
          Register
        using Addr = Register::Address<0x400168ac,0x00000000,0,unsigned>;
        ///Color Frame Buffer Start
              Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cfbadd{}; 
        namespace CfbaddValC{
        }
    }
    namespace Nonel1cfblr{    ///<Layerx Color Frame Buffer Length
          Register
        using Addr = Register::Address<0x400168b0,0xe000e000,0,unsigned>;
        ///Color Frame Buffer Pitch in
              bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,16),Register::ReadWriteAccess,unsigned> cfbp{}; 
        namespace CfbpValC{
        }
        ///Color Frame Buffer Line
              Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cfbll{}; 
        namespace CfbllValC{
        }
    }
    namespace Nonel1cfblnr{    ///<Layerx ColorFrame Buffer Line Number
          Register
        using Addr = Register::Address<0x400168b4,0xfffff800,0,unsigned>;
        ///Frame Buffer Line Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> cfblnbr{}; 
        namespace CfblnbrValC{
        }
    }
    namespace Nonel1clutwr{    ///<Layerx CLUT Write Register
        using Addr = Register::Address<0x400168c4,0x00000000,0,unsigned>;
        ///CLUT Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clutadd{}; 
        namespace ClutaddValC{
        }
        ///Red value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        namespace RedValC{
        }
        ///Green value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        namespace GreenValC{
        }
        ///Blue value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
        namespace BlueValC{
        }
    }
    namespace Nonel2cr{    ///<Layerx Control Register
        using Addr = Register::Address<0x40016904,0xffffffec,0,unsigned>;
        ///Color Look-Up Table Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cluten{}; 
        namespace ClutenValC{
        }
        ///Color Keying Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> colken{}; 
        namespace ColkenValC{
        }
        ///Layer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> len{}; 
        namespace LenValC{
        }
    }
    namespace Nonel2whpcr{    ///<Layerx Window Horizontal Position
          Configuration Register
        using Addr = Register::Address<0x40016908,0xf000f000,0,unsigned>;
        ///Window Horizontal Stop
              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> whsppos{}; 
        namespace WhspposValC{
        }
        ///Window Horizontal Start
              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> whstpos{}; 
        namespace WhstposValC{
        }
    }
    namespace Nonel2wvpcr{    ///<Layerx Window Vertical Position
          Configuration Register
        using Addr = Register::Address<0x4001690c,0xf800f800,0,unsigned>;
        ///Window Vertical Stop
              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> wvsppos{}; 
        namespace WvspposValC{
        }
        ///Window Vertical Start
              Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> wvstpos{}; 
        namespace WvstposValC{
        }
    }
    namespace Nonel2ckcr{    ///<Layerx Color Keying Configuration
          Register
        using Addr = Register::Address<0x40016910,0xff000000,0,unsigned>;
        ///Color Key Red value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,15),Register::ReadWriteAccess,unsigned> ckred{}; 
        namespace CkredValC{
        }
        ///Color Key Green value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> ckgreen{}; 
        namespace CkgreenValC{
        }
        ///Color Key Blue value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ckblue{}; 
        namespace CkblueValC{
        }
    }
    namespace Nonel2pfcr{    ///<Layerx Pixel Format Configuration
          Register
        using Addr = Register::Address<0x40016914,0xfffffff8,0,unsigned>;
        ///Pixel Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
    }
    namespace Nonel2cacr{    ///<Layerx Constant Alpha Configuration
          Register
        using Addr = Register::Address<0x40016918,0xffffff00,0,unsigned>;
        ///Constant Alpha
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> consta{}; 
        namespace ConstaValC{
        }
    }
    namespace Nonel2dccr{    ///<Layerx Default Color Configuration
          Register
        using Addr = Register::Address<0x4001691c,0x00000000,0,unsigned>;
        ///Default Color Alpha
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dcalpha{}; 
        namespace DcalphaValC{
        }
        ///Default Color Red
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dcred{}; 
        namespace DcredValC{
        }
        ///Default Color Green
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dcgreen{}; 
        namespace DcgreenValC{
        }
        ///Default Color Blue
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dcblue{}; 
        namespace DcblueValC{
        }
    }
    namespace Nonel2bfcr{    ///<Layerx Blending Factors Configuration
          Register
        using Addr = Register::Address<0x40016920,0xfffff8f8,0,unsigned>;
        ///Blending Factor 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> bf1{}; 
        namespace Bf1ValC{
        }
        ///Blending Factor 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bf2{}; 
        namespace Bf2ValC{
        }
    }
    namespace Nonel2cfbar{    ///<Layerx Color Frame Buffer Address
          Register
        using Addr = Register::Address<0x4001692c,0x00000000,0,unsigned>;
        ///Color Frame Buffer Start
              Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cfbadd{}; 
        namespace CfbaddValC{
        }
    }
    namespace Nonel2cfblr{    ///<Layerx Color Frame Buffer Length
          Register
        using Addr = Register::Address<0x40016930,0xe000e000,0,unsigned>;
        ///Color Frame Buffer Pitch in
              bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,16),Register::ReadWriteAccess,unsigned> cfbp{}; 
        namespace CfbpValC{
        }
        ///Color Frame Buffer Line
              Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cfbll{}; 
        namespace CfbllValC{
        }
    }
    namespace Nonel2cfblnr{    ///<Layerx ColorFrame Buffer Line Number
          Register
        using Addr = Register::Address<0x40016934,0xfffff800,0,unsigned>;
        ///Frame Buffer Line Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> cfblnbr{}; 
        namespace CfblnbrValC{
        }
    }
    namespace Nonel2clutwr{    ///<Layerx CLUT Write Register
        using Addr = Register::Address<0x40016944,0x00000000,0,unsigned>;
        ///CLUT Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clutadd{}; 
        namespace ClutaddValC{
        }
        ///Red value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        namespace RedValC{
        }
        ///Green value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        namespace GreenValC{
        }
        ///Blue value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
        namespace BlueValC{
        }
    }
}
