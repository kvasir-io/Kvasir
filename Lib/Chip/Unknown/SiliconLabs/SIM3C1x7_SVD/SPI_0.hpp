#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x40004000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonecontrol{
        using Addr = Register::Address<0x40004010,0xfe003c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RFRQI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RFORI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TFRQI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TFORI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SLVSELI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MDFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> URI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SREI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RFILI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TFILI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NSSSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BUSYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RFCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> TFCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DBGMD; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x40004020,0x1e000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RFRQIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RFORIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TFRQIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TFORIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SLVSELIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MDFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> URIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SREIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SPIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLKPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLKPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NSSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DDIRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> NSSMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> RFTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TFTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RFIFOFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> TFIFOFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RESET; 
    }
    namespace Noneclkrate{
        using Addr = Register::Address<0x40004030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CLKDIV; 
    }
    namespace Nonefstatus{
        using Addr = Register::Address<0x40004040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RFRPTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RFWPTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TFRPTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> TFWPTR; 
    }
}
