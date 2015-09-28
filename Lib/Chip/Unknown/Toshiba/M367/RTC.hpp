#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesecr{
        using Addr = Register::Address<0x400cc000,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> SE; 
    }
    namespace Noneminr{
        using Addr = Register::Address<0x400cc001,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> MI; 
    }
    namespace Nonehourr{
        using Addr = Register::Address<0x400cc002,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> HO; 
    }
    namespace Nonedayr{
        using Addr = Register::Address<0x400cc004,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> WE; 
    }
    namespace Nonedater{
        using Addr = Register::Address<0x400cc005,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> DA; 
    }
    namespace Nonemonthr_a{
        using Addr = Register::Address<0x400cc006,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> MO; 
    }
    namespace Nonemonthr_b{
        using Addr = Register::Address<0x400cc006,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MO0; 
    }
    namespace Noneyearr_a{
        using Addr = Register::Address<0x400cc007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> YE; 
    }
    namespace Noneyearr_b{
        using Addr = Register::Address<0x400cc007,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LEAP; 
    }
    namespace Nonepager{
        using Addr = Register::Address<0x400cc008,0xffffff62>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PAGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENAALM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENATMR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADJUST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> INTENA; 
    }
    namespace Nonerestr{
        using Addr = Register::Address<0x400cc00c,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIS8HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIS4HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DIS2HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RSTALM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RSTTMR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DIS16HZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIS1HZ; 
    }
}
