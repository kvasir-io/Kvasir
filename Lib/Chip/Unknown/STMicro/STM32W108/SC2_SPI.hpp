#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesc2_spisr{
        using Addr = Register::Address<0x4000c040,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVF; 
    }
    namespace Nonesc2_spicr{
        using Addr = Register::Address<0x4000c058,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RPTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LSBFIRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPOL; 
    }
}
