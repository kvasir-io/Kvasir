#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemode0{
        using Addr = Register::Address<0x4003f000,0xffffff00>;
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
    namespace Nonemode2{
        using Addr = Register::Address<0x4003f008,0xffffffff>;
    }
    namespace Nonemode3{
        using Addr = Register::Address<0x4003f00c,0xffffffff>;
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
    namespace Nonetim2{
        using Addr = Register::Address<0x4003f028,0xffffffff>;
    }
    namespace Nonetim3{
        using Addr = Register::Address<0x4003f02c,0xffffffff>;
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
    namespace Nonearea2{
        using Addr = Register::Address<0x4003f048,0xff80ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDR; 
    }
    namespace Nonearea3{
        using Addr = Register::Address<0x4003f04c,0xff80ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDR; 
    }
    namespace Nonearea7{
        using Addr = Register::Address<0x4003f05c,0xff80ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDR; 
    }
}
