#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneispcon{
        using Addr = Register::Address<0x5000c000,0xffff880c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ISPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CFGUEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDUEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ISPFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> ET; 
    }
    namespace Noneispadr{
        using Addr = Register::Address<0x5000c004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ISPADR; 
    }
    namespace Noneispdat{
        using Addr = Register::Address<0x5000c008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ISPDAT; 
    }
    namespace Noneispcmd{
        using Addr = Register::Address<0x5000c00c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> FOEN_FCEN_FCTRL; 
    }
    namespace Noneisptrg{
        using Addr = Register::Address<0x5000c010,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ISPGO; 
    }
    namespace Nonedfbadr{
        using Addr = Register::Address<0x5000c014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DFBA; 
    }
    namespace Nonefatcon{
        using Addr = Register::Address<0x5000c018,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FPSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> FATS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> L_SPEED; 
    }
}
