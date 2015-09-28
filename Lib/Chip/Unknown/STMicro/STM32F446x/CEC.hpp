#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40006c00,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXEOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXSOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CECEN; 
    }
    namespace Nonecfgr{
        using Addr = Register::Address<0x40006c04,0x0000fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXTOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BRESTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BREGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LBPEGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BRDNOGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SFTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,16)> OAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LSTN; 
    }
    namespace Nonetxdr{
        using Addr = Register::Address<0x40006c08,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXD; 
    }
    namespace Nonerxdr{
        using Addr = Register::Address<0x40006c0c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXDR; 
    }
    namespace Noneisr{
        using Addr = Register::Address<0x40006c10,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXACKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXUDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ARBLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXACKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LBPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SBPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXOVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXBR; 
    }
    namespace Noneier{
        using Addr = Register::Address<0x40006c14,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXACKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXUDRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXENDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXBRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ARBLSTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXACKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LBPEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SBPEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BREIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXOVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXENDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXBRIE; 
    }
}
