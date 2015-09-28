#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneevents_ready{
        using Addr = Register::Address<0x40003108,0xffffffff>;
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40003304,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> READY; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40003308,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> READY; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x40003500,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ENABLE; 
    }
    namespace Nonepselsck{
        using Addr = Register::Address<0x40003508,0xffffffff>;
    }
    namespace Nonepselmosi{
        using Addr = Register::Address<0x4000350c,0xffffffff>;
    }
    namespace Nonepselmiso{
        using Addr = Register::Address<0x40003510,0xffffffff>;
    }
    namespace Nonerxd{
        using Addr = Register::Address<0x40003518,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXD; 
    }
    namespace Nonetxd{
        using Addr = Register::Address<0x4000351c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXD; 
    }
    namespace Nonefrequency{
        using Addr = Register::Address<0x40003524,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FREQUENCY; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x40003554,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ORDER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPOL; 
    }
    namespace Nonepower{
        using Addr = Register::Address<0x40003ffc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POWER; 
    }
}
