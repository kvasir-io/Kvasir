#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneconfig{
        using Addr = Register::Address<0x4001a000,0x80002b3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PACKMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SCANEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SCANMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BCLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SCCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FORIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FURIEN; 
    }
    namespace Nonecontrol{
        using Addr = Register::Address<0x4001a010,0x30100000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REFGNDSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLKESEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> BMTK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> SCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> PWRTIME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BURSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> AD12BSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> VCMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ACCMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TRKMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ADBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> BIASSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> LPMDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> MREFLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> VREFSEL; 
    }
    namespace Nonesq7654{
        using Addr = Register::Address<0x4001a020,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TS4CHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,2)> TS4MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> TS5CHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> TS5MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TS6CHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,18)> TS6MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TS7CHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> TS7MUX; 
    }
    namespace Nonesq3210{
        using Addr = Register::Address<0x4001a030,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TS0CHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,2)> TS0MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> TS1CHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> TS1MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TS2CHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,18)> TS2MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TS3CHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> TS3MUX; 
    }
    namespace Nonechar32{
        using Addr = Register::Address<0x4001a040,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHR2GN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> CHR2RPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CHR2LS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHR2RSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHR2WCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CHR3GN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> CHR3RPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> CHR3LS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CHR3RSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CHR3WCIEN; 
    }
    namespace Nonechar10{
        using Addr = Register::Address<0x4001a050,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHR0GN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> CHR0RPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CHR0LS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHR0RSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHR0WCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CHR1GN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> CHR1RPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> CHR1LS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CHR1RSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CHR1WCIEN; 
    }
    namespace Nonedata{
        using Addr = Register::Address<0x4001a060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonewclimits{
        using Addr = Register::Address<0x4001a070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WCLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> WCGT; 
    }
    namespace Noneacc{
        using Addr = Register::Address<0x4001a080,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ACC; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x4001a090,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SCCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FORI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FURI; 
    }
    namespace Nonefifostatus{
        using Addr = Register::Address<0x4001a0a0,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FIFOLVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DPSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DRDYF; 
    }
}
