#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesc2_dmarxbegaddar{
        using Addr = Register::Address<0x4000c000,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc2_dmarxendaddar{
        using Addr = Register::Address<0x4000c004,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc2_dmarxbegaddbr{
        using Addr = Register::Address<0x4000c008,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc2_dmarxendaddbr{
        using Addr = Register::Address<0x4000c00c,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc2_dmatxbegaddar{
        using Addr = Register::Address<0x4000c010,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc2_dmatxendaddar{
        using Addr = Register::Address<0x4000c014,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc2_dmatxbegaddbr{
        using Addr = Register::Address<0x4000c018,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc2_dmatxendaddbr{
        using Addr = Register::Address<0x4000c01c,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc2_dmarxcntar{
        using Addr = Register::Address<0x4000c020,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> CNT; 
    }
    namespace Nonesc2_dmarxcntbr{
        using Addr = Register::Address<0x4000c024,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> CNT; 
    }
    namespace Nonesc2_dmatxcntr{
        using Addr = Register::Address<0x4000c028,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> CNT; 
    }
    namespace Nonesc2_dmasr{
        using Addr = Register::Address<0x4000c02c,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> NSSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FEB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FEA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PEB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PEA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OVRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXBACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXAACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXBACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXAACK; 
    }
    namespace Nonesc2_dmacr{
        using Addr = Register::Address<0x4000c030,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXLODB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXLODA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXLODB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXLODA; 
    }
    namespace Nonesc2_dmarxerrar{
        using Addr = Register::Address<0x4000c034,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc2_dmarxerrbr{
        using Addr = Register::Address<0x4000c038,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc2_dmarxcntsavedr{
        using Addr = Register::Address<0x4000c070,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> CNT; 
    }
}
