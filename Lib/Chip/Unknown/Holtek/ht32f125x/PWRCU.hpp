#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepwrcu_baksr{
        using Addr = Register::Address<0x4006a100,0xfffffefc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BAKPORF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WUPF; 
    }
    namespace Nonepwrcu_bakcr{
        using Addr = Register::Address<0x4006a104,0xffff6c76>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BAKRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LDOOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMOSON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WUPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WUPIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> V18RDYSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DMOSSTS; 
    }
    namespace Nonepwrcu_baktest{
        using Addr = Register::Address<0x4006a108,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BAKTEST; 
    }
    namespace Nonepwrcu_hsircr{
        using Addr = Register::Address<0x4006a10c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> HSIRCBL; 
    }
    namespace Nonepwrcu_lvdcsr{
        using Addr = Register::Address<0x4006a110,0xffe0fff4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BODEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BODRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LVDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> LVDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> LVDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LVDIWEN; 
    }
    namespace Nonepwrcu_bakreg0{
        using Addr = Register::Address<0x4006a200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BAKREG; 
    }
    namespace Nonepwrcu_bakreg1{
        using Addr = Register::Address<0x4006a204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BAKREG; 
    }
    namespace Nonepwrcu_bakreg2{
        using Addr = Register::Address<0x4006a208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BAKREG; 
    }
    namespace Nonepwrcu_bakreg3{
        using Addr = Register::Address<0x4006a20c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BAKREG; 
    }
    namespace Nonepwrcu_bakreg4{
        using Addr = Register::Address<0x4006a210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BAKREG; 
    }
    namespace Nonepwrcu_bakreg5{
        using Addr = Register::Address<0x4006a214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BAKREG; 
    }
    namespace Nonepwrcu_bakreg6{
        using Addr = Register::Address<0x4006a218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BAKREG; 
    }
    namespace Nonepwrcu_bakreg7{
        using Addr = Register::Address<0x4006a21c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BAKREG; 
    }
    namespace Nonepwrcu_bakreg8{
        using Addr = Register::Address<0x4006a220,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BAKREG; 
    }
    namespace Nonepwrcu_bakreg9{
        using Addr = Register::Address<0x4006a224,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BAKREG; 
    }
}
