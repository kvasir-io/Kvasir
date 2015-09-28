#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40007400,0xffffcfc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BOFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TSEL10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TSEL11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TSEL12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DMAEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DMAUDRIE1; 
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
        using Addr = Register::Address<0x40007434,0xdfffdfff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMAUDR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DMAUDR1; 
    }
}
