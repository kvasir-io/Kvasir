#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemode0{
        using Addr = Register::Address<0x4003f000,0xffffc400>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MOEXEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MPXCSOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MPXDOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ALEINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MPXMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHRTDOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PAGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WEOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RBMON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WDTH; 
    }
    namespace Nonemode1{
        using Addr = Register::Address<0x4003f004,0xffffffff>;
    }
    namespace Nonemode6{
        using Addr = Register::Address<0x4003f018,0xffffffff>;
    }
    namespace Nonemode7{
        using Addr = Register::Address<0x4003f01c,0xffffffff>;
    }
    namespace Nonetim0{
        using Addr = Register::Address<0x4003f020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> WIDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> WWEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> WADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> WACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> RIDLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> FRADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RACC; 
    }
    namespace Nonetim1{
        using Addr = Register::Address<0x4003f024,0xffffffff>;
    }
    namespace Nonetim6{
        using Addr = Register::Address<0x4003f038,0xffffffff>;
    }
    namespace Nonetim7{
        using Addr = Register::Address<0x4003f03c,0xffffffff>;
    }
    namespace Nonearea0{
        using Addr = Register::Address<0x4003f040,0xff80ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDR; 
    }
    namespace Nonearea1{
        using Addr = Register::Address<0x4003f044,0xff80ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDR; 
    }
    namespace Nonearea6{
        using Addr = Register::Address<0x4003f058,0xff80ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDR; 
    }
    namespace Nonearea7{
        using Addr = Register::Address<0x4003f05c,0xff80ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDR; 
    }
    namespace Noneatim0{
        using Addr = Register::Address<0x4003f060,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ALEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ALES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ALC; 
    }
    namespace Noneatim1{
        using Addr = Register::Address<0x4003f064,0xffffffff>;
    }
    namespace Noneatim6{
        using Addr = Register::Address<0x4003f078,0xffffffff>;
    }
    namespace Noneatim7{
        using Addr = Register::Address<0x4003f07c,0xffffffff>;
    }
    namespace Nonedclkr{
        using Addr = Register::Address<0x4003f300,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MCLKON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MDIV; 
    }
}
