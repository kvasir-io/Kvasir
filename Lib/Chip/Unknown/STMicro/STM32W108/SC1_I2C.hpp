#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesc1_i2csr{
        using Addr = Register::Address<0x4000c844,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMDFIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NACK; 
    }
    namespace Nonesc1_i2ccr1{
        using Addr = Register::Address<0x4000c84c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BRE; 
    }
    namespace Nonesc1_i2ccr2{
        using Addr = Register::Address<0x4000c850,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACK; 
    }
}
