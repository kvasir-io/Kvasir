#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40023000,0xf8880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BUSYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BIASEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMPPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> CMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CNVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> ACCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CSCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PMMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PMEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CMPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EOSIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CMPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EOSI; 
    }
    namespace Nonemode{
        using Addr = Register::Address<0x40023010,0xfff88808>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> RAMPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> IASEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> DTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> LPFSEL; 
    }
    namespace Nonedata{
        using Addr = Register::Address<0x40023020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
    namespace Nonescan{
        using Addr = Register::Address<0x40023030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SCANEN; 
    }
    namespace Nonecsth{
        using Addr = Register::Address<0x40023040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CSTH; 
    }
    namespace Nonemux{
        using Addr = Register::Address<0x40023050,0xffffff70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CSMX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CSDISC; 
    }
}
