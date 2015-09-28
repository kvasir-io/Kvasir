#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemmccr{
        using Addr = Register::Address<0x40028100,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MCP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MCFHP; 
    }
    namespace Nonemmcrir{
        using Addr = Register::Address<0x40028104,0xfffdff9f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RFCES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RFAES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RGUFS; 
    }
    namespace Nonemmctir{
        using Addr = Register::Address<0x40028108,0xffdf3fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TGFSCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TGFMSCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TGFS; 
    }
    namespace Nonemmcrimr{
        using Addr = Register::Address<0x4002810c,0xfffdff9f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RFCEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RFAEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RGUFM; 
    }
    namespace Nonemmctimr{
        using Addr = Register::Address<0x40028110,0xffdf3fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TGFSCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TGFMSCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TGFM; 
    }
    namespace Nonemmctgfsccr{
        using Addr = Register::Address<0x4002814c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TGFSCC; 
    }
    namespace Nonemmctgfmsccr{
        using Addr = Register::Address<0x40028150,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TGFMSCC; 
    }
    namespace Nonemmctgfcr{
        using Addr = Register::Address<0x40028168,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TGFC; 
    }
    namespace Nonemmcrfcecr{
        using Addr = Register::Address<0x40028194,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RFCFC; 
    }
    namespace Nonemmcrfaecr{
        using Addr = Register::Address<0x40028198,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RFAEC; 
    }
    namespace Nonemmcrgufcr{
        using Addr = Register::Address<0x400281c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RGUFC; 
    }
}
