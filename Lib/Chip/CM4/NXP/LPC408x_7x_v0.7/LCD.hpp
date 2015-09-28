#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetimh{
        using Addr = Register::Address<0x20088000,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> PPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> HSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HBP; 
    }
    namespace Nonetimv{
        using Addr = Register::Address<0x20088004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> LPP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10)> VSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> VFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> VBP; 
    }
    namespace Nonepol{
        using Addr = Register::Address<0x20088008,0x00008000>;
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
        using Addr = Register::Address<0x2008800c,0xfffeff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> LED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LEE; 
    }
    namespace Noneupbase{
        using Addr = Register::Address<0x20088010,0x00000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3)> LCDUPBASE; 
    }
    namespace Nonelpbase{
        using Addr = Register::Address<0x20088014,0x00000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3)> LCDLPBASE; 
    }
    namespace Nonectrl{
        using Addr = Register::Address<0x20088018,0xfffec000>;
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
        using Addr = Register::Address<0x2008801c,0xffffffe1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FUFIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LNBUIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VCOMPIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BERIM; 
    }
    namespace Noneintraw{
        using Addr = Register::Address<0x20088020,0xffffffe1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FUFRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LNBURIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VCOMPRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BERRAW; 
    }
    namespace Noneintstat{
        using Addr = Register::Address<0x20088024,0xffffffe1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FUFMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LNBUMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VCOMPMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BERMIS; 
    }
    namespace Noneintclr{
        using Addr = Register::Address<0x20088028,0xffffffe1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FUFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LNBUIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VCOMPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BERIC; 
    }
    namespace Noneupcurr{
        using Addr = Register::Address<0x2008802c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> LCDUPCURR; 
    }
    namespace Nonelpcurr{
        using Addr = Register::Address<0x20088030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> LCDLPCURR; 
    }
    namespace Nonepal0{
        using Addr = Register::Address<0x20088200,0x00000000>;
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
        using Addr = Register::Address<0x20088204,0x00000000>;
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
        using Addr = Register::Address<0x20088208,0x00000000>;
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
        using Addr = Register::Address<0x2008820c,0x00000000>;
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
        using Addr = Register::Address<0x20088210,0x00000000>;
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
        using Addr = Register::Address<0x20088214,0x00000000>;
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
        using Addr = Register::Address<0x20088218,0x00000000>;
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
        using Addr = Register::Address<0x2008821c,0x00000000>;
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
        using Addr = Register::Address<0x20088220,0x00000000>;
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
        using Addr = Register::Address<0x20088224,0x00000000>;
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
        using Addr = Register::Address<0x20088228,0x00000000>;
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
        using Addr = Register::Address<0x2008822c,0x00000000>;
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
        using Addr = Register::Address<0x20088230,0x00000000>;
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
        using Addr = Register::Address<0x20088234,0x00000000>;
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
        using Addr = Register::Address<0x20088238,0x00000000>;
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
        using Addr = Register::Address<0x2008823c,0x00000000>;
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
        using Addr = Register::Address<0x20088240,0x00000000>;
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
        using Addr = Register::Address<0x20088244,0x00000000>;
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
        using Addr = Register::Address<0x20088248,0x00000000>;
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
        using Addr = Register::Address<0x2008824c,0x00000000>;
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
        using Addr = Register::Address<0x20088250,0x00000000>;
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
        using Addr = Register::Address<0x20088254,0x00000000>;
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
        using Addr = Register::Address<0x20088258,0x00000000>;
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
        using Addr = Register::Address<0x2008825c,0x00000000>;
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
        using Addr = Register::Address<0x20088260,0x00000000>;
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
        using Addr = Register::Address<0x20088264,0x00000000>;
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
        using Addr = Register::Address<0x20088268,0x00000000>;
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
        using Addr = Register::Address<0x2008826c,0x00000000>;
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
        using Addr = Register::Address<0x20088270,0x00000000>;
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
        using Addr = Register::Address<0x20088274,0x00000000>;
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
        using Addr = Register::Address<0x20088278,0x00000000>;
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
        using Addr = Register::Address<0x2008827c,0x00000000>;
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
        using Addr = Register::Address<0x20088280,0x00000000>;
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
        using Addr = Register::Address<0x20088284,0x00000000>;
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
        using Addr = Register::Address<0x20088288,0x00000000>;
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
        using Addr = Register::Address<0x2008828c,0x00000000>;
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
        using Addr = Register::Address<0x20088290,0x00000000>;
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
        using Addr = Register::Address<0x20088294,0x00000000>;
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
        using Addr = Register::Address<0x20088298,0x00000000>;
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
        using Addr = Register::Address<0x2008829c,0x00000000>;
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
        using Addr = Register::Address<0x200882a0,0x00000000>;
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
        using Addr = Register::Address<0x200882a4,0x00000000>;
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
        using Addr = Register::Address<0x200882a8,0x00000000>;
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
        using Addr = Register::Address<0x200882ac,0x00000000>;
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
        using Addr = Register::Address<0x200882b0,0x00000000>;
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
        using Addr = Register::Address<0x200882b4,0x00000000>;
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
        using Addr = Register::Address<0x200882b8,0x00000000>;
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
        using Addr = Register::Address<0x200882bc,0x00000000>;
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
        using Addr = Register::Address<0x200882c0,0x00000000>;
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
        using Addr = Register::Address<0x200882c4,0x00000000>;
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
        using Addr = Register::Address<0x200882c8,0x00000000>;
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
        using Addr = Register::Address<0x200882cc,0x00000000>;
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
        using Addr = Register::Address<0x200882d0,0x00000000>;
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
        using Addr = Register::Address<0x200882d4,0x00000000>;
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
        using Addr = Register::Address<0x200882d8,0x00000000>;
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
        using Addr = Register::Address<0x200882dc,0x00000000>;
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
        using Addr = Register::Address<0x200882e0,0x00000000>;
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
        using Addr = Register::Address<0x200882e4,0x00000000>;
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
        using Addr = Register::Address<0x200882e8,0x00000000>;
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
        using Addr = Register::Address<0x200882ec,0x00000000>;
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
        using Addr = Register::Address<0x200882f0,0x00000000>;
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
        using Addr = Register::Address<0x200882f4,0x00000000>;
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
        using Addr = Register::Address<0x200882f8,0x00000000>;
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
        using Addr = Register::Address<0x200882fc,0x00000000>;
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
        using Addr = Register::Address<0x20088300,0x00000000>;
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
        using Addr = Register::Address<0x20088304,0x00000000>;
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
        using Addr = Register::Address<0x20088308,0x00000000>;
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
        using Addr = Register::Address<0x2008830c,0x00000000>;
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
        using Addr = Register::Address<0x20088310,0x00000000>;
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
        using Addr = Register::Address<0x20088314,0x00000000>;
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
        using Addr = Register::Address<0x20088318,0x00000000>;
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
        using Addr = Register::Address<0x2008831c,0x00000000>;
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
        using Addr = Register::Address<0x20088320,0x00000000>;
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
        using Addr = Register::Address<0x20088324,0x00000000>;
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
        using Addr = Register::Address<0x20088328,0x00000000>;
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
        using Addr = Register::Address<0x2008832c,0x00000000>;
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
        using Addr = Register::Address<0x20088330,0x00000000>;
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
        using Addr = Register::Address<0x20088334,0x00000000>;
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
        using Addr = Register::Address<0x20088338,0x00000000>;
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
        using Addr = Register::Address<0x2008833c,0x00000000>;
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
        using Addr = Register::Address<0x20088340,0x00000000>;
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
        using Addr = Register::Address<0x20088344,0x00000000>;
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
        using Addr = Register::Address<0x20088348,0x00000000>;
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
        using Addr = Register::Address<0x2008834c,0x00000000>;
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
        using Addr = Register::Address<0x20088350,0x00000000>;
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
        using Addr = Register::Address<0x20088354,0x00000000>;
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
        using Addr = Register::Address<0x20088358,0x00000000>;
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
        using Addr = Register::Address<0x2008835c,0x00000000>;
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
        using Addr = Register::Address<0x20088360,0x00000000>;
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
        using Addr = Register::Address<0x20088364,0x00000000>;
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
        using Addr = Register::Address<0x20088368,0x00000000>;
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
        using Addr = Register::Address<0x2008836c,0x00000000>;
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
        using Addr = Register::Address<0x20088370,0x00000000>;
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
        using Addr = Register::Address<0x20088374,0x00000000>;
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
        using Addr = Register::Address<0x20088378,0x00000000>;
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
        using Addr = Register::Address<0x2008837c,0x00000000>;
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
        using Addr = Register::Address<0x20088380,0x00000000>;
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
        using Addr = Register::Address<0x20088384,0x00000000>;
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
        using Addr = Register::Address<0x20088388,0x00000000>;
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
        using Addr = Register::Address<0x2008838c,0x00000000>;
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
        using Addr = Register::Address<0x20088390,0x00000000>;
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
        using Addr = Register::Address<0x20088394,0x00000000>;
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
        using Addr = Register::Address<0x20088398,0x00000000>;
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
        using Addr = Register::Address<0x2008839c,0x00000000>;
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
        using Addr = Register::Address<0x200883a0,0x00000000>;
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
        using Addr = Register::Address<0x200883a4,0x00000000>;
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
        using Addr = Register::Address<0x200883a8,0x00000000>;
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
        using Addr = Register::Address<0x200883ac,0x00000000>;
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
        using Addr = Register::Address<0x200883b0,0x00000000>;
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
        using Addr = Register::Address<0x200883b4,0x00000000>;
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
        using Addr = Register::Address<0x200883b8,0x00000000>;
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
        using Addr = Register::Address<0x200883bc,0x00000000>;
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
        using Addr = Register::Address<0x200883c0,0x00000000>;
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
        using Addr = Register::Address<0x200883c4,0x00000000>;
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
        using Addr = Register::Address<0x200883c8,0x00000000>;
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
        using Addr = Register::Address<0x200883cc,0x00000000>;
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
        using Addr = Register::Address<0x200883d0,0x00000000>;
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
        using Addr = Register::Address<0x200883d4,0x00000000>;
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
        using Addr = Register::Address<0x200883d8,0x00000000>;
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
        using Addr = Register::Address<0x200883dc,0x00000000>;
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
        using Addr = Register::Address<0x200883e0,0x00000000>;
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
        using Addr = Register::Address<0x200883e4,0x00000000>;
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
        using Addr = Register::Address<0x200883e8,0x00000000>;
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
        using Addr = Register::Address<0x200883ec,0x00000000>;
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
        using Addr = Register::Address<0x200883f0,0x00000000>;
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
        using Addr = Register::Address<0x200883f4,0x00000000>;
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
        using Addr = Register::Address<0x200883f8,0x00000000>;
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
        using Addr = Register::Address<0x200883fc,0x00000000>;
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
        using Addr = Register::Address<0x20088800,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img1{
        using Addr = Register::Address<0x20088804,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img2{
        using Addr = Register::Address<0x20088808,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img3{
        using Addr = Register::Address<0x2008880c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img4{
        using Addr = Register::Address<0x20088810,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img5{
        using Addr = Register::Address<0x20088814,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img6{
        using Addr = Register::Address<0x20088818,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img7{
        using Addr = Register::Address<0x2008881c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img8{
        using Addr = Register::Address<0x20088820,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img9{
        using Addr = Register::Address<0x20088824,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img10{
        using Addr = Register::Address<0x20088828,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img11{
        using Addr = Register::Address<0x2008882c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img12{
        using Addr = Register::Address<0x20088830,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img13{
        using Addr = Register::Address<0x20088834,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img14{
        using Addr = Register::Address<0x20088838,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img15{
        using Addr = Register::Address<0x2008883c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img16{
        using Addr = Register::Address<0x20088840,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img17{
        using Addr = Register::Address<0x20088844,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img18{
        using Addr = Register::Address<0x20088848,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img19{
        using Addr = Register::Address<0x2008884c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img20{
        using Addr = Register::Address<0x20088850,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img21{
        using Addr = Register::Address<0x20088854,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img22{
        using Addr = Register::Address<0x20088858,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img23{
        using Addr = Register::Address<0x2008885c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img24{
        using Addr = Register::Address<0x20088860,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img25{
        using Addr = Register::Address<0x20088864,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img26{
        using Addr = Register::Address<0x20088868,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img27{
        using Addr = Register::Address<0x2008886c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img28{
        using Addr = Register::Address<0x20088870,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img29{
        using Addr = Register::Address<0x20088874,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img30{
        using Addr = Register::Address<0x20088878,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img31{
        using Addr = Register::Address<0x2008887c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img32{
        using Addr = Register::Address<0x20088880,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img33{
        using Addr = Register::Address<0x20088884,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img34{
        using Addr = Register::Address<0x20088888,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img35{
        using Addr = Register::Address<0x2008888c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img36{
        using Addr = Register::Address<0x20088890,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img37{
        using Addr = Register::Address<0x20088894,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img38{
        using Addr = Register::Address<0x20088898,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img39{
        using Addr = Register::Address<0x2008889c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img40{
        using Addr = Register::Address<0x200888a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img41{
        using Addr = Register::Address<0x200888a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img42{
        using Addr = Register::Address<0x200888a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img43{
        using Addr = Register::Address<0x200888ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img44{
        using Addr = Register::Address<0x200888b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img45{
        using Addr = Register::Address<0x200888b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img46{
        using Addr = Register::Address<0x200888b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img47{
        using Addr = Register::Address<0x200888bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img48{
        using Addr = Register::Address<0x200888c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img49{
        using Addr = Register::Address<0x200888c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img50{
        using Addr = Register::Address<0x200888c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img51{
        using Addr = Register::Address<0x200888cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img52{
        using Addr = Register::Address<0x200888d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img53{
        using Addr = Register::Address<0x200888d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img54{
        using Addr = Register::Address<0x200888d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img55{
        using Addr = Register::Address<0x200888dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img56{
        using Addr = Register::Address<0x200888e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img57{
        using Addr = Register::Address<0x200888e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img58{
        using Addr = Register::Address<0x200888e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img59{
        using Addr = Register::Address<0x200888ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img60{
        using Addr = Register::Address<0x200888f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img61{
        using Addr = Register::Address<0x200888f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img62{
        using Addr = Register::Address<0x200888f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img63{
        using Addr = Register::Address<0x200888fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img64{
        using Addr = Register::Address<0x20088900,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img65{
        using Addr = Register::Address<0x20088904,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img66{
        using Addr = Register::Address<0x20088908,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img67{
        using Addr = Register::Address<0x2008890c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img68{
        using Addr = Register::Address<0x20088910,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img69{
        using Addr = Register::Address<0x20088914,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img70{
        using Addr = Register::Address<0x20088918,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img71{
        using Addr = Register::Address<0x2008891c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img72{
        using Addr = Register::Address<0x20088920,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img73{
        using Addr = Register::Address<0x20088924,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img74{
        using Addr = Register::Address<0x20088928,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img75{
        using Addr = Register::Address<0x2008892c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img76{
        using Addr = Register::Address<0x20088930,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img77{
        using Addr = Register::Address<0x20088934,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img78{
        using Addr = Register::Address<0x20088938,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img79{
        using Addr = Register::Address<0x2008893c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img80{
        using Addr = Register::Address<0x20088940,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img81{
        using Addr = Register::Address<0x20088944,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img82{
        using Addr = Register::Address<0x20088948,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img83{
        using Addr = Register::Address<0x2008894c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img84{
        using Addr = Register::Address<0x20088950,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img85{
        using Addr = Register::Address<0x20088954,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img86{
        using Addr = Register::Address<0x20088958,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img87{
        using Addr = Register::Address<0x2008895c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img88{
        using Addr = Register::Address<0x20088960,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img89{
        using Addr = Register::Address<0x20088964,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img90{
        using Addr = Register::Address<0x20088968,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img91{
        using Addr = Register::Address<0x2008896c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img92{
        using Addr = Register::Address<0x20088970,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img93{
        using Addr = Register::Address<0x20088974,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img94{
        using Addr = Register::Address<0x20088978,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img95{
        using Addr = Register::Address<0x2008897c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img96{
        using Addr = Register::Address<0x20088980,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img97{
        using Addr = Register::Address<0x20088984,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img98{
        using Addr = Register::Address<0x20088988,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img99{
        using Addr = Register::Address<0x2008898c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img100{
        using Addr = Register::Address<0x20088990,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img101{
        using Addr = Register::Address<0x20088994,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img102{
        using Addr = Register::Address<0x20088998,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img103{
        using Addr = Register::Address<0x2008899c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img104{
        using Addr = Register::Address<0x200889a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img105{
        using Addr = Register::Address<0x200889a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img106{
        using Addr = Register::Address<0x200889a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img107{
        using Addr = Register::Address<0x200889ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img108{
        using Addr = Register::Address<0x200889b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img109{
        using Addr = Register::Address<0x200889b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img110{
        using Addr = Register::Address<0x200889b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img111{
        using Addr = Register::Address<0x200889bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img112{
        using Addr = Register::Address<0x200889c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img113{
        using Addr = Register::Address<0x200889c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img114{
        using Addr = Register::Address<0x200889c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img115{
        using Addr = Register::Address<0x200889cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img116{
        using Addr = Register::Address<0x200889d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img117{
        using Addr = Register::Address<0x200889d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img118{
        using Addr = Register::Address<0x200889d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img119{
        using Addr = Register::Address<0x200889dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img120{
        using Addr = Register::Address<0x200889e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img121{
        using Addr = Register::Address<0x200889e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img122{
        using Addr = Register::Address<0x200889e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img123{
        using Addr = Register::Address<0x200889ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img124{
        using Addr = Register::Address<0x200889f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img125{
        using Addr = Register::Address<0x200889f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img126{
        using Addr = Register::Address<0x200889f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img127{
        using Addr = Register::Address<0x200889fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img128{
        using Addr = Register::Address<0x20088a00,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img129{
        using Addr = Register::Address<0x20088a04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img130{
        using Addr = Register::Address<0x20088a08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img131{
        using Addr = Register::Address<0x20088a0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img132{
        using Addr = Register::Address<0x20088a10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img133{
        using Addr = Register::Address<0x20088a14,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img134{
        using Addr = Register::Address<0x20088a18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img135{
        using Addr = Register::Address<0x20088a1c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img136{
        using Addr = Register::Address<0x20088a20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img137{
        using Addr = Register::Address<0x20088a24,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img138{
        using Addr = Register::Address<0x20088a28,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img139{
        using Addr = Register::Address<0x20088a2c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img140{
        using Addr = Register::Address<0x20088a30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img141{
        using Addr = Register::Address<0x20088a34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img142{
        using Addr = Register::Address<0x20088a38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img143{
        using Addr = Register::Address<0x20088a3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img144{
        using Addr = Register::Address<0x20088a40,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img145{
        using Addr = Register::Address<0x20088a44,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img146{
        using Addr = Register::Address<0x20088a48,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img147{
        using Addr = Register::Address<0x20088a4c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img148{
        using Addr = Register::Address<0x20088a50,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img149{
        using Addr = Register::Address<0x20088a54,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img150{
        using Addr = Register::Address<0x20088a58,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img151{
        using Addr = Register::Address<0x20088a5c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img152{
        using Addr = Register::Address<0x20088a60,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img153{
        using Addr = Register::Address<0x20088a64,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img154{
        using Addr = Register::Address<0x20088a68,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img155{
        using Addr = Register::Address<0x20088a6c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img156{
        using Addr = Register::Address<0x20088a70,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img157{
        using Addr = Register::Address<0x20088a74,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img158{
        using Addr = Register::Address<0x20088a78,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img159{
        using Addr = Register::Address<0x20088a7c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img160{
        using Addr = Register::Address<0x20088a80,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img161{
        using Addr = Register::Address<0x20088a84,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img162{
        using Addr = Register::Address<0x20088a88,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img163{
        using Addr = Register::Address<0x20088a8c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img164{
        using Addr = Register::Address<0x20088a90,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img165{
        using Addr = Register::Address<0x20088a94,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img166{
        using Addr = Register::Address<0x20088a98,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img167{
        using Addr = Register::Address<0x20088a9c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img168{
        using Addr = Register::Address<0x20088aa0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img169{
        using Addr = Register::Address<0x20088aa4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img170{
        using Addr = Register::Address<0x20088aa8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img171{
        using Addr = Register::Address<0x20088aac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img172{
        using Addr = Register::Address<0x20088ab0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img173{
        using Addr = Register::Address<0x20088ab4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img174{
        using Addr = Register::Address<0x20088ab8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img175{
        using Addr = Register::Address<0x20088abc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img176{
        using Addr = Register::Address<0x20088ac0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img177{
        using Addr = Register::Address<0x20088ac4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img178{
        using Addr = Register::Address<0x20088ac8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img179{
        using Addr = Register::Address<0x20088acc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img180{
        using Addr = Register::Address<0x20088ad0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img181{
        using Addr = Register::Address<0x20088ad4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img182{
        using Addr = Register::Address<0x20088ad8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img183{
        using Addr = Register::Address<0x20088adc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img184{
        using Addr = Register::Address<0x20088ae0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img185{
        using Addr = Register::Address<0x20088ae4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img186{
        using Addr = Register::Address<0x20088ae8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img187{
        using Addr = Register::Address<0x20088aec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img188{
        using Addr = Register::Address<0x20088af0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img189{
        using Addr = Register::Address<0x20088af4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img190{
        using Addr = Register::Address<0x20088af8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img191{
        using Addr = Register::Address<0x20088afc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img192{
        using Addr = Register::Address<0x20088b00,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img193{
        using Addr = Register::Address<0x20088b04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img194{
        using Addr = Register::Address<0x20088b08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img195{
        using Addr = Register::Address<0x20088b0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img196{
        using Addr = Register::Address<0x20088b10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img197{
        using Addr = Register::Address<0x20088b14,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img198{
        using Addr = Register::Address<0x20088b18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img199{
        using Addr = Register::Address<0x20088b1c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img200{
        using Addr = Register::Address<0x20088b20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img201{
        using Addr = Register::Address<0x20088b24,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img202{
        using Addr = Register::Address<0x20088b28,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img203{
        using Addr = Register::Address<0x20088b2c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img204{
        using Addr = Register::Address<0x20088b30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img205{
        using Addr = Register::Address<0x20088b34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img206{
        using Addr = Register::Address<0x20088b38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img207{
        using Addr = Register::Address<0x20088b3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img208{
        using Addr = Register::Address<0x20088b40,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img209{
        using Addr = Register::Address<0x20088b44,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img210{
        using Addr = Register::Address<0x20088b48,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img211{
        using Addr = Register::Address<0x20088b4c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img212{
        using Addr = Register::Address<0x20088b50,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img213{
        using Addr = Register::Address<0x20088b54,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img214{
        using Addr = Register::Address<0x20088b58,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img215{
        using Addr = Register::Address<0x20088b5c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img216{
        using Addr = Register::Address<0x20088b60,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img217{
        using Addr = Register::Address<0x20088b64,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img218{
        using Addr = Register::Address<0x20088b68,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img219{
        using Addr = Register::Address<0x20088b6c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img220{
        using Addr = Register::Address<0x20088b70,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img221{
        using Addr = Register::Address<0x20088b74,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img222{
        using Addr = Register::Address<0x20088b78,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img223{
        using Addr = Register::Address<0x20088b7c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img224{
        using Addr = Register::Address<0x20088b80,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img225{
        using Addr = Register::Address<0x20088b84,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img226{
        using Addr = Register::Address<0x20088b88,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img227{
        using Addr = Register::Address<0x20088b8c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img228{
        using Addr = Register::Address<0x20088b90,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img229{
        using Addr = Register::Address<0x20088b94,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img230{
        using Addr = Register::Address<0x20088b98,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img231{
        using Addr = Register::Address<0x20088b9c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img232{
        using Addr = Register::Address<0x20088ba0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img233{
        using Addr = Register::Address<0x20088ba4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img234{
        using Addr = Register::Address<0x20088ba8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img235{
        using Addr = Register::Address<0x20088bac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img236{
        using Addr = Register::Address<0x20088bb0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img237{
        using Addr = Register::Address<0x20088bb4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img238{
        using Addr = Register::Address<0x20088bb8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img239{
        using Addr = Register::Address<0x20088bbc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img240{
        using Addr = Register::Address<0x20088bc0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img241{
        using Addr = Register::Address<0x20088bc4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img242{
        using Addr = Register::Address<0x20088bc8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img243{
        using Addr = Register::Address<0x20088bcc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img244{
        using Addr = Register::Address<0x20088bd0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img245{
        using Addr = Register::Address<0x20088bd4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img246{
        using Addr = Register::Address<0x20088bd8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img247{
        using Addr = Register::Address<0x20088bdc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img248{
        using Addr = Register::Address<0x20088be0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img249{
        using Addr = Register::Address<0x20088be4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img250{
        using Addr = Register::Address<0x20088be8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img251{
        using Addr = Register::Address<0x20088bec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img252{
        using Addr = Register::Address<0x20088bf0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img253{
        using Addr = Register::Address<0x20088bf4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img254{
        using Addr = Register::Address<0x20088bf8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_img255{
        using Addr = Register::Address<0x20088bfc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRSR_IMG; 
    }
    namespace Nonecrsr_ctrl{
        using Addr = Register::Address<0x20088c00,0xffffffce>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRSRON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> CRSRNUM1_0; 
    }
    namespace Nonecrsr_cfg{
        using Addr = Register::Address<0x20088c04,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRSRSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FRAMESYNC; 
    }
    namespace Nonecrsr_pal0{
        using Addr = Register::Address<0x20088c08,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> BLUE; 
    }
    namespace Nonecrsr_pal1{
        using Addr = Register::Address<0x20088c0c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> BLUE; 
    }
    namespace Nonecrsr_xy{
        using Addr = Register::Address<0x20088c10,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CRSRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> CRSRY; 
    }
    namespace Nonecrsr_clip{
        using Addr = Register::Address<0x20088c14,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CRSRCLIPX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> CRSRCLIPY; 
    }
    namespace Nonecrsr_intmsk{
        using Addr = Register::Address<0x20088c20,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRSRIM; 
    }
    namespace Nonecrsr_intclr{
        using Addr = Register::Address<0x20088c24,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRSRIC; 
    }
    namespace Nonecrsr_intraw{
        using Addr = Register::Address<0x20088c28,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRSRRIS; 
    }
    namespace Nonecrsr_intstat{
        using Addr = Register::Address<0x20088c2c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRSRMIS; 
    }
}
