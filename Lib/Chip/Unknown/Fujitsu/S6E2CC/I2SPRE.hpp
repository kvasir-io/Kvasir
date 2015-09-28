#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneiccr{
        using Addr = Register::Address<0x4003d000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ICSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ICEN; 
    }
    namespace Noneipcr1{
        using Addr = Register::Address<0x4003d004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IPLLEN; 
    }
    namespace Noneipcr2{
        using Addr = Register::Address<0x4003d008,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> IPOWT; 
    }
    namespace Noneipcr3{
        using Addr = Register::Address<0x4003d00c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> IPLLK; 
    }
    namespace Noneipcr4{
        using Addr = Register::Address<0x4003d010,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> IPLLN; 
    }
    namespace Noneip_str{
        using Addr = Register::Address<0x4003d014,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IPRDY; 
    }
    namespace Noneipint_enr{
        using Addr = Register::Address<0x4003d018,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IPCSE; 
    }
    namespace Noneipint_clr{
        using Addr = Register::Address<0x4003d01c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IPCSC; 
    }
    namespace Noneipint_str{
        using Addr = Register::Address<0x4003d020,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IPCSI; 
    }
    namespace Noneipcr5{
        using Addr = Register::Address<0x4003d024,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> IPLLM; 
    }
}
