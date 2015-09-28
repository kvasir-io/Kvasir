#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemode{
        using Addr = Register::Address<0x4000f180,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> CLKSEL; 
    }
    namespace Nonecontrol{
        using Addr = Register::Address<0x4000f190,0x001fffbe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DBGMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DIVST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,22)> DIV; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x4000f1a0,0xfffff33c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> C0CCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> C1CCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OVFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> C0IOVFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> C1IOVFI; 
    }
    namespace Nonecounter{
        using Addr = Register::Address<0x4000f1b0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COUNTER; 
    }
    namespace Nonelimit{
        using Addr = Register::Address<0x4000f1c0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LIMIT; 
    }
    namespace Nonemode_0{
        using Addr = Register::Address<0x4000f000,0xfffff8c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> COSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> PWMMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CMD; 
    }
    namespace Nonecontrol_0{
        using Addr = Register::Address<0x4000f010,0xfffff6f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COUTST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPCAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CNCAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CUPDCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CIOVFIEN; 
    }
    namespace Noneccapv_0{
        using Addr = Register::Address<0x4000f020,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> CCAPV; 
    }
    namespace Noneccapvupd_0{
        using Addr = Register::Address<0x4000f030,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> CCAPVUPD; 
    }
    namespace Nonemode_1{
        using Addr = Register::Address<0x4000f040,0xfffff8c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> COSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> PWMMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CMD; 
    }
    namespace Nonecontrol_1{
        using Addr = Register::Address<0x4000f050,0xfffff6f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COUTST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPCAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CNCAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CUPDCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CIOVFIEN; 
    }
    namespace Noneccapv_1{
        using Addr = Register::Address<0x4000f060,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> CCAPV; 
    }
    namespace Noneccapvupd_1{
        using Addr = Register::Address<0x4000f070,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> CCAPVUPD; 
    }
}
