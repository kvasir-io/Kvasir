#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepx0_dout{
        using Addr = Register::Address<0x50004400,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DOUT; 
    }
    namespace Nonepx1_dout{
        using Addr = Register::Address<0x50004404,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DOUT; 
    }
    namespace Nonepx2_dout{
        using Addr = Register::Address<0x50004408,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DOUT; 
    }
    namespace Nonepx3_dout{
        using Addr = Register::Address<0x5000440c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DOUT; 
    }
    namespace Nonepx4_dout{
        using Addr = Register::Address<0x50004410,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DOUT; 
    }
    namespace Nonepx5_dout{
        using Addr = Register::Address<0x50004414,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DOUT; 
    }
    namespace Nonepx6_dout{
        using Addr = Register::Address<0x50004418,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DOUT; 
    }
    namespace Nonepx7_dout{
        using Addr = Register::Address<0x5000441c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DOUT; 
    }
}
