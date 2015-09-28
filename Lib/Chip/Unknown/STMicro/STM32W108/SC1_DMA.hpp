#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesc1_dmarxbegaddar{
        using Addr = Register::Address<0x4000c800,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc1_dmarxendaddar{
        using Addr = Register::Address<0x4000c804,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc1_dmarxbegaddbr{
        using Addr = Register::Address<0x4000c808,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc1_dmarxendaddbr{
        using Addr = Register::Address<0x4000c80c,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc1_dmatxbegaddar{
        using Addr = Register::Address<0x4000c810,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc1_dmatxendaddar{
        using Addr = Register::Address<0x4000c814,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc1_dmatxbegaddbr{
        using Addr = Register::Address<0x4000c818,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc1_dmatxendaddbr{
        using Addr = Register::Address<0x4000c81c,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc1_dmarxcntar{
        using Addr = Register::Address<0x4000c820,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> CNT; 
    }
    namespace Nonesc1_dmarxcntbr{
        using Addr = Register::Address<0x4000c824,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> CNT; 
    }
    namespace Nonesc1_dmatxcntr{
        using Addr = Register::Address<0x4000c828,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> CNT; 
    }
    namespace Nonesc1_dmasr{
        using Addr = Register::Address<0x4000c82c,0xffffe000>;
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
    namespace Nonesc1_dmacr{
        using Addr = Register::Address<0x4000c830,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXLODB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXLODA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXLODB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXLODA; 
    }
    namespace Nonesc1_dmarxerrar{
        using Addr = Register::Address<0x4000c834,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc1_dmarxerrbr{
        using Addr = Register::Address<0x4000c838,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ADD; 
    }
    namespace Nonesc1_dmarxcntsavedr{
        using Addr = Register::Address<0x4000c870,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> CNT; 
    }
}
