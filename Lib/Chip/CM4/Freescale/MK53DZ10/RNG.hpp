#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RNG_ver{
        using Addr = Register::Address<0x400a0000,0x0fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MINOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> MAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> TYPE; 
    }
    namespace RNG_cmd{
        using Addr = Register::Address<0x400a0004,0xffffff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SR; 
    }
    namespace RNG_cr{
        using Addr = Register::Address<0x400a0008,0xffffff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FUFMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MASKDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASKERR; 
    }
    namespace RNG_sr{
        using Addr = Register::Address<0x400a000c,0x001e0081>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SLP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STDN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SDN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NSDN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> FIFO_LVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> FIFO_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> ST_PF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> STATPF; 
    }
    namespace RNG_esr{
        using Addr = Register::Address<0x400a0010,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OSCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FUFE; 
    }
    namespace RNG_out{
        using Addr = Register::Address<0x400a0014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RANDOUT; 
    }
}
