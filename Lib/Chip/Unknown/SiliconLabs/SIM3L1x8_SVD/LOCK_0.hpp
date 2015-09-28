#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonekey{
        using Addr = Register::Address<0x40049000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KEY; 
    }
    namespace Noneperiphlock0{
        using Addr = Register::Address<0x40049020,0x87800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USARTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SPIL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> I2CL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIMERL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SARADCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CMPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AESL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CRCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RTCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RSTSRCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLKCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> VMONL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IDACL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DMACTRLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DMAXBARL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LPTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LDOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PLLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EXTOSCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PVTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LPOSCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ACCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PMUL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DTML; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> LCDL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DCDCL; 
    }
    namespace Noneperiphlock1{
        using Addr = Register::Address<0x40049040,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENCDECL; 
    }
}
