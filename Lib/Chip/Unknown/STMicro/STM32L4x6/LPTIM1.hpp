#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneisr{
        using Addr = Register::Address<0x40007c00,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DOWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ARROK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMPOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ARRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMPM; 
    }
    namespace Noneicr{
        using Addr = Register::Address<0x40007c04,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DOWNCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UPCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ARROKCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMPOKCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTTRIGCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ARRMCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMPMCF; 
    }
    namespace Noneier{
        using Addr = Register::Address<0x40007c08,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DOWNIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ARROKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMPOKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTTRIGIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ARRMIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMPMIE; 
    }
    namespace Nonecfgr{
        using Addr = Register::Address<0x40007c0c,0xfe011120>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ENC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> COUNTMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PRELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WAVPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> WAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TIMOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> TRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> TRIGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> PRESC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TRGFLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CKFLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CKPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CKSEL; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x40007c10,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CNTSTRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SNGSTRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
    }
    namespace Nonecmp{
        using Addr = Register::Address<0x40007c14,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMP; 
    }
    namespace Nonearr{
        using Addr = Register::Address<0x40007c18,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ARR; 
    }
    namespace Nonecnt{
        using Addr = Register::Address<0x40007c1c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
}
