#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneafio_essr0{
        using Addr = Register::Address<0x40022000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI0PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI1PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI2PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI3PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> EXTI4PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> EXTI5PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> EXTI6PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> EXTI7PIN; 
    }
    namespace Noneafio_essr1{
        using Addr = Register::Address<0x40022004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI8PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI9PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI10PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI11PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> EXTI12PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> EXTI13PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> EXTI14PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> EXTI15PIN; 
    }
    namespace Noneafio_gpacfgr{
        using Addr = Register::Address<0x40022008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PACFG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PACFG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PACFG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PACFG3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PACFG4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PACFG5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PACFG6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PACFG7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PACFG8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> PACFG9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> PACFG10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PACFG11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> PACFG12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> PACFG13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PACFG14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PACFG15; 
    }
    namespace Noneafio_gpbcfgr{
        using Addr = Register::Address<0x4002200c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PBCFG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PBCFG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PBCFG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PBCFG3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PBCFG4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PBCFG5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PBCFG6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PBCFG7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PBCFG8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> PBCFG9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> PBCFG10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PBCFG11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> PBCFG12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> PBCFG13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> PBCFG14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PBCFG15; 
    }
}
