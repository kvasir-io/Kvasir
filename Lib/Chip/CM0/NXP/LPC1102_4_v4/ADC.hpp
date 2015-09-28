#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x4001c000,0xf0f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> CLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EDGE; 
    }
    namespace Nonegdr{
        using Addr = Register::Address<0x4001c004,0x38ff003f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> V_VREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> CHN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace Nonestat{
        using Addr = Register::Address<0x4001c030,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADINT; 
    }
    namespace Noneinten{
        using Addr = Register::Address<0x4001c00c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADINTENn; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ADGINTEN; 
    }
    namespace Nonedr0{
        using Addr = Register::Address<0x4001c010,0x3fff003f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> V_VREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace Nonedr1{
        using Addr = Register::Address<0x4001c014,0x3fff003f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> V_VREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace Nonedr2{
        using Addr = Register::Address<0x4001c018,0x3fff003f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> V_VREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace Nonedr3{
        using Addr = Register::Address<0x4001c01c,0x3fff003f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> V_VREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace Nonedr4{
        using Addr = Register::Address<0x4001c020,0x3fff003f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> V_VREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
}
