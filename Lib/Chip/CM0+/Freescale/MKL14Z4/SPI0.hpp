#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SPI0_c1{
        using Addr = Register::Address<0x40076000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSBFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SSOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPIE; 
    }
    namespace SPI0_c2{
        using Addr = Register::Address<0x40076001,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SPISWAI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BIDIROE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MODFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPMIE; 
    }
    namespace SPI0_br{
        using Addr = Register::Address<0x40076002,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> SPPR; 
    }
    namespace SPI0_s{
        using Addr = Register::Address<0x40076003,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPTEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SPMF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPRF; 
    }
    namespace SPI0_d{
        using Addr = Register::Address<0x40076005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Bits; 
    }
    namespace SPI0_m{
        using Addr = Register::Address<0x40076007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Bits; 
    }
}
