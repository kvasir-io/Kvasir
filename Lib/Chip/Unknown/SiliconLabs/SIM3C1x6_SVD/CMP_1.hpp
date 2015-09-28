#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40020000,0x3fff9fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CMPFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CMPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CMPOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CMPEN; 
    }
    namespace Nonemode{
        using Addr = Register::Address<0x40020010,0xb0009000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> NMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> INMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> CMPMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> DACLVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> NWPUEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PWPUEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> CMPHYN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> CMPHYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> INVEN; 
    }
}
