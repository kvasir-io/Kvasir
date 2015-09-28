#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneslptmr_cr{
        using Addr = Register::Address<0x4000600c,0xffffe30e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> REVERSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DBGP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKSEL; 
    }
    namespace Noneslptmr_cnth{
        using Addr = Register::Address<0x40006010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNTH; 
    }
    namespace Noneslptmr_cntl{
        using Addr = Register::Address<0x40006014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNTL; 
    }
    namespace Noneslptmr_cmpah{
        using Addr = Register::Address<0x40006018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMPAH; 
    }
    namespace Noneslptmr_cmpal{
        using Addr = Register::Address<0x4000601c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMPAL; 
    }
    namespace Noneslptmr_cmpbh{
        using Addr = Register::Address<0x40006020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMPBH; 
    }
    namespace Noneslptmr_cmpbl{
        using Addr = Register::Address<0x40006024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMPBL; 
    }
    namespace Noneslptmr_isr{
        using Addr = Register::Address<0x4000a014,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OW; 
    }
    namespace Noneslptmr_ifr{
        using Addr = Register::Address<0x4000a020,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OW; 
    }
    namespace Noneslptmr_ier{
        using Addr = Register::Address<0x4000a054,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMPB; 
    }
}
