#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesample_ctrl{
        using Addr = Register::Address<0x400b8000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IN0SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IN1SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IN2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IN3SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SAMPLE_EN0SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SAMPLE_EN1SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SAMPLE_EN2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SAMPLE_EN3SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LATCHEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LATCHEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> LATCHEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LATCHEN3; 
    }
    namespace Noneabort_enable0{
        using Addr = Register::Address<0x400b8020,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENA8; 
    }
    namespace Noneabort_enable1{
        using Addr = Register::Address<0x400b8040,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENA8; 
    }
    namespace Noneabort_enable2{
        using Addr = Register::Address<0x400b8060,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENA8; 
    }
    namespace Noneabort_enable3{
        using Addr = Register::Address<0x400b8080,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENA8; 
    }
    namespace Noneabort_source0{
        using Addr = Register::Address<0x400b8024,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ACT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ACT8; 
    }
    namespace Noneabort_source1{
        using Addr = Register::Address<0x400b8044,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ACT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ACT8; 
    }
    namespace Noneabort_source2{
        using Addr = Register::Address<0x400b8064,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ACT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ACT8; 
    }
    namespace Noneabort_source3{
        using Addr = Register::Address<0x400b8084,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ACT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ACT8; 
    }
}
