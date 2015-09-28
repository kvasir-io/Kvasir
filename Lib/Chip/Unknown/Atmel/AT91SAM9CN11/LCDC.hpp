#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace LCDC_lcdcfg0{
        using Addr = Register::Address<0xf8038000,0xff00fef2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLKPWMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CGDISBASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CLKDIV; 
    }
    namespace LCDC_lcdcfg1{
        using Addr = Register::Address<0xf8038004,0xffc0ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> HSPW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> VSPW; 
    }
    namespace LCDC_lcdcfg2{
        using Addr = Register::Address<0xf8038008,0xffc0ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> VFPW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> VBPW; 
    }
    namespace LCDC_lcdcfg3{
        using Addr = Register::Address<0xf803800c,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> HFPW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HBPW; 
    }
    namespace LCDC_lcdcfg4{
        using Addr = Register::Address<0xf8038010,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> PPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> RPF; 
    }
    namespace LCDC_lcdcfg5{
        using Addr = Register::Address<0xf8038014,0xffe0cc20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VSPDLYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VSPDLYE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DISPPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DITHER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DISPDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> VSPSU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> VSPHO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> GUARDTIME; 
    }
    namespace LCDC_lcdcfg6{
        using Addr = Register::Address<0xf8038018,0xffff00e8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PWMPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PWMPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PWMCVAL; 
    }
    namespace LCDC_lcden{
        using Addr = Register::Address<0xf8038020,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYNCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWMEN; 
    }
    namespace LCDC_lcddis{
        using Addr = Register::Address<0xf8038024,0xfffff0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYNCDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISPDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWMDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLKRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SYNCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DISPRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PWMRST; 
    }
    namespace LCDC_lcdsr{
        using Addr = Register::Address<0xf8038028,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LCDSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISPSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWMSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SIPSTS; 
    }
    namespace LCDC_lcdier{
        using Addr = Register::Address<0xf803802c,0xfffffee8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DISIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FIFOERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BASEIE; 
    }
    namespace LCDC_lcdidr{
        using Addr = Register::Address<0xf8038030,0xfffffee8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOFID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DISID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FIFOERRID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BASEID; 
    }
    namespace LCDC_lcdimr{
        using Addr = Register::Address<0xf8038034,0xfffffee8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOFIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DISIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISPIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FIFOERRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BASEIM; 
    }
    namespace LCDC_lcdisr{
        using Addr = Register::Address<0xf8038038,0xfffffee8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FIFOERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BASE; 
    }
    namespace LCDC_basecher{
        using Addr = Register::Address<0xf8038040,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QEN; 
    }
    namespace LCDC_basechdr{
        using Addr = Register::Address<0xf8038044,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHRST; 
    }
    namespace LCDC_basechsr{
        using Addr = Register::Address<0xf8038048,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATESR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QSR; 
    }
    namespace LCDC_baseier{
        using Addr = Register::Address<0xf803804c,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_baseidr{
        using Addr = Register::Address<0xf8038050,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_baseimr{
        using Addr = Register::Address<0xf8038054,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_baseisr{
        using Addr = Register::Address<0xf8038058,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_basehead{
        using Addr = Register::Address<0xf803805c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> HEAD; 
    }
    namespace LCDC_baseaddr{
        using Addr = Register::Address<0xf8038060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace LCDC_basectrl{
        using Addr = Register::Address<0xf8038064,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONEIEN; 
    }
    namespace LCDC_basenext{
        using Addr = Register::Address<0xf8038068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NEXT; 
    }
    namespace LCDC_basecfg0{
        using Addr = Register::Address<0xf803806c,0xfffffecf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DLBO; 
    }
    namespace LCDC_basecfg1{
        using Addr = Register::Address<0xf8038070,0xfffffc0e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RGBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CLUTMODE; 
    }
    namespace LCDC_basecfg2{
        using Addr = Register::Address<0xf8038074,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> XSTRIDE; 
    }
    namespace LCDC_basecfg3{
        using Addr = Register::Address<0xf8038078,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RDEF; 
    }
    namespace LCDC_basecfg4{
        using Addr = Register::Address<0xf803807c,0xfffffcff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REP; 
    }
    namespace LCDC_baseclut0{
        using Addr = Register::Address<0xf8038400,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut1{
        using Addr = Register::Address<0xf8038404,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut2{
        using Addr = Register::Address<0xf8038408,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut3{
        using Addr = Register::Address<0xf803840c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut4{
        using Addr = Register::Address<0xf8038410,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut5{
        using Addr = Register::Address<0xf8038414,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut6{
        using Addr = Register::Address<0xf8038418,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut7{
        using Addr = Register::Address<0xf803841c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut8{
        using Addr = Register::Address<0xf8038420,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut9{
        using Addr = Register::Address<0xf8038424,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut10{
        using Addr = Register::Address<0xf8038428,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut11{
        using Addr = Register::Address<0xf803842c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut12{
        using Addr = Register::Address<0xf8038430,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut13{
        using Addr = Register::Address<0xf8038434,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut14{
        using Addr = Register::Address<0xf8038438,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut15{
        using Addr = Register::Address<0xf803843c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut16{
        using Addr = Register::Address<0xf8038440,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut17{
        using Addr = Register::Address<0xf8038444,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut18{
        using Addr = Register::Address<0xf8038448,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut19{
        using Addr = Register::Address<0xf803844c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut20{
        using Addr = Register::Address<0xf8038450,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut21{
        using Addr = Register::Address<0xf8038454,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut22{
        using Addr = Register::Address<0xf8038458,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut23{
        using Addr = Register::Address<0xf803845c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut24{
        using Addr = Register::Address<0xf8038460,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut25{
        using Addr = Register::Address<0xf8038464,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut26{
        using Addr = Register::Address<0xf8038468,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut27{
        using Addr = Register::Address<0xf803846c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut28{
        using Addr = Register::Address<0xf8038470,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut29{
        using Addr = Register::Address<0xf8038474,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut30{
        using Addr = Register::Address<0xf8038478,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut31{
        using Addr = Register::Address<0xf803847c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut32{
        using Addr = Register::Address<0xf8038480,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut33{
        using Addr = Register::Address<0xf8038484,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut34{
        using Addr = Register::Address<0xf8038488,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut35{
        using Addr = Register::Address<0xf803848c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut36{
        using Addr = Register::Address<0xf8038490,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut37{
        using Addr = Register::Address<0xf8038494,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut38{
        using Addr = Register::Address<0xf8038498,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut39{
        using Addr = Register::Address<0xf803849c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut40{
        using Addr = Register::Address<0xf80384a0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut41{
        using Addr = Register::Address<0xf80384a4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut42{
        using Addr = Register::Address<0xf80384a8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut43{
        using Addr = Register::Address<0xf80384ac,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut44{
        using Addr = Register::Address<0xf80384b0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut45{
        using Addr = Register::Address<0xf80384b4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut46{
        using Addr = Register::Address<0xf80384b8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut47{
        using Addr = Register::Address<0xf80384bc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut48{
        using Addr = Register::Address<0xf80384c0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut49{
        using Addr = Register::Address<0xf80384c4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut50{
        using Addr = Register::Address<0xf80384c8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut51{
        using Addr = Register::Address<0xf80384cc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut52{
        using Addr = Register::Address<0xf80384d0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut53{
        using Addr = Register::Address<0xf80384d4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut54{
        using Addr = Register::Address<0xf80384d8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut55{
        using Addr = Register::Address<0xf80384dc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut56{
        using Addr = Register::Address<0xf80384e0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut57{
        using Addr = Register::Address<0xf80384e4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut58{
        using Addr = Register::Address<0xf80384e8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut59{
        using Addr = Register::Address<0xf80384ec,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut60{
        using Addr = Register::Address<0xf80384f0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut61{
        using Addr = Register::Address<0xf80384f4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut62{
        using Addr = Register::Address<0xf80384f8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut63{
        using Addr = Register::Address<0xf80384fc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut64{
        using Addr = Register::Address<0xf8038500,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut65{
        using Addr = Register::Address<0xf8038504,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut66{
        using Addr = Register::Address<0xf8038508,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut67{
        using Addr = Register::Address<0xf803850c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut68{
        using Addr = Register::Address<0xf8038510,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut69{
        using Addr = Register::Address<0xf8038514,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut70{
        using Addr = Register::Address<0xf8038518,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut71{
        using Addr = Register::Address<0xf803851c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut72{
        using Addr = Register::Address<0xf8038520,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut73{
        using Addr = Register::Address<0xf8038524,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut74{
        using Addr = Register::Address<0xf8038528,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut75{
        using Addr = Register::Address<0xf803852c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut76{
        using Addr = Register::Address<0xf8038530,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut77{
        using Addr = Register::Address<0xf8038534,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut78{
        using Addr = Register::Address<0xf8038538,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut79{
        using Addr = Register::Address<0xf803853c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut80{
        using Addr = Register::Address<0xf8038540,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut81{
        using Addr = Register::Address<0xf8038544,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut82{
        using Addr = Register::Address<0xf8038548,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut83{
        using Addr = Register::Address<0xf803854c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut84{
        using Addr = Register::Address<0xf8038550,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut85{
        using Addr = Register::Address<0xf8038554,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut86{
        using Addr = Register::Address<0xf8038558,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut87{
        using Addr = Register::Address<0xf803855c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut88{
        using Addr = Register::Address<0xf8038560,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut89{
        using Addr = Register::Address<0xf8038564,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut90{
        using Addr = Register::Address<0xf8038568,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut91{
        using Addr = Register::Address<0xf803856c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut92{
        using Addr = Register::Address<0xf8038570,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut93{
        using Addr = Register::Address<0xf8038574,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut94{
        using Addr = Register::Address<0xf8038578,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut95{
        using Addr = Register::Address<0xf803857c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut96{
        using Addr = Register::Address<0xf8038580,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut97{
        using Addr = Register::Address<0xf8038584,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut98{
        using Addr = Register::Address<0xf8038588,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut99{
        using Addr = Register::Address<0xf803858c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut100{
        using Addr = Register::Address<0xf8038590,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut101{
        using Addr = Register::Address<0xf8038594,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut102{
        using Addr = Register::Address<0xf8038598,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut103{
        using Addr = Register::Address<0xf803859c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut104{
        using Addr = Register::Address<0xf80385a0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut105{
        using Addr = Register::Address<0xf80385a4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut106{
        using Addr = Register::Address<0xf80385a8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut107{
        using Addr = Register::Address<0xf80385ac,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut108{
        using Addr = Register::Address<0xf80385b0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut109{
        using Addr = Register::Address<0xf80385b4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut110{
        using Addr = Register::Address<0xf80385b8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut111{
        using Addr = Register::Address<0xf80385bc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut112{
        using Addr = Register::Address<0xf80385c0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut113{
        using Addr = Register::Address<0xf80385c4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut114{
        using Addr = Register::Address<0xf80385c8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut115{
        using Addr = Register::Address<0xf80385cc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut116{
        using Addr = Register::Address<0xf80385d0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut117{
        using Addr = Register::Address<0xf80385d4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut118{
        using Addr = Register::Address<0xf80385d8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut119{
        using Addr = Register::Address<0xf80385dc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut120{
        using Addr = Register::Address<0xf80385e0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut121{
        using Addr = Register::Address<0xf80385e4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut122{
        using Addr = Register::Address<0xf80385e8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut123{
        using Addr = Register::Address<0xf80385ec,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut124{
        using Addr = Register::Address<0xf80385f0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut125{
        using Addr = Register::Address<0xf80385f4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut126{
        using Addr = Register::Address<0xf80385f8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut127{
        using Addr = Register::Address<0xf80385fc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut128{
        using Addr = Register::Address<0xf8038600,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut129{
        using Addr = Register::Address<0xf8038604,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut130{
        using Addr = Register::Address<0xf8038608,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut131{
        using Addr = Register::Address<0xf803860c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut132{
        using Addr = Register::Address<0xf8038610,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut133{
        using Addr = Register::Address<0xf8038614,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut134{
        using Addr = Register::Address<0xf8038618,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut135{
        using Addr = Register::Address<0xf803861c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut136{
        using Addr = Register::Address<0xf8038620,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut137{
        using Addr = Register::Address<0xf8038624,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut138{
        using Addr = Register::Address<0xf8038628,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut139{
        using Addr = Register::Address<0xf803862c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut140{
        using Addr = Register::Address<0xf8038630,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut141{
        using Addr = Register::Address<0xf8038634,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut142{
        using Addr = Register::Address<0xf8038638,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut143{
        using Addr = Register::Address<0xf803863c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut144{
        using Addr = Register::Address<0xf8038640,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut145{
        using Addr = Register::Address<0xf8038644,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut146{
        using Addr = Register::Address<0xf8038648,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut147{
        using Addr = Register::Address<0xf803864c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut148{
        using Addr = Register::Address<0xf8038650,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut149{
        using Addr = Register::Address<0xf8038654,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut150{
        using Addr = Register::Address<0xf8038658,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut151{
        using Addr = Register::Address<0xf803865c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut152{
        using Addr = Register::Address<0xf8038660,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut153{
        using Addr = Register::Address<0xf8038664,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut154{
        using Addr = Register::Address<0xf8038668,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut155{
        using Addr = Register::Address<0xf803866c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut156{
        using Addr = Register::Address<0xf8038670,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut157{
        using Addr = Register::Address<0xf8038674,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut158{
        using Addr = Register::Address<0xf8038678,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut159{
        using Addr = Register::Address<0xf803867c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut160{
        using Addr = Register::Address<0xf8038680,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut161{
        using Addr = Register::Address<0xf8038684,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut162{
        using Addr = Register::Address<0xf8038688,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut163{
        using Addr = Register::Address<0xf803868c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut164{
        using Addr = Register::Address<0xf8038690,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut165{
        using Addr = Register::Address<0xf8038694,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut166{
        using Addr = Register::Address<0xf8038698,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut167{
        using Addr = Register::Address<0xf803869c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut168{
        using Addr = Register::Address<0xf80386a0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut169{
        using Addr = Register::Address<0xf80386a4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut170{
        using Addr = Register::Address<0xf80386a8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut171{
        using Addr = Register::Address<0xf80386ac,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut172{
        using Addr = Register::Address<0xf80386b0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut173{
        using Addr = Register::Address<0xf80386b4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut174{
        using Addr = Register::Address<0xf80386b8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut175{
        using Addr = Register::Address<0xf80386bc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut176{
        using Addr = Register::Address<0xf80386c0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut177{
        using Addr = Register::Address<0xf80386c4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut178{
        using Addr = Register::Address<0xf80386c8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut179{
        using Addr = Register::Address<0xf80386cc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut180{
        using Addr = Register::Address<0xf80386d0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut181{
        using Addr = Register::Address<0xf80386d4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut182{
        using Addr = Register::Address<0xf80386d8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut183{
        using Addr = Register::Address<0xf80386dc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut184{
        using Addr = Register::Address<0xf80386e0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut185{
        using Addr = Register::Address<0xf80386e4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut186{
        using Addr = Register::Address<0xf80386e8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut187{
        using Addr = Register::Address<0xf80386ec,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut188{
        using Addr = Register::Address<0xf80386f0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut189{
        using Addr = Register::Address<0xf80386f4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut190{
        using Addr = Register::Address<0xf80386f8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut191{
        using Addr = Register::Address<0xf80386fc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut192{
        using Addr = Register::Address<0xf8038700,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut193{
        using Addr = Register::Address<0xf8038704,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut194{
        using Addr = Register::Address<0xf8038708,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut195{
        using Addr = Register::Address<0xf803870c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut196{
        using Addr = Register::Address<0xf8038710,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut197{
        using Addr = Register::Address<0xf8038714,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut198{
        using Addr = Register::Address<0xf8038718,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut199{
        using Addr = Register::Address<0xf803871c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut200{
        using Addr = Register::Address<0xf8038720,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut201{
        using Addr = Register::Address<0xf8038724,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut202{
        using Addr = Register::Address<0xf8038728,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut203{
        using Addr = Register::Address<0xf803872c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut204{
        using Addr = Register::Address<0xf8038730,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut205{
        using Addr = Register::Address<0xf8038734,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut206{
        using Addr = Register::Address<0xf8038738,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut207{
        using Addr = Register::Address<0xf803873c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut208{
        using Addr = Register::Address<0xf8038740,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut209{
        using Addr = Register::Address<0xf8038744,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut210{
        using Addr = Register::Address<0xf8038748,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut211{
        using Addr = Register::Address<0xf803874c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut212{
        using Addr = Register::Address<0xf8038750,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut213{
        using Addr = Register::Address<0xf8038754,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut214{
        using Addr = Register::Address<0xf8038758,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut215{
        using Addr = Register::Address<0xf803875c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut216{
        using Addr = Register::Address<0xf8038760,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut217{
        using Addr = Register::Address<0xf8038764,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut218{
        using Addr = Register::Address<0xf8038768,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut219{
        using Addr = Register::Address<0xf803876c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut220{
        using Addr = Register::Address<0xf8038770,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut221{
        using Addr = Register::Address<0xf8038774,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut222{
        using Addr = Register::Address<0xf8038778,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut223{
        using Addr = Register::Address<0xf803877c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut224{
        using Addr = Register::Address<0xf8038780,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut225{
        using Addr = Register::Address<0xf8038784,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut226{
        using Addr = Register::Address<0xf8038788,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut227{
        using Addr = Register::Address<0xf803878c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut228{
        using Addr = Register::Address<0xf8038790,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut229{
        using Addr = Register::Address<0xf8038794,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut230{
        using Addr = Register::Address<0xf8038798,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut231{
        using Addr = Register::Address<0xf803879c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut232{
        using Addr = Register::Address<0xf80387a0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut233{
        using Addr = Register::Address<0xf80387a4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut234{
        using Addr = Register::Address<0xf80387a8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut235{
        using Addr = Register::Address<0xf80387ac,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut236{
        using Addr = Register::Address<0xf80387b0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut237{
        using Addr = Register::Address<0xf80387b4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut238{
        using Addr = Register::Address<0xf80387b8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut239{
        using Addr = Register::Address<0xf80387bc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut240{
        using Addr = Register::Address<0xf80387c0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut241{
        using Addr = Register::Address<0xf80387c4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut242{
        using Addr = Register::Address<0xf80387c8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut243{
        using Addr = Register::Address<0xf80387cc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut244{
        using Addr = Register::Address<0xf80387d0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut245{
        using Addr = Register::Address<0xf80387d4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut246{
        using Addr = Register::Address<0xf80387d8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut247{
        using Addr = Register::Address<0xf80387dc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut248{
        using Addr = Register::Address<0xf80387e0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut249{
        using Addr = Register::Address<0xf80387e4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut250{
        using Addr = Register::Address<0xf80387e8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut251{
        using Addr = Register::Address<0xf80387ec,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut252{
        using Addr = Register::Address<0xf80387f0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut253{
        using Addr = Register::Address<0xf80387f4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut254{
        using Addr = Register::Address<0xf80387f8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut255{
        using Addr = Register::Address<0xf80387fc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_addrsize{
        using Addr = Register::Address<0xf8039fec,0xffffffff>;
    }
    namespace LCDC_ipname0{
        using Addr = Register::Address<0xf8039ff0,0xffffffff>;
    }
    namespace LCDC_ipname1{
        using Addr = Register::Address<0xf8039ff4,0xffffffff>;
    }
    namespace LCDC_features{
        using Addr = Register::Address<0xf8039ff8,0xffffffff>;
    }
    namespace LCDC_version{
        using Addr = Register::Address<0xf8039ffc,0xffffffff>;
    }
}
