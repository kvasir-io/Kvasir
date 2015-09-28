#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PMC_lvdsc1{
        using Addr = Register::Address<0x4007d000,0xffffff0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LVDV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LVDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LVDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LVDACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LVDF; 
    }
    namespace PMC_lvdsc2{
        using Addr = Register::Address<0x4007d001,0xffffff1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LVWV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LVWIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LVWACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LVWF; 
    }
    namespace PMC_regsc{
        using Addr = Register::Address<0x4007d002,0xfffffff2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BGBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REGONS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACKISO; 
    }
}
