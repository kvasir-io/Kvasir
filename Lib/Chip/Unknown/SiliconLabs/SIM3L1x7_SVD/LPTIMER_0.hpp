#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40038000,0x1c80c00c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TMRSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TMRCAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HSMDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CMP0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CMP1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OVFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CMP0IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OVFOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMP0OEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CMP1IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CMP1OEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OUTINVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CMP0RSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CMP1RSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MCLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DBGMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RUN; 
    }
    namespace Nonecount{
        using Addr = Register::Address<0x40038010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIMER; 
    }
    namespace Nonethreshold{
        using Addr = Register::Address<0x40038020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COMPARE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> COMPARE1; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x40038030,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMP0I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMP1I; 
    }
}
