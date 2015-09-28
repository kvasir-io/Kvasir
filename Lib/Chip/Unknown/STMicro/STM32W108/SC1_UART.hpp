#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesc1_uartsr{
        using Addr = Register::Address<0x4000c848,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTS; 
    }
    namespace Nonesc1_uartcr{
        using Addr = Register::Address<0x4000c85c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AHFCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HFCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> nRTS; 
    }
    namespace Nonesc1_uartbrr1{
        using Addr = Register::Address<0x4000c868,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> N; 
    }
    namespace Nonesc1_uartbrr2{
        using Addr = Register::Address<0x4000c86c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> F; 
    }
}
