#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonekey{
        using Addr = Register::Address<0x40049000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KEY; 
    }
    namespace Noneperiphlock0{
        using Addr = Register::Address<0x40049020,0xe8000020>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USARTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SPIL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> I2CL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIMERL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SARADCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SSGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CMPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CSL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EMIFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AESL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CRCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RTCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLKRSTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> VMONL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IDACL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DMACTRLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DMAXBARL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> LPTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> VREFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2SL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PLLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EXTOSCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> VREGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> LPOSCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EVREGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> IVCL; 
    }
    namespace Noneperiphlock1{
        using Addr = Register::Address<0x40049040,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMUL; 
    }
}
