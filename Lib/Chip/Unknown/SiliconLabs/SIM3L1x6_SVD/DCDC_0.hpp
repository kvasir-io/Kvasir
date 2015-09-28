#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x4004e000,0x00a000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDYLOWF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RDYHIGHF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DROPOUTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BGRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OSCDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADCSYNCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLKINVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ADCCLKINVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> OUTVSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> MINPWSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> PSMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ASYNCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ABEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DCDCEN; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x4004e010,0xffccff8f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> ILIMIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> INTMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> RDYLOWTH; 
    }
}
