#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40007400,0x80028002>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> TSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> WAVE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> MAMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DMAEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DMAUDRIE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,19)> TSEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> WAVE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> MAMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMAEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMAUDRIE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CEN2; 
    }
    namespace Noneswtrigr{
        using Addr = Register::Address<0x40007404,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWTRIG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWTRIG2; 
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
    namespace Nonedhr12r2{
        using Addr = Register::Address<0x40007414,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DACC2DHR; 
    }
    namespace Nonedhr12l2{
        using Addr = Register::Address<0x40007418,0xffff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> DACC2DHR; 
    }
    namespace Nonedhr8r2{
        using Addr = Register::Address<0x4000741c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DACC2DHR; 
    }
    namespace Nonedhr12rd{
        using Addr = Register::Address<0x40007420,0xf000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DACC1DHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> DACC2DHR; 
    }
    namespace Nonedhr12ld{
        using Addr = Register::Address<0x40007424,0x000f000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> DACC1DHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> DACC2DHR; 
    }
    namespace Nonedhr8rd{
        using Addr = Register::Address<0x40007428,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DACC1DHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DACC2DHR; 
    }
    namespace Nonedor1{
        using Addr = Register::Address<0x4000742c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DACC1DOR; 
    }
    namespace Nonedor2{
        using Addr = Register::Address<0x40007430,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DACC2DOR; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40007434,0x1fff1fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DMAUDR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAL_FLAG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BWST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMAUDR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CAL_FLAG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> BWST2; 
    }
    namespace Noneccr{
        using Addr = Register::Address<0x40007438,0xffe0ffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> OTRIM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> OTRIM2; 
    }
    namespace Nonemcr{
        using Addr = Register::Address<0x4000743c,0xfff8fff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> MODE2; 
    }
    namespace Noneshsr1{
        using Addr = Register::Address<0x40007440,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TSAMPLE1; 
    }
    namespace Noneshsr2{
        using Addr = Register::Address<0x40007444,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TSAMPLE2; 
    }
    namespace Noneshhr{
        using Addr = Register::Address<0x40007448,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> THOLD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> THOLD2; 
    }
    namespace Noneshrr{
        using Addr = Register::Address<0x4000744c,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TREFRESH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TREFRESH2; 
    }
}
