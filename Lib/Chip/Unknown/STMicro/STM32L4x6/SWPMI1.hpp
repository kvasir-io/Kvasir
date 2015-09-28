#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40008800,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LPBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SWPME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DEACT; 
    }
    namespace Nonebrr{
        using Addr = Register::Address<0x40008804,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> BR; 
    }
    namespace Noneisr{
        using Addr = Register::Address<0x4000880c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXBFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXBEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXBERF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXUNRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DEACTF; 
    }
    namespace Noneicr{
        using Addr = Register::Address<0x40008810,0xfffffe60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRXBFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTXBEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CRXBERF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CRXOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTXUNRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CSRF; 
    }
    namespace Noneier{
        using Addr = Register::Address<0x40008814,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXBFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXBEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXBERIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXOVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXUNRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRIE; 
    }
    namespace Nonerfl{
        using Addr = Register::Address<0x40008818,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> RFL; 
    }
    namespace Nonetdr{
        using Addr = Register::Address<0x4000881c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TD; 
    }
    namespace Nonerdr{
        using Addr = Register::Address<0x40008820,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RD; 
    }
}
