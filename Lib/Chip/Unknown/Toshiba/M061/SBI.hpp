#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr0{
        using Addr = Register::Address<0x400e0000,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SBIEN; 
    }
    namespace Nonecr1_a{
        using Addr = Register::Address<0x400e0004,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRMON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> BC; 
    }
    namespace Nonecr1_b{
        using Addr = Register::Address<0x400e0004,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SIOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SIOINH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SIOS; 
    }
    namespace Nonedbr{
        using Addr = Register::Address<0x400e0008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DB; 
    }
    namespace Nonei2car{
        using Addr = Register::Address<0x400e000c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ALS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> SA; 
    }
    namespace Nonecr2_a{
        using Addr = Register::Address<0x400e0010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SBIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MST; 
    }
    namespace Nonecr2_b{
        using Addr = Register::Address<0x400e0010,0xfffffff3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SBIM; 
    }
    namespace Nonesr_a{
        using Addr = Register::Address<0x400e0010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LRB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MST; 
    }
    namespace Nonesr_b{
        using Addr = Register::Address<0x400e0010,0xfffffff3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SIOF; 
    }
    namespace Nonebr0{
        using Addr = Register::Address<0x400e0014,0xffffffbf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I2SBI; 
    }
}
