#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonefaddr{
        using Addr = Register::Address<0x40018000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> FADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FADDRUPD; 
    }
    namespace Nonepower{
        using Addr = Register::Address<0x40018010,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SUSDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SUSMDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RESUME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSTDETF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USBINH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DITHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ISOUPDMD; 
    }
    namespace Noneioint{
        using Addr = Register::Address<0x40018020,0xffe1ffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EP0I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IN1I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IN2I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IN3I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IN4I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OUT1I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OUT2I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OUT3I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OUT4I; 
    }
    namespace Nonecmint{
        using Addr = Register::Address<0x40018030,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SUSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SOFI; 
    }
    namespace Noneiointe{
        using Addr = Register::Address<0x40018040,0xffe1ffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EP0IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IN1IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IN2IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IN3IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IN4IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OUT1IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OUT2IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OUT3IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OUT4IEN; 
    }
    namespace Nonecmintepe{
        using Addr = Register::Address<0x40018050,0xffe0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SUSIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RESIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SOFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EP0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EP1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EP2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EP3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EP4EN; 
    }
    namespace Nonecrcontrol{
        using Addr = Register::Address<0x40018060,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LSCRMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRSSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CREN; 
    }
    namespace Noneframe{
        using Addr = Register::Address<0x40018070,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> FRAMENUM; 
    }
    namespace Nonetcontrol{
        using Addr = Register::Address<0x40018200,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DFREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> PHYTST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PHYEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PUEN; 
    }
    namespace Noneclksel{
        using Addr = Register::Address<0x40018300,0xffffff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RESET; 
    }
    namespace Noneosccontrol{
        using Addr = Register::Address<0x40018310,0xffffff5f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SUSPEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OSCEN; 
    }
    namespace Noneafadjust{
        using Addr = Register::Address<0x40018320,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> FINEFADJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DITHEN; 
    }
    namespace Nonefadjust{
        using Addr = Register::Address<0x40018330,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> FADJ; 
    }
    namespace Nonedmafifo{
        using Addr = Register::Address<0x40018400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMAFIFO; 
    }
    namespace Nonedmacontrol{
        using Addr = Register::Address<0x40018410,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBGMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TERRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DBUSYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DFIFOFL; 
    }
    namespace Noneep0control{
        using Addr = Register::Address<0x40018810,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OPRDYI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IPRDYI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STSTLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SUENDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SDSTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OPRDYIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SUENDIS; 
    }
    namespace Noneep0count{
        using Addr = Register::Address<0x40018820,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> COUNT; 
    }
    namespace Noneep0fifo{
        using Addr = Register::Address<0x40018830,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FIFO; 
    }
    namespace Noneepmpsize_1{
        using Addr = Register::Address<0x40018880,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IMAXP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> OMAXP; 
    }
    namespace Noneepcontrol_1{
        using Addr = Register::Address<0x40018890,0x0f000380>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IPRDYI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IFIFONEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IURF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IFIFOFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ISDSTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ISTSTLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ICLRDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SPLITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FDTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DIRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IISOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AUTOSETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OPRDYI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OFIFOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OORF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ODERRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OFIFOFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> OSDSTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OSTSTLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> OCLRDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ODMAMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OISOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTOCLREN; 
    }
    namespace Noneepcount_1{
        using Addr = Register::Address<0x400188a0,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> COUNT; 
    }
    namespace Noneepfifo_1{
        using Addr = Register::Address<0x400188b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FIFO; 
    }
    namespace Noneepmpsize_2{
        using Addr = Register::Address<0x40018900,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IMAXP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> OMAXP; 
    }
    namespace Noneepcontrol_2{
        using Addr = Register::Address<0x40018910,0x0f000380>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IPRDYI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IFIFONEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IURF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IFIFOFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ISDSTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ISTSTLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ICLRDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SPLITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FDTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DIRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IISOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AUTOSETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OPRDYI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OFIFOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OORF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ODERRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OFIFOFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> OSDSTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OSTSTLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> OCLRDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ODMAMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OISOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTOCLREN; 
    }
    namespace Noneepcount_2{
        using Addr = Register::Address<0x40018920,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> COUNT; 
    }
    namespace Noneepfifo_2{
        using Addr = Register::Address<0x40018930,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FIFO; 
    }
    namespace Noneepmpsize_3{
        using Addr = Register::Address<0x40018980,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IMAXP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> OMAXP; 
    }
    namespace Noneepcontrol_3{
        using Addr = Register::Address<0x40018990,0x0f000380>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IPRDYI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IFIFONEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IURF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IFIFOFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ISDSTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ISTSTLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ICLRDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SPLITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FDTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DIRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IISOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AUTOSETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OPRDYI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OFIFOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OORF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ODERRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OFIFOFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> OSDSTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OSTSTLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> OCLRDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ODMAMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OISOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTOCLREN; 
    }
    namespace Noneepcount_3{
        using Addr = Register::Address<0x400189a0,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> COUNT; 
    }
    namespace Noneepfifo_3{
        using Addr = Register::Address<0x400189b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FIFO; 
    }
    namespace Noneepmpsize_4{
        using Addr = Register::Address<0x40018a00,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IMAXP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> OMAXP; 
    }
    namespace Noneepcontrol_4{
        using Addr = Register::Address<0x40018a10,0x0f000380>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IPRDYI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IFIFONEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IURF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IFIFOFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ISDSTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ISTSTLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ICLRDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SPLITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FDTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DIRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IISOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AUTOSETEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OPRDYI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OFIFOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OORF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ODERRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OFIFOFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> OSDSTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OSTSTLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> OCLRDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ODMAMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ODMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OISOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTOCLREN; 
    }
    namespace Noneepcount_4{
        using Addr = Register::Address<0x40018a20,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> COUNT; 
    }
    namespace Noneepfifo_4{
        using Addr = Register::Address<0x40018a30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FIFO; 
    }
}
