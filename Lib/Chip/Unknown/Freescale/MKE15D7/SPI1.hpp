#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SPI1_c1{
        using Addr = Register::Address<0x4004f000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSBFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SSOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPIE; 
    }
    namespace SPI1_c2{
        using Addr = Register::Address<0x4004f001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SPISWAI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BIDIROE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MODFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SPIMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPMIE; 
    }
    namespace SPI1_br{
        using Addr = Register::Address<0x4004f002,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> SPPR; 
    }
    namespace SPI1_s{
        using Addr = Register::Address<0x4004f003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RFIFOEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXFULLF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TNEAREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RNFULLF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPTEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SPMF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPRF; 
    }
    namespace SPI1_dh{
        using Addr = Register::Address<0x4004f004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Bits; 
    }
    namespace SPI1_dl{
        using Addr = Register::Address<0x4004f005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Bits; 
    }
    namespace SPI1_mh{
        using Addr = Register::Address<0x4004f006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Bits; 
    }
    namespace SPI1_ml{
        using Addr = Register::Address<0x4004f007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Bits; 
    }
    namespace SPI1_c3{
        using Addr = Register::Address<0x4004f008,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIFOMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RNFULLIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TNEARIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RNFULLF_MARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TNEAREF_MARK; 
    }
    namespace SPI1_ci{
        using Addr = Register::Address<0x4004f009,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPRFCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SPTEFCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RNFULLFCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TNEAREFCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXFOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXFOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXFERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFERR; 
    }
}
