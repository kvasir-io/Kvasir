#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneuccr{
        using Addr = Register::Address<0x40036000,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ECSEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ECEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UCEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UCSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UCSEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UCEN0; 
    }
    namespace Noneupcr1{
        using Addr = Register::Address<0x40036004,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UPLLEN; 
    }
    namespace Noneupcr2{
        using Addr = Register::Address<0x40036008,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> UPOWT; 
    }
    namespace Noneupcr3{
        using Addr = Register::Address<0x4003600c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> UPLLK; 
    }
    namespace Noneupcr4{
        using Addr = Register::Address<0x40036010,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> UPLLN; 
    }
    namespace Noneup_str{
        using Addr = Register::Address<0x40036014,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UPRDY; 
    }
    namespace Noneupint_enr{
        using Addr = Register::Address<0x40036018,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UPCSE; 
    }
    namespace Noneupint_clr{
        using Addr = Register::Address<0x4003601c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UPCSC; 
    }
    namespace Noneupint_str{
        using Addr = Register::Address<0x40036020,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UPCSI; 
    }
    namespace Noneupcr5{
        using Addr = Register::Address<0x40036024,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> UPLLM; 
    }
    namespace Noneupcr6{
        using Addr = Register::Address<0x40036028,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> UBSR; 
    }
    namespace Noneupcr7{
        using Addr = Register::Address<0x4003602c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPLLEN; 
    }
    namespace Noneusben0{
        using Addr = Register::Address<0x40036030,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBEN0; 
    }
    namespace Noneusben1{
        using Addr = Register::Address<0x40036034,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBEN1; 
    }
}
