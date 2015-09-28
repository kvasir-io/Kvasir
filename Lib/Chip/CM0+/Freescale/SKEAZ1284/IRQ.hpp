#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace IRQ_sc{
        using Addr = Register::Address<0x40031000,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRQMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRQIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IRQACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IRQF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IRQPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IRQEDG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IRQPDD; 
    }
}
