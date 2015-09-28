#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40009800,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DMAUDRIE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DMAEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MAMP13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MAMP12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MAMP11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MAMP10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WAVE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WAVE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> TSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BOFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN1; 
    }
    namespace Noneswtrigr{
        using Addr = Register::Address<0x40009804,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWTRIG1; 
    }
    namespace Nonedhr12r1{
        using Addr = Register::Address<0x40009808,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DACC1DHR; 
    }
    namespace Nonedhr12l1{
        using Addr = Register::Address<0x4000980c,0xffff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> DACC1DHR; 
    }
    namespace Nonedhr8r1{
        using Addr = Register::Address<0x40009810,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DACC1DHR; 
    }
    namespace Nonedor1{
        using Addr = Register::Address<0x4000982c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DACC1DOR; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40009834,0xffffdfff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DMAUDR1; 
    }
}
