#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40007400,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DMAUDRIE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DMAEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> MAMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> WAVE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> TSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BOFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN1; 
    }
    namespace Noneswtrigr{
        using Addr = Register::Address<0x40007404,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWTRIG1; 
    }
    namespace Nonedhr12r1{
        using Addr = Register::Address<0x40007408,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DACC1DHR; 
    }
    namespace Nonedhr12l1{
        using Addr = Register::Address<0x4000740c,0xffff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> DACC1DHR; 
    }
    namespace Nonedhr8r1{
        using Addr = Register::Address<0x40007410,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DACC1DHR; 
    }
    namespace Nonedor1{
        using Addr = Register::Address<0x4000742c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DACC1DOR; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40007434,0xffffdfff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DMAUDR1; 
    }
}
