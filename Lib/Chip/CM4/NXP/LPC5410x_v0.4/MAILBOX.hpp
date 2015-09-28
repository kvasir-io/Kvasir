#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneirq0{
        using Addr = Register::Address<0x1c02c000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> INTREQ; 
    }
    namespace Noneirq0set{
        using Addr = Register::Address<0x1c02c004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> INTREQSET; 
    }
    namespace Noneirq0clr{
        using Addr = Register::Address<0x1c02c008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> INTREQCLR; 
    }
    namespace Noneirq1{
        using Addr = Register::Address<0x1c02c010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> INTREQ; 
    }
    namespace Noneirq1set{
        using Addr = Register::Address<0x1c02c014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> INTREQSET; 
    }
    namespace Noneirq1clr{
        using Addr = Register::Address<0x1c02c018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> INTREQCLR; 
    }
    namespace Nonemutex{
        using Addr = Register::Address<0x1c02c0f8,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EX; 
    }
}
