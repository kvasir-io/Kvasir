#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace TSI0_gencs{
        using Addr = Register::Address<0x40045000,0x60000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOSDMEO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CURSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SCNIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TSIIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TSIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> NSCN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> EXTCHRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,19)> DVOLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> REFCHRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ESOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> OUTRGF; 
    }
    namespace TSI0_data{
        using Addr = Register::Address<0x40045004,0x0f3f0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TSICNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SWTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> TSICH; 
    }
    namespace TSI0_tshd{
        using Addr = Register::Address<0x40045008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> THRESL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> THRESH; 
    }
}
