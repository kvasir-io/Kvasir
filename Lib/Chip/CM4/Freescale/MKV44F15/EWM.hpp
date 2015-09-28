#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace EWM_ctrl{
        using Addr = Register::Address<0x40061000,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EWMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ASSIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTEN; 
    }
    namespace EWM_serv{
        using Addr = Register::Address<0x40061001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SERVICE; 
    }
    namespace EWM_cmpl{
        using Addr = Register::Address<0x40061002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> COMPAREL; 
    }
    namespace EWM_cmph{
        using Addr = Register::Address<0x40061003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> COMPAREH; 
    }
}
