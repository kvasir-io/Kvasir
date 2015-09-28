#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonei2cdnf{
        using Addr = Register::Address<0x40038800,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> I2CDNF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> I2CDNF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> I2CDNF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> I2CDNF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> I2CDNF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> I2CDNF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> I2CDNF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> I2CDNF0; 
    }
}
