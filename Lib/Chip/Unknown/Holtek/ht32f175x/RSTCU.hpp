#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonerstcu_grsr{
        using Addr = Register::Address<0x40088100,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WDTRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PORSTF; 
    }
    namespace Nonerstcu_ahbprstr{
        using Addr = Register::Address<0x40088104,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMARST; 
    }
    namespace Nonerstcu_apbprstr0{
        using Addr = Register::Address<0x40088108,0xfee03ccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> I2C0RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> I2C1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SPI0RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPI1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UR0RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> UR1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AFIORST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXTIRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PARST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PDRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PERST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SCIRST; 
    }
    namespace Nonerstcu_apbprstr1{
        using Addr = Register::Address<0x4008810c,0xfe3cbcee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCTMRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WDTRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> GPTM0RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GPTM1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BFTM0RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BFTM1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OPA0RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> OPA1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ADCRST; 
    }
}
