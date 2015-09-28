#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40006c00,0xffffc010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> TRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AUTOTRIMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ESYNCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYNCWARNIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYNCOKIE; 
    }
    namespace Nonecfgr{
        using Addr = Register::Address<0x40006c04,0x48000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SYNCPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> SYNCSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> SYNCDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> FELIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RELOAD; 
    }
    namespace Noneisr{
        using Addr = Register::Address<0x40006c08,0x000078f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> FECAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FEDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TRIMOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SYNCMISS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SYNCERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ESYNCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYNCWARNF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYNCOKF; 
    }
    namespace Noneicr{
        using Addr = Register::Address<0x40006c0c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ESYNCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYNCWARNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYNCOKC; 
    }
}
