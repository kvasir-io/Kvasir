#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemo1{
        using Addr = Register::Address<0x40052000,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWATRG; 
    }
    namespace Nonemo2{
        using Addr = Register::Address<0x40052004,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRGAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> TRGASEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRGASTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADILV; 
    }
    namespace Nonemo3{
        using Addr = Register::Address<0x40052008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CORCNT; 
    }
}
