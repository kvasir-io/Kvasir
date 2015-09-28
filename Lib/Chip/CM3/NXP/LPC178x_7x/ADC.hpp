#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40034000,0xf0de0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PDN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EDGE; 
    }
    namespace Nonegdr{
        using Addr = Register::Address<0x40034004,0x38ff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> CHN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace Noneinten{
        using Addr = Register::Address<0x4003400c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADINTEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADINTEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADINTEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADINTEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADINTEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ADINTEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADINTEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADINTEN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ADGINTEN; 
    }
    namespace Nonedr0{
        using Addr = Register::Address<0x40034010,0x3fff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace Nonedr1{
        using Addr = Register::Address<0x40034014,0x3fff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace Nonedr2{
        using Addr = Register::Address<0x40034018,0x3fff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace Nonedr3{
        using Addr = Register::Address<0x4003401c,0x3fff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace Nonedr4{
        using Addr = Register::Address<0x40034020,0x3fff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace Nonedr5{
        using Addr = Register::Address<0x40034024,0x3fff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace Nonedr6{
        using Addr = Register::Address<0x40034028,0x3fff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace Nonedr7{
        using Addr = Register::Address<0x4003402c,0x3fff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> RESULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace Nonestat{
        using Addr = Register::Address<0x40034030,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DONE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DONE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DONE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DONE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DONE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DONE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DONE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OVERRUN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OVERRUN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OVERRUN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OVERRUN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OVERRUN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OVERRUN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> OVERRUN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OVERRUN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADINT; 
    }
    namespace Nonetrm{
        using Addr = Register::Address<0x40034034,0xfffff00f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADCOFFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TRIM; 
    }
}
