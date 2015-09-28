#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PM_ahbmask{
        using Addr = Register::Address<0x40000414,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HPB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HPB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HPB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NVMCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> USB; 
    }
    namespace PM_apbamask{
        using Addr = Register::Address<0x40000418,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PAC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SYSCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EIC; 
    }
    namespace PM_apbasel{
        using Addr = Register::Address<0x40000409,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> APBADIV; 
    }
    namespace PM_apbbmask{
        using Addr = Register::Address<0x4000041c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PAC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DSU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NVMCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PORT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> USB; 
    }
    namespace PM_apbbsel{
        using Addr = Register::Address<0x4000040a,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> APBBDIV; 
    }
    namespace PM_apbcmask{
        using Addr = Register::Address<0x40000420,0xff5c0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PAC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EVSYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SERCOM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SERCOM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SERCOM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SERCOM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SERCOM4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SERCOM5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TCC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TCC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TCC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> AC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RFCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ATW; 
    }
    namespace PM_apbcsel{
        using Addr = Register::Address<0x4000040b,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> APBCDIV; 
    }
    namespace PM_cpusel{
        using Addr = Register::Address<0x40000408,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CPUDIV; 
    }
    namespace PM_ctrl{
        using Addr = Register::Address<0x40000400,0xffffffeb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CFDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BKUPCLK; 
    }
    namespace PM_intenclr{
        using Addr = Register::Address<0x40000434,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CKRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CFD; 
    }
    namespace PM_intenset{
        using Addr = Register::Address<0x40000435,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CKRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CFD; 
    }
    namespace PM_intflag{
        using Addr = Register::Address<0x40000436,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CKRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CFD; 
    }
    namespace PM_rcause{
        using Addr = Register::Address<0x40000438,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BOD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BOD33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SYST; 
    }
    namespace PM_sleep{
        using Addr = Register::Address<0x40000401,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> IDLE; 
    }
}
