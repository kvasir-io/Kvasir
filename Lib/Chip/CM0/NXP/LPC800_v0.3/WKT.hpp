#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonectrl{
        using Addr = Register::Address<0x40008000,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALARMFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLEARCTR; 
    }
    namespace Nonecount{
        using Addr = Register::Address<0x4000800c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VALUE; 
    }
}
