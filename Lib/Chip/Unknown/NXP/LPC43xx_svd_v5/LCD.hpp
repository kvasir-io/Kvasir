#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetimh{
        using Addr = Register::Address<0x40008000,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> PPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> HSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HBP; 
    }
    namespace Nonetimv{
        using Addr = Register::Address<0x40008004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> LPP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10)> VSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> VFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> VBP; 
    }
    namespace Nonepol{
        using Addr = Register::Address<0x40008008,0x00008000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> PCD_LO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> ACB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> CPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> BCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,27)> PCD_HI; 
    }
    namespace Nonele{
        using Addr = Register::Address<0x4000800c,0xfffeff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> LED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LEE; 
    }
    namespace Noneupbase{
        using Addr = Register::Address<0x40008010,0x00000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3)> LCDUPBASE; 
    }
    namespace Nonelpbase{
        using Addr = Register::Address<0x40008014,0x00000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3)> LCDLPBASE; 
    }
    namespace Nonectrl{
        using Addr = Register::Address<0x40008018,0xfffec000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> LCDBPP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LCDBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LCDTFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LCDMONO8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LCDDUAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BGR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BEBO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BEPO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> LCDPWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> LCDVCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> WATERMARK; 
    }
    namespace Noneintmsk{
        using Addr = Register::Address<0x4000801c,0xffffffe1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FUFIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LNBUIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VCOMPIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BERIM; 
    }
    namespace Noneintraw{
        using Addr = Register::Address<0x40008020,0xffffffe1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FUFRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LNBURIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VCOMPRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BERRAW; 
    }
    namespace Noneintstat{
        using Addr = Register::Address<0x40008024,0xffffffe1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FUFMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LNBUMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VCOMPMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BERMIS; 
    }
    namespace Noneintclr{
        using Addr = Register::Address<0x40008028,0xffffffe1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FUFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LNBUIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VCOMPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BERIC; 
    }
    namespace Noneupcurr{
        using Addr = Register::Address<0x4000802c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> LCDUPCURR; 
    }
    namespace Nonelpcurr{
        using Addr = Register::Address<0x40008030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> LCDLPCURR; 
    }
    namespace Nonepal0{
        using Addr = Register::Address<0x40008200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal1{
        using Addr = Register::Address<0x40008204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal2{
        using Addr = Register::Address<0x40008208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal3{
        using Addr = Register::Address<0x4000820c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal4{
        using Addr = Register::Address<0x40008210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal5{
        using Addr = Register::Address<0x40008214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal6{
        using Addr = Register::Address<0x40008218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal7{
        using Addr = Register::Address<0x4000821c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal8{
        using Addr = Register::Address<0x40008220,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal9{
        using Addr = Register::Address<0x40008224,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal10{
        using Addr = Register::Address<0x40008228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal11{
        using Addr = Register::Address<0x4000822c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal12{
        using Addr = Register::Address<0x40008230,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal13{
        using Addr = Register::Address<0x40008234,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal14{
        using Addr = Register::Address<0x40008238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal15{
        using Addr = Register::Address<0x4000823c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal16{
        using Addr = Register::Address<0x40008240,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal17{
        using Addr = Register::Address<0x40008244,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal18{
        using Addr = Register::Address<0x40008248,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal19{
        using Addr = Register::Address<0x4000824c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal20{
        using Addr = Register::Address<0x40008250,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal21{
        using Addr = Register::Address<0x40008254,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal22{
        using Addr = Register::Address<0x40008258,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal23{
        using Addr = Register::Address<0x4000825c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal24{
        using Addr = Register::Address<0x40008260,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal25{
        using Addr = Register::Address<0x40008264,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal26{
        using Addr = Register::Address<0x40008268,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal27{
        using Addr = Register::Address<0x4000826c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal28{
        using Addr = Register::Address<0x40008270,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal29{
        using Addr = Register::Address<0x40008274,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal30{
        using Addr = Register::Address<0x40008278,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal31{
        using Addr = Register::Address<0x4000827c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal32{
        using Addr = Register::Address<0x40008280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal33{
        using Addr = Register::Address<0x40008284,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal34{
        using Addr = Register::Address<0x40008288,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal35{
        using Addr = Register::Address<0x4000828c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal36{
        using Addr = Register::Address<0x40008290,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal37{
        using Addr = Register::Address<0x40008294,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal38{
        using Addr = Register::Address<0x40008298,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal39{
        using Addr = Register::Address<0x4000829c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal40{
        using Addr = Register::Address<0x400082a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal41{
        using Addr = Register::Address<0x400082a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal42{
        using Addr = Register::Address<0x400082a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal43{
        using Addr = Register::Address<0x400082ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal44{
        using Addr = Register::Address<0x400082b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal45{
        using Addr = Register::Address<0x400082b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal46{
        using Addr = Register::Address<0x400082b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal47{
        using Addr = Register::Address<0x400082bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal48{
        using Addr = Register::Address<0x400082c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal49{
        using Addr = Register::Address<0x400082c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal50{
        using Addr = Register::Address<0x400082c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal51{
        using Addr = Register::Address<0x400082cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal52{
        using Addr = Register::Address<0x400082d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal53{
        using Addr = Register::Address<0x400082d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal54{
        using Addr = Register::Address<0x400082d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal55{
        using Addr = Register::Address<0x400082dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal56{
        using Addr = Register::Address<0x400082e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal57{
        using Addr = Register::Address<0x400082e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal58{
        using Addr = Register::Address<0x400082e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal59{
        using Addr = Register::Address<0x400082ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal60{
        using Addr = Register::Address<0x400082f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal61{
        using Addr = Register::Address<0x400082f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal62{
        using Addr = Register::Address<0x400082f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal63{
        using Addr = Register::Address<0x400082fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal64{
        using Addr = Register::Address<0x40008300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal65{
        using Addr = Register::Address<0x40008304,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal66{
        using Addr = Register::Address<0x40008308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal67{
        using Addr = Register::Address<0x4000830c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal68{
        using Addr = Register::Address<0x40008310,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal69{
        using Addr = Register::Address<0x40008314,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal70{
        using Addr = Register::Address<0x40008318,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal71{
        using Addr = Register::Address<0x4000831c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal72{
        using Addr = Register::Address<0x40008320,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal73{
        using Addr = Register::Address<0x40008324,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal74{
        using Addr = Register::Address<0x40008328,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal75{
        using Addr = Register::Address<0x4000832c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal76{
        using Addr = Register::Address<0x40008330,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal77{
        using Addr = Register::Address<0x40008334,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal78{
        using Addr = Register::Address<0x40008338,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal79{
        using Addr = Register::Address<0x4000833c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal80{
        using Addr = Register::Address<0x40008340,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal81{
        using Addr = Register::Address<0x40008344,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal82{
        using Addr = Register::Address<0x40008348,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal83{
        using Addr = Register::Address<0x4000834c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal84{
        using Addr = Register::Address<0x40008350,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal85{
        using Addr = Register::Address<0x40008354,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal86{
        using Addr = Register::Address<0x40008358,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal87{
        using Addr = Register::Address<0x4000835c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal88{
        using Addr = Register::Address<0x40008360,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal89{
        using Addr = Register::Address<0x40008364,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal90{
        using Addr = Register::Address<0x40008368,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal91{
        using Addr = Register::Address<0x4000836c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal92{
        using Addr = Register::Address<0x40008370,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal93{
        using Addr = Register::Address<0x40008374,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal94{
        using Addr = Register::Address<0x40008378,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal95{
        using Addr = Register::Address<0x4000837c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal96{
        using Addr = Register::Address<0x40008380,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal97{
        using Addr = Register::Address<0x40008384,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal98{
        using Addr = Register::Address<0x40008388,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal99{
        using Addr = Register::Address<0x4000838c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal100{
        using Addr = Register::Address<0x40008390,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal101{
        using Addr = Register::Address<0x40008394,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal102{
        using Addr = Register::Address<0x40008398,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal103{
        using Addr = Register::Address<0x4000839c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal104{
        using Addr = Register::Address<0x400083a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal105{
        using Addr = Register::Address<0x400083a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal106{
        using Addr = Register::Address<0x400083a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal107{
        using Addr = Register::Address<0x400083ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal108{
        using Addr = Register::Address<0x400083b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal109{
        using Addr = Register::Address<0x400083b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal110{
        using Addr = Register::Address<0x400083b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal111{
        using Addr = Register::Address<0x400083bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal112{
        using Addr = Register::Address<0x400083c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal113{
        using Addr = Register::Address<0x400083c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal114{
        using Addr = Register::Address<0x400083c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal115{
        using Addr = Register::Address<0x400083cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal116{
        using Addr = Register::Address<0x400083d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal117{
        using Addr = Register::Address<0x400083d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal118{
        using Addr = Register::Address<0x400083d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal119{
        using Addr = Register::Address<0x400083dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal120{
        using Addr = Register::Address<0x400083e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal121{
        using Addr = Register::Address<0x400083e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal122{
        using Addr = Register::Address<0x400083e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal123{
        using Addr = Register::Address<0x400083ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal124{
        using Addr = Register::Address<0x400083f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal125{
        using Addr = Register::Address<0x400083f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal126{
        using Addr = Register::Address<0x400083f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal127{
        using Addr = Register::Address<0x400083fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal128{
        using Addr = Register::Address<0x40008400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal129{
        using Addr = Register::Address<0x40008404,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal130{
        using Addr = Register::Address<0x40008408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal131{
        using Addr = Register::Address<0x4000840c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal132{
        using Addr = Register::Address<0x40008410,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal133{
        using Addr = Register::Address<0x40008414,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal134{
        using Addr = Register::Address<0x40008418,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal135{
        using Addr = Register::Address<0x4000841c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal136{
        using Addr = Register::Address<0x40008420,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal137{
        using Addr = Register::Address<0x40008424,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal138{
        using Addr = Register::Address<0x40008428,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal139{
        using Addr = Register::Address<0x4000842c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal140{
        using Addr = Register::Address<0x40008430,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal141{
        using Addr = Register::Address<0x40008434,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal142{
        using Addr = Register::Address<0x40008438,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal143{
        using Addr = Register::Address<0x4000843c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal144{
        using Addr = Register::Address<0x40008440,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal145{
        using Addr = Register::Address<0x40008444,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal146{
        using Addr = Register::Address<0x40008448,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal147{
        using Addr = Register::Address<0x4000844c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal148{
        using Addr = Register::Address<0x40008450,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal149{
        using Addr = Register::Address<0x40008454,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal150{
        using Addr = Register::Address<0x40008458,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal151{
        using Addr = Register::Address<0x4000845c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal152{
        using Addr = Register::Address<0x40008460,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal153{
        using Addr = Register::Address<0x40008464,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal154{
        using Addr = Register::Address<0x40008468,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal155{
        using Addr = Register::Address<0x4000846c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal156{
        using Addr = Register::Address<0x40008470,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal157{
        using Addr = Register::Address<0x40008474,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal158{
        using Addr = Register::Address<0x40008478,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal159{
        using Addr = Register::Address<0x4000847c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal160{
        using Addr = Register::Address<0x40008480,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal161{
        using Addr = Register::Address<0x40008484,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal162{
        using Addr = Register::Address<0x40008488,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal163{
        using Addr = Register::Address<0x4000848c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal164{
        using Addr = Register::Address<0x40008490,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal165{
        using Addr = Register::Address<0x40008494,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal166{
        using Addr = Register::Address<0x40008498,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal167{
        using Addr = Register::Address<0x4000849c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal168{
        using Addr = Register::Address<0x400084a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal169{
        using Addr = Register::Address<0x400084a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal170{
        using Addr = Register::Address<0x400084a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal171{
        using Addr = Register::Address<0x400084ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal172{
        using Addr = Register::Address<0x400084b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal173{
        using Addr = Register::Address<0x400084b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal174{
        using Addr = Register::Address<0x400084b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal175{
        using Addr = Register::Address<0x400084bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal176{
        using Addr = Register::Address<0x400084c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal177{
        using Addr = Register::Address<0x400084c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal178{
        using Addr = Register::Address<0x400084c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal179{
        using Addr = Register::Address<0x400084cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal180{
        using Addr = Register::Address<0x400084d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal181{
        using Addr = Register::Address<0x400084d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal182{
        using Addr = Register::Address<0x400084d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal183{
        using Addr = Register::Address<0x400084dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal184{
        using Addr = Register::Address<0x400084e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal185{
        using Addr = Register::Address<0x400084e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal186{
        using Addr = Register::Address<0x400084e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal187{
        using Addr = Register::Address<0x400084ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal188{
        using Addr = Register::Address<0x400084f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal189{
        using Addr = Register::Address<0x400084f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal190{
        using Addr = Register::Address<0x400084f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal191{
        using Addr = Register::Address<0x400084fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal192{
        using Addr = Register::Address<0x40008500,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal193{
        using Addr = Register::Address<0x40008504,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal194{
        using Addr = Register::Address<0x40008508,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal195{
        using Addr = Register::Address<0x4000850c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal196{
        using Addr = Register::Address<0x40008510,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal197{
        using Addr = Register::Address<0x40008514,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal198{
        using Addr = Register::Address<0x40008518,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal199{
        using Addr = Register::Address<0x4000851c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal200{
        using Addr = Register::Address<0x40008520,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal201{
        using Addr = Register::Address<0x40008524,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal202{
        using Addr = Register::Address<0x40008528,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal203{
        using Addr = Register::Address<0x4000852c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal204{
        using Addr = Register::Address<0x40008530,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal205{
        using Addr = Register::Address<0x40008534,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal206{
        using Addr = Register::Address<0x40008538,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal207{
        using Addr = Register::Address<0x4000853c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal208{
        using Addr = Register::Address<0x40008540,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal209{
        using Addr = Register::Address<0x40008544,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal210{
        using Addr = Register::Address<0x40008548,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal211{
        using Addr = Register::Address<0x4000854c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal212{
        using Addr = Register::Address<0x40008550,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal213{
        using Addr = Register::Address<0x40008554,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal214{
        using Addr = Register::Address<0x40008558,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal215{
        using Addr = Register::Address<0x4000855c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal216{
        using Addr = Register::Address<0x40008560,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal217{
        using Addr = Register::Address<0x40008564,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal218{
        using Addr = Register::Address<0x40008568,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal219{
        using Addr = Register::Address<0x4000856c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal220{
        using Addr = Register::Address<0x40008570,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal221{
        using Addr = Register::Address<0x40008574,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal222{
        using Addr = Register::Address<0x40008578,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal223{
        using Addr = Register::Address<0x4000857c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal224{
        using Addr = Register::Address<0x40008580,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal225{
        using Addr = Register::Address<0x40008584,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal226{
        using Addr = Register::Address<0x40008588,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal227{
        using Addr = Register::Address<0x4000858c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal228{
        using Addr = Register::Address<0x40008590,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal229{
        using Addr = Register::Address<0x40008594,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal230{
        using Addr = Register::Address<0x40008598,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal231{
        using Addr = Register::Address<0x4000859c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal232{
        using Addr = Register::Address<0x400085a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal233{
        using Addr = Register::Address<0x400085a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal234{
        using Addr = Register::Address<0x400085a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal235{
        using Addr = Register::Address<0x400085ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal236{
        using Addr = Register::Address<0x400085b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal237{
        using Addr = Register::Address<0x400085b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal238{
        using Addr = Register::Address<0x400085b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal239{
        using Addr = Register::Address<0x400085bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal240{
        using Addr = Register::Address<0x400085c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal241{
        using Addr = Register::Address<0x400085c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal242{
        using Addr = Register::Address<0x400085c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal243{
        using Addr = Register::Address<0x400085cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal244{
        using Addr = Register::Address<0x400085d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal245{
        using Addr = Register::Address<0x400085d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal246{
        using Addr = Register::Address<0x400085d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal247{
        using Addr = Register::Address<0x400085dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal248{
        using Addr = Register::Address<0x400085e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal249{
        using Addr = Register::Address<0x400085e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal250{
        using Addr = Register::Address<0x400085e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal251{
        using Addr = Register::Address<0x400085ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal252{
        using Addr = Register::Address<0x400085f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal253{
        using Addr = Register::Address<0x400085f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal254{
        using Addr = Register::Address<0x400085f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonepal255{
        using Addr = Register::Address<0x400085fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> R04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> G04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> B04_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> R14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> G14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> B14_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I1; 
    }
    namespace Nonecrsr_img0{
        using Addr = Register::Address<0x40008800,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img1{
        using Addr = Register::Address<0x40008804,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img2{
        using Addr = Register::Address<0x40008808,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img3{
        using Addr = Register::Address<0x4000880c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img4{
        using Addr = Register::Address<0x40008810,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img5{
        using Addr = Register::Address<0x40008814,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img6{
        using Addr = Register::Address<0x40008818,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img7{
        using Addr = Register::Address<0x4000881c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img8{
        using Addr = Register::Address<0x40008820,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img9{
        using Addr = Register::Address<0x40008824,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img10{
        using Addr = Register::Address<0x40008828,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img11{
        using Addr = Register::Address<0x4000882c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img12{
        using Addr = Register::Address<0x40008830,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img13{
        using Addr = Register::Address<0x40008834,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img14{
        using Addr = Register::Address<0x40008838,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img15{
        using Addr = Register::Address<0x4000883c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img16{
        using Addr = Register::Address<0x40008840,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img17{
        using Addr = Register::Address<0x40008844,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img18{
        using Addr = Register::Address<0x40008848,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img19{
        using Addr = Register::Address<0x4000884c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img20{
        using Addr = Register::Address<0x40008850,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img21{
        using Addr = Register::Address<0x40008854,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img22{
        using Addr = Register::Address<0x40008858,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img23{
        using Addr = Register::Address<0x4000885c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img24{
        using Addr = Register::Address<0x40008860,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img25{
        using Addr = Register::Address<0x40008864,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img26{
        using Addr = Register::Address<0x40008868,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img27{
        using Addr = Register::Address<0x4000886c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img28{
        using Addr = Register::Address<0x40008870,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img29{
        using Addr = Register::Address<0x40008874,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img30{
        using Addr = Register::Address<0x40008878,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img31{
        using Addr = Register::Address<0x4000887c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img32{
        using Addr = Register::Address<0x40008880,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img33{
        using Addr = Register::Address<0x40008884,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img34{
        using Addr = Register::Address<0x40008888,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img35{
        using Addr = Register::Address<0x4000888c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img36{
        using Addr = Register::Address<0x40008890,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img37{
        using Addr = Register::Address<0x40008894,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img38{
        using Addr = Register::Address<0x40008898,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img39{
        using Addr = Register::Address<0x4000889c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img40{
        using Addr = Register::Address<0x400088a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img41{
        using Addr = Register::Address<0x400088a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img42{
        using Addr = Register::Address<0x400088a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img43{
        using Addr = Register::Address<0x400088ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img44{
        using Addr = Register::Address<0x400088b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img45{
        using Addr = Register::Address<0x400088b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img46{
        using Addr = Register::Address<0x400088b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img47{
        using Addr = Register::Address<0x400088bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img48{
        using Addr = Register::Address<0x400088c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img49{
        using Addr = Register::Address<0x400088c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img50{
        using Addr = Register::Address<0x400088c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img51{
        using Addr = Register::Address<0x400088cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img52{
        using Addr = Register::Address<0x400088d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img53{
        using Addr = Register::Address<0x400088d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img54{
        using Addr = Register::Address<0x400088d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img55{
        using Addr = Register::Address<0x400088dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img56{
        using Addr = Register::Address<0x400088e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img57{
        using Addr = Register::Address<0x400088e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img58{
        using Addr = Register::Address<0x400088e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img59{
        using Addr = Register::Address<0x400088ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img60{
        using Addr = Register::Address<0x400088f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img61{
        using Addr = Register::Address<0x400088f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img62{
        using Addr = Register::Address<0x400088f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img63{
        using Addr = Register::Address<0x400088fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img64{
        using Addr = Register::Address<0x40008900,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img65{
        using Addr = Register::Address<0x40008904,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img66{
        using Addr = Register::Address<0x40008908,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img67{
        using Addr = Register::Address<0x4000890c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img68{
        using Addr = Register::Address<0x40008910,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img69{
        using Addr = Register::Address<0x40008914,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img70{
        using Addr = Register::Address<0x40008918,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img71{
        using Addr = Register::Address<0x4000891c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img72{
        using Addr = Register::Address<0x40008920,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img73{
        using Addr = Register::Address<0x40008924,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img74{
        using Addr = Register::Address<0x40008928,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img75{
        using Addr = Register::Address<0x4000892c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img76{
        using Addr = Register::Address<0x40008930,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img77{
        using Addr = Register::Address<0x40008934,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img78{
        using Addr = Register::Address<0x40008938,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img79{
        using Addr = Register::Address<0x4000893c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img80{
        using Addr = Register::Address<0x40008940,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img81{
        using Addr = Register::Address<0x40008944,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img82{
        using Addr = Register::Address<0x40008948,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img83{
        using Addr = Register::Address<0x4000894c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img84{
        using Addr = Register::Address<0x40008950,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img85{
        using Addr = Register::Address<0x40008954,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img86{
        using Addr = Register::Address<0x40008958,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img87{
        using Addr = Register::Address<0x4000895c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img88{
        using Addr = Register::Address<0x40008960,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img89{
        using Addr = Register::Address<0x40008964,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img90{
        using Addr = Register::Address<0x40008968,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img91{
        using Addr = Register::Address<0x4000896c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img92{
        using Addr = Register::Address<0x40008970,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img93{
        using Addr = Register::Address<0x40008974,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img94{
        using Addr = Register::Address<0x40008978,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img95{
        using Addr = Register::Address<0x4000897c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img96{
        using Addr = Register::Address<0x40008980,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img97{
        using Addr = Register::Address<0x40008984,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img98{
        using Addr = Register::Address<0x40008988,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img99{
        using Addr = Register::Address<0x4000898c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img100{
        using Addr = Register::Address<0x40008990,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img101{
        using Addr = Register::Address<0x40008994,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img102{
        using Addr = Register::Address<0x40008998,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img103{
        using Addr = Register::Address<0x4000899c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img104{
        using Addr = Register::Address<0x400089a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img105{
        using Addr = Register::Address<0x400089a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img106{
        using Addr = Register::Address<0x400089a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img107{
        using Addr = Register::Address<0x400089ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img108{
        using Addr = Register::Address<0x400089b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img109{
        using Addr = Register::Address<0x400089b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img110{
        using Addr = Register::Address<0x400089b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img111{
        using Addr = Register::Address<0x400089bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img112{
        using Addr = Register::Address<0x400089c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img113{
        using Addr = Register::Address<0x400089c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img114{
        using Addr = Register::Address<0x400089c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img115{
        using Addr = Register::Address<0x400089cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img116{
        using Addr = Register::Address<0x400089d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img117{
        using Addr = Register::Address<0x400089d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img118{
        using Addr = Register::Address<0x400089d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img119{
        using Addr = Register::Address<0x400089dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img120{
        using Addr = Register::Address<0x400089e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img121{
        using Addr = Register::Address<0x400089e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img122{
        using Addr = Register::Address<0x400089e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img123{
        using Addr = Register::Address<0x400089ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img124{
        using Addr = Register::Address<0x400089f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img125{
        using Addr = Register::Address<0x400089f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img126{
        using Addr = Register::Address<0x400089f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img127{
        using Addr = Register::Address<0x400089fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img128{
        using Addr = Register::Address<0x40008a00,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img129{
        using Addr = Register::Address<0x40008a04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img130{
        using Addr = Register::Address<0x40008a08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img131{
        using Addr = Register::Address<0x40008a0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img132{
        using Addr = Register::Address<0x40008a10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img133{
        using Addr = Register::Address<0x40008a14,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img134{
        using Addr = Register::Address<0x40008a18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img135{
        using Addr = Register::Address<0x40008a1c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img136{
        using Addr = Register::Address<0x40008a20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img137{
        using Addr = Register::Address<0x40008a24,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img138{
        using Addr = Register::Address<0x40008a28,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img139{
        using Addr = Register::Address<0x40008a2c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img140{
        using Addr = Register::Address<0x40008a30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img141{
        using Addr = Register::Address<0x40008a34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img142{
        using Addr = Register::Address<0x40008a38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img143{
        using Addr = Register::Address<0x40008a3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img144{
        using Addr = Register::Address<0x40008a40,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img145{
        using Addr = Register::Address<0x40008a44,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img146{
        using Addr = Register::Address<0x40008a48,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img147{
        using Addr = Register::Address<0x40008a4c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img148{
        using Addr = Register::Address<0x40008a50,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img149{
        using Addr = Register::Address<0x40008a54,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img150{
        using Addr = Register::Address<0x40008a58,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img151{
        using Addr = Register::Address<0x40008a5c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img152{
        using Addr = Register::Address<0x40008a60,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img153{
        using Addr = Register::Address<0x40008a64,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img154{
        using Addr = Register::Address<0x40008a68,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img155{
        using Addr = Register::Address<0x40008a6c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img156{
        using Addr = Register::Address<0x40008a70,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img157{
        using Addr = Register::Address<0x40008a74,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img158{
        using Addr = Register::Address<0x40008a78,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img159{
        using Addr = Register::Address<0x40008a7c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img160{
        using Addr = Register::Address<0x40008a80,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img161{
        using Addr = Register::Address<0x40008a84,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img162{
        using Addr = Register::Address<0x40008a88,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img163{
        using Addr = Register::Address<0x40008a8c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img164{
        using Addr = Register::Address<0x40008a90,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img165{
        using Addr = Register::Address<0x40008a94,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img166{
        using Addr = Register::Address<0x40008a98,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img167{
        using Addr = Register::Address<0x40008a9c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img168{
        using Addr = Register::Address<0x40008aa0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img169{
        using Addr = Register::Address<0x40008aa4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img170{
        using Addr = Register::Address<0x40008aa8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img171{
        using Addr = Register::Address<0x40008aac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img172{
        using Addr = Register::Address<0x40008ab0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img173{
        using Addr = Register::Address<0x40008ab4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img174{
        using Addr = Register::Address<0x40008ab8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img175{
        using Addr = Register::Address<0x40008abc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img176{
        using Addr = Register::Address<0x40008ac0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img177{
        using Addr = Register::Address<0x40008ac4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img178{
        using Addr = Register::Address<0x40008ac8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img179{
        using Addr = Register::Address<0x40008acc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img180{
        using Addr = Register::Address<0x40008ad0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img181{
        using Addr = Register::Address<0x40008ad4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img182{
        using Addr = Register::Address<0x40008ad8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img183{
        using Addr = Register::Address<0x40008adc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img184{
        using Addr = Register::Address<0x40008ae0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img185{
        using Addr = Register::Address<0x40008ae4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img186{
        using Addr = Register::Address<0x40008ae8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img187{
        using Addr = Register::Address<0x40008aec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img188{
        using Addr = Register::Address<0x40008af0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img189{
        using Addr = Register::Address<0x40008af4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img190{
        using Addr = Register::Address<0x40008af8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img191{
        using Addr = Register::Address<0x40008afc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img192{
        using Addr = Register::Address<0x40008b00,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img193{
        using Addr = Register::Address<0x40008b04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img194{
        using Addr = Register::Address<0x40008b08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img195{
        using Addr = Register::Address<0x40008b0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img196{
        using Addr = Register::Address<0x40008b10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img197{
        using Addr = Register::Address<0x40008b14,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img198{
        using Addr = Register::Address<0x40008b18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img199{
        using Addr = Register::Address<0x40008b1c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img200{
        using Addr = Register::Address<0x40008b20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img201{
        using Addr = Register::Address<0x40008b24,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img202{
        using Addr = Register::Address<0x40008b28,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img203{
        using Addr = Register::Address<0x40008b2c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img204{
        using Addr = Register::Address<0x40008b30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img205{
        using Addr = Register::Address<0x40008b34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img206{
        using Addr = Register::Address<0x40008b38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img207{
        using Addr = Register::Address<0x40008b3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img208{
        using Addr = Register::Address<0x40008b40,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img209{
        using Addr = Register::Address<0x40008b44,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img210{
        using Addr = Register::Address<0x40008b48,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img211{
        using Addr = Register::Address<0x40008b4c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img212{
        using Addr = Register::Address<0x40008b50,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img213{
        using Addr = Register::Address<0x40008b54,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img214{
        using Addr = Register::Address<0x40008b58,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img215{
        using Addr = Register::Address<0x40008b5c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img216{
        using Addr = Register::Address<0x40008b60,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img217{
        using Addr = Register::Address<0x40008b64,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img218{
        using Addr = Register::Address<0x40008b68,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img219{
        using Addr = Register::Address<0x40008b6c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img220{
        using Addr = Register::Address<0x40008b70,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img221{
        using Addr = Register::Address<0x40008b74,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img222{
        using Addr = Register::Address<0x40008b78,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img223{
        using Addr = Register::Address<0x40008b7c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img224{
        using Addr = Register::Address<0x40008b80,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img225{
        using Addr = Register::Address<0x40008b84,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img226{
        using Addr = Register::Address<0x40008b88,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img227{
        using Addr = Register::Address<0x40008b8c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img228{
        using Addr = Register::Address<0x40008b90,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img229{
        using Addr = Register::Address<0x40008b94,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img230{
        using Addr = Register::Address<0x40008b98,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img231{
        using Addr = Register::Address<0x40008b9c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img232{
        using Addr = Register::Address<0x40008ba0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img233{
        using Addr = Register::Address<0x40008ba4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img234{
        using Addr = Register::Address<0x40008ba8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img235{
        using Addr = Register::Address<0x40008bac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img236{
        using Addr = Register::Address<0x40008bb0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img237{
        using Addr = Register::Address<0x40008bb4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img238{
        using Addr = Register::Address<0x40008bb8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img239{
        using Addr = Register::Address<0x40008bbc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img240{
        using Addr = Register::Address<0x40008bc0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img241{
        using Addr = Register::Address<0x40008bc4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img242{
        using Addr = Register::Address<0x40008bc8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img243{
        using Addr = Register::Address<0x40008bcc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img244{
        using Addr = Register::Address<0x40008bd0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img245{
        using Addr = Register::Address<0x40008bd4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img246{
        using Addr = Register::Address<0x40008bd8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img247{
        using Addr = Register::Address<0x40008bdc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img248{
        using Addr = Register::Address<0x40008be0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img249{
        using Addr = Register::Address<0x40008be4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img250{
        using Addr = Register::Address<0x40008be8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img251{
        using Addr = Register::Address<0x40008bec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img252{
        using Addr = Register::Address<0x40008bf0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img253{
        using Addr = Register::Address<0x40008bf4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img254{
        using Addr = Register::Address<0x40008bf8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img255{
        using Addr = Register::Address<0x40008bfc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_ctrl{
        using Addr = Register::Address<0x40008c00,0xffffffce>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CrsrOn; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> CRSRNUM1_0; 
    }
    namespace Nonecrsr_cfg{
        using Addr = Register::Address<0x40008c04,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CrsrSize; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FRAMESYNC; 
    }
    namespace Nonecrsr_pal0{
        using Addr = Register::Address<0x40008c08,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> BLUE; 
    }
    namespace Nonecrsr_pal1{
        using Addr = Register::Address<0x40008c0c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> BLUE; 
    }
    namespace Nonecrsr_xy{
        using Addr = Register::Address<0x40008c10,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CRSRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> CRSRY; 
    }
    namespace Nonecrsr_clip{
        using Addr = Register::Address<0x40008c14,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CRSRCLIPX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> CRSRCLIPY; 
    }
    namespace Nonecrsr_intmsk{
        using Addr = Register::Address<0x40008c20,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRSRIM; 
    }
    namespace Nonecrsr_intclr{
        using Addr = Register::Address<0x40008c24,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRSRIC; 
    }
    namespace Nonecrsr_intraw{
        using Addr = Register::Address<0x40008c28,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRSRRIS; 
    }
    namespace Nonecrsr_intstat{
        using Addr = Register::Address<0x40008c2c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRSRMIS; 
    }
}
