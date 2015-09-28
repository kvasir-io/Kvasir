#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace LCDC_lcdcfg0{
        using Addr = Register::Address<0xf8038000,0xff00e4f2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLKPWMSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CGDISBASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CGDISOVR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CGDISHEO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CGDISHCR; 
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
        using Addr = Register::Address<0xf803802c,0xfffff0e8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DISIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FIFOERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BASEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OVR1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HEOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HCRIE; 
    }
    namespace LCDC_lcdidr{
        using Addr = Register::Address<0xf8038030,0xfffff0e8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOFID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DISID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FIFOERRID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BASEID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OVR1ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HEOID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HCRID; 
    }
    namespace LCDC_lcdimr{
        using Addr = Register::Address<0xf8038034,0xfffff0e8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOFIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DISIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISPIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FIFOERRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BASEIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OVR1IM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HEOIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HCRIM; 
    }
    namespace LCDC_lcdisr{
        using Addr = Register::Address<0xf8038038,0xfffff0e8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DISP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FIFOERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OVR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HEO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HCR; 
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
    namespace LCDC_ovrcher1{
        using Addr = Register::Address<0xf8038100,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QEN; 
    }
    namespace LCDC_ovrchdr1{
        using Addr = Register::Address<0xf8038104,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHRST; 
    }
    namespace LCDC_ovrchsr1{
        using Addr = Register::Address<0xf8038108,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATESR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QSR; 
    }
    namespace LCDC_ovrier1{
        using Addr = Register::Address<0xf803810c,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_ovridr1{
        using Addr = Register::Address<0xf8038110,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_ovrimr1{
        using Addr = Register::Address<0xf8038114,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_ovrisr1{
        using Addr = Register::Address<0xf8038118,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_ovrhead1{
        using Addr = Register::Address<0xf803811c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> HEAD; 
    }
    namespace LCDC_ovraddr1{
        using Addr = Register::Address<0xf8038120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace LCDC_ovrctrl1{
        using Addr = Register::Address<0xf8038124,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONEIEN; 
    }
    namespace LCDC_ovrnext1{
        using Addr = Register::Address<0xf8038128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NEXT; 
    }
    namespace LCDC_ovr1cfg0{
        using Addr = Register::Address<0xf803812c,0xffffcecf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DLBO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ROTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LOCKDIS; 
    }
    namespace LCDC_ovr1cfg1{
        using Addr = Register::Address<0xf8038130,0xfffffc0e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RGBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CLUTMODE; 
    }
    namespace LCDC_ovr1cfg2{
        using Addr = Register::Address<0xf8038134,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> XPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> YPOS; 
    }
    namespace LCDC_ovr1cfg3{
        using Addr = Register::Address<0xf8038138,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> XSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> YSIZE; 
    }
    namespace LCDC_ovr1cfg4{
        using Addr = Register::Address<0xf803813c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> XSTRIDE; 
    }
    namespace LCDC_ovr1cfg5{
        using Addr = Register::Address<0xf8038140,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PSTRIDE; 
    }
    namespace LCDC_ovr1cfg6{
        using Addr = Register::Address<0xf8038144,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RDEF; 
    }
    namespace LCDC_ovr1cfg7{
        using Addr = Register::Address<0xf8038148,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RKEY; 
    }
    namespace LCDC_ovr1cfg8{
        using Addr = Register::Address<0xf803814c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RMASK; 
    }
    namespace LCDC_ovr1cfg9{
        using Addr = Register::Address<0xf8038150,0xff00f800>;
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
        using Addr = Register::Address<0xf8038280,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QEN; 
    }
    namespace LCDC_heochdr{
        using Addr = Register::Address<0xf8038284,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHRST; 
    }
    namespace LCDC_heochsr{
        using Addr = Register::Address<0xf8038288,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATESR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QSR; 
    }
    namespace LCDC_heoier{
        using Addr = Register::Address<0xf803828c,0xff838383>;
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
        using Addr = Register::Address<0xf8038290,0xff838383>;
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
        using Addr = Register::Address<0xf8038294,0xff838383>;
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
        using Addr = Register::Address<0xf8038298,0xff838383>;
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
        using Addr = Register::Address<0xf803829c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> HEAD; 
    }
    namespace LCDC_heoaddr{
        using Addr = Register::Address<0xf80382a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace LCDC_heoctrl{
        using Addr = Register::Address<0xf80382a4,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONEIEN; 
    }
    namespace LCDC_heonext{
        using Addr = Register::Address<0xf80382a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NEXT; 
    }
    namespace LCDC_heouhead{
        using Addr = Register::Address<0xf80382ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UHEAD; 
    }
    namespace LCDC_heouaddr{
        using Addr = Register::Address<0xf80382b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UADDR; 
    }
    namespace LCDC_heouctrl{
        using Addr = Register::Address<0xf80382b4,0xffffffc2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UDFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UDMAIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UDSCRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UADDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UDONEIEN; 
    }
    namespace LCDC_heounext{
        using Addr = Register::Address<0xf80382b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UNEXT; 
    }
    namespace LCDC_heovhead{
        using Addr = Register::Address<0xf80382bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VHEAD; 
    }
    namespace LCDC_heovaddr{
        using Addr = Register::Address<0xf80382c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VADDR; 
    }
    namespace LCDC_heovctrl{
        using Addr = Register::Address<0xf80382c4,0xffffffc2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VDFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VDMAIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VDSCRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> VADDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> VDONEIEN; 
    }
    namespace LCDC_heovnext{
        using Addr = Register::Address<0xf80382c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VNEXT; 
    }
    namespace LCDC_heocfg0{
        using Addr = Register::Address<0xf80382cc,0xffffce0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BLENUV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DLBO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ROTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LOCKDIS; 
    }
    namespace LCDC_heocfg1{
        using Addr = Register::Address<0xf80382d0,0xfffc0c0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> YUVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RGBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CLUTMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> YUVMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> YUV422ROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> YUV422SWP; 
    }
    namespace LCDC_heocfg2{
        using Addr = Register::Address<0xf80382d4,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> XPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> YPOS; 
    }
    namespace LCDC_heocfg3{
        using Addr = Register::Address<0xf80382d8,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> XSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> YSIZE; 
    }
    namespace LCDC_heocfg4{
        using Addr = Register::Address<0xf80382dc,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> XMEM_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> YMEM_SIZE; 
    }
    namespace LCDC_heocfg5{
        using Addr = Register::Address<0xf80382e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> XSTRIDE; 
    }
    namespace LCDC_heocfg6{
        using Addr = Register::Address<0xf80382e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PSTRIDE; 
    }
    namespace LCDC_heocfg7{
        using Addr = Register::Address<0xf80382e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UVXSTRIDE; 
    }
    namespace LCDC_heocfg8{
        using Addr = Register::Address<0xf80382ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UVPSTRIDE; 
    }
    namespace LCDC_heocfg9{
        using Addr = Register::Address<0xf80382f0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RDEF; 
    }
    namespace LCDC_heocfg10{
        using Addr = Register::Address<0xf80382f4,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RKEY; 
    }
    namespace LCDC_heocfg11{
        using Addr = Register::Address<0xf80382f8,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RMASK; 
    }
    namespace LCDC_heocfg12{
        using Addr = Register::Address<0xf80382fc,0xff00e800>;
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
        using Addr = Register::Address<0xf8038300,0x6000e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> XFACTOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,16)> YFACTOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SCALEN; 
    }
    namespace LCDC_heocfg14{
        using Addr = Register::Address<0xf8038304,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CSCRY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10)> CSCRU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20)> CSCRV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CSCYOFF; 
    }
    namespace LCDC_heocfg15{
        using Addr = Register::Address<0xf8038308,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CSCGY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10)> CSCGU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20)> CSCGV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CSCUOFF; 
    }
    namespace LCDC_heocfg16{
        using Addr = Register::Address<0xf803830c,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CSCBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10)> CSCBU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20)> CSCBV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CSCVOFF; 
    }
    namespace LCDC_hcrcher{
        using Addr = Register::Address<0xf8038340,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QEN; 
    }
    namespace LCDC_hcrchdr{
        using Addr = Register::Address<0xf8038344,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHRST; 
    }
    namespace LCDC_hcrchsr{
        using Addr = Register::Address<0xf8038348,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDATESR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> A2QSR; 
    }
    namespace LCDC_hcrier{
        using Addr = Register::Address<0xf803834c,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_hcridr{
        using Addr = Register::Address<0xf8038350,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_hcrimr{
        using Addr = Register::Address<0xf8038354,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_hcrisr{
        using Addr = Register::Address<0xf8038358,0xffffff83>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
    }
    namespace LCDC_hcrhead{
        using Addr = Register::Address<0xf803835c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> HEAD; 
    }
    namespace LCDC_hcraddr{
        using Addr = Register::Address<0xf8038360,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace LCDC_hcrctrl{
        using Addr = Register::Address<0xf8038364,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LFETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSCRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONEIEN; 
    }
    namespace LCDC_hcrnext{
        using Addr = Register::Address<0xf8038368,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NEXT; 
    }
    namespace LCDC_hcrcfg0{
        using Addr = Register::Address<0xf803836c,0xfffffecf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DLBO; 
    }
    namespace LCDC_hcrcfg1{
        using Addr = Register::Address<0xf8038370,0xfffffc0e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RGBMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CLUTMODE; 
    }
    namespace LCDC_hcrcfg2{
        using Addr = Register::Address<0xf8038374,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> XPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> YPOS; 
    }
    namespace LCDC_hcrcfg3{
        using Addr = Register::Address<0xf8038378,0xff80ff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> XSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> YSIZE; 
    }
    namespace LCDC_hcrcfg4{
        using Addr = Register::Address<0xf803837c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> XSTRIDE; 
    }
    namespace LCDC_hcrcfg6{
        using Addr = Register::Address<0xf8038384,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RDEF; 
    }
    namespace LCDC_hcrcfg7{
        using Addr = Register::Address<0xf8038388,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RKEY; 
    }
    namespace LCDC_hcrcfg8{
        using Addr = Register::Address<0xf803838c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RMASK; 
    }
    namespace LCDC_hcrcfg9{
        using Addr = Register::Address<0xf8038390,0xff00f800>;
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
    namespace LCDC_ovr1clut0{
        using Addr = Register::Address<0xf8038800,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut1{
        using Addr = Register::Address<0xf8038804,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut2{
        using Addr = Register::Address<0xf8038808,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut3{
        using Addr = Register::Address<0xf803880c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut4{
        using Addr = Register::Address<0xf8038810,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut5{
        using Addr = Register::Address<0xf8038814,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut6{
        using Addr = Register::Address<0xf8038818,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut7{
        using Addr = Register::Address<0xf803881c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut8{
        using Addr = Register::Address<0xf8038820,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut9{
        using Addr = Register::Address<0xf8038824,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut10{
        using Addr = Register::Address<0xf8038828,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut11{
        using Addr = Register::Address<0xf803882c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut12{
        using Addr = Register::Address<0xf8038830,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut13{
        using Addr = Register::Address<0xf8038834,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut14{
        using Addr = Register::Address<0xf8038838,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut15{
        using Addr = Register::Address<0xf803883c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut16{
        using Addr = Register::Address<0xf8038840,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut17{
        using Addr = Register::Address<0xf8038844,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut18{
        using Addr = Register::Address<0xf8038848,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut19{
        using Addr = Register::Address<0xf803884c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut20{
        using Addr = Register::Address<0xf8038850,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut21{
        using Addr = Register::Address<0xf8038854,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut22{
        using Addr = Register::Address<0xf8038858,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut23{
        using Addr = Register::Address<0xf803885c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut24{
        using Addr = Register::Address<0xf8038860,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut25{
        using Addr = Register::Address<0xf8038864,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut26{
        using Addr = Register::Address<0xf8038868,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut27{
        using Addr = Register::Address<0xf803886c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut28{
        using Addr = Register::Address<0xf8038870,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut29{
        using Addr = Register::Address<0xf8038874,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut30{
        using Addr = Register::Address<0xf8038878,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut31{
        using Addr = Register::Address<0xf803887c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut32{
        using Addr = Register::Address<0xf8038880,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut33{
        using Addr = Register::Address<0xf8038884,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut34{
        using Addr = Register::Address<0xf8038888,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut35{
        using Addr = Register::Address<0xf803888c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut36{
        using Addr = Register::Address<0xf8038890,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut37{
        using Addr = Register::Address<0xf8038894,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut38{
        using Addr = Register::Address<0xf8038898,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut39{
        using Addr = Register::Address<0xf803889c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut40{
        using Addr = Register::Address<0xf80388a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut41{
        using Addr = Register::Address<0xf80388a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut42{
        using Addr = Register::Address<0xf80388a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut43{
        using Addr = Register::Address<0xf80388ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut44{
        using Addr = Register::Address<0xf80388b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut45{
        using Addr = Register::Address<0xf80388b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut46{
        using Addr = Register::Address<0xf80388b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut47{
        using Addr = Register::Address<0xf80388bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut48{
        using Addr = Register::Address<0xf80388c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut49{
        using Addr = Register::Address<0xf80388c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut50{
        using Addr = Register::Address<0xf80388c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut51{
        using Addr = Register::Address<0xf80388cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut52{
        using Addr = Register::Address<0xf80388d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut53{
        using Addr = Register::Address<0xf80388d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut54{
        using Addr = Register::Address<0xf80388d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut55{
        using Addr = Register::Address<0xf80388dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut56{
        using Addr = Register::Address<0xf80388e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut57{
        using Addr = Register::Address<0xf80388e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut58{
        using Addr = Register::Address<0xf80388e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut59{
        using Addr = Register::Address<0xf80388ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut60{
        using Addr = Register::Address<0xf80388f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut61{
        using Addr = Register::Address<0xf80388f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut62{
        using Addr = Register::Address<0xf80388f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut63{
        using Addr = Register::Address<0xf80388fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut64{
        using Addr = Register::Address<0xf8038900,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut65{
        using Addr = Register::Address<0xf8038904,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut66{
        using Addr = Register::Address<0xf8038908,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut67{
        using Addr = Register::Address<0xf803890c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut68{
        using Addr = Register::Address<0xf8038910,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut69{
        using Addr = Register::Address<0xf8038914,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut70{
        using Addr = Register::Address<0xf8038918,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut71{
        using Addr = Register::Address<0xf803891c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut72{
        using Addr = Register::Address<0xf8038920,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut73{
        using Addr = Register::Address<0xf8038924,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut74{
        using Addr = Register::Address<0xf8038928,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut75{
        using Addr = Register::Address<0xf803892c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut76{
        using Addr = Register::Address<0xf8038930,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut77{
        using Addr = Register::Address<0xf8038934,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut78{
        using Addr = Register::Address<0xf8038938,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut79{
        using Addr = Register::Address<0xf803893c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut80{
        using Addr = Register::Address<0xf8038940,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut81{
        using Addr = Register::Address<0xf8038944,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut82{
        using Addr = Register::Address<0xf8038948,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut83{
        using Addr = Register::Address<0xf803894c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut84{
        using Addr = Register::Address<0xf8038950,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut85{
        using Addr = Register::Address<0xf8038954,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut86{
        using Addr = Register::Address<0xf8038958,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut87{
        using Addr = Register::Address<0xf803895c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut88{
        using Addr = Register::Address<0xf8038960,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut89{
        using Addr = Register::Address<0xf8038964,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut90{
        using Addr = Register::Address<0xf8038968,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut91{
        using Addr = Register::Address<0xf803896c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut92{
        using Addr = Register::Address<0xf8038970,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut93{
        using Addr = Register::Address<0xf8038974,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut94{
        using Addr = Register::Address<0xf8038978,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut95{
        using Addr = Register::Address<0xf803897c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut96{
        using Addr = Register::Address<0xf8038980,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut97{
        using Addr = Register::Address<0xf8038984,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut98{
        using Addr = Register::Address<0xf8038988,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut99{
        using Addr = Register::Address<0xf803898c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut100{
        using Addr = Register::Address<0xf8038990,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut101{
        using Addr = Register::Address<0xf8038994,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut102{
        using Addr = Register::Address<0xf8038998,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut103{
        using Addr = Register::Address<0xf803899c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut104{
        using Addr = Register::Address<0xf80389a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut105{
        using Addr = Register::Address<0xf80389a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut106{
        using Addr = Register::Address<0xf80389a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut107{
        using Addr = Register::Address<0xf80389ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut108{
        using Addr = Register::Address<0xf80389b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut109{
        using Addr = Register::Address<0xf80389b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut110{
        using Addr = Register::Address<0xf80389b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut111{
        using Addr = Register::Address<0xf80389bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut112{
        using Addr = Register::Address<0xf80389c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut113{
        using Addr = Register::Address<0xf80389c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut114{
        using Addr = Register::Address<0xf80389c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut115{
        using Addr = Register::Address<0xf80389cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut116{
        using Addr = Register::Address<0xf80389d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut117{
        using Addr = Register::Address<0xf80389d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut118{
        using Addr = Register::Address<0xf80389d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut119{
        using Addr = Register::Address<0xf80389dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut120{
        using Addr = Register::Address<0xf80389e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut121{
        using Addr = Register::Address<0xf80389e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut122{
        using Addr = Register::Address<0xf80389e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut123{
        using Addr = Register::Address<0xf80389ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut124{
        using Addr = Register::Address<0xf80389f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut125{
        using Addr = Register::Address<0xf80389f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut126{
        using Addr = Register::Address<0xf80389f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut127{
        using Addr = Register::Address<0xf80389fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut128{
        using Addr = Register::Address<0xf8038a00,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut129{
        using Addr = Register::Address<0xf8038a04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut130{
        using Addr = Register::Address<0xf8038a08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut131{
        using Addr = Register::Address<0xf8038a0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut132{
        using Addr = Register::Address<0xf8038a10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut133{
        using Addr = Register::Address<0xf8038a14,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut134{
        using Addr = Register::Address<0xf8038a18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut135{
        using Addr = Register::Address<0xf8038a1c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut136{
        using Addr = Register::Address<0xf8038a20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut137{
        using Addr = Register::Address<0xf8038a24,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut138{
        using Addr = Register::Address<0xf8038a28,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut139{
        using Addr = Register::Address<0xf8038a2c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut140{
        using Addr = Register::Address<0xf8038a30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut141{
        using Addr = Register::Address<0xf8038a34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut142{
        using Addr = Register::Address<0xf8038a38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut143{
        using Addr = Register::Address<0xf8038a3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut144{
        using Addr = Register::Address<0xf8038a40,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut145{
        using Addr = Register::Address<0xf8038a44,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut146{
        using Addr = Register::Address<0xf8038a48,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut147{
        using Addr = Register::Address<0xf8038a4c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut148{
        using Addr = Register::Address<0xf8038a50,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut149{
        using Addr = Register::Address<0xf8038a54,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut150{
        using Addr = Register::Address<0xf8038a58,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut151{
        using Addr = Register::Address<0xf8038a5c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut152{
        using Addr = Register::Address<0xf8038a60,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut153{
        using Addr = Register::Address<0xf8038a64,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut154{
        using Addr = Register::Address<0xf8038a68,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut155{
        using Addr = Register::Address<0xf8038a6c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut156{
        using Addr = Register::Address<0xf8038a70,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut157{
        using Addr = Register::Address<0xf8038a74,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut158{
        using Addr = Register::Address<0xf8038a78,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut159{
        using Addr = Register::Address<0xf8038a7c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut160{
        using Addr = Register::Address<0xf8038a80,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut161{
        using Addr = Register::Address<0xf8038a84,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut162{
        using Addr = Register::Address<0xf8038a88,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut163{
        using Addr = Register::Address<0xf8038a8c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut164{
        using Addr = Register::Address<0xf8038a90,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut165{
        using Addr = Register::Address<0xf8038a94,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut166{
        using Addr = Register::Address<0xf8038a98,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut167{
        using Addr = Register::Address<0xf8038a9c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut168{
        using Addr = Register::Address<0xf8038aa0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut169{
        using Addr = Register::Address<0xf8038aa4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut170{
        using Addr = Register::Address<0xf8038aa8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut171{
        using Addr = Register::Address<0xf8038aac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut172{
        using Addr = Register::Address<0xf8038ab0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut173{
        using Addr = Register::Address<0xf8038ab4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut174{
        using Addr = Register::Address<0xf8038ab8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut175{
        using Addr = Register::Address<0xf8038abc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut176{
        using Addr = Register::Address<0xf8038ac0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut177{
        using Addr = Register::Address<0xf8038ac4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut178{
        using Addr = Register::Address<0xf8038ac8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut179{
        using Addr = Register::Address<0xf8038acc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut180{
        using Addr = Register::Address<0xf8038ad0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut181{
        using Addr = Register::Address<0xf8038ad4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut182{
        using Addr = Register::Address<0xf8038ad8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut183{
        using Addr = Register::Address<0xf8038adc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut184{
        using Addr = Register::Address<0xf8038ae0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut185{
        using Addr = Register::Address<0xf8038ae4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut186{
        using Addr = Register::Address<0xf8038ae8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut187{
        using Addr = Register::Address<0xf8038aec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut188{
        using Addr = Register::Address<0xf8038af0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut189{
        using Addr = Register::Address<0xf8038af4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut190{
        using Addr = Register::Address<0xf8038af8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut191{
        using Addr = Register::Address<0xf8038afc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut192{
        using Addr = Register::Address<0xf8038b00,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut193{
        using Addr = Register::Address<0xf8038b04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut194{
        using Addr = Register::Address<0xf8038b08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut195{
        using Addr = Register::Address<0xf8038b0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut196{
        using Addr = Register::Address<0xf8038b10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut197{
        using Addr = Register::Address<0xf8038b14,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut198{
        using Addr = Register::Address<0xf8038b18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut199{
        using Addr = Register::Address<0xf8038b1c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut200{
        using Addr = Register::Address<0xf8038b20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut201{
        using Addr = Register::Address<0xf8038b24,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut202{
        using Addr = Register::Address<0xf8038b28,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut203{
        using Addr = Register::Address<0xf8038b2c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut204{
        using Addr = Register::Address<0xf8038b30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut205{
        using Addr = Register::Address<0xf8038b34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut206{
        using Addr = Register::Address<0xf8038b38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut207{
        using Addr = Register::Address<0xf8038b3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut208{
        using Addr = Register::Address<0xf8038b40,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut209{
        using Addr = Register::Address<0xf8038b44,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut210{
        using Addr = Register::Address<0xf8038b48,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut211{
        using Addr = Register::Address<0xf8038b4c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut212{
        using Addr = Register::Address<0xf8038b50,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut213{
        using Addr = Register::Address<0xf8038b54,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut214{
        using Addr = Register::Address<0xf8038b58,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut215{
        using Addr = Register::Address<0xf8038b5c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut216{
        using Addr = Register::Address<0xf8038b60,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut217{
        using Addr = Register::Address<0xf8038b64,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut218{
        using Addr = Register::Address<0xf8038b68,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut219{
        using Addr = Register::Address<0xf8038b6c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut220{
        using Addr = Register::Address<0xf8038b70,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut221{
        using Addr = Register::Address<0xf8038b74,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut222{
        using Addr = Register::Address<0xf8038b78,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut223{
        using Addr = Register::Address<0xf8038b7c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut224{
        using Addr = Register::Address<0xf8038b80,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut225{
        using Addr = Register::Address<0xf8038b84,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut226{
        using Addr = Register::Address<0xf8038b88,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut227{
        using Addr = Register::Address<0xf8038b8c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut228{
        using Addr = Register::Address<0xf8038b90,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut229{
        using Addr = Register::Address<0xf8038b94,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut230{
        using Addr = Register::Address<0xf8038b98,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut231{
        using Addr = Register::Address<0xf8038b9c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut232{
        using Addr = Register::Address<0xf8038ba0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut233{
        using Addr = Register::Address<0xf8038ba4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut234{
        using Addr = Register::Address<0xf8038ba8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut235{
        using Addr = Register::Address<0xf8038bac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut236{
        using Addr = Register::Address<0xf8038bb0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut237{
        using Addr = Register::Address<0xf8038bb4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut238{
        using Addr = Register::Address<0xf8038bb8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut239{
        using Addr = Register::Address<0xf8038bbc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut240{
        using Addr = Register::Address<0xf8038bc0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut241{
        using Addr = Register::Address<0xf8038bc4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut242{
        using Addr = Register::Address<0xf8038bc8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut243{
        using Addr = Register::Address<0xf8038bcc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut244{
        using Addr = Register::Address<0xf8038bd0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut245{
        using Addr = Register::Address<0xf8038bd4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut246{
        using Addr = Register::Address<0xf8038bd8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut247{
        using Addr = Register::Address<0xf8038bdc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut248{
        using Addr = Register::Address<0xf8038be0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut249{
        using Addr = Register::Address<0xf8038be4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut250{
        using Addr = Register::Address<0xf8038be8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut251{
        using Addr = Register::Address<0xf8038bec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut252{
        using Addr = Register::Address<0xf8038bf0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut253{
        using Addr = Register::Address<0xf8038bf4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut254{
        using Addr = Register::Address<0xf8038bf8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_ovr1clut255{
        using Addr = Register::Address<0xf8038bfc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut0{
        using Addr = Register::Address<0xf8039000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut1{
        using Addr = Register::Address<0xf8039004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut2{
        using Addr = Register::Address<0xf8039008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut3{
        using Addr = Register::Address<0xf803900c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut4{
        using Addr = Register::Address<0xf8039010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut5{
        using Addr = Register::Address<0xf8039014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut6{
        using Addr = Register::Address<0xf8039018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut7{
        using Addr = Register::Address<0xf803901c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut8{
        using Addr = Register::Address<0xf8039020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut9{
        using Addr = Register::Address<0xf8039024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut10{
        using Addr = Register::Address<0xf8039028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut11{
        using Addr = Register::Address<0xf803902c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut12{
        using Addr = Register::Address<0xf8039030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut13{
        using Addr = Register::Address<0xf8039034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut14{
        using Addr = Register::Address<0xf8039038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut15{
        using Addr = Register::Address<0xf803903c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut16{
        using Addr = Register::Address<0xf8039040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut17{
        using Addr = Register::Address<0xf8039044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut18{
        using Addr = Register::Address<0xf8039048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut19{
        using Addr = Register::Address<0xf803904c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut20{
        using Addr = Register::Address<0xf8039050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut21{
        using Addr = Register::Address<0xf8039054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut22{
        using Addr = Register::Address<0xf8039058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut23{
        using Addr = Register::Address<0xf803905c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut24{
        using Addr = Register::Address<0xf8039060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut25{
        using Addr = Register::Address<0xf8039064,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut26{
        using Addr = Register::Address<0xf8039068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut27{
        using Addr = Register::Address<0xf803906c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut28{
        using Addr = Register::Address<0xf8039070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut29{
        using Addr = Register::Address<0xf8039074,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut30{
        using Addr = Register::Address<0xf8039078,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut31{
        using Addr = Register::Address<0xf803907c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut32{
        using Addr = Register::Address<0xf8039080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut33{
        using Addr = Register::Address<0xf8039084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut34{
        using Addr = Register::Address<0xf8039088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut35{
        using Addr = Register::Address<0xf803908c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut36{
        using Addr = Register::Address<0xf8039090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut37{
        using Addr = Register::Address<0xf8039094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut38{
        using Addr = Register::Address<0xf8039098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut39{
        using Addr = Register::Address<0xf803909c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut40{
        using Addr = Register::Address<0xf80390a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut41{
        using Addr = Register::Address<0xf80390a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut42{
        using Addr = Register::Address<0xf80390a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut43{
        using Addr = Register::Address<0xf80390ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut44{
        using Addr = Register::Address<0xf80390b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut45{
        using Addr = Register::Address<0xf80390b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut46{
        using Addr = Register::Address<0xf80390b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut47{
        using Addr = Register::Address<0xf80390bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut48{
        using Addr = Register::Address<0xf80390c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut49{
        using Addr = Register::Address<0xf80390c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut50{
        using Addr = Register::Address<0xf80390c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut51{
        using Addr = Register::Address<0xf80390cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut52{
        using Addr = Register::Address<0xf80390d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut53{
        using Addr = Register::Address<0xf80390d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut54{
        using Addr = Register::Address<0xf80390d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut55{
        using Addr = Register::Address<0xf80390dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut56{
        using Addr = Register::Address<0xf80390e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut57{
        using Addr = Register::Address<0xf80390e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut58{
        using Addr = Register::Address<0xf80390e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut59{
        using Addr = Register::Address<0xf80390ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut60{
        using Addr = Register::Address<0xf80390f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut61{
        using Addr = Register::Address<0xf80390f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut62{
        using Addr = Register::Address<0xf80390f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut63{
        using Addr = Register::Address<0xf80390fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut64{
        using Addr = Register::Address<0xf8039100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut65{
        using Addr = Register::Address<0xf8039104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut66{
        using Addr = Register::Address<0xf8039108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut67{
        using Addr = Register::Address<0xf803910c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut68{
        using Addr = Register::Address<0xf8039110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut69{
        using Addr = Register::Address<0xf8039114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut70{
        using Addr = Register::Address<0xf8039118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut71{
        using Addr = Register::Address<0xf803911c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut72{
        using Addr = Register::Address<0xf8039120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut73{
        using Addr = Register::Address<0xf8039124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut74{
        using Addr = Register::Address<0xf8039128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut75{
        using Addr = Register::Address<0xf803912c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut76{
        using Addr = Register::Address<0xf8039130,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut77{
        using Addr = Register::Address<0xf8039134,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut78{
        using Addr = Register::Address<0xf8039138,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut79{
        using Addr = Register::Address<0xf803913c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut80{
        using Addr = Register::Address<0xf8039140,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut81{
        using Addr = Register::Address<0xf8039144,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut82{
        using Addr = Register::Address<0xf8039148,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut83{
        using Addr = Register::Address<0xf803914c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut84{
        using Addr = Register::Address<0xf8039150,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut85{
        using Addr = Register::Address<0xf8039154,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut86{
        using Addr = Register::Address<0xf8039158,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut87{
        using Addr = Register::Address<0xf803915c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut88{
        using Addr = Register::Address<0xf8039160,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut89{
        using Addr = Register::Address<0xf8039164,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut90{
        using Addr = Register::Address<0xf8039168,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut91{
        using Addr = Register::Address<0xf803916c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut92{
        using Addr = Register::Address<0xf8039170,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut93{
        using Addr = Register::Address<0xf8039174,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut94{
        using Addr = Register::Address<0xf8039178,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut95{
        using Addr = Register::Address<0xf803917c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut96{
        using Addr = Register::Address<0xf8039180,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut97{
        using Addr = Register::Address<0xf8039184,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut98{
        using Addr = Register::Address<0xf8039188,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut99{
        using Addr = Register::Address<0xf803918c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut100{
        using Addr = Register::Address<0xf8039190,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut101{
        using Addr = Register::Address<0xf8039194,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut102{
        using Addr = Register::Address<0xf8039198,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut103{
        using Addr = Register::Address<0xf803919c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut104{
        using Addr = Register::Address<0xf80391a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut105{
        using Addr = Register::Address<0xf80391a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut106{
        using Addr = Register::Address<0xf80391a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut107{
        using Addr = Register::Address<0xf80391ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut108{
        using Addr = Register::Address<0xf80391b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut109{
        using Addr = Register::Address<0xf80391b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut110{
        using Addr = Register::Address<0xf80391b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut111{
        using Addr = Register::Address<0xf80391bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut112{
        using Addr = Register::Address<0xf80391c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut113{
        using Addr = Register::Address<0xf80391c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut114{
        using Addr = Register::Address<0xf80391c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut115{
        using Addr = Register::Address<0xf80391cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut116{
        using Addr = Register::Address<0xf80391d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut117{
        using Addr = Register::Address<0xf80391d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut118{
        using Addr = Register::Address<0xf80391d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut119{
        using Addr = Register::Address<0xf80391dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut120{
        using Addr = Register::Address<0xf80391e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut121{
        using Addr = Register::Address<0xf80391e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut122{
        using Addr = Register::Address<0xf80391e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut123{
        using Addr = Register::Address<0xf80391ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut124{
        using Addr = Register::Address<0xf80391f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut125{
        using Addr = Register::Address<0xf80391f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut126{
        using Addr = Register::Address<0xf80391f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut127{
        using Addr = Register::Address<0xf80391fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut128{
        using Addr = Register::Address<0xf8039200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut129{
        using Addr = Register::Address<0xf8039204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut130{
        using Addr = Register::Address<0xf8039208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut131{
        using Addr = Register::Address<0xf803920c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut132{
        using Addr = Register::Address<0xf8039210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut133{
        using Addr = Register::Address<0xf8039214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut134{
        using Addr = Register::Address<0xf8039218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut135{
        using Addr = Register::Address<0xf803921c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut136{
        using Addr = Register::Address<0xf8039220,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut137{
        using Addr = Register::Address<0xf8039224,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut138{
        using Addr = Register::Address<0xf8039228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut139{
        using Addr = Register::Address<0xf803922c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut140{
        using Addr = Register::Address<0xf8039230,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut141{
        using Addr = Register::Address<0xf8039234,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut142{
        using Addr = Register::Address<0xf8039238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut143{
        using Addr = Register::Address<0xf803923c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut144{
        using Addr = Register::Address<0xf8039240,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut145{
        using Addr = Register::Address<0xf8039244,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut146{
        using Addr = Register::Address<0xf8039248,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut147{
        using Addr = Register::Address<0xf803924c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut148{
        using Addr = Register::Address<0xf8039250,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut149{
        using Addr = Register::Address<0xf8039254,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut150{
        using Addr = Register::Address<0xf8039258,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut151{
        using Addr = Register::Address<0xf803925c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut152{
        using Addr = Register::Address<0xf8039260,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut153{
        using Addr = Register::Address<0xf8039264,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut154{
        using Addr = Register::Address<0xf8039268,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut155{
        using Addr = Register::Address<0xf803926c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut156{
        using Addr = Register::Address<0xf8039270,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut157{
        using Addr = Register::Address<0xf8039274,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut158{
        using Addr = Register::Address<0xf8039278,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut159{
        using Addr = Register::Address<0xf803927c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut160{
        using Addr = Register::Address<0xf8039280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut161{
        using Addr = Register::Address<0xf8039284,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut162{
        using Addr = Register::Address<0xf8039288,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut163{
        using Addr = Register::Address<0xf803928c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut164{
        using Addr = Register::Address<0xf8039290,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut165{
        using Addr = Register::Address<0xf8039294,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut166{
        using Addr = Register::Address<0xf8039298,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut167{
        using Addr = Register::Address<0xf803929c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut168{
        using Addr = Register::Address<0xf80392a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut169{
        using Addr = Register::Address<0xf80392a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut170{
        using Addr = Register::Address<0xf80392a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut171{
        using Addr = Register::Address<0xf80392ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut172{
        using Addr = Register::Address<0xf80392b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut173{
        using Addr = Register::Address<0xf80392b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut174{
        using Addr = Register::Address<0xf80392b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut175{
        using Addr = Register::Address<0xf80392bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut176{
        using Addr = Register::Address<0xf80392c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut177{
        using Addr = Register::Address<0xf80392c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut178{
        using Addr = Register::Address<0xf80392c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut179{
        using Addr = Register::Address<0xf80392cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut180{
        using Addr = Register::Address<0xf80392d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut181{
        using Addr = Register::Address<0xf80392d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut182{
        using Addr = Register::Address<0xf80392d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut183{
        using Addr = Register::Address<0xf80392dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut184{
        using Addr = Register::Address<0xf80392e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut185{
        using Addr = Register::Address<0xf80392e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut186{
        using Addr = Register::Address<0xf80392e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut187{
        using Addr = Register::Address<0xf80392ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut188{
        using Addr = Register::Address<0xf80392f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut189{
        using Addr = Register::Address<0xf80392f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut190{
        using Addr = Register::Address<0xf80392f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut191{
        using Addr = Register::Address<0xf80392fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut192{
        using Addr = Register::Address<0xf8039300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut193{
        using Addr = Register::Address<0xf8039304,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut194{
        using Addr = Register::Address<0xf8039308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut195{
        using Addr = Register::Address<0xf803930c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut196{
        using Addr = Register::Address<0xf8039310,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut197{
        using Addr = Register::Address<0xf8039314,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut198{
        using Addr = Register::Address<0xf8039318,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut199{
        using Addr = Register::Address<0xf803931c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut200{
        using Addr = Register::Address<0xf8039320,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut201{
        using Addr = Register::Address<0xf8039324,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut202{
        using Addr = Register::Address<0xf8039328,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut203{
        using Addr = Register::Address<0xf803932c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut204{
        using Addr = Register::Address<0xf8039330,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut205{
        using Addr = Register::Address<0xf8039334,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut206{
        using Addr = Register::Address<0xf8039338,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut207{
        using Addr = Register::Address<0xf803933c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut208{
        using Addr = Register::Address<0xf8039340,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut209{
        using Addr = Register::Address<0xf8039344,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut210{
        using Addr = Register::Address<0xf8039348,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut211{
        using Addr = Register::Address<0xf803934c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut212{
        using Addr = Register::Address<0xf8039350,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut213{
        using Addr = Register::Address<0xf8039354,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut214{
        using Addr = Register::Address<0xf8039358,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut215{
        using Addr = Register::Address<0xf803935c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut216{
        using Addr = Register::Address<0xf8039360,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut217{
        using Addr = Register::Address<0xf8039364,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut218{
        using Addr = Register::Address<0xf8039368,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut219{
        using Addr = Register::Address<0xf803936c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut220{
        using Addr = Register::Address<0xf8039370,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut221{
        using Addr = Register::Address<0xf8039374,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut222{
        using Addr = Register::Address<0xf8039378,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut223{
        using Addr = Register::Address<0xf803937c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut224{
        using Addr = Register::Address<0xf8039380,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut225{
        using Addr = Register::Address<0xf8039384,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut226{
        using Addr = Register::Address<0xf8039388,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut227{
        using Addr = Register::Address<0xf803938c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut228{
        using Addr = Register::Address<0xf8039390,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut229{
        using Addr = Register::Address<0xf8039394,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut230{
        using Addr = Register::Address<0xf8039398,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut231{
        using Addr = Register::Address<0xf803939c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut232{
        using Addr = Register::Address<0xf80393a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut233{
        using Addr = Register::Address<0xf80393a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut234{
        using Addr = Register::Address<0xf80393a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut235{
        using Addr = Register::Address<0xf80393ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut236{
        using Addr = Register::Address<0xf80393b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut237{
        using Addr = Register::Address<0xf80393b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut238{
        using Addr = Register::Address<0xf80393b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut239{
        using Addr = Register::Address<0xf80393bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut240{
        using Addr = Register::Address<0xf80393c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut241{
        using Addr = Register::Address<0xf80393c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut242{
        using Addr = Register::Address<0xf80393c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut243{
        using Addr = Register::Address<0xf80393cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut244{
        using Addr = Register::Address<0xf80393d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut245{
        using Addr = Register::Address<0xf80393d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut246{
        using Addr = Register::Address<0xf80393d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut247{
        using Addr = Register::Address<0xf80393dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut248{
        using Addr = Register::Address<0xf80393e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut249{
        using Addr = Register::Address<0xf80393e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut250{
        using Addr = Register::Address<0xf80393e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut251{
        using Addr = Register::Address<0xf80393ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut252{
        using Addr = Register::Address<0xf80393f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut253{
        using Addr = Register::Address<0xf80393f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut254{
        using Addr = Register::Address<0xf80393f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_heoclut255{
        using Addr = Register::Address<0xf80393fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut0{
        using Addr = Register::Address<0xf8039400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut1{
        using Addr = Register::Address<0xf8039404,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut2{
        using Addr = Register::Address<0xf8039408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut3{
        using Addr = Register::Address<0xf803940c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut4{
        using Addr = Register::Address<0xf8039410,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut5{
        using Addr = Register::Address<0xf8039414,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut6{
        using Addr = Register::Address<0xf8039418,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut7{
        using Addr = Register::Address<0xf803941c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut8{
        using Addr = Register::Address<0xf8039420,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut9{
        using Addr = Register::Address<0xf8039424,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut10{
        using Addr = Register::Address<0xf8039428,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut11{
        using Addr = Register::Address<0xf803942c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut12{
        using Addr = Register::Address<0xf8039430,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut13{
        using Addr = Register::Address<0xf8039434,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut14{
        using Addr = Register::Address<0xf8039438,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut15{
        using Addr = Register::Address<0xf803943c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut16{
        using Addr = Register::Address<0xf8039440,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut17{
        using Addr = Register::Address<0xf8039444,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut18{
        using Addr = Register::Address<0xf8039448,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut19{
        using Addr = Register::Address<0xf803944c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut20{
        using Addr = Register::Address<0xf8039450,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut21{
        using Addr = Register::Address<0xf8039454,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut22{
        using Addr = Register::Address<0xf8039458,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut23{
        using Addr = Register::Address<0xf803945c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut24{
        using Addr = Register::Address<0xf8039460,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut25{
        using Addr = Register::Address<0xf8039464,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut26{
        using Addr = Register::Address<0xf8039468,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut27{
        using Addr = Register::Address<0xf803946c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut28{
        using Addr = Register::Address<0xf8039470,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut29{
        using Addr = Register::Address<0xf8039474,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut30{
        using Addr = Register::Address<0xf8039478,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut31{
        using Addr = Register::Address<0xf803947c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut32{
        using Addr = Register::Address<0xf8039480,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut33{
        using Addr = Register::Address<0xf8039484,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut34{
        using Addr = Register::Address<0xf8039488,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut35{
        using Addr = Register::Address<0xf803948c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut36{
        using Addr = Register::Address<0xf8039490,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut37{
        using Addr = Register::Address<0xf8039494,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut38{
        using Addr = Register::Address<0xf8039498,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut39{
        using Addr = Register::Address<0xf803949c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut40{
        using Addr = Register::Address<0xf80394a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut41{
        using Addr = Register::Address<0xf80394a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut42{
        using Addr = Register::Address<0xf80394a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut43{
        using Addr = Register::Address<0xf80394ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut44{
        using Addr = Register::Address<0xf80394b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut45{
        using Addr = Register::Address<0xf80394b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut46{
        using Addr = Register::Address<0xf80394b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut47{
        using Addr = Register::Address<0xf80394bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut48{
        using Addr = Register::Address<0xf80394c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut49{
        using Addr = Register::Address<0xf80394c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut50{
        using Addr = Register::Address<0xf80394c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut51{
        using Addr = Register::Address<0xf80394cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut52{
        using Addr = Register::Address<0xf80394d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut53{
        using Addr = Register::Address<0xf80394d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut54{
        using Addr = Register::Address<0xf80394d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut55{
        using Addr = Register::Address<0xf80394dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut56{
        using Addr = Register::Address<0xf80394e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut57{
        using Addr = Register::Address<0xf80394e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut58{
        using Addr = Register::Address<0xf80394e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut59{
        using Addr = Register::Address<0xf80394ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut60{
        using Addr = Register::Address<0xf80394f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut61{
        using Addr = Register::Address<0xf80394f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut62{
        using Addr = Register::Address<0xf80394f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut63{
        using Addr = Register::Address<0xf80394fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut64{
        using Addr = Register::Address<0xf8039500,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut65{
        using Addr = Register::Address<0xf8039504,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut66{
        using Addr = Register::Address<0xf8039508,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut67{
        using Addr = Register::Address<0xf803950c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut68{
        using Addr = Register::Address<0xf8039510,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut69{
        using Addr = Register::Address<0xf8039514,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut70{
        using Addr = Register::Address<0xf8039518,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut71{
        using Addr = Register::Address<0xf803951c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut72{
        using Addr = Register::Address<0xf8039520,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut73{
        using Addr = Register::Address<0xf8039524,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut74{
        using Addr = Register::Address<0xf8039528,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut75{
        using Addr = Register::Address<0xf803952c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut76{
        using Addr = Register::Address<0xf8039530,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut77{
        using Addr = Register::Address<0xf8039534,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut78{
        using Addr = Register::Address<0xf8039538,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut79{
        using Addr = Register::Address<0xf803953c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut80{
        using Addr = Register::Address<0xf8039540,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut81{
        using Addr = Register::Address<0xf8039544,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut82{
        using Addr = Register::Address<0xf8039548,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut83{
        using Addr = Register::Address<0xf803954c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut84{
        using Addr = Register::Address<0xf8039550,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut85{
        using Addr = Register::Address<0xf8039554,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut86{
        using Addr = Register::Address<0xf8039558,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut87{
        using Addr = Register::Address<0xf803955c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut88{
        using Addr = Register::Address<0xf8039560,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut89{
        using Addr = Register::Address<0xf8039564,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut90{
        using Addr = Register::Address<0xf8039568,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut91{
        using Addr = Register::Address<0xf803956c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut92{
        using Addr = Register::Address<0xf8039570,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut93{
        using Addr = Register::Address<0xf8039574,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut94{
        using Addr = Register::Address<0xf8039578,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut95{
        using Addr = Register::Address<0xf803957c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut96{
        using Addr = Register::Address<0xf8039580,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut97{
        using Addr = Register::Address<0xf8039584,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut98{
        using Addr = Register::Address<0xf8039588,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut99{
        using Addr = Register::Address<0xf803958c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut100{
        using Addr = Register::Address<0xf8039590,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut101{
        using Addr = Register::Address<0xf8039594,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut102{
        using Addr = Register::Address<0xf8039598,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut103{
        using Addr = Register::Address<0xf803959c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut104{
        using Addr = Register::Address<0xf80395a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut105{
        using Addr = Register::Address<0xf80395a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut106{
        using Addr = Register::Address<0xf80395a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut107{
        using Addr = Register::Address<0xf80395ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut108{
        using Addr = Register::Address<0xf80395b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut109{
        using Addr = Register::Address<0xf80395b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut110{
        using Addr = Register::Address<0xf80395b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut111{
        using Addr = Register::Address<0xf80395bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut112{
        using Addr = Register::Address<0xf80395c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut113{
        using Addr = Register::Address<0xf80395c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut114{
        using Addr = Register::Address<0xf80395c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut115{
        using Addr = Register::Address<0xf80395cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut116{
        using Addr = Register::Address<0xf80395d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut117{
        using Addr = Register::Address<0xf80395d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut118{
        using Addr = Register::Address<0xf80395d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut119{
        using Addr = Register::Address<0xf80395dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut120{
        using Addr = Register::Address<0xf80395e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut121{
        using Addr = Register::Address<0xf80395e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut122{
        using Addr = Register::Address<0xf80395e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut123{
        using Addr = Register::Address<0xf80395ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut124{
        using Addr = Register::Address<0xf80395f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut125{
        using Addr = Register::Address<0xf80395f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut126{
        using Addr = Register::Address<0xf80395f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut127{
        using Addr = Register::Address<0xf80395fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut128{
        using Addr = Register::Address<0xf8039600,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut129{
        using Addr = Register::Address<0xf8039604,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut130{
        using Addr = Register::Address<0xf8039608,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut131{
        using Addr = Register::Address<0xf803960c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut132{
        using Addr = Register::Address<0xf8039610,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut133{
        using Addr = Register::Address<0xf8039614,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut134{
        using Addr = Register::Address<0xf8039618,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut135{
        using Addr = Register::Address<0xf803961c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut136{
        using Addr = Register::Address<0xf8039620,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut137{
        using Addr = Register::Address<0xf8039624,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut138{
        using Addr = Register::Address<0xf8039628,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut139{
        using Addr = Register::Address<0xf803962c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut140{
        using Addr = Register::Address<0xf8039630,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut141{
        using Addr = Register::Address<0xf8039634,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut142{
        using Addr = Register::Address<0xf8039638,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut143{
        using Addr = Register::Address<0xf803963c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut144{
        using Addr = Register::Address<0xf8039640,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut145{
        using Addr = Register::Address<0xf8039644,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut146{
        using Addr = Register::Address<0xf8039648,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut147{
        using Addr = Register::Address<0xf803964c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut148{
        using Addr = Register::Address<0xf8039650,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut149{
        using Addr = Register::Address<0xf8039654,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut150{
        using Addr = Register::Address<0xf8039658,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut151{
        using Addr = Register::Address<0xf803965c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut152{
        using Addr = Register::Address<0xf8039660,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut153{
        using Addr = Register::Address<0xf8039664,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut154{
        using Addr = Register::Address<0xf8039668,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut155{
        using Addr = Register::Address<0xf803966c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut156{
        using Addr = Register::Address<0xf8039670,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut157{
        using Addr = Register::Address<0xf8039674,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut158{
        using Addr = Register::Address<0xf8039678,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut159{
        using Addr = Register::Address<0xf803967c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut160{
        using Addr = Register::Address<0xf8039680,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut161{
        using Addr = Register::Address<0xf8039684,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut162{
        using Addr = Register::Address<0xf8039688,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut163{
        using Addr = Register::Address<0xf803968c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut164{
        using Addr = Register::Address<0xf8039690,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut165{
        using Addr = Register::Address<0xf8039694,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut166{
        using Addr = Register::Address<0xf8039698,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut167{
        using Addr = Register::Address<0xf803969c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut168{
        using Addr = Register::Address<0xf80396a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut169{
        using Addr = Register::Address<0xf80396a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut170{
        using Addr = Register::Address<0xf80396a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut171{
        using Addr = Register::Address<0xf80396ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut172{
        using Addr = Register::Address<0xf80396b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut173{
        using Addr = Register::Address<0xf80396b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut174{
        using Addr = Register::Address<0xf80396b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut175{
        using Addr = Register::Address<0xf80396bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut176{
        using Addr = Register::Address<0xf80396c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut177{
        using Addr = Register::Address<0xf80396c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut178{
        using Addr = Register::Address<0xf80396c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut179{
        using Addr = Register::Address<0xf80396cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut180{
        using Addr = Register::Address<0xf80396d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut181{
        using Addr = Register::Address<0xf80396d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut182{
        using Addr = Register::Address<0xf80396d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut183{
        using Addr = Register::Address<0xf80396dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut184{
        using Addr = Register::Address<0xf80396e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut185{
        using Addr = Register::Address<0xf80396e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut186{
        using Addr = Register::Address<0xf80396e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut187{
        using Addr = Register::Address<0xf80396ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut188{
        using Addr = Register::Address<0xf80396f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut189{
        using Addr = Register::Address<0xf80396f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut190{
        using Addr = Register::Address<0xf80396f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut191{
        using Addr = Register::Address<0xf80396fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut192{
        using Addr = Register::Address<0xf8039700,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut193{
        using Addr = Register::Address<0xf8039704,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut194{
        using Addr = Register::Address<0xf8039708,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut195{
        using Addr = Register::Address<0xf803970c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut196{
        using Addr = Register::Address<0xf8039710,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut197{
        using Addr = Register::Address<0xf8039714,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut198{
        using Addr = Register::Address<0xf8039718,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut199{
        using Addr = Register::Address<0xf803971c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut200{
        using Addr = Register::Address<0xf8039720,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut201{
        using Addr = Register::Address<0xf8039724,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut202{
        using Addr = Register::Address<0xf8039728,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut203{
        using Addr = Register::Address<0xf803972c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut204{
        using Addr = Register::Address<0xf8039730,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut205{
        using Addr = Register::Address<0xf8039734,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut206{
        using Addr = Register::Address<0xf8039738,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut207{
        using Addr = Register::Address<0xf803973c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut208{
        using Addr = Register::Address<0xf8039740,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut209{
        using Addr = Register::Address<0xf8039744,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut210{
        using Addr = Register::Address<0xf8039748,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut211{
        using Addr = Register::Address<0xf803974c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut212{
        using Addr = Register::Address<0xf8039750,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut213{
        using Addr = Register::Address<0xf8039754,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut214{
        using Addr = Register::Address<0xf8039758,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut215{
        using Addr = Register::Address<0xf803975c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut216{
        using Addr = Register::Address<0xf8039760,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut217{
        using Addr = Register::Address<0xf8039764,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut218{
        using Addr = Register::Address<0xf8039768,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut219{
        using Addr = Register::Address<0xf803976c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut220{
        using Addr = Register::Address<0xf8039770,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut221{
        using Addr = Register::Address<0xf8039774,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut222{
        using Addr = Register::Address<0xf8039778,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut223{
        using Addr = Register::Address<0xf803977c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut224{
        using Addr = Register::Address<0xf8039780,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut225{
        using Addr = Register::Address<0xf8039784,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut226{
        using Addr = Register::Address<0xf8039788,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut227{
        using Addr = Register::Address<0xf803978c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut228{
        using Addr = Register::Address<0xf8039790,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut229{
        using Addr = Register::Address<0xf8039794,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut230{
        using Addr = Register::Address<0xf8039798,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut231{
        using Addr = Register::Address<0xf803979c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut232{
        using Addr = Register::Address<0xf80397a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut233{
        using Addr = Register::Address<0xf80397a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut234{
        using Addr = Register::Address<0xf80397a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut235{
        using Addr = Register::Address<0xf80397ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut236{
        using Addr = Register::Address<0xf80397b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut237{
        using Addr = Register::Address<0xf80397b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut238{
        using Addr = Register::Address<0xf80397b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut239{
        using Addr = Register::Address<0xf80397bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut240{
        using Addr = Register::Address<0xf80397c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut241{
        using Addr = Register::Address<0xf80397c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut242{
        using Addr = Register::Address<0xf80397c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut243{
        using Addr = Register::Address<0xf80397cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut244{
        using Addr = Register::Address<0xf80397d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut245{
        using Addr = Register::Address<0xf80397d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut246{
        using Addr = Register::Address<0xf80397d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut247{
        using Addr = Register::Address<0xf80397dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut248{
        using Addr = Register::Address<0xf80397e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut249{
        using Addr = Register::Address<0xf80397e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut250{
        using Addr = Register::Address<0xf80397e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut251{
        using Addr = Register::Address<0xf80397ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut252{
        using Addr = Register::Address<0xf80397f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut253{
        using Addr = Register::Address<0xf80397f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut254{
        using Addr = Register::Address<0xf80397f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
    }
    namespace LCDC_hcrclut255{
        using Addr = Register::Address<0xf80397fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RCLUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ACLUT; 
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
