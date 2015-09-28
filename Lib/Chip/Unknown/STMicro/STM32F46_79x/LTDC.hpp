#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesscr{
        using Addr = Register::Address<0x40016808,0xfc00f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> HSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> VSH; 
    }
    namespace Nonebpcr{
        using Addr = Register::Address<0x4001680c,0xfc00f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> AHBP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> AVBP; 
    }
    namespace Noneawcr{
        using Addr = Register::Address<0x40016810,0xfc00f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> AAV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> AAH; 
    }
    namespace Nonetwcr{
        using Addr = Register::Address<0x40016814,0xfc00f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> TOTALW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> TOTALH; 
    }
    namespace Nonegcr{
        using Addr = Register::Address<0x40016818,0x0ffe888e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> HSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> VSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DEPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PCPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> DRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DGW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> DBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LTDCEN; 
    }
    namespace Nonesrcr{
        using Addr = Register::Address<0x40016824,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IMR; 
    }
    namespace Nonebccr{
        using Addr = Register::Address<0x4001682c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> BC; 
    }
    namespace Noneier{
        using Addr = Register::Address<0x40016834,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FUIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LIE; 
    }
    namespace Noneisr{
        using Addr = Register::Address<0x40016838,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RRIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TERRIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FUIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LIF; 
    }
    namespace Noneicr{
        using Addr = Register::Address<0x4001683c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CRRIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTERRIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CFUIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLIF; 
    }
    namespace Nonelipcr{
        using Addr = Register::Address<0x40016840,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> LIPOS; 
    }
    namespace Nonecpsr{
        using Addr = Register::Address<0x40016844,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CXPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CYPOS; 
    }
    namespace Nonecdsr{
        using Addr = Register::Address<0x40016848,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HSYNCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VSYNCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VDES; 
    }
    namespace Nonel1cr{
        using Addr = Register::Address<0x40016884,0xffffffec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LEN; 
    }
    namespace Nonel1whpcr{
        using Addr = Register::Address<0x40016888,0xf000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> WHSPPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> WHSTPOS; 
    }
    namespace Nonel1wvpcr{
        using Addr = Register::Address<0x4001688c,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> WVSPPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> WVSTPOS; 
    }
    namespace Nonel1ckcr{
        using Addr = Register::Address<0x40016890,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CKRED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CKGREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CKBLUE; 
    }
    namespace Nonel1pfcr{
        using Addr = Register::Address<0x40016894,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PF; 
    }
    namespace Nonel1cacr{
        using Addr = Register::Address<0x40016898,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CONSTA; 
    }
    namespace Nonel1dccr{
        using Addr = Register::Address<0x4001689c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DCALPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DCRED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DCGREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DCBLUE; 
    }
    namespace Nonel1bfcr{
        using Addr = Register::Address<0x400168a0,0xfffff8f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> BF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BF2; 
    }
    namespace Nonel1cfbar{
        using Addr = Register::Address<0x400168ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CFBADD; 
    }
    namespace Nonel1cfblr{
        using Addr = Register::Address<0x400168b0,0xe000e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,16)> CFBP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> CFBLL; 
    }
    namespace Nonel1cfblnr{
        using Addr = Register::Address<0x400168b4,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> CFBLNBR; 
    }
    namespace Nonel1clutwr{
        using Addr = Register::Address<0x400168c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> CLUTADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BLUE; 
    }
    namespace Nonel2cr{
        using Addr = Register::Address<0x40016904,0xffffffec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LEN; 
    }
    namespace Nonel2whpcr{
        using Addr = Register::Address<0x40016908,0xf000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> WHSPPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> WHSTPOS; 
    }
    namespace Nonel2wvpcr{
        using Addr = Register::Address<0x4001690c,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> WVSPPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> WVSTPOS; 
    }
    namespace Nonel2ckcr{
        using Addr = Register::Address<0x40016910,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,15)> CKRED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> CKGREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CKBLUE; 
    }
    namespace Nonel2pfcr{
        using Addr = Register::Address<0x40016914,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PF; 
    }
    namespace Nonel2cacr{
        using Addr = Register::Address<0x40016918,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CONSTA; 
    }
    namespace Nonel2dccr{
        using Addr = Register::Address<0x4001691c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DCALPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DCRED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DCGREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DCBLUE; 
    }
    namespace Nonel2bfcr{
        using Addr = Register::Address<0x40016920,0xfffff8f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> BF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BF2; 
    }
    namespace Nonel2cfbar{
        using Addr = Register::Address<0x4001692c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CFBADD; 
    }
    namespace Nonel2cfblr{
        using Addr = Register::Address<0x40016930,0xe000e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,16)> CFBP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> CFBLL; 
    }
    namespace Nonel2cfblnr{
        using Addr = Register::Address<0x40016934,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> CFBLNBR; 
    }
    namespace Nonel2clutwr{
        using Addr = Register::Address<0x40016944,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> CLUTADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BLUE; 
    }
}
