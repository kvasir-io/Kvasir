#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SPI0_s{
        using Addr = Register::Address<0x40075000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RFIFOEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXFULLF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TNEAREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RNFULLF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPTEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SPMF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPRF; 
    }
    namespace SPI0_br{
        using Addr = Register::Address<0x40075001,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> SPPR; 
    }
    namespace SPI0_c2{
        using Addr = Register::Address<0x40075002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SPISWAI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BIDIROE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MODFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SPIMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPMIE; 
    }
    namespace SPI0_c1{
        using Addr = Register::Address<0x40075003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSBFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SSOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPIE; 
    }
    namespace SPI0_ml{
        using Addr = Register::Address<0x40075004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Bits; 
    }
    namespace SPI0_mh{
        using Addr = Register::Address<0x40075005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Bits; 
    }
    namespace SPI0_dl{
        using Addr = Register::Address<0x40075006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Bits; 
    }
    namespace SPI0_dh{
        using Addr = Register::Address<0x40075007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Bits; 
    }
    namespace SPI0_ci{
        using Addr = Register::Address<0x4007500a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPRFCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SPTEFCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RNFULLFCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TNEAREFCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXFOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXFOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXFERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFERR; 
    }
    namespace SPI0_c3{
        using Addr = Register::Address<0x4007500b,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIFOMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RNFULLIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TNEARIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RNFULLF_MARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TNEAREF_MARK; 
    }
}
