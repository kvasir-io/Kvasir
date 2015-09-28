#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetxcontrol{
        using Addr = Register::Address<0x4003a000,0xd88c001c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FSSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,6)> FSDEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FSSRCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> FILLSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> JSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FSINVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SCLKINVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ORDER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MBSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TXEN; 
    }
    namespace Nonetxmode{
        using Addr = Register::Address<0x4003a010,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,12)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,20)> SLOTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DIMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TDMEN; 
    }
    namespace Nonefsduty{
        using Addr = Register::Address<0x4003a020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FSLOW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> FSHIGH; 
    }
    namespace Nonerxcontrol{
        using Addr = Register::Address<0x4003a030,0xffcc4400>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FSDEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> JSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FSINVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SCLKINVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ORDER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> MBSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FSSRCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RXEN; 
    }
    namespace Nonerxmode{
        using Addr = Register::Address<0x4003a040,0xf4000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> CYCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,12)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,20)> SLOTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TDMEN; 
    }
    namespace Noneclkcontrol{
        using Addr = Register::Address<0x4003a050,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> INTDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,10)> FRACDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DUTYMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CLKUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DIVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TXCLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RXCLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RXCLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TXCLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> RXSCLKMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TXSCLKMD; 
    }
    namespace Nonetxfifo{
        using Addr = Register::Address<0x4003a060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXFIFO; 
    }
    namespace Nonerxfifo{
        using Addr = Register::Address<0x4003a070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXFIFO; 
    }
    namespace Nonefifostatus{
        using Addr = Register::Address<0x4003a080,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TXFIFONUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RXFIFONUM; 
    }
    namespace Nonefifocontrol{
        using Addr = Register::Address<0x4003a090,0xff90fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TXFIFOWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RXFIFOWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TXFIFOFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RXFIFOFL; 
    }
    namespace Noneintcontrol{
        using Addr = Register::Address<0x4003a0a0,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXUFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXLWMIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXHWMIEN; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x4003a0b0,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXUFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXLWMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXHWMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CDBUSYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CDSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXCLKSELRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXCLKSELRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXCLKENRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXCLKENRF; 
    }
    namespace Nonedmacontrol{
        using Addr = Register::Address<0x4003a0c0,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXDMABMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXDMABMD; 
    }
    namespace Nonedbgcontrol{
        using Addr = Register::Address<0x4003a0d0,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXDBGHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXDBGHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXDBGMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXDBGMD; 
    }
}
