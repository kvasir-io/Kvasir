#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SPI0_cr{
        using Addr = Register::Address<0xfffc8000,0xfeffff7c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SPIDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> LASTXFER; 
    }
    namespace SPI0_mr{
        using Addr = Register::Address<0xfffc8004,0x00f0ff48>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCSDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MODFDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WDRBT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LLB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DLYBCS; 
    }
    namespace SPI0_rdr{
        using Addr = Register::Address<0xfffc8008,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PCS; 
    }
    namespace SPI0_tdr{
        using Addr = Register::Address<0xfffc800c,0xfef00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> LASTXFER; 
    }
    namespace SPI0_sr{
        using Addr = Register::Address<0xfffc8010,0xfffefc00>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SPIENS; 
    }
    namespace SPI0_ier{
        using Addr = Register::Address<0xfffc8014,0xfffffc00>;
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
    }
    namespace SPI0_idr{
        using Addr = Register::Address<0xfffc8018,0xfffffc00>;
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
    }
    namespace SPI0_imr{
        using Addr = Register::Address<0xfffc801c,0xfffffc00>;
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
    }
    namespace SPI0_csr0{
        using Addr = Register::Address<0xfffc8030,0x00000004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSAAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> BITS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DLYBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DLYBCT; 
    }
    namespace SPI0_csr1{
        using Addr = Register::Address<0xfffc8034,0x00000004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSAAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> BITS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DLYBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DLYBCT; 
    }
    namespace SPI0_csr2{
        using Addr = Register::Address<0xfffc8038,0x00000004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSAAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> BITS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DLYBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DLYBCT; 
    }
    namespace SPI0_csr3{
        using Addr = Register::Address<0xfffc803c,0x00000004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSAAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> BITS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DLYBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DLYBCT; 
    }
    namespace SPI0_rpr{
        using Addr = Register::Address<0xfffc8100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace SPI0_rcr{
        using Addr = Register::Address<0xfffc8104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace SPI0_tpr{
        using Addr = Register::Address<0xfffc8108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace SPI0_tcr{
        using Addr = Register::Address<0xfffc810c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace SPI0_rnpr{
        using Addr = Register::Address<0xfffc8110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace SPI0_rncr{
        using Addr = Register::Address<0xfffc8114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace SPI0_tnpr{
        using Addr = Register::Address<0xfffc8118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace SPI0_tncr{
        using Addr = Register::Address<0xfffc811c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace SPI0_ptcr{
        using Addr = Register::Address<0xfffc8120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace SPI0_ptsr{
        using Addr = Register::Address<0xfffc8124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
