#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DMAMUX_chcfg0{
        using Addr = Register::Address<0x40021000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SOURCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENBL; 
    }
    namespace DMAMUX_chcfg1{
        using Addr = Register::Address<0x40021001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SOURCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENBL; 
    }
    namespace DMAMUX_chcfg2{
        using Addr = Register::Address<0x40021002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SOURCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENBL; 
    }
    namespace DMAMUX_chcfg3{
        using Addr = Register::Address<0x40021003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SOURCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENBL; 
    }
}
