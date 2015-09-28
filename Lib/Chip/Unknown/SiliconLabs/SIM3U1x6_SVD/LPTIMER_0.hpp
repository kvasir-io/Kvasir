#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40038000,0x3ef0f00c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TMRSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TMRCAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CMPSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CMPCAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OVFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CMPIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OVFTMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMPTMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CMPRSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DBGMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RUN; 
    }
    namespace Nonedata{
        using Addr = Register::Address<0x40038010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x40038020,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMPI; 
    }
}
