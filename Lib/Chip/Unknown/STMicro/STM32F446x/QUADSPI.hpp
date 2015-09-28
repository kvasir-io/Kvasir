#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0xa0001000,0x0020e020>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRESCALER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PMM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> APMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SMIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> FTHRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DFM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SSHIFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ABORT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nonedcr{
        using Addr = Register::Address<0xa0001004,0xffe0f8fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> FSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CSHT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CKMODE; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0xa0001008,0xffff80c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> FLEVEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SMF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEF; 
    }
    namespace Nonefcr{
        using Addr = Register::Address<0xa000100c,0xffffffe4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSMF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTEF; 
    }
    namespace Nonedlr{
        using Addr = Register::Address<0xa0001010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DL; 
    }
    namespace Noneccr{
        using Addr = Register::Address<0xa0001014,0x20800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DDRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DHHC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SIOO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> FMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> DMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,18)> DCYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> ABSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> ABMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ADSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> IMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INSTRUCTION; 
    }
    namespace Nonear{
        using Addr = Register::Address<0xa0001018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDRESS; 
    }
    namespace Noneabr{
        using Addr = Register::Address<0xa000101c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ALTERNATE; 
    }
    namespace Nonedr{
        using Addr = Register::Address<0xa0001020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonepsmkr{
        using Addr = Register::Address<0xa0001024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MASK; 
    }
    namespace Nonepsmar{
        using Addr = Register::Address<0xa0001028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MATCH; 
    }
    namespace Nonepir{
        using Addr = Register::Address<0xa000102c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INTERVAL; 
    }
    namespace Nonelptr{
        using Addr = Register::Address<0xa0001030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIMEOUT; 
    }
}
