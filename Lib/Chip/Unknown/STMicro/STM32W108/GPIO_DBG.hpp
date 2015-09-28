#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonegpio_dbgcr{
        using Addr = Register::Address<0x4000bc00,0xffffffcf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DBGDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTREGEN; 
    }
    namespace Nonegpio_dbgsr{
        using Addr = Register::Address<0x4000bc04,0xfffffff4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BOOTMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FORCEDBG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWEN; 
    }
    namespace Nonegpio_pctracecr{
        using Addr = Register::Address<0x40004028,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SEL; 
    }
}
