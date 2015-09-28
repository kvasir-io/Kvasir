#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40020000,0xfffff003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BITENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BITS; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40020004,0xffffff07>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ABRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ROVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WCOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPIF; 
    }
    namespace Nonedr{
        using Addr = Register::Address<0x40020008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATALOW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAHIGH; 
    }
    namespace Noneccr{
        using Addr = Register::Address<0x4002000c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> COUNTER; 
    }
    namespace Noneint{
        using Addr = Register::Address<0x4002001c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPIF; 
    }
}
