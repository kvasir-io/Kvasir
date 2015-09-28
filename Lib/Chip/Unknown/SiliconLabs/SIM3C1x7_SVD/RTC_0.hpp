#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneconfig{
        using Addr = Register::Address<0x40029000,0x18f8ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ALM0AREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MCLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ASEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RTCLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CRYSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> AGCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ALM0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> ALM1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> ALM2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RTCOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RTCEN; 
    }
    namespace Nonecontrol{
        using Addr = Register::Address<0x40029010,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ALM0I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALM1I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ALM2I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TMRCAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TMRSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLKVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OSCFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HSMDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LRDYF; 
    }
    namespace Nonealarm0{
        using Addr = Register::Address<0x40029020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ALARM0; 
    }
    namespace Nonealarm1{
        using Addr = Register::Address<0x40029030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ALARM1; 
    }
    namespace Nonealarm2{
        using Addr = Register::Address<0x40029040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ALARM2; 
    }
    namespace Nonesetcap{
        using Addr = Register::Address<0x40029050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETCAP; 
    }
    namespace Nonelfocontrol{
        using Addr = Register::Address<0x40029060,0x7fffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LFOSCEN; 
    }
    namespace Nonelfoscadj{
        using Addr = Register::Address<0x40029080,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> LFOSCADJ; 
    }
}
