#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SPI_cr{
        using Addr = Register::Address<0x40008000,0xfeffff7c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SPIDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> LASTXFER; 
    }
    namespace SPI_mr{
        using Addr = Register::Address<0x40008004,0x00f0ff48>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCSDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MODFDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WDRBT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LLB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DLYBCS; 
    }
    namespace SPI_rdr{
        using Addr = Register::Address<0x40008008,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PCS; 
    }
    namespace SPI_tdr{
        using Addr = Register::Address<0x4000800c,0xfef00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> LASTXFER; 
    }
    namespace SPI_sr{
        using Addr = Register::Address<0x40008010,0xfffef800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NSSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UNDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SPIENS; 
    }
    namespace SPI_ier{
        using Addr = Register::Address<0x40008014,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NSSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UNDES; 
    }
    namespace SPI_idr{
        using Addr = Register::Address<0x40008018,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NSSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UNDES; 
    }
    namespace SPI_imr{
        using Addr = Register::Address<0x4000801c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NSSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UNDES; 
    }
    namespace SPI_csr0{
        using Addr = Register::Address<0x40008030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CSNAAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSAAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> BITS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DLYBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DLYBCT; 
    }
    namespace SPI_csr1{
        using Addr = Register::Address<0x40008034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CSNAAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSAAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> BITS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DLYBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DLYBCT; 
    }
    namespace SPI_csr2{
        using Addr = Register::Address<0x40008038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CSNAAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSAAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> BITS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DLYBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DLYBCT; 
    }
    namespace SPI_csr3{
        using Addr = Register::Address<0x4000803c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CSNAAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSAAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> BITS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DLYBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DLYBCT; 
    }
    namespace SPI_wpmr{
        using Addr = Register::Address<0x400080e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace SPI_wpsr{
        using Addr = Register::Address<0x400080e8,0xffff00fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WPVSRC; 
    }
    namespace SPI_rpr{
        using Addr = Register::Address<0x40008100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace SPI_rcr{
        using Addr = Register::Address<0x40008104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace SPI_tpr{
        using Addr = Register::Address<0x40008108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace SPI_tcr{
        using Addr = Register::Address<0x4000810c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace SPI_rnpr{
        using Addr = Register::Address<0x40008110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace SPI_rncr{
        using Addr = Register::Address<0x40008114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace SPI_tnpr{
        using Addr = Register::Address<0x40008118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace SPI_tncr{
        using Addr = Register::Address<0x4000811c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace SPI_ptcr{
        using Addr = Register::Address<0x40008120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace SPI_ptsr{
        using Addr = Register::Address<0x40008124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
