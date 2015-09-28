#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneisr{
        using Addr = Register::Address<0x40012400,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOSMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADRDY; 
    }
    namespace Noneier{
        using Addr = Register::Address<0x40012404,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AWDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOSMPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADRDYIE; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x40012408,0x7fffffe8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADSTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADEN; 
    }
    namespace Nonecfgr1{
        using Addr = Register::Address<0x4001240c,0x833e0200>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> AWDCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> AWDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> AWDSGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DISCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AUTOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AUTDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CONT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OVRMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> EXTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ALIGN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SCANDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMACFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAEN; 
    }
    namespace Nonecfgr2{
        using Addr = Register::Address<0x40012410,0x3fffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> JITOFF_D4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> JITOFF_D2; 
    }
    namespace Nonesmpr{
        using Addr = Register::Address<0x40012414,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SMPR; 
    }
    namespace Nonetr{
        using Addr = Register::Address<0x40012420,0xf000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> HT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> LT; 
    }
    namespace Nonechselr{
        using Addr = Register::Address<0x40012428,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CHSEL18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CHSEL17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CHSEL16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CHSEL15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CHSEL14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CHSEL13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CHSEL12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CHSEL11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CHSEL10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CHSEL9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHSEL8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHSEL7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHSEL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CHSEL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CHSEL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHSEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHSEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHSEL0; 
    }
    namespace Nonedr{
        using Addr = Register::Address<0x40012440,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
    namespace Noneccr{
        using Addr = Register::Address<0x40012708,0xfe3fffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> VBATEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> VREFEN; 
    }
}
