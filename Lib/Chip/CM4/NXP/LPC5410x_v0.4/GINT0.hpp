#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonectrl{
        using Addr = Register::Address<0x40010000,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COMB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Noneport_pol0{
        using Addr = Register::Address<0x40010020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> POL; 
    }
    namespace Noneport_pol1{
        using Addr = Register::Address<0x40010024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> POL; 
    }
    namespace Noneport_pol2{
        using Addr = Register::Address<0x40010028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> POL; 
    }
    namespace Noneport_ena0{
        using Addr = Register::Address<0x40010040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ENA; 
    }
    namespace Noneport_ena1{
        using Addr = Register::Address<0x40010044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ENA; 
    }
    namespace Noneport_ena2{
        using Addr = Register::Address<0x40010048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ENA; 
    }
}
