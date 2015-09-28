#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesc2_isr{
        using Addr = Register::Address<0x4000a80c,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXULODB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXULODA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXULODB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXULODA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMDFIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXNE; 
    }
    namespace Nonesc2_ier{
        using Addr = Register::Address<0x4000a84c,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXULODBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXULODAIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXULODBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXULODAIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NACKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMDFINIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BTFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BRFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UDRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IDLEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXNEIE; 
    }
    namespace Nonesc2_icr{
        using Addr = Register::Address<0x4000a858,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IDLELEVEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXELEVEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXNELEVEL; 
    }
    namespace Nonesc2_dr{
        using Addr = Register::Address<0x4000c03c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DR; 
    }
    namespace Nonesc2_cr{
        using Addr = Register::Address<0x4000c054,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
    }
    namespace Nonesc2_crr1{
        using Addr = Register::Address<0x4000c060,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> LIN; 
    }
    namespace Nonesc2_crr2{
        using Addr = Register::Address<0x4000c064,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXP; 
    }
}
