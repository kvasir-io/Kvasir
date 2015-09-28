#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneprgcrc_poly{
        using Addr = Register::Address<0x40080000,0xffffffff>;
    }
    namespace Noneprgcrc_seed{
        using Addr = Register::Address<0x40080004,0xffffffff>;
    }
    namespace Noneprgcrc_fxor{
        using Addr = Register::Address<0x40080008,0xffffffff>;
    }
    namespace Noneprgcrc_cfg{
        using Addr = Register::Address<0x4008000c,0xe800f0fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CIRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> SZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> TEST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> FI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> FO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CIRQCLR; 
    }
    namespace Noneprgcrc_wr{
        using Addr = Register::Address<0x40080010,0xffffffff>;
    }
    namespace Noneprgcrc_rd{
        using Addr = Register::Address<0x40080014,0xffffffff>;
    }
}
