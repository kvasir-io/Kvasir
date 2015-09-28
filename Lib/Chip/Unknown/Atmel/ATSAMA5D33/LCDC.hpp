#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace LCDC_lcdcfg0{
        using Addr = Register::Address<0xf0030000,0xff00c0f2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLKPWMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CGDISBASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CGDISOVR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CGDISOVR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CGDISHEO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CGDISHCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CGDISPP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CLKDIV; 
    }
    namespace LCDC_lcdcfg1{
        using Addr = Register::Address<0xf0030004,0xffc0ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> HSPW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> VSPW; 
    }
    namespace LCDC_lcdcfg2{
        using Addr = Register::Address<0xf0030008,0xffc0ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> VFPW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> VBPW; 
    }
    namespace LCDC_lcdcfg3{
        using Addr = Register::Address<0xf003000c,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> HFPW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16)> HBPW; 
    }
    namespace LCDC_lcdcfg4{
        using Addr = Register::Address<0xf0030010,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> PPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> RPF; 
    }
    namespace LCDC_lcdcfg5{
        using Addr = Register::Address<0xf0030014,0xffe0c820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VSPDLYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VSPDLYE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DISPPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DITHER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DISPDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> VSPSU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> VSPHO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> GUARDTIME; 
    }
    namespace LCDC_lcdcfg6{
        using Addr = Register::Address<0xf0030018,0xffff00e8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PWMPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PWMPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PWMCVAL; 
    }
    namespace LCDC_lcden{
        using Addr = Register::Address<0xf0030020,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYNCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWMEN; 
    }
    namespace LCDC_lcddis{
        using Addr = Register::Address<0xf0030024,0xfffff0f0>;
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
        using Addr = Register::Address<0xf0030028,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LCDSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISPSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWMSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SIPSTS; 
    }
    namespace LCDC_lcdier{
        using Addr = Register::Address<0xf003002c,0xffffc0e8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DISIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FIFOERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BASEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OVR1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OVR2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HEOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HCRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PPIE; 
    }
    namespace LCDC_lcdidr{
        using Addr = Register::Address<0xf0030030,0xffffc0e8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOFID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DISID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FIFOERRID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BASEID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OVR1ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OVR2ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HEOID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HCRID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PPID; 
    }
    namespace LCDC_lcdimr{
        using Addr = Register::Address<0xf0030034,0xffffc0e8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOFIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DISIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISPIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FIFOERRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BASEIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OVR1IM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OVR2IM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HEOIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HCRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PPIM; 
    }
    namespace LCDC_lcdisr{
        using Addr = Register::Address<0xf0030038,0xffffc0e8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FIFOERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OVR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OVR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HEO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PP; 
    }
    namespace LCDC_basecher{
        using Addr = Register::Address<0xf0030040,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QEN; 
    }
    namespace LCDC_basechdr{
        using Addr = Register::Address<0xf0030044,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHRST; 
    }
    namespace LCDC_basechsr{
        using Addr = Register::Address<0xf0030048,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATESR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QSR; 
    }
    namespace LCDC_baseier{
        using Addr = Register::Address<0xf003004c,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_baseidr{
        using Addr = Register::Address<0xf0030050,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_baseimr{
        using Addr = Register::Address<0xf0030054,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_baseisr{
        using Addr = Register::Address<0xf0030058,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_basehead{
        using Addr = Register::Address<0xf003005c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> HEAD; 
    }
    namespace LCDC_baseaddr{
        using Addr = Register::Address<0xf0030060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace LCDC_basectrl{
        using Addr = Register::Address<0xf0030064,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONEIEN; 
    }
    namespace LCDC_basenext{
        using Addr = Register::Address<0xf0030068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NEXT; 
    }
    namespace LCDC_basecfg0{
        using Addr = Register::Address<0xf003006c,0xfffffece>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DLBO; 
    }
    namespace LCDC_basecfg1{
        using Addr = Register::Address<0xf0030070,0xfffffc0e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RGBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CLUTMODE; 
    }
    namespace LCDC_basecfg2{
        using Addr = Register::Address<0xf0030074,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> XSTRIDE; 
    }
    namespace LCDC_basecfg3{
        using Addr = Register::Address<0xf0030078,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RDEF; 
    }
    namespace LCDC_basecfg4{
        using Addr = Register::Address<0xf003007c,0xfffff4ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DISCEN; 
    }
    namespace LCDC_basecfg5{
        using Addr = Register::Address<0xf0030080,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> DISCXPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> DISCYPOS; 
    }
    namespace LCDC_basecfg6{
        using Addr = Register::Address<0xf0030084,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> DISCXSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> DISCYSIZE; 
    }
    namespace LCDC_ovr1cher{
        using Addr = Register::Address<0xf0030140,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QEN; 
    }
    namespace LCDC_ovr1chdr{
        using Addr = Register::Address<0xf0030144,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHRST; 
    }
    namespace LCDC_ovr1chsr{
        using Addr = Register::Address<0xf0030148,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATESR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QSR; 
    }
    namespace LCDC_ovr1ier{
        using Addr = Register::Address<0xf003014c,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_ovr1idr{
        using Addr = Register::Address<0xf0030150,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_ovr1imr{
        using Addr = Register::Address<0xf0030154,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_ovr1isr{
        using Addr = Register::Address<0xf0030158,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_ovr1head{
        using Addr = Register::Address<0xf003015c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> HEAD; 
    }
    namespace LCDC_ovr1addr{
        using Addr = Register::Address<0xf0030160,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace LCDC_ovr1ctrl{
        using Addr = Register::Address<0xf0030164,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONEIEN; 
    }
    namespace LCDC_ovr1next{
        using Addr = Register::Address<0xf0030168,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NEXT; 
    }
    namespace LCDC_ovr1cfg0{
        using Addr = Register::Address<0xf003016c,0xffffcece>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DLBO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ROTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LOCKDIS; 
    }
    namespace LCDC_ovr1cfg1{
        using Addr = Register::Address<0xf0030170,0xfffffc0e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RGBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CLUTMODE; 
    }
    namespace LCDC_ovr1cfg2{
        using Addr = Register::Address<0xf0030174,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> XPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> YPOS; 
    }
    namespace LCDC_ovr1cfg3{
        using Addr = Register::Address<0xf0030178,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> XSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> YSIZE; 
    }
    namespace LCDC_ovr1cfg4{
        using Addr = Register::Address<0xf003017c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> XSTRIDE; 
    }
    namespace LCDC_ovr1cfg5{
        using Addr = Register::Address<0xf0030180,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PSTRIDE; 
    }
    namespace LCDC_ovr1cfg6{
        using Addr = Register::Address<0xf0030184,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RDEF; 
    }
    namespace LCDC_ovr1cfg7{
        using Addr = Register::Address<0xf0030188,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RKEY; 
    }
    namespace LCDC_ovr1cfg8{
        using Addr = Register::Address<0xf003018c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RMASK; 
    }
    namespace LCDC_ovr1cfg9{
        using Addr = Register::Address<0xf0030190,0xff00f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ITER2BL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REVALPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DSTKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> GA; 
    }
    namespace LCDC_ovr2cher{
        using Addr = Register::Address<0xf0030240,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QEN; 
    }
    namespace LCDC_ovr2chdr{
        using Addr = Register::Address<0xf0030244,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHRST; 
    }
    namespace LCDC_ovr2chsr{
        using Addr = Register::Address<0xf0030248,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATESR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QSR; 
    }
    namespace LCDC_ovr2ier{
        using Addr = Register::Address<0xf003024c,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_ovr2idr{
        using Addr = Register::Address<0xf0030250,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_ovr2imr{
        using Addr = Register::Address<0xf0030254,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_ovr2isr{
        using Addr = Register::Address<0xf0030258,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_ovr2head{
        using Addr = Register::Address<0xf003025c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> HEAD; 
    }
    namespace LCDC_ovr2addr{
        using Addr = Register::Address<0xf0030260,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace LCDC_ovr2ctrl{
        using Addr = Register::Address<0xf0030264,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONEIEN; 
    }
    namespace LCDC_ovr2next{
        using Addr = Register::Address<0xf0030268,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NEXT; 
    }
    namespace LCDC_ovr2cfg0{
        using Addr = Register::Address<0xf003026c,0xffffcecf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DLBO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ROTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LOCKDIS; 
    }
    namespace LCDC_ovr2cfg1{
        using Addr = Register::Address<0xf0030270,0xfffffc0e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RGBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CLUTMODE; 
    }
    namespace LCDC_ovr2cfg2{
        using Addr = Register::Address<0xf0030274,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> XPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> YPOS; 
    }
    namespace LCDC_ovr2cfg3{
        using Addr = Register::Address<0xf0030278,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> XSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> YSIZE; 
    }
    namespace LCDC_ovr2cfg4{
        using Addr = Register::Address<0xf003027c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> XSTRIDE; 
    }
    namespace LCDC_ovr2cfg5{
        using Addr = Register::Address<0xf0030280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PSTRIDE; 
    }
    namespace LCDC_ovr2cfg6{
        using Addr = Register::Address<0xf0030284,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RDEF; 
    }
    namespace LCDC_ovr2cfg7{
        using Addr = Register::Address<0xf0030288,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RKEY; 
    }
    namespace LCDC_ovr2cfg8{
        using Addr = Register::Address<0xf003028c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RMASK; 
    }
    namespace LCDC_ovr2cfg9{
        using Addr = Register::Address<0xf0030290,0xff00f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ITER2BL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REVALPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DSTKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> GA; 
    }
    namespace LCDC_heocher{
        using Addr = Register::Address<0xf0030340,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QEN; 
    }
    namespace LCDC_heochdr{
        using Addr = Register::Address<0xf0030344,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHRST; 
    }
    namespace LCDC_heochsr{
        using Addr = Register::Address<0xf0030348,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATESR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QSR; 
    }
    namespace LCDC_heoier{
        using Addr = Register::Address<0xf003034c,0xff838383>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UDSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> UDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> UOVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> VDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> VDSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> VADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> VDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> VOVR; 
    }
    namespace LCDC_heoidr{
        using Addr = Register::Address<0xf0030350,0xff838383>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UDSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> UDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> UOVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> VDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> VDSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> VADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> VDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> VOVR; 
    }
    namespace LCDC_heoimr{
        using Addr = Register::Address<0xf0030354,0xff838383>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UDSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> UDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> UOVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> VDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> VDSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> VADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> VDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> VOVR; 
    }
    namespace LCDC_heoisr{
        using Addr = Register::Address<0xf0030358,0xff838383>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UDSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> UDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> UOVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> VDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> VDSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> VADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> VDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> VOVR; 
    }
    namespace LCDC_heohead{
        using Addr = Register::Address<0xf003035c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> HEAD; 
    }
    namespace LCDC_heoaddr{
        using Addr = Register::Address<0xf0030360,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace LCDC_heoctrl{
        using Addr = Register::Address<0xf0030364,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONEIEN; 
    }
    namespace LCDC_heonext{
        using Addr = Register::Address<0xf0030368,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NEXT; 
    }
    namespace LCDC_heouhead{
        using Addr = Register::Address<0xf003036c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UHEAD; 
    }
    namespace LCDC_heouaddr{
        using Addr = Register::Address<0xf0030370,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UADDR; 
    }
    namespace LCDC_heouctrl{
        using Addr = Register::Address<0xf0030374,0xffffffc2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UDFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UDMAIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UDSCRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UADDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UDONEIEN; 
    }
    namespace LCDC_heounext{
        using Addr = Register::Address<0xf0030378,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UNEXT; 
    }
    namespace LCDC_heovhead{
        using Addr = Register::Address<0xf003037c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VHEAD; 
    }
    namespace LCDC_heovaddr{
        using Addr = Register::Address<0xf0030380,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VADDR; 
    }
    namespace LCDC_heovctrl{
        using Addr = Register::Address<0xf0030384,0xffffffc2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VDFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VDMAIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VDSCRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> VADDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> VDONEIEN; 
    }
    namespace LCDC_heovnext{
        using Addr = Register::Address<0xf0030388,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VNEXT; 
    }
    namespace LCDC_heocfg0{
        using Addr = Register::Address<0xf003038c,0xffffce0e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BLENUV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DLBO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ROTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LOCKDIS; 
    }
    namespace LCDC_heocfg1{
        using Addr = Register::Address<0xf0030390,0xffec0c0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> YUVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RGBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CLUTMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> YUVMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> YUV422ROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> YUV422SWP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DSCALEOPT; 
    }
    namespace LCDC_heocfg2{
        using Addr = Register::Address<0xf0030394,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> XPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> YPOS; 
    }
    namespace LCDC_heocfg3{
        using Addr = Register::Address<0xf0030398,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> XSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> YSIZE; 
    }
    namespace LCDC_heocfg4{
        using Addr = Register::Address<0xf003039c,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> XMEMSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> YMEMSIZE; 
    }
    namespace LCDC_heocfg5{
        using Addr = Register::Address<0xf00303a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> XSTRIDE; 
    }
    namespace LCDC_heocfg6{
        using Addr = Register::Address<0xf00303a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PSTRIDE; 
    }
    namespace LCDC_heocfg7{
        using Addr = Register::Address<0xf00303a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UVXSTRIDE; 
    }
    namespace LCDC_heocfg8{
        using Addr = Register::Address<0xf00303ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UVPSTRIDE; 
    }
    namespace LCDC_heocfg9{
        using Addr = Register::Address<0xf00303b0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RDEF; 
    }
    namespace LCDC_heocfg10{
        using Addr = Register::Address<0xf00303b4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RKEY; 
    }
    namespace LCDC_heocfg11{
        using Addr = Register::Address<0xf00303b8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RMASK; 
    }
    namespace LCDC_heocfg12{
        using Addr = Register::Address<0xf00303bc,0xff00e800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ITER2BL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REVALPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DSTKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> VIDPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> GA; 
    }
    namespace LCDC_heocfg13{
        using Addr = Register::Address<0xf00303c0,0x4000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> XFACTOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> YFACTOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SCALEN; 
    }
    namespace LCDC_heocfg14{
        using Addr = Register::Address<0xf00303c4,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CSCRY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10)> CSCRU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20)> CSCRV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CSCYOFF; 
    }
    namespace LCDC_heocfg15{
        using Addr = Register::Address<0xf00303c8,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CSCGY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10)> CSCGU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20)> CSCGV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CSCUOFF; 
    }
    namespace LCDC_heocfg16{
        using Addr = Register::Address<0xf00303cc,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CSCBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10)> CSCBU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20)> CSCBV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CSCVOFF; 
    }
    namespace LCDC_heocfg17{
        using Addr = Register::Address<0xf00303d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XPHI0COEFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> XPHI0COEFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> XPHI0COEFF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> XPHI0COEFF3; 
    }
    namespace LCDC_heocfg18{
        using Addr = Register::Address<0xf00303d4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XPHI0COEFF4; 
    }
    namespace LCDC_heocfg19{
        using Addr = Register::Address<0xf00303d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XPHI1COEFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> XPHI1COEFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> XPHI1COEFF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> XPHI1COEFF3; 
    }
    namespace LCDC_heocfg20{
        using Addr = Register::Address<0xf00303dc,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XPHI1COEFF4; 
    }
    namespace LCDC_heocfg21{
        using Addr = Register::Address<0xf00303e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XPHI2COEFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> XPHI2COEFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> XPHI2COEFF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> XPHI2COEFF3; 
    }
    namespace LCDC_heocfg22{
        using Addr = Register::Address<0xf00303e4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XPHI2COEFF4; 
    }
    namespace LCDC_heocfg23{
        using Addr = Register::Address<0xf00303e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XPHI3COEFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> XPHI3COEFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> XPHI3COEFF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> XPHI3COEFF3; 
    }
    namespace LCDC_heocfg24{
        using Addr = Register::Address<0xf00303ec,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XPHI3COEFF4; 
    }
    namespace LCDC_heocfg25{
        using Addr = Register::Address<0xf00303f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XPHI4COEFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> XPHI4COEFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> XPHI4COEFF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> XPHI4COEFF3; 
    }
    namespace LCDC_heocfg26{
        using Addr = Register::Address<0xf00303f4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XPHI4COEFF4; 
    }
    namespace LCDC_heocfg27{
        using Addr = Register::Address<0xf00303f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XPHI5COEFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> XPHI5COEFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> XPHI5COEFF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> XPHI5COEFF3; 
    }
    namespace LCDC_heocfg28{
        using Addr = Register::Address<0xf00303fc,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XPHI5COEFF4; 
    }
    namespace LCDC_heocfg29{
        using Addr = Register::Address<0xf0030400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XPHI6COEFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> XPHI6COEFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> XPHI6COEFF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> XPHI6COEFF3; 
    }
    namespace LCDC_heocfg30{
        using Addr = Register::Address<0xf0030404,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XPHI6COEFF4; 
    }
    namespace LCDC_heocfg31{
        using Addr = Register::Address<0xf0030408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XPHI7COEFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> XPHI7COEFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> XPHI7COEFF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> XPHI7COEFF3; 
    }
    namespace LCDC_heocfg32{
        using Addr = Register::Address<0xf003040c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XPHI7COEFF4; 
    }
    namespace LCDC_heocfg33{
        using Addr = Register::Address<0xf0030410,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> YPHI0COEFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> YPHI0COEFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> YPHI0COEFF2; 
    }
    namespace LCDC_heocfg34{
        using Addr = Register::Address<0xf0030414,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> YPHI1COEFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> YPHI1COEFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> YPHI1COEFF2; 
    }
    namespace LCDC_heocfg35{
        using Addr = Register::Address<0xf0030418,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> YPHI2COEFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> YPHI2COEFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> YPHI2COEFF2; 
    }
    namespace LCDC_heocfg36{
        using Addr = Register::Address<0xf003041c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> YPHI3COEFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> YPHI3COEFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> YPHI3COEFF2; 
    }
    namespace LCDC_heocfg37{
        using Addr = Register::Address<0xf0030420,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> YPHI4COEFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> YPHI4COEFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> YPHI4COEFF2; 
    }
    namespace LCDC_heocfg38{
        using Addr = Register::Address<0xf0030424,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> YPHI5COEFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> YPHI5COEFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> YPHI5COEFF2; 
    }
    namespace LCDC_heocfg39{
        using Addr = Register::Address<0xf0030428,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> YPHI6COEFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> YPHI6COEFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> YPHI6COEFF2; 
    }
    namespace LCDC_heocfg40{
        using Addr = Register::Address<0xf003042c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> YPHI7COEFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> YPHI7COEFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> YPHI7COEFF2; 
    }
    namespace LCDC_heocfg41{
        using Addr = Register::Address<0xf0030430,0xfff8fff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> XPHIDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> YPHIDEF; 
    }
    namespace LCDC_hcrcher{
        using Addr = Register::Address<0xf0030440,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QEN; 
    }
    namespace LCDC_hcrchdr{
        using Addr = Register::Address<0xf0030444,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHRST; 
    }
    namespace LCDC_hcrchsr{
        using Addr = Register::Address<0xf0030448,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATESR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QSR; 
    }
    namespace LCDC_hcrier{
        using Addr = Register::Address<0xf003044c,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_hcridr{
        using Addr = Register::Address<0xf0030450,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_hcrimr{
        using Addr = Register::Address<0xf0030454,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_hcrisr{
        using Addr = Register::Address<0xf0030458,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_hcrhead{
        using Addr = Register::Address<0xf003045c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> HEAD; 
    }
    namespace LCDC_hcraddr{
        using Addr = Register::Address<0xf0030460,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace LCDC_hcrctrl{
        using Addr = Register::Address<0xf0030464,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONEIEN; 
    }
    namespace LCDC_hcrnext{
        using Addr = Register::Address<0xf0030468,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NEXT; 
    }
    namespace LCDC_hcrcfg0{
        using Addr = Register::Address<0xf003046c,0xfffffece>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DLBO; 
    }
    namespace LCDC_hcrcfg1{
        using Addr = Register::Address<0xf0030470,0xfffffc0e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RGBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CLUTMODE; 
    }
    namespace LCDC_hcrcfg2{
        using Addr = Register::Address<0xf0030474,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> XPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> YPOS; 
    }
    namespace LCDC_hcrcfg3{
        using Addr = Register::Address<0xf0030478,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> XSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> YSIZE; 
    }
    namespace LCDC_hcrcfg4{
        using Addr = Register::Address<0xf003047c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> XSTRIDE; 
    }
    namespace LCDC_hcrcfg6{
        using Addr = Register::Address<0xf0030484,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RDEF; 
    }
    namespace LCDC_hcrcfg7{
        using Addr = Register::Address<0xf0030488,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RKEY; 
    }
    namespace LCDC_hcrcfg8{
        using Addr = Register::Address<0xf003048c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RMASK; 
    }
    namespace LCDC_hcrcfg9{
        using Addr = Register::Address<0xf0030490,0xff00f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ITER2BL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REVALPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DSTKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> GA; 
    }
    namespace LCDC_ppcher{
        using Addr = Register::Address<0xf0030540,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QEN; 
    }
    namespace LCDC_ppchdr{
        using Addr = Register::Address<0xf0030544,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHRST; 
    }
    namespace LCDC_ppchsr{
        using Addr = Register::Address<0xf0030548,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATESR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QSR; 
    }
    namespace LCDC_ppier{
        using Addr = Register::Address<0xf003054c,0xffffffc3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
    }
    namespace LCDC_ppidr{
        using Addr = Register::Address<0xf0030550,0xffffffc3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
    }
    namespace LCDC_ppimr{
        using Addr = Register::Address<0xf0030554,0xffffffc3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
    }
    namespace LCDC_ppisr{
        using Addr = Register::Address<0xf0030558,0xffffffc3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
    }
    namespace LCDC_pphead{
        using Addr = Register::Address<0xf003055c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> HEAD; 
    }
    namespace LCDC_ppaddr{
        using Addr = Register::Address<0xf0030560,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace LCDC_ppctrl{
        using Addr = Register::Address<0xf0030564,0xffffffc2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONEIEN; 
    }
    namespace LCDC_ppnext{
        using Addr = Register::Address<0xf0030568,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NEXT; 
    }
    namespace LCDC_ppcfg0{
        using Addr = Register::Address<0xf003056c,0xfffffece>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DLBO; 
    }
    namespace LCDC_ppcfg1{
        using Addr = Register::Address<0xf0030570,0xffffffe8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PPMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ITUBT601; 
    }
    namespace LCDC_ppcfg2{
        using Addr = Register::Address<0xf0030574,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> XSTRIDE; 
    }
    namespace LCDC_ppcfg3{
        using Addr = Register::Address<0xf0030578,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CSCYR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10)> CSCYG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20)> CSCYB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CSCYOFF; 
    }
    namespace LCDC_ppcfg4{
        using Addr = Register::Address<0xf003057c,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CSCUR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10)> CSCUG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20)> CSCUB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CSCUOFF; 
    }
    namespace LCDC_ppcfg5{
        using Addr = Register::Address<0xf0030580,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CSCVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10)> CSCVG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20)> CSCVB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CSCVOFF; 
    }
    namespace LCDC_baseclut0{
        using Addr = Register::Address<0xf0030600,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut1{
        using Addr = Register::Address<0xf0030604,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut2{
        using Addr = Register::Address<0xf0030608,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut3{
        using Addr = Register::Address<0xf003060c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut4{
        using Addr = Register::Address<0xf0030610,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut5{
        using Addr = Register::Address<0xf0030614,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut6{
        using Addr = Register::Address<0xf0030618,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut7{
        using Addr = Register::Address<0xf003061c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut8{
        using Addr = Register::Address<0xf0030620,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut9{
        using Addr = Register::Address<0xf0030624,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut10{
        using Addr = Register::Address<0xf0030628,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut11{
        using Addr = Register::Address<0xf003062c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut12{
        using Addr = Register::Address<0xf0030630,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut13{
        using Addr = Register::Address<0xf0030634,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut14{
        using Addr = Register::Address<0xf0030638,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut15{
        using Addr = Register::Address<0xf003063c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut16{
        using Addr = Register::Address<0xf0030640,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut17{
        using Addr = Register::Address<0xf0030644,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut18{
        using Addr = Register::Address<0xf0030648,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut19{
        using Addr = Register::Address<0xf003064c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut20{
        using Addr = Register::Address<0xf0030650,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut21{
        using Addr = Register::Address<0xf0030654,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut22{
        using Addr = Register::Address<0xf0030658,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut23{
        using Addr = Register::Address<0xf003065c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut24{
        using Addr = Register::Address<0xf0030660,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut25{
        using Addr = Register::Address<0xf0030664,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut26{
        using Addr = Register::Address<0xf0030668,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut27{
        using Addr = Register::Address<0xf003066c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut28{
        using Addr = Register::Address<0xf0030670,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut29{
        using Addr = Register::Address<0xf0030674,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut30{
        using Addr = Register::Address<0xf0030678,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut31{
        using Addr = Register::Address<0xf003067c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut32{
        using Addr = Register::Address<0xf0030680,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut33{
        using Addr = Register::Address<0xf0030684,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut34{
        using Addr = Register::Address<0xf0030688,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut35{
        using Addr = Register::Address<0xf003068c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut36{
        using Addr = Register::Address<0xf0030690,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut37{
        using Addr = Register::Address<0xf0030694,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut38{
        using Addr = Register::Address<0xf0030698,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut39{
        using Addr = Register::Address<0xf003069c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut40{
        using Addr = Register::Address<0xf00306a0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut41{
        using Addr = Register::Address<0xf00306a4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut42{
        using Addr = Register::Address<0xf00306a8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut43{
        using Addr = Register::Address<0xf00306ac,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut44{
        using Addr = Register::Address<0xf00306b0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut45{
        using Addr = Register::Address<0xf00306b4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut46{
        using Addr = Register::Address<0xf00306b8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut47{
        using Addr = Register::Address<0xf00306bc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut48{
        using Addr = Register::Address<0xf00306c0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut49{
        using Addr = Register::Address<0xf00306c4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut50{
        using Addr = Register::Address<0xf00306c8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut51{
        using Addr = Register::Address<0xf00306cc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut52{
        using Addr = Register::Address<0xf00306d0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut53{
        using Addr = Register::Address<0xf00306d4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut54{
        using Addr = Register::Address<0xf00306d8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut55{
        using Addr = Register::Address<0xf00306dc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut56{
        using Addr = Register::Address<0xf00306e0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut57{
        using Addr = Register::Address<0xf00306e4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut58{
        using Addr = Register::Address<0xf00306e8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut59{
        using Addr = Register::Address<0xf00306ec,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut60{
        using Addr = Register::Address<0xf00306f0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut61{
        using Addr = Register::Address<0xf00306f4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut62{
        using Addr = Register::Address<0xf00306f8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut63{
        using Addr = Register::Address<0xf00306fc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut64{
        using Addr = Register::Address<0xf0030700,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut65{
        using Addr = Register::Address<0xf0030704,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut66{
        using Addr = Register::Address<0xf0030708,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut67{
        using Addr = Register::Address<0xf003070c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut68{
        using Addr = Register::Address<0xf0030710,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut69{
        using Addr = Register::Address<0xf0030714,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut70{
        using Addr = Register::Address<0xf0030718,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut71{
        using Addr = Register::Address<0xf003071c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut72{
        using Addr = Register::Address<0xf0030720,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut73{
        using Addr = Register::Address<0xf0030724,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut74{
        using Addr = Register::Address<0xf0030728,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut75{
        using Addr = Register::Address<0xf003072c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut76{
        using Addr = Register::Address<0xf0030730,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut77{
        using Addr = Register::Address<0xf0030734,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut78{
        using Addr = Register::Address<0xf0030738,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut79{
        using Addr = Register::Address<0xf003073c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut80{
        using Addr = Register::Address<0xf0030740,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut81{
        using Addr = Register::Address<0xf0030744,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut82{
        using Addr = Register::Address<0xf0030748,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut83{
        using Addr = Register::Address<0xf003074c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut84{
        using Addr = Register::Address<0xf0030750,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut85{
        using Addr = Register::Address<0xf0030754,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut86{
        using Addr = Register::Address<0xf0030758,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut87{
        using Addr = Register::Address<0xf003075c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut88{
        using Addr = Register::Address<0xf0030760,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut89{
        using Addr = Register::Address<0xf0030764,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut90{
        using Addr = Register::Address<0xf0030768,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut91{
        using Addr = Register::Address<0xf003076c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut92{
        using Addr = Register::Address<0xf0030770,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut93{
        using Addr = Register::Address<0xf0030774,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut94{
        using Addr = Register::Address<0xf0030778,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut95{
        using Addr = Register::Address<0xf003077c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut96{
        using Addr = Register::Address<0xf0030780,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut97{
        using Addr = Register::Address<0xf0030784,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut98{
        using Addr = Register::Address<0xf0030788,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut99{
        using Addr = Register::Address<0xf003078c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut100{
        using Addr = Register::Address<0xf0030790,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut101{
        using Addr = Register::Address<0xf0030794,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut102{
        using Addr = Register::Address<0xf0030798,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut103{
        using Addr = Register::Address<0xf003079c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut104{
        using Addr = Register::Address<0xf00307a0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut105{
        using Addr = Register::Address<0xf00307a4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut106{
        using Addr = Register::Address<0xf00307a8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut107{
        using Addr = Register::Address<0xf00307ac,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut108{
        using Addr = Register::Address<0xf00307b0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut109{
        using Addr = Register::Address<0xf00307b4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut110{
        using Addr = Register::Address<0xf00307b8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut111{
        using Addr = Register::Address<0xf00307bc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut112{
        using Addr = Register::Address<0xf00307c0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut113{
        using Addr = Register::Address<0xf00307c4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut114{
        using Addr = Register::Address<0xf00307c8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut115{
        using Addr = Register::Address<0xf00307cc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut116{
        using Addr = Register::Address<0xf00307d0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut117{
        using Addr = Register::Address<0xf00307d4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut118{
        using Addr = Register::Address<0xf00307d8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut119{
        using Addr = Register::Address<0xf00307dc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut120{
        using Addr = Register::Address<0xf00307e0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut121{
        using Addr = Register::Address<0xf00307e4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut122{
        using Addr = Register::Address<0xf00307e8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut123{
        using Addr = Register::Address<0xf00307ec,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut124{
        using Addr = Register::Address<0xf00307f0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut125{
        using Addr = Register::Address<0xf00307f4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut126{
        using Addr = Register::Address<0xf00307f8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut127{
        using Addr = Register::Address<0xf00307fc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut128{
        using Addr = Register::Address<0xf0030800,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut129{
        using Addr = Register::Address<0xf0030804,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut130{
        using Addr = Register::Address<0xf0030808,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut131{
        using Addr = Register::Address<0xf003080c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut132{
        using Addr = Register::Address<0xf0030810,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut133{
        using Addr = Register::Address<0xf0030814,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut134{
        using Addr = Register::Address<0xf0030818,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut135{
        using Addr = Register::Address<0xf003081c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut136{
        using Addr = Register::Address<0xf0030820,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut137{
        using Addr = Register::Address<0xf0030824,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut138{
        using Addr = Register::Address<0xf0030828,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut139{
        using Addr = Register::Address<0xf003082c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut140{
        using Addr = Register::Address<0xf0030830,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut141{
        using Addr = Register::Address<0xf0030834,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut142{
        using Addr = Register::Address<0xf0030838,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut143{
        using Addr = Register::Address<0xf003083c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut144{
        using Addr = Register::Address<0xf0030840,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut145{
        using Addr = Register::Address<0xf0030844,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut146{
        using Addr = Register::Address<0xf0030848,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut147{
        using Addr = Register::Address<0xf003084c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut148{
        using Addr = Register::Address<0xf0030850,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut149{
        using Addr = Register::Address<0xf0030854,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut150{
        using Addr = Register::Address<0xf0030858,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut151{
        using Addr = Register::Address<0xf003085c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut152{
        using Addr = Register::Address<0xf0030860,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut153{
        using Addr = Register::Address<0xf0030864,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut154{
        using Addr = Register::Address<0xf0030868,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut155{
        using Addr = Register::Address<0xf003086c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut156{
        using Addr = Register::Address<0xf0030870,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut157{
        using Addr = Register::Address<0xf0030874,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut158{
        using Addr = Register::Address<0xf0030878,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut159{
        using Addr = Register::Address<0xf003087c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut160{
        using Addr = Register::Address<0xf0030880,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut161{
        using Addr = Register::Address<0xf0030884,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut162{
        using Addr = Register::Address<0xf0030888,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut163{
        using Addr = Register::Address<0xf003088c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut164{
        using Addr = Register::Address<0xf0030890,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut165{
        using Addr = Register::Address<0xf0030894,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut166{
        using Addr = Register::Address<0xf0030898,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut167{
        using Addr = Register::Address<0xf003089c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut168{
        using Addr = Register::Address<0xf00308a0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut169{
        using Addr = Register::Address<0xf00308a4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut170{
        using Addr = Register::Address<0xf00308a8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut171{
        using Addr = Register::Address<0xf00308ac,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut172{
        using Addr = Register::Address<0xf00308b0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut173{
        using Addr = Register::Address<0xf00308b4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut174{
        using Addr = Register::Address<0xf00308b8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut175{
        using Addr = Register::Address<0xf00308bc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut176{
        using Addr = Register::Address<0xf00308c0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut177{
        using Addr = Register::Address<0xf00308c4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut178{
        using Addr = Register::Address<0xf00308c8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut179{
        using Addr = Register::Address<0xf00308cc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut180{
        using Addr = Register::Address<0xf00308d0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut181{
        using Addr = Register::Address<0xf00308d4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut182{
        using Addr = Register::Address<0xf00308d8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut183{
        using Addr = Register::Address<0xf00308dc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut184{
        using Addr = Register::Address<0xf00308e0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut185{
        using Addr = Register::Address<0xf00308e4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut186{
        using Addr = Register::Address<0xf00308e8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut187{
        using Addr = Register::Address<0xf00308ec,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut188{
        using Addr = Register::Address<0xf00308f0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut189{
        using Addr = Register::Address<0xf00308f4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut190{
        using Addr = Register::Address<0xf00308f8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut191{
        using Addr = Register::Address<0xf00308fc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut192{
        using Addr = Register::Address<0xf0030900,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut193{
        using Addr = Register::Address<0xf0030904,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut194{
        using Addr = Register::Address<0xf0030908,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut195{
        using Addr = Register::Address<0xf003090c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut196{
        using Addr = Register::Address<0xf0030910,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut197{
        using Addr = Register::Address<0xf0030914,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut198{
        using Addr = Register::Address<0xf0030918,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut199{
        using Addr = Register::Address<0xf003091c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut200{
        using Addr = Register::Address<0xf0030920,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut201{
        using Addr = Register::Address<0xf0030924,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut202{
        using Addr = Register::Address<0xf0030928,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut203{
        using Addr = Register::Address<0xf003092c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut204{
        using Addr = Register::Address<0xf0030930,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut205{
        using Addr = Register::Address<0xf0030934,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut206{
        using Addr = Register::Address<0xf0030938,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut207{
        using Addr = Register::Address<0xf003093c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut208{
        using Addr = Register::Address<0xf0030940,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut209{
        using Addr = Register::Address<0xf0030944,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut210{
        using Addr = Register::Address<0xf0030948,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut211{
        using Addr = Register::Address<0xf003094c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut212{
        using Addr = Register::Address<0xf0030950,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut213{
        using Addr = Register::Address<0xf0030954,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut214{
        using Addr = Register::Address<0xf0030958,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut215{
        using Addr = Register::Address<0xf003095c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut216{
        using Addr = Register::Address<0xf0030960,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut217{
        using Addr = Register::Address<0xf0030964,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut218{
        using Addr = Register::Address<0xf0030968,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut219{
        using Addr = Register::Address<0xf003096c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut220{
        using Addr = Register::Address<0xf0030970,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut221{
        using Addr = Register::Address<0xf0030974,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut222{
        using Addr = Register::Address<0xf0030978,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut223{
        using Addr = Register::Address<0xf003097c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut224{
        using Addr = Register::Address<0xf0030980,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut225{
        using Addr = Register::Address<0xf0030984,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut226{
        using Addr = Register::Address<0xf0030988,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut227{
        using Addr = Register::Address<0xf003098c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut228{
        using Addr = Register::Address<0xf0030990,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut229{
        using Addr = Register::Address<0xf0030994,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut230{
        using Addr = Register::Address<0xf0030998,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut231{
        using Addr = Register::Address<0xf003099c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut232{
        using Addr = Register::Address<0xf00309a0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut233{
        using Addr = Register::Address<0xf00309a4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut234{
        using Addr = Register::Address<0xf00309a8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut235{
        using Addr = Register::Address<0xf00309ac,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut236{
        using Addr = Register::Address<0xf00309b0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut237{
        using Addr = Register::Address<0xf00309b4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut238{
        using Addr = Register::Address<0xf00309b8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut239{
        using Addr = Register::Address<0xf00309bc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut240{
        using Addr = Register::Address<0xf00309c0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut241{
        using Addr = Register::Address<0xf00309c4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut242{
        using Addr = Register::Address<0xf00309c8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut243{
        using Addr = Register::Address<0xf00309cc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut244{
        using Addr = Register::Address<0xf00309d0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut245{
        using Addr = Register::Address<0xf00309d4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut246{
        using Addr = Register::Address<0xf00309d8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut247{
        using Addr = Register::Address<0xf00309dc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut248{
        using Addr = Register::Address<0xf00309e0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut249{
        using Addr = Register::Address<0xf00309e4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut250{
        using Addr = Register::Address<0xf00309e8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut251{
        using Addr = Register::Address<0xf00309ec,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut252{
        using Addr = Register::Address<0xf00309f0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut253{
        using Addr = Register::Address<0xf00309f4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut254{
        using Addr = Register::Address<0xf00309f8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_baseclut255{
        using Addr = Register::Address<0xf00309fc,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
    }
    namespace LCDC_ovr1clut0{
        using Addr = Register::Address<0xf0030a00,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut1{
        using Addr = Register::Address<0xf0030a04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut2{
        using Addr = Register::Address<0xf0030a08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut3{
        using Addr = Register::Address<0xf0030a0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut4{
        using Addr = Register::Address<0xf0030a10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut5{
        using Addr = Register::Address<0xf0030a14,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut6{
        using Addr = Register::Address<0xf0030a18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut7{
        using Addr = Register::Address<0xf0030a1c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut8{
        using Addr = Register::Address<0xf0030a20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut9{
        using Addr = Register::Address<0xf0030a24,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut10{
        using Addr = Register::Address<0xf0030a28,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut11{
        using Addr = Register::Address<0xf0030a2c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut12{
        using Addr = Register::Address<0xf0030a30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut13{
        using Addr = Register::Address<0xf0030a34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut14{
        using Addr = Register::Address<0xf0030a38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut15{
        using Addr = Register::Address<0xf0030a3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut16{
        using Addr = Register::Address<0xf0030a40,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut17{
        using Addr = Register::Address<0xf0030a44,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut18{
        using Addr = Register::Address<0xf0030a48,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut19{
        using Addr = Register::Address<0xf0030a4c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut20{
        using Addr = Register::Address<0xf0030a50,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut21{
        using Addr = Register::Address<0xf0030a54,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut22{
        using Addr = Register::Address<0xf0030a58,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut23{
        using Addr = Register::Address<0xf0030a5c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut24{
        using Addr = Register::Address<0xf0030a60,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut25{
        using Addr = Register::Address<0xf0030a64,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut26{
        using Addr = Register::Address<0xf0030a68,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut27{
        using Addr = Register::Address<0xf0030a6c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut28{
        using Addr = Register::Address<0xf0030a70,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut29{
        using Addr = Register::Address<0xf0030a74,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut30{
        using Addr = Register::Address<0xf0030a78,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut31{
        using Addr = Register::Address<0xf0030a7c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut32{
        using Addr = Register::Address<0xf0030a80,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut33{
        using Addr = Register::Address<0xf0030a84,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut34{
        using Addr = Register::Address<0xf0030a88,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut35{
        using Addr = Register::Address<0xf0030a8c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut36{
        using Addr = Register::Address<0xf0030a90,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut37{
        using Addr = Register::Address<0xf0030a94,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut38{
        using Addr = Register::Address<0xf0030a98,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut39{
        using Addr = Register::Address<0xf0030a9c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut40{
        using Addr = Register::Address<0xf0030aa0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut41{
        using Addr = Register::Address<0xf0030aa4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut42{
        using Addr = Register::Address<0xf0030aa8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut43{
        using Addr = Register::Address<0xf0030aac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut44{
        using Addr = Register::Address<0xf0030ab0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut45{
        using Addr = Register::Address<0xf0030ab4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut46{
        using Addr = Register::Address<0xf0030ab8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut47{
        using Addr = Register::Address<0xf0030abc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut48{
        using Addr = Register::Address<0xf0030ac0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut49{
        using Addr = Register::Address<0xf0030ac4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut50{
        using Addr = Register::Address<0xf0030ac8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut51{
        using Addr = Register::Address<0xf0030acc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut52{
        using Addr = Register::Address<0xf0030ad0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut53{
        using Addr = Register::Address<0xf0030ad4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut54{
        using Addr = Register::Address<0xf0030ad8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut55{
        using Addr = Register::Address<0xf0030adc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut56{
        using Addr = Register::Address<0xf0030ae0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut57{
        using Addr = Register::Address<0xf0030ae4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut58{
        using Addr = Register::Address<0xf0030ae8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut59{
        using Addr = Register::Address<0xf0030aec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut60{
        using Addr = Register::Address<0xf0030af0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut61{
        using Addr = Register::Address<0xf0030af4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut62{
        using Addr = Register::Address<0xf0030af8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut63{
        using Addr = Register::Address<0xf0030afc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut64{
        using Addr = Register::Address<0xf0030b00,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut65{
        using Addr = Register::Address<0xf0030b04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut66{
        using Addr = Register::Address<0xf0030b08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut67{
        using Addr = Register::Address<0xf0030b0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut68{
        using Addr = Register::Address<0xf0030b10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut69{
        using Addr = Register::Address<0xf0030b14,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut70{
        using Addr = Register::Address<0xf0030b18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut71{
        using Addr = Register::Address<0xf0030b1c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut72{
        using Addr = Register::Address<0xf0030b20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut73{
        using Addr = Register::Address<0xf0030b24,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut74{
        using Addr = Register::Address<0xf0030b28,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut75{
        using Addr = Register::Address<0xf0030b2c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut76{
        using Addr = Register::Address<0xf0030b30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut77{
        using Addr = Register::Address<0xf0030b34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut78{
        using Addr = Register::Address<0xf0030b38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut79{
        using Addr = Register::Address<0xf0030b3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut80{
        using Addr = Register::Address<0xf0030b40,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut81{
        using Addr = Register::Address<0xf0030b44,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut82{
        using Addr = Register::Address<0xf0030b48,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut83{
        using Addr = Register::Address<0xf0030b4c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut84{
        using Addr = Register::Address<0xf0030b50,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut85{
        using Addr = Register::Address<0xf0030b54,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut86{
        using Addr = Register::Address<0xf0030b58,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut87{
        using Addr = Register::Address<0xf0030b5c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut88{
        using Addr = Register::Address<0xf0030b60,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut89{
        using Addr = Register::Address<0xf0030b64,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut90{
        using Addr = Register::Address<0xf0030b68,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut91{
        using Addr = Register::Address<0xf0030b6c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut92{
        using Addr = Register::Address<0xf0030b70,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut93{
        using Addr = Register::Address<0xf0030b74,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut94{
        using Addr = Register::Address<0xf0030b78,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut95{
        using Addr = Register::Address<0xf0030b7c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut96{
        using Addr = Register::Address<0xf0030b80,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut97{
        using Addr = Register::Address<0xf0030b84,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut98{
        using Addr = Register::Address<0xf0030b88,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut99{
        using Addr = Register::Address<0xf0030b8c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut100{
        using Addr = Register::Address<0xf0030b90,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut101{
        using Addr = Register::Address<0xf0030b94,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut102{
        using Addr = Register::Address<0xf0030b98,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut103{
        using Addr = Register::Address<0xf0030b9c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut104{
        using Addr = Register::Address<0xf0030ba0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut105{
        using Addr = Register::Address<0xf0030ba4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut106{
        using Addr = Register::Address<0xf0030ba8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut107{
        using Addr = Register::Address<0xf0030bac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut108{
        using Addr = Register::Address<0xf0030bb0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut109{
        using Addr = Register::Address<0xf0030bb4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut110{
        using Addr = Register::Address<0xf0030bb8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut111{
        using Addr = Register::Address<0xf0030bbc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut112{
        using Addr = Register::Address<0xf0030bc0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut113{
        using Addr = Register::Address<0xf0030bc4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut114{
        using Addr = Register::Address<0xf0030bc8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut115{
        using Addr = Register::Address<0xf0030bcc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut116{
        using Addr = Register::Address<0xf0030bd0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut117{
        using Addr = Register::Address<0xf0030bd4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut118{
        using Addr = Register::Address<0xf0030bd8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut119{
        using Addr = Register::Address<0xf0030bdc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut120{
        using Addr = Register::Address<0xf0030be0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut121{
        using Addr = Register::Address<0xf0030be4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut122{
        using Addr = Register::Address<0xf0030be8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut123{
        using Addr = Register::Address<0xf0030bec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut124{
        using Addr = Register::Address<0xf0030bf0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut125{
        using Addr = Register::Address<0xf0030bf4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut126{
        using Addr = Register::Address<0xf0030bf8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut127{
        using Addr = Register::Address<0xf0030bfc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut128{
        using Addr = Register::Address<0xf0030c00,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut129{
        using Addr = Register::Address<0xf0030c04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut130{
        using Addr = Register::Address<0xf0030c08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut131{
        using Addr = Register::Address<0xf0030c0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut132{
        using Addr = Register::Address<0xf0030c10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut133{
        using Addr = Register::Address<0xf0030c14,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut134{
        using Addr = Register::Address<0xf0030c18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut135{
        using Addr = Register::Address<0xf0030c1c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut136{
        using Addr = Register::Address<0xf0030c20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut137{
        using Addr = Register::Address<0xf0030c24,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut138{
        using Addr = Register::Address<0xf0030c28,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut139{
        using Addr = Register::Address<0xf0030c2c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut140{
        using Addr = Register::Address<0xf0030c30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut141{
        using Addr = Register::Address<0xf0030c34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut142{
        using Addr = Register::Address<0xf0030c38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut143{
        using Addr = Register::Address<0xf0030c3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut144{
        using Addr = Register::Address<0xf0030c40,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut145{
        using Addr = Register::Address<0xf0030c44,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut146{
        using Addr = Register::Address<0xf0030c48,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut147{
        using Addr = Register::Address<0xf0030c4c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut148{
        using Addr = Register::Address<0xf0030c50,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut149{
        using Addr = Register::Address<0xf0030c54,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut150{
        using Addr = Register::Address<0xf0030c58,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut151{
        using Addr = Register::Address<0xf0030c5c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut152{
        using Addr = Register::Address<0xf0030c60,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut153{
        using Addr = Register::Address<0xf0030c64,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut154{
        using Addr = Register::Address<0xf0030c68,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut155{
        using Addr = Register::Address<0xf0030c6c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut156{
        using Addr = Register::Address<0xf0030c70,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut157{
        using Addr = Register::Address<0xf0030c74,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut158{
        using Addr = Register::Address<0xf0030c78,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut159{
        using Addr = Register::Address<0xf0030c7c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut160{
        using Addr = Register::Address<0xf0030c80,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut161{
        using Addr = Register::Address<0xf0030c84,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut162{
        using Addr = Register::Address<0xf0030c88,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut163{
        using Addr = Register::Address<0xf0030c8c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut164{
        using Addr = Register::Address<0xf0030c90,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut165{
        using Addr = Register::Address<0xf0030c94,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut166{
        using Addr = Register::Address<0xf0030c98,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut167{
        using Addr = Register::Address<0xf0030c9c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut168{
        using Addr = Register::Address<0xf0030ca0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut169{
        using Addr = Register::Address<0xf0030ca4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut170{
        using Addr = Register::Address<0xf0030ca8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut171{
        using Addr = Register::Address<0xf0030cac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut172{
        using Addr = Register::Address<0xf0030cb0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut173{
        using Addr = Register::Address<0xf0030cb4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut174{
        using Addr = Register::Address<0xf0030cb8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut175{
        using Addr = Register::Address<0xf0030cbc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut176{
        using Addr = Register::Address<0xf0030cc0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut177{
        using Addr = Register::Address<0xf0030cc4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut178{
        using Addr = Register::Address<0xf0030cc8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut179{
        using Addr = Register::Address<0xf0030ccc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut180{
        using Addr = Register::Address<0xf0030cd0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut181{
        using Addr = Register::Address<0xf0030cd4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut182{
        using Addr = Register::Address<0xf0030cd8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut183{
        using Addr = Register::Address<0xf0030cdc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut184{
        using Addr = Register::Address<0xf0030ce0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut185{
        using Addr = Register::Address<0xf0030ce4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut186{
        using Addr = Register::Address<0xf0030ce8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut187{
        using Addr = Register::Address<0xf0030cec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut188{
        using Addr = Register::Address<0xf0030cf0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut189{
        using Addr = Register::Address<0xf0030cf4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut190{
        using Addr = Register::Address<0xf0030cf8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut191{
        using Addr = Register::Address<0xf0030cfc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut192{
        using Addr = Register::Address<0xf0030d00,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut193{
        using Addr = Register::Address<0xf0030d04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut194{
        using Addr = Register::Address<0xf0030d08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut195{
        using Addr = Register::Address<0xf0030d0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut196{
        using Addr = Register::Address<0xf0030d10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut197{
        using Addr = Register::Address<0xf0030d14,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut198{
        using Addr = Register::Address<0xf0030d18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut199{
        using Addr = Register::Address<0xf0030d1c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut200{
        using Addr = Register::Address<0xf0030d20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut201{
        using Addr = Register::Address<0xf0030d24,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut202{
        using Addr = Register::Address<0xf0030d28,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut203{
        using Addr = Register::Address<0xf0030d2c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut204{
        using Addr = Register::Address<0xf0030d30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut205{
        using Addr = Register::Address<0xf0030d34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut206{
        using Addr = Register::Address<0xf0030d38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut207{
        using Addr = Register::Address<0xf0030d3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut208{
        using Addr = Register::Address<0xf0030d40,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut209{
        using Addr = Register::Address<0xf0030d44,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut210{
        using Addr = Register::Address<0xf0030d48,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut211{
        using Addr = Register::Address<0xf0030d4c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut212{
        using Addr = Register::Address<0xf0030d50,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut213{
        using Addr = Register::Address<0xf0030d54,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut214{
        using Addr = Register::Address<0xf0030d58,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut215{
        using Addr = Register::Address<0xf0030d5c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut216{
        using Addr = Register::Address<0xf0030d60,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut217{
        using Addr = Register::Address<0xf0030d64,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut218{
        using Addr = Register::Address<0xf0030d68,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut219{
        using Addr = Register::Address<0xf0030d6c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut220{
        using Addr = Register::Address<0xf0030d70,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut221{
        using Addr = Register::Address<0xf0030d74,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut222{
        using Addr = Register::Address<0xf0030d78,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut223{
        using Addr = Register::Address<0xf0030d7c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut224{
        using Addr = Register::Address<0xf0030d80,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut225{
        using Addr = Register::Address<0xf0030d84,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut226{
        using Addr = Register::Address<0xf0030d88,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut227{
        using Addr = Register::Address<0xf0030d8c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut228{
        using Addr = Register::Address<0xf0030d90,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut229{
        using Addr = Register::Address<0xf0030d94,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut230{
        using Addr = Register::Address<0xf0030d98,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut231{
        using Addr = Register::Address<0xf0030d9c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut232{
        using Addr = Register::Address<0xf0030da0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut233{
        using Addr = Register::Address<0xf0030da4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut234{
        using Addr = Register::Address<0xf0030da8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut235{
        using Addr = Register::Address<0xf0030dac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut236{
        using Addr = Register::Address<0xf0030db0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut237{
        using Addr = Register::Address<0xf0030db4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut238{
        using Addr = Register::Address<0xf0030db8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut239{
        using Addr = Register::Address<0xf0030dbc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut240{
        using Addr = Register::Address<0xf0030dc0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut241{
        using Addr = Register::Address<0xf0030dc4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut242{
        using Addr = Register::Address<0xf0030dc8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut243{
        using Addr = Register::Address<0xf0030dcc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut244{
        using Addr = Register::Address<0xf0030dd0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut245{
        using Addr = Register::Address<0xf0030dd4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut246{
        using Addr = Register::Address<0xf0030dd8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut247{
        using Addr = Register::Address<0xf0030ddc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut248{
        using Addr = Register::Address<0xf0030de0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut249{
        using Addr = Register::Address<0xf0030de4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut250{
        using Addr = Register::Address<0xf0030de8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut251{
        using Addr = Register::Address<0xf0030dec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut252{
        using Addr = Register::Address<0xf0030df0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut253{
        using Addr = Register::Address<0xf0030df4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut254{
        using Addr = Register::Address<0xf0030df8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut255{
        using Addr = Register::Address<0xf0030dfc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut0{
        using Addr = Register::Address<0xf0030e00,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut1{
        using Addr = Register::Address<0xf0030e04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut2{
        using Addr = Register::Address<0xf0030e08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut3{
        using Addr = Register::Address<0xf0030e0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut4{
        using Addr = Register::Address<0xf0030e10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut5{
        using Addr = Register::Address<0xf0030e14,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut6{
        using Addr = Register::Address<0xf0030e18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut7{
        using Addr = Register::Address<0xf0030e1c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut8{
        using Addr = Register::Address<0xf0030e20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut9{
        using Addr = Register::Address<0xf0030e24,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut10{
        using Addr = Register::Address<0xf0030e28,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut11{
        using Addr = Register::Address<0xf0030e2c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut12{
        using Addr = Register::Address<0xf0030e30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut13{
        using Addr = Register::Address<0xf0030e34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut14{
        using Addr = Register::Address<0xf0030e38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut15{
        using Addr = Register::Address<0xf0030e3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut16{
        using Addr = Register::Address<0xf0030e40,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut17{
        using Addr = Register::Address<0xf0030e44,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut18{
        using Addr = Register::Address<0xf0030e48,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut19{
        using Addr = Register::Address<0xf0030e4c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut20{
        using Addr = Register::Address<0xf0030e50,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut21{
        using Addr = Register::Address<0xf0030e54,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut22{
        using Addr = Register::Address<0xf0030e58,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut23{
        using Addr = Register::Address<0xf0030e5c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut24{
        using Addr = Register::Address<0xf0030e60,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut25{
        using Addr = Register::Address<0xf0030e64,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut26{
        using Addr = Register::Address<0xf0030e68,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut27{
        using Addr = Register::Address<0xf0030e6c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut28{
        using Addr = Register::Address<0xf0030e70,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut29{
        using Addr = Register::Address<0xf0030e74,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut30{
        using Addr = Register::Address<0xf0030e78,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut31{
        using Addr = Register::Address<0xf0030e7c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut32{
        using Addr = Register::Address<0xf0030e80,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut33{
        using Addr = Register::Address<0xf0030e84,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut34{
        using Addr = Register::Address<0xf0030e88,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut35{
        using Addr = Register::Address<0xf0030e8c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut36{
        using Addr = Register::Address<0xf0030e90,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut37{
        using Addr = Register::Address<0xf0030e94,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut38{
        using Addr = Register::Address<0xf0030e98,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut39{
        using Addr = Register::Address<0xf0030e9c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut40{
        using Addr = Register::Address<0xf0030ea0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut41{
        using Addr = Register::Address<0xf0030ea4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut42{
        using Addr = Register::Address<0xf0030ea8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut43{
        using Addr = Register::Address<0xf0030eac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut44{
        using Addr = Register::Address<0xf0030eb0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut45{
        using Addr = Register::Address<0xf0030eb4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut46{
        using Addr = Register::Address<0xf0030eb8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut47{
        using Addr = Register::Address<0xf0030ebc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut48{
        using Addr = Register::Address<0xf0030ec0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut49{
        using Addr = Register::Address<0xf0030ec4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut50{
        using Addr = Register::Address<0xf0030ec8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut51{
        using Addr = Register::Address<0xf0030ecc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut52{
        using Addr = Register::Address<0xf0030ed0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut53{
        using Addr = Register::Address<0xf0030ed4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut54{
        using Addr = Register::Address<0xf0030ed8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut55{
        using Addr = Register::Address<0xf0030edc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut56{
        using Addr = Register::Address<0xf0030ee0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut57{
        using Addr = Register::Address<0xf0030ee4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut58{
        using Addr = Register::Address<0xf0030ee8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut59{
        using Addr = Register::Address<0xf0030eec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut60{
        using Addr = Register::Address<0xf0030ef0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut61{
        using Addr = Register::Address<0xf0030ef4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut62{
        using Addr = Register::Address<0xf0030ef8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut63{
        using Addr = Register::Address<0xf0030efc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut64{
        using Addr = Register::Address<0xf0030f00,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut65{
        using Addr = Register::Address<0xf0030f04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut66{
        using Addr = Register::Address<0xf0030f08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut67{
        using Addr = Register::Address<0xf0030f0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut68{
        using Addr = Register::Address<0xf0030f10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut69{
        using Addr = Register::Address<0xf0030f14,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut70{
        using Addr = Register::Address<0xf0030f18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut71{
        using Addr = Register::Address<0xf0030f1c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut72{
        using Addr = Register::Address<0xf0030f20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut73{
        using Addr = Register::Address<0xf0030f24,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut74{
        using Addr = Register::Address<0xf0030f28,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut75{
        using Addr = Register::Address<0xf0030f2c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut76{
        using Addr = Register::Address<0xf0030f30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut77{
        using Addr = Register::Address<0xf0030f34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut78{
        using Addr = Register::Address<0xf0030f38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut79{
        using Addr = Register::Address<0xf0030f3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut80{
        using Addr = Register::Address<0xf0030f40,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut81{
        using Addr = Register::Address<0xf0030f44,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut82{
        using Addr = Register::Address<0xf0030f48,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut83{
        using Addr = Register::Address<0xf0030f4c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut84{
        using Addr = Register::Address<0xf0030f50,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut85{
        using Addr = Register::Address<0xf0030f54,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut86{
        using Addr = Register::Address<0xf0030f58,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut87{
        using Addr = Register::Address<0xf0030f5c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut88{
        using Addr = Register::Address<0xf0030f60,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut89{
        using Addr = Register::Address<0xf0030f64,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut90{
        using Addr = Register::Address<0xf0030f68,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut91{
        using Addr = Register::Address<0xf0030f6c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut92{
        using Addr = Register::Address<0xf0030f70,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut93{
        using Addr = Register::Address<0xf0030f74,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut94{
        using Addr = Register::Address<0xf0030f78,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut95{
        using Addr = Register::Address<0xf0030f7c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut96{
        using Addr = Register::Address<0xf0030f80,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut97{
        using Addr = Register::Address<0xf0030f84,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut98{
        using Addr = Register::Address<0xf0030f88,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut99{
        using Addr = Register::Address<0xf0030f8c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut100{
        using Addr = Register::Address<0xf0030f90,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut101{
        using Addr = Register::Address<0xf0030f94,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut102{
        using Addr = Register::Address<0xf0030f98,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut103{
        using Addr = Register::Address<0xf0030f9c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut104{
        using Addr = Register::Address<0xf0030fa0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut105{
        using Addr = Register::Address<0xf0030fa4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut106{
        using Addr = Register::Address<0xf0030fa8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut107{
        using Addr = Register::Address<0xf0030fac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut108{
        using Addr = Register::Address<0xf0030fb0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut109{
        using Addr = Register::Address<0xf0030fb4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut110{
        using Addr = Register::Address<0xf0030fb8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut111{
        using Addr = Register::Address<0xf0030fbc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut112{
        using Addr = Register::Address<0xf0030fc0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut113{
        using Addr = Register::Address<0xf0030fc4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut114{
        using Addr = Register::Address<0xf0030fc8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut115{
        using Addr = Register::Address<0xf0030fcc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut116{
        using Addr = Register::Address<0xf0030fd0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut117{
        using Addr = Register::Address<0xf0030fd4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut118{
        using Addr = Register::Address<0xf0030fd8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut119{
        using Addr = Register::Address<0xf0030fdc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut120{
        using Addr = Register::Address<0xf0030fe0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut121{
        using Addr = Register::Address<0xf0030fe4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut122{
        using Addr = Register::Address<0xf0030fe8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut123{
        using Addr = Register::Address<0xf0030fec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut124{
        using Addr = Register::Address<0xf0030ff0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut125{
        using Addr = Register::Address<0xf0030ff4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut126{
        using Addr = Register::Address<0xf0030ff8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut127{
        using Addr = Register::Address<0xf0030ffc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut128{
        using Addr = Register::Address<0xf0031000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut129{
        using Addr = Register::Address<0xf0031004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut130{
        using Addr = Register::Address<0xf0031008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut131{
        using Addr = Register::Address<0xf003100c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut132{
        using Addr = Register::Address<0xf0031010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut133{
        using Addr = Register::Address<0xf0031014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut134{
        using Addr = Register::Address<0xf0031018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut135{
        using Addr = Register::Address<0xf003101c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut136{
        using Addr = Register::Address<0xf0031020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut137{
        using Addr = Register::Address<0xf0031024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut138{
        using Addr = Register::Address<0xf0031028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut139{
        using Addr = Register::Address<0xf003102c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut140{
        using Addr = Register::Address<0xf0031030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut141{
        using Addr = Register::Address<0xf0031034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut142{
        using Addr = Register::Address<0xf0031038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut143{
        using Addr = Register::Address<0xf003103c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut144{
        using Addr = Register::Address<0xf0031040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut145{
        using Addr = Register::Address<0xf0031044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut146{
        using Addr = Register::Address<0xf0031048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut147{
        using Addr = Register::Address<0xf003104c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut148{
        using Addr = Register::Address<0xf0031050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut149{
        using Addr = Register::Address<0xf0031054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut150{
        using Addr = Register::Address<0xf0031058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut151{
        using Addr = Register::Address<0xf003105c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut152{
        using Addr = Register::Address<0xf0031060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut153{
        using Addr = Register::Address<0xf0031064,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut154{
        using Addr = Register::Address<0xf0031068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut155{
        using Addr = Register::Address<0xf003106c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut156{
        using Addr = Register::Address<0xf0031070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut157{
        using Addr = Register::Address<0xf0031074,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut158{
        using Addr = Register::Address<0xf0031078,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut159{
        using Addr = Register::Address<0xf003107c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut160{
        using Addr = Register::Address<0xf0031080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut161{
        using Addr = Register::Address<0xf0031084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut162{
        using Addr = Register::Address<0xf0031088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut163{
        using Addr = Register::Address<0xf003108c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut164{
        using Addr = Register::Address<0xf0031090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut165{
        using Addr = Register::Address<0xf0031094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut166{
        using Addr = Register::Address<0xf0031098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut167{
        using Addr = Register::Address<0xf003109c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut168{
        using Addr = Register::Address<0xf00310a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut169{
        using Addr = Register::Address<0xf00310a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut170{
        using Addr = Register::Address<0xf00310a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut171{
        using Addr = Register::Address<0xf00310ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut172{
        using Addr = Register::Address<0xf00310b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut173{
        using Addr = Register::Address<0xf00310b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut174{
        using Addr = Register::Address<0xf00310b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut175{
        using Addr = Register::Address<0xf00310bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut176{
        using Addr = Register::Address<0xf00310c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut177{
        using Addr = Register::Address<0xf00310c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut178{
        using Addr = Register::Address<0xf00310c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut179{
        using Addr = Register::Address<0xf00310cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut180{
        using Addr = Register::Address<0xf00310d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut181{
        using Addr = Register::Address<0xf00310d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut182{
        using Addr = Register::Address<0xf00310d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut183{
        using Addr = Register::Address<0xf00310dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut184{
        using Addr = Register::Address<0xf00310e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut185{
        using Addr = Register::Address<0xf00310e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut186{
        using Addr = Register::Address<0xf00310e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut187{
        using Addr = Register::Address<0xf00310ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut188{
        using Addr = Register::Address<0xf00310f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut189{
        using Addr = Register::Address<0xf00310f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut190{
        using Addr = Register::Address<0xf00310f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut191{
        using Addr = Register::Address<0xf00310fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut192{
        using Addr = Register::Address<0xf0031100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut193{
        using Addr = Register::Address<0xf0031104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut194{
        using Addr = Register::Address<0xf0031108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut195{
        using Addr = Register::Address<0xf003110c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut196{
        using Addr = Register::Address<0xf0031110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut197{
        using Addr = Register::Address<0xf0031114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut198{
        using Addr = Register::Address<0xf0031118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut199{
        using Addr = Register::Address<0xf003111c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut200{
        using Addr = Register::Address<0xf0031120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut201{
        using Addr = Register::Address<0xf0031124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut202{
        using Addr = Register::Address<0xf0031128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut203{
        using Addr = Register::Address<0xf003112c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut204{
        using Addr = Register::Address<0xf0031130,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut205{
        using Addr = Register::Address<0xf0031134,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut206{
        using Addr = Register::Address<0xf0031138,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut207{
        using Addr = Register::Address<0xf003113c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut208{
        using Addr = Register::Address<0xf0031140,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut209{
        using Addr = Register::Address<0xf0031144,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut210{
        using Addr = Register::Address<0xf0031148,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut211{
        using Addr = Register::Address<0xf003114c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut212{
        using Addr = Register::Address<0xf0031150,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut213{
        using Addr = Register::Address<0xf0031154,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut214{
        using Addr = Register::Address<0xf0031158,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut215{
        using Addr = Register::Address<0xf003115c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut216{
        using Addr = Register::Address<0xf0031160,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut217{
        using Addr = Register::Address<0xf0031164,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut218{
        using Addr = Register::Address<0xf0031168,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut219{
        using Addr = Register::Address<0xf003116c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut220{
        using Addr = Register::Address<0xf0031170,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut221{
        using Addr = Register::Address<0xf0031174,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut222{
        using Addr = Register::Address<0xf0031178,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut223{
        using Addr = Register::Address<0xf003117c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut224{
        using Addr = Register::Address<0xf0031180,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut225{
        using Addr = Register::Address<0xf0031184,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut226{
        using Addr = Register::Address<0xf0031188,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut227{
        using Addr = Register::Address<0xf003118c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut228{
        using Addr = Register::Address<0xf0031190,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut229{
        using Addr = Register::Address<0xf0031194,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut230{
        using Addr = Register::Address<0xf0031198,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut231{
        using Addr = Register::Address<0xf003119c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut232{
        using Addr = Register::Address<0xf00311a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut233{
        using Addr = Register::Address<0xf00311a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut234{
        using Addr = Register::Address<0xf00311a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut235{
        using Addr = Register::Address<0xf00311ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut236{
        using Addr = Register::Address<0xf00311b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut237{
        using Addr = Register::Address<0xf00311b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut238{
        using Addr = Register::Address<0xf00311b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut239{
        using Addr = Register::Address<0xf00311bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut240{
        using Addr = Register::Address<0xf00311c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut241{
        using Addr = Register::Address<0xf00311c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut242{
        using Addr = Register::Address<0xf00311c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut243{
        using Addr = Register::Address<0xf00311cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut244{
        using Addr = Register::Address<0xf00311d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut245{
        using Addr = Register::Address<0xf00311d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut246{
        using Addr = Register::Address<0xf00311d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut247{
        using Addr = Register::Address<0xf00311dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut248{
        using Addr = Register::Address<0xf00311e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut249{
        using Addr = Register::Address<0xf00311e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut250{
        using Addr = Register::Address<0xf00311e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut251{
        using Addr = Register::Address<0xf00311ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut252{
        using Addr = Register::Address<0xf00311f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut253{
        using Addr = Register::Address<0xf00311f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut254{
        using Addr = Register::Address<0xf00311f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr2clut255{
        using Addr = Register::Address<0xf00311fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut0{
        using Addr = Register::Address<0xf0031200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut1{
        using Addr = Register::Address<0xf0031204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut2{
        using Addr = Register::Address<0xf0031208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut3{
        using Addr = Register::Address<0xf003120c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut4{
        using Addr = Register::Address<0xf0031210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut5{
        using Addr = Register::Address<0xf0031214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut6{
        using Addr = Register::Address<0xf0031218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut7{
        using Addr = Register::Address<0xf003121c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut8{
        using Addr = Register::Address<0xf0031220,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut9{
        using Addr = Register::Address<0xf0031224,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut10{
        using Addr = Register::Address<0xf0031228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut11{
        using Addr = Register::Address<0xf003122c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut12{
        using Addr = Register::Address<0xf0031230,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut13{
        using Addr = Register::Address<0xf0031234,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut14{
        using Addr = Register::Address<0xf0031238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut15{
        using Addr = Register::Address<0xf003123c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut16{
        using Addr = Register::Address<0xf0031240,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut17{
        using Addr = Register::Address<0xf0031244,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut18{
        using Addr = Register::Address<0xf0031248,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut19{
        using Addr = Register::Address<0xf003124c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut20{
        using Addr = Register::Address<0xf0031250,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut21{
        using Addr = Register::Address<0xf0031254,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut22{
        using Addr = Register::Address<0xf0031258,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut23{
        using Addr = Register::Address<0xf003125c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut24{
        using Addr = Register::Address<0xf0031260,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut25{
        using Addr = Register::Address<0xf0031264,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut26{
        using Addr = Register::Address<0xf0031268,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut27{
        using Addr = Register::Address<0xf003126c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut28{
        using Addr = Register::Address<0xf0031270,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut29{
        using Addr = Register::Address<0xf0031274,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut30{
        using Addr = Register::Address<0xf0031278,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut31{
        using Addr = Register::Address<0xf003127c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut32{
        using Addr = Register::Address<0xf0031280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut33{
        using Addr = Register::Address<0xf0031284,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut34{
        using Addr = Register::Address<0xf0031288,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut35{
        using Addr = Register::Address<0xf003128c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut36{
        using Addr = Register::Address<0xf0031290,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut37{
        using Addr = Register::Address<0xf0031294,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut38{
        using Addr = Register::Address<0xf0031298,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut39{
        using Addr = Register::Address<0xf003129c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut40{
        using Addr = Register::Address<0xf00312a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut41{
        using Addr = Register::Address<0xf00312a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut42{
        using Addr = Register::Address<0xf00312a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut43{
        using Addr = Register::Address<0xf00312ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut44{
        using Addr = Register::Address<0xf00312b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut45{
        using Addr = Register::Address<0xf00312b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut46{
        using Addr = Register::Address<0xf00312b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut47{
        using Addr = Register::Address<0xf00312bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut48{
        using Addr = Register::Address<0xf00312c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut49{
        using Addr = Register::Address<0xf00312c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut50{
        using Addr = Register::Address<0xf00312c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut51{
        using Addr = Register::Address<0xf00312cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut52{
        using Addr = Register::Address<0xf00312d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut53{
        using Addr = Register::Address<0xf00312d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut54{
        using Addr = Register::Address<0xf00312d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut55{
        using Addr = Register::Address<0xf00312dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut56{
        using Addr = Register::Address<0xf00312e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut57{
        using Addr = Register::Address<0xf00312e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut58{
        using Addr = Register::Address<0xf00312e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut59{
        using Addr = Register::Address<0xf00312ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut60{
        using Addr = Register::Address<0xf00312f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut61{
        using Addr = Register::Address<0xf00312f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut62{
        using Addr = Register::Address<0xf00312f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut63{
        using Addr = Register::Address<0xf00312fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut64{
        using Addr = Register::Address<0xf0031300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut65{
        using Addr = Register::Address<0xf0031304,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut66{
        using Addr = Register::Address<0xf0031308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut67{
        using Addr = Register::Address<0xf003130c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut68{
        using Addr = Register::Address<0xf0031310,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut69{
        using Addr = Register::Address<0xf0031314,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut70{
        using Addr = Register::Address<0xf0031318,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut71{
        using Addr = Register::Address<0xf003131c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut72{
        using Addr = Register::Address<0xf0031320,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut73{
        using Addr = Register::Address<0xf0031324,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut74{
        using Addr = Register::Address<0xf0031328,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut75{
        using Addr = Register::Address<0xf003132c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut76{
        using Addr = Register::Address<0xf0031330,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut77{
        using Addr = Register::Address<0xf0031334,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut78{
        using Addr = Register::Address<0xf0031338,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut79{
        using Addr = Register::Address<0xf003133c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut80{
        using Addr = Register::Address<0xf0031340,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut81{
        using Addr = Register::Address<0xf0031344,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut82{
        using Addr = Register::Address<0xf0031348,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut83{
        using Addr = Register::Address<0xf003134c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut84{
        using Addr = Register::Address<0xf0031350,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut85{
        using Addr = Register::Address<0xf0031354,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut86{
        using Addr = Register::Address<0xf0031358,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut87{
        using Addr = Register::Address<0xf003135c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut88{
        using Addr = Register::Address<0xf0031360,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut89{
        using Addr = Register::Address<0xf0031364,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut90{
        using Addr = Register::Address<0xf0031368,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut91{
        using Addr = Register::Address<0xf003136c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut92{
        using Addr = Register::Address<0xf0031370,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut93{
        using Addr = Register::Address<0xf0031374,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut94{
        using Addr = Register::Address<0xf0031378,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut95{
        using Addr = Register::Address<0xf003137c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut96{
        using Addr = Register::Address<0xf0031380,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut97{
        using Addr = Register::Address<0xf0031384,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut98{
        using Addr = Register::Address<0xf0031388,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut99{
        using Addr = Register::Address<0xf003138c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut100{
        using Addr = Register::Address<0xf0031390,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut101{
        using Addr = Register::Address<0xf0031394,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut102{
        using Addr = Register::Address<0xf0031398,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut103{
        using Addr = Register::Address<0xf003139c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut104{
        using Addr = Register::Address<0xf00313a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut105{
        using Addr = Register::Address<0xf00313a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut106{
        using Addr = Register::Address<0xf00313a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut107{
        using Addr = Register::Address<0xf00313ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut108{
        using Addr = Register::Address<0xf00313b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut109{
        using Addr = Register::Address<0xf00313b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut110{
        using Addr = Register::Address<0xf00313b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut111{
        using Addr = Register::Address<0xf00313bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut112{
        using Addr = Register::Address<0xf00313c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut113{
        using Addr = Register::Address<0xf00313c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut114{
        using Addr = Register::Address<0xf00313c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut115{
        using Addr = Register::Address<0xf00313cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut116{
        using Addr = Register::Address<0xf00313d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut117{
        using Addr = Register::Address<0xf00313d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut118{
        using Addr = Register::Address<0xf00313d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut119{
        using Addr = Register::Address<0xf00313dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut120{
        using Addr = Register::Address<0xf00313e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut121{
        using Addr = Register::Address<0xf00313e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut122{
        using Addr = Register::Address<0xf00313e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut123{
        using Addr = Register::Address<0xf00313ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut124{
        using Addr = Register::Address<0xf00313f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut125{
        using Addr = Register::Address<0xf00313f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut126{
        using Addr = Register::Address<0xf00313f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut127{
        using Addr = Register::Address<0xf00313fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut128{
        using Addr = Register::Address<0xf0031400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut129{
        using Addr = Register::Address<0xf0031404,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut130{
        using Addr = Register::Address<0xf0031408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut131{
        using Addr = Register::Address<0xf003140c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut132{
        using Addr = Register::Address<0xf0031410,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut133{
        using Addr = Register::Address<0xf0031414,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut134{
        using Addr = Register::Address<0xf0031418,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut135{
        using Addr = Register::Address<0xf003141c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut136{
        using Addr = Register::Address<0xf0031420,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut137{
        using Addr = Register::Address<0xf0031424,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut138{
        using Addr = Register::Address<0xf0031428,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut139{
        using Addr = Register::Address<0xf003142c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut140{
        using Addr = Register::Address<0xf0031430,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut141{
        using Addr = Register::Address<0xf0031434,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut142{
        using Addr = Register::Address<0xf0031438,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut143{
        using Addr = Register::Address<0xf003143c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut144{
        using Addr = Register::Address<0xf0031440,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut145{
        using Addr = Register::Address<0xf0031444,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut146{
        using Addr = Register::Address<0xf0031448,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut147{
        using Addr = Register::Address<0xf003144c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut148{
        using Addr = Register::Address<0xf0031450,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut149{
        using Addr = Register::Address<0xf0031454,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut150{
        using Addr = Register::Address<0xf0031458,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut151{
        using Addr = Register::Address<0xf003145c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut152{
        using Addr = Register::Address<0xf0031460,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut153{
        using Addr = Register::Address<0xf0031464,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut154{
        using Addr = Register::Address<0xf0031468,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut155{
        using Addr = Register::Address<0xf003146c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut156{
        using Addr = Register::Address<0xf0031470,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut157{
        using Addr = Register::Address<0xf0031474,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut158{
        using Addr = Register::Address<0xf0031478,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut159{
        using Addr = Register::Address<0xf003147c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut160{
        using Addr = Register::Address<0xf0031480,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut161{
        using Addr = Register::Address<0xf0031484,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut162{
        using Addr = Register::Address<0xf0031488,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut163{
        using Addr = Register::Address<0xf003148c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut164{
        using Addr = Register::Address<0xf0031490,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut165{
        using Addr = Register::Address<0xf0031494,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut166{
        using Addr = Register::Address<0xf0031498,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut167{
        using Addr = Register::Address<0xf003149c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut168{
        using Addr = Register::Address<0xf00314a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut169{
        using Addr = Register::Address<0xf00314a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut170{
        using Addr = Register::Address<0xf00314a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut171{
        using Addr = Register::Address<0xf00314ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut172{
        using Addr = Register::Address<0xf00314b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut173{
        using Addr = Register::Address<0xf00314b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut174{
        using Addr = Register::Address<0xf00314b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut175{
        using Addr = Register::Address<0xf00314bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut176{
        using Addr = Register::Address<0xf00314c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut177{
        using Addr = Register::Address<0xf00314c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut178{
        using Addr = Register::Address<0xf00314c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut179{
        using Addr = Register::Address<0xf00314cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut180{
        using Addr = Register::Address<0xf00314d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut181{
        using Addr = Register::Address<0xf00314d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut182{
        using Addr = Register::Address<0xf00314d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut183{
        using Addr = Register::Address<0xf00314dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut184{
        using Addr = Register::Address<0xf00314e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut185{
        using Addr = Register::Address<0xf00314e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut186{
        using Addr = Register::Address<0xf00314e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut187{
        using Addr = Register::Address<0xf00314ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut188{
        using Addr = Register::Address<0xf00314f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut189{
        using Addr = Register::Address<0xf00314f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut190{
        using Addr = Register::Address<0xf00314f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut191{
        using Addr = Register::Address<0xf00314fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut192{
        using Addr = Register::Address<0xf0031500,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut193{
        using Addr = Register::Address<0xf0031504,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut194{
        using Addr = Register::Address<0xf0031508,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut195{
        using Addr = Register::Address<0xf003150c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut196{
        using Addr = Register::Address<0xf0031510,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut197{
        using Addr = Register::Address<0xf0031514,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut198{
        using Addr = Register::Address<0xf0031518,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut199{
        using Addr = Register::Address<0xf003151c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut200{
        using Addr = Register::Address<0xf0031520,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut201{
        using Addr = Register::Address<0xf0031524,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut202{
        using Addr = Register::Address<0xf0031528,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut203{
        using Addr = Register::Address<0xf003152c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut204{
        using Addr = Register::Address<0xf0031530,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut205{
        using Addr = Register::Address<0xf0031534,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut206{
        using Addr = Register::Address<0xf0031538,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut207{
        using Addr = Register::Address<0xf003153c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut208{
        using Addr = Register::Address<0xf0031540,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut209{
        using Addr = Register::Address<0xf0031544,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut210{
        using Addr = Register::Address<0xf0031548,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut211{
        using Addr = Register::Address<0xf003154c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut212{
        using Addr = Register::Address<0xf0031550,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut213{
        using Addr = Register::Address<0xf0031554,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut214{
        using Addr = Register::Address<0xf0031558,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut215{
        using Addr = Register::Address<0xf003155c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut216{
        using Addr = Register::Address<0xf0031560,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut217{
        using Addr = Register::Address<0xf0031564,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut218{
        using Addr = Register::Address<0xf0031568,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut219{
        using Addr = Register::Address<0xf003156c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut220{
        using Addr = Register::Address<0xf0031570,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut221{
        using Addr = Register::Address<0xf0031574,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut222{
        using Addr = Register::Address<0xf0031578,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut223{
        using Addr = Register::Address<0xf003157c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut224{
        using Addr = Register::Address<0xf0031580,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut225{
        using Addr = Register::Address<0xf0031584,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut226{
        using Addr = Register::Address<0xf0031588,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut227{
        using Addr = Register::Address<0xf003158c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut228{
        using Addr = Register::Address<0xf0031590,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut229{
        using Addr = Register::Address<0xf0031594,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut230{
        using Addr = Register::Address<0xf0031598,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut231{
        using Addr = Register::Address<0xf003159c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut232{
        using Addr = Register::Address<0xf00315a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut233{
        using Addr = Register::Address<0xf00315a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut234{
        using Addr = Register::Address<0xf00315a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut235{
        using Addr = Register::Address<0xf00315ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut236{
        using Addr = Register::Address<0xf00315b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut237{
        using Addr = Register::Address<0xf00315b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut238{
        using Addr = Register::Address<0xf00315b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut239{
        using Addr = Register::Address<0xf00315bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut240{
        using Addr = Register::Address<0xf00315c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut241{
        using Addr = Register::Address<0xf00315c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut242{
        using Addr = Register::Address<0xf00315c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut243{
        using Addr = Register::Address<0xf00315cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut244{
        using Addr = Register::Address<0xf00315d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut245{
        using Addr = Register::Address<0xf00315d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut246{
        using Addr = Register::Address<0xf00315d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut247{
        using Addr = Register::Address<0xf00315dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut248{
        using Addr = Register::Address<0xf00315e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut249{
        using Addr = Register::Address<0xf00315e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut250{
        using Addr = Register::Address<0xf00315e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut251{
        using Addr = Register::Address<0xf00315ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut252{
        using Addr = Register::Address<0xf00315f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut253{
        using Addr = Register::Address<0xf00315f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut254{
        using Addr = Register::Address<0xf00315f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut255{
        using Addr = Register::Address<0xf00315fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut0{
        using Addr = Register::Address<0xf0031600,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut1{
        using Addr = Register::Address<0xf0031604,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut2{
        using Addr = Register::Address<0xf0031608,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut3{
        using Addr = Register::Address<0xf003160c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut4{
        using Addr = Register::Address<0xf0031610,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut5{
        using Addr = Register::Address<0xf0031614,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut6{
        using Addr = Register::Address<0xf0031618,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut7{
        using Addr = Register::Address<0xf003161c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut8{
        using Addr = Register::Address<0xf0031620,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut9{
        using Addr = Register::Address<0xf0031624,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut10{
        using Addr = Register::Address<0xf0031628,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut11{
        using Addr = Register::Address<0xf003162c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut12{
        using Addr = Register::Address<0xf0031630,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut13{
        using Addr = Register::Address<0xf0031634,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut14{
        using Addr = Register::Address<0xf0031638,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut15{
        using Addr = Register::Address<0xf003163c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut16{
        using Addr = Register::Address<0xf0031640,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut17{
        using Addr = Register::Address<0xf0031644,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut18{
        using Addr = Register::Address<0xf0031648,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut19{
        using Addr = Register::Address<0xf003164c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut20{
        using Addr = Register::Address<0xf0031650,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut21{
        using Addr = Register::Address<0xf0031654,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut22{
        using Addr = Register::Address<0xf0031658,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut23{
        using Addr = Register::Address<0xf003165c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut24{
        using Addr = Register::Address<0xf0031660,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut25{
        using Addr = Register::Address<0xf0031664,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut26{
        using Addr = Register::Address<0xf0031668,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut27{
        using Addr = Register::Address<0xf003166c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut28{
        using Addr = Register::Address<0xf0031670,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut29{
        using Addr = Register::Address<0xf0031674,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut30{
        using Addr = Register::Address<0xf0031678,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut31{
        using Addr = Register::Address<0xf003167c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut32{
        using Addr = Register::Address<0xf0031680,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut33{
        using Addr = Register::Address<0xf0031684,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut34{
        using Addr = Register::Address<0xf0031688,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut35{
        using Addr = Register::Address<0xf003168c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut36{
        using Addr = Register::Address<0xf0031690,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut37{
        using Addr = Register::Address<0xf0031694,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut38{
        using Addr = Register::Address<0xf0031698,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut39{
        using Addr = Register::Address<0xf003169c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut40{
        using Addr = Register::Address<0xf00316a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut41{
        using Addr = Register::Address<0xf00316a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut42{
        using Addr = Register::Address<0xf00316a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut43{
        using Addr = Register::Address<0xf00316ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut44{
        using Addr = Register::Address<0xf00316b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut45{
        using Addr = Register::Address<0xf00316b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut46{
        using Addr = Register::Address<0xf00316b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut47{
        using Addr = Register::Address<0xf00316bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut48{
        using Addr = Register::Address<0xf00316c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut49{
        using Addr = Register::Address<0xf00316c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut50{
        using Addr = Register::Address<0xf00316c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut51{
        using Addr = Register::Address<0xf00316cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut52{
        using Addr = Register::Address<0xf00316d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut53{
        using Addr = Register::Address<0xf00316d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut54{
        using Addr = Register::Address<0xf00316d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut55{
        using Addr = Register::Address<0xf00316dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut56{
        using Addr = Register::Address<0xf00316e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut57{
        using Addr = Register::Address<0xf00316e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut58{
        using Addr = Register::Address<0xf00316e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut59{
        using Addr = Register::Address<0xf00316ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut60{
        using Addr = Register::Address<0xf00316f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut61{
        using Addr = Register::Address<0xf00316f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut62{
        using Addr = Register::Address<0xf00316f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut63{
        using Addr = Register::Address<0xf00316fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut64{
        using Addr = Register::Address<0xf0031700,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut65{
        using Addr = Register::Address<0xf0031704,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut66{
        using Addr = Register::Address<0xf0031708,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut67{
        using Addr = Register::Address<0xf003170c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut68{
        using Addr = Register::Address<0xf0031710,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut69{
        using Addr = Register::Address<0xf0031714,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut70{
        using Addr = Register::Address<0xf0031718,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut71{
        using Addr = Register::Address<0xf003171c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut72{
        using Addr = Register::Address<0xf0031720,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut73{
        using Addr = Register::Address<0xf0031724,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut74{
        using Addr = Register::Address<0xf0031728,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut75{
        using Addr = Register::Address<0xf003172c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut76{
        using Addr = Register::Address<0xf0031730,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut77{
        using Addr = Register::Address<0xf0031734,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut78{
        using Addr = Register::Address<0xf0031738,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut79{
        using Addr = Register::Address<0xf003173c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut80{
        using Addr = Register::Address<0xf0031740,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut81{
        using Addr = Register::Address<0xf0031744,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut82{
        using Addr = Register::Address<0xf0031748,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut83{
        using Addr = Register::Address<0xf003174c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut84{
        using Addr = Register::Address<0xf0031750,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut85{
        using Addr = Register::Address<0xf0031754,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut86{
        using Addr = Register::Address<0xf0031758,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut87{
        using Addr = Register::Address<0xf003175c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut88{
        using Addr = Register::Address<0xf0031760,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut89{
        using Addr = Register::Address<0xf0031764,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut90{
        using Addr = Register::Address<0xf0031768,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut91{
        using Addr = Register::Address<0xf003176c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut92{
        using Addr = Register::Address<0xf0031770,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut93{
        using Addr = Register::Address<0xf0031774,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut94{
        using Addr = Register::Address<0xf0031778,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut95{
        using Addr = Register::Address<0xf003177c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut96{
        using Addr = Register::Address<0xf0031780,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut97{
        using Addr = Register::Address<0xf0031784,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut98{
        using Addr = Register::Address<0xf0031788,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut99{
        using Addr = Register::Address<0xf003178c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut100{
        using Addr = Register::Address<0xf0031790,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut101{
        using Addr = Register::Address<0xf0031794,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut102{
        using Addr = Register::Address<0xf0031798,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut103{
        using Addr = Register::Address<0xf003179c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut104{
        using Addr = Register::Address<0xf00317a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut105{
        using Addr = Register::Address<0xf00317a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut106{
        using Addr = Register::Address<0xf00317a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut107{
        using Addr = Register::Address<0xf00317ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut108{
        using Addr = Register::Address<0xf00317b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut109{
        using Addr = Register::Address<0xf00317b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut110{
        using Addr = Register::Address<0xf00317b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut111{
        using Addr = Register::Address<0xf00317bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut112{
        using Addr = Register::Address<0xf00317c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut113{
        using Addr = Register::Address<0xf00317c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut114{
        using Addr = Register::Address<0xf00317c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut115{
        using Addr = Register::Address<0xf00317cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut116{
        using Addr = Register::Address<0xf00317d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut117{
        using Addr = Register::Address<0xf00317d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut118{
        using Addr = Register::Address<0xf00317d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut119{
        using Addr = Register::Address<0xf00317dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut120{
        using Addr = Register::Address<0xf00317e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut121{
        using Addr = Register::Address<0xf00317e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut122{
        using Addr = Register::Address<0xf00317e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut123{
        using Addr = Register::Address<0xf00317ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut124{
        using Addr = Register::Address<0xf00317f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut125{
        using Addr = Register::Address<0xf00317f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut126{
        using Addr = Register::Address<0xf00317f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut127{
        using Addr = Register::Address<0xf00317fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut128{
        using Addr = Register::Address<0xf0031800,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut129{
        using Addr = Register::Address<0xf0031804,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut130{
        using Addr = Register::Address<0xf0031808,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut131{
        using Addr = Register::Address<0xf003180c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut132{
        using Addr = Register::Address<0xf0031810,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut133{
        using Addr = Register::Address<0xf0031814,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut134{
        using Addr = Register::Address<0xf0031818,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut135{
        using Addr = Register::Address<0xf003181c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut136{
        using Addr = Register::Address<0xf0031820,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut137{
        using Addr = Register::Address<0xf0031824,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut138{
        using Addr = Register::Address<0xf0031828,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut139{
        using Addr = Register::Address<0xf003182c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut140{
        using Addr = Register::Address<0xf0031830,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut141{
        using Addr = Register::Address<0xf0031834,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut142{
        using Addr = Register::Address<0xf0031838,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut143{
        using Addr = Register::Address<0xf003183c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut144{
        using Addr = Register::Address<0xf0031840,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut145{
        using Addr = Register::Address<0xf0031844,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut146{
        using Addr = Register::Address<0xf0031848,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut147{
        using Addr = Register::Address<0xf003184c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut148{
        using Addr = Register::Address<0xf0031850,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut149{
        using Addr = Register::Address<0xf0031854,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut150{
        using Addr = Register::Address<0xf0031858,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut151{
        using Addr = Register::Address<0xf003185c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut152{
        using Addr = Register::Address<0xf0031860,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut153{
        using Addr = Register::Address<0xf0031864,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut154{
        using Addr = Register::Address<0xf0031868,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut155{
        using Addr = Register::Address<0xf003186c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut156{
        using Addr = Register::Address<0xf0031870,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut157{
        using Addr = Register::Address<0xf0031874,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut158{
        using Addr = Register::Address<0xf0031878,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut159{
        using Addr = Register::Address<0xf003187c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut160{
        using Addr = Register::Address<0xf0031880,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut161{
        using Addr = Register::Address<0xf0031884,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut162{
        using Addr = Register::Address<0xf0031888,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut163{
        using Addr = Register::Address<0xf003188c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut164{
        using Addr = Register::Address<0xf0031890,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut165{
        using Addr = Register::Address<0xf0031894,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut166{
        using Addr = Register::Address<0xf0031898,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut167{
        using Addr = Register::Address<0xf003189c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut168{
        using Addr = Register::Address<0xf00318a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut169{
        using Addr = Register::Address<0xf00318a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut170{
        using Addr = Register::Address<0xf00318a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut171{
        using Addr = Register::Address<0xf00318ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut172{
        using Addr = Register::Address<0xf00318b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut173{
        using Addr = Register::Address<0xf00318b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut174{
        using Addr = Register::Address<0xf00318b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut175{
        using Addr = Register::Address<0xf00318bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut176{
        using Addr = Register::Address<0xf00318c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut177{
        using Addr = Register::Address<0xf00318c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut178{
        using Addr = Register::Address<0xf00318c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut179{
        using Addr = Register::Address<0xf00318cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut180{
        using Addr = Register::Address<0xf00318d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut181{
        using Addr = Register::Address<0xf00318d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut182{
        using Addr = Register::Address<0xf00318d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut183{
        using Addr = Register::Address<0xf00318dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut184{
        using Addr = Register::Address<0xf00318e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut185{
        using Addr = Register::Address<0xf00318e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut186{
        using Addr = Register::Address<0xf00318e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut187{
        using Addr = Register::Address<0xf00318ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut188{
        using Addr = Register::Address<0xf00318f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut189{
        using Addr = Register::Address<0xf00318f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut190{
        using Addr = Register::Address<0xf00318f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut191{
        using Addr = Register::Address<0xf00318fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut192{
        using Addr = Register::Address<0xf0031900,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut193{
        using Addr = Register::Address<0xf0031904,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut194{
        using Addr = Register::Address<0xf0031908,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut195{
        using Addr = Register::Address<0xf003190c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut196{
        using Addr = Register::Address<0xf0031910,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut197{
        using Addr = Register::Address<0xf0031914,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut198{
        using Addr = Register::Address<0xf0031918,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut199{
        using Addr = Register::Address<0xf003191c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut200{
        using Addr = Register::Address<0xf0031920,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut201{
        using Addr = Register::Address<0xf0031924,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut202{
        using Addr = Register::Address<0xf0031928,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut203{
        using Addr = Register::Address<0xf003192c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut204{
        using Addr = Register::Address<0xf0031930,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut205{
        using Addr = Register::Address<0xf0031934,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut206{
        using Addr = Register::Address<0xf0031938,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut207{
        using Addr = Register::Address<0xf003193c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut208{
        using Addr = Register::Address<0xf0031940,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut209{
        using Addr = Register::Address<0xf0031944,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut210{
        using Addr = Register::Address<0xf0031948,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut211{
        using Addr = Register::Address<0xf003194c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut212{
        using Addr = Register::Address<0xf0031950,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut213{
        using Addr = Register::Address<0xf0031954,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut214{
        using Addr = Register::Address<0xf0031958,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut215{
        using Addr = Register::Address<0xf003195c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut216{
        using Addr = Register::Address<0xf0031960,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut217{
        using Addr = Register::Address<0xf0031964,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut218{
        using Addr = Register::Address<0xf0031968,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut219{
        using Addr = Register::Address<0xf003196c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut220{
        using Addr = Register::Address<0xf0031970,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut221{
        using Addr = Register::Address<0xf0031974,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut222{
        using Addr = Register::Address<0xf0031978,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut223{
        using Addr = Register::Address<0xf003197c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut224{
        using Addr = Register::Address<0xf0031980,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut225{
        using Addr = Register::Address<0xf0031984,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut226{
        using Addr = Register::Address<0xf0031988,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut227{
        using Addr = Register::Address<0xf003198c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut228{
        using Addr = Register::Address<0xf0031990,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut229{
        using Addr = Register::Address<0xf0031994,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut230{
        using Addr = Register::Address<0xf0031998,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut231{
        using Addr = Register::Address<0xf003199c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut232{
        using Addr = Register::Address<0xf00319a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut233{
        using Addr = Register::Address<0xf00319a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut234{
        using Addr = Register::Address<0xf00319a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut235{
        using Addr = Register::Address<0xf00319ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut236{
        using Addr = Register::Address<0xf00319b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut237{
        using Addr = Register::Address<0xf00319b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut238{
        using Addr = Register::Address<0xf00319b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut239{
        using Addr = Register::Address<0xf00319bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut240{
        using Addr = Register::Address<0xf00319c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut241{
        using Addr = Register::Address<0xf00319c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut242{
        using Addr = Register::Address<0xf00319c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut243{
        using Addr = Register::Address<0xf00319cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut244{
        using Addr = Register::Address<0xf00319d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut245{
        using Addr = Register::Address<0xf00319d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut246{
        using Addr = Register::Address<0xf00319d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut247{
        using Addr = Register::Address<0xf00319dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut248{
        using Addr = Register::Address<0xf00319e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut249{
        using Addr = Register::Address<0xf00319e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut250{
        using Addr = Register::Address<0xf00319e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut251{
        using Addr = Register::Address<0xf00319ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut252{
        using Addr = Register::Address<0xf00319f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut253{
        using Addr = Register::Address<0xf00319f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut254{
        using Addr = Register::Address<0xf00319f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut255{
        using Addr = Register::Address<0xf00319fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
}
