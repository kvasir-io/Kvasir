#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedmaxbar0{
        using Addr = Register::Address<0x40037000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CH0SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CH1SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CH2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CH3SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CH4SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CH5SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CH6SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> CH7SEL; 
    }
    namespace Nonedmaxbar1{
        using Addr = Register::Address<0x40037010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CH8SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CH9SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CH10SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CH11SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CH12SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CH13SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CH14SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> CH15SEL; 
    }
}
