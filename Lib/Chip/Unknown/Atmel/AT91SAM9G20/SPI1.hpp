#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SPI1_cr{
        using Addr = Register::Address<0xfffcc000,0xfeffff7c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SPIDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> LASTXFER; 
    }
    namespace SPI1_mr{
        using Addr = Register::Address<0xfffcc004,0x00f0ff48>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCSDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MODFDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WDRBT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LLB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DLYBCS; 
    }
    namespace SPI1_rdr{
        using Addr = Register::Address<0xfffcc008,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PCS; 
    }
    namespace SPI1_tdr{
        using Addr = Register::Address<0xfffcc00c,0xfef00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> LASTXFER; 
    }
    namespace SPI1_sr{
        using Addr = Register::Address<0xfffcc010,0xfffefcf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NSSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SPIENS; 
    }
    namespace SPI1_ier{
        using Addr = Register::Address<0xfffcc014,0xfffffcf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NSSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
    }
    namespace SPI1_idr{
        using Addr = Register::Address<0xfffcc018,0xfffffcf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NSSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
    }
    namespace SPI1_imr{
        using Addr = Register::Address<0xfffcc01c,0xfffffcf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NSSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
    }
    namespace SPI1_csr0{
        using Addr = Register::Address<0xfffcc030,0x00000004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSAAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> BITS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DLYBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DLYBCT; 
    }
    namespace SPI1_csr1{
        using Addr = Register::Address<0xfffcc034,0x00000004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSAAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> BITS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DLYBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DLYBCT; 
    }
    namespace SPI1_csr2{
        using Addr = Register::Address<0xfffcc038,0x00000004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSAAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> BITS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DLYBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DLYBCT; 
    }
    namespace SPI1_csr3{
        using Addr = Register::Address<0xfffcc03c,0x00000004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NCPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSAAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> BITS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DLYBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DLYBCT; 
    }
    namespace SPI1_wpmr{
        using Addr = Register::Address<0xfffcc0e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace SPI1_wpsr{
        using Addr = Register::Address<0xfffcc0e8,0xffff00fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WPVSRC; 
    }
    namespace SPI1_rpr{
        using Addr = Register::Address<0xfffcc100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace SPI1_rcr{
        using Addr = Register::Address<0xfffcc104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace SPI1_tpr{
        using Addr = Register::Address<0xfffcc108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace SPI1_tcr{
        using Addr = Register::Address<0xfffcc10c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace SPI1_rnpr{
        using Addr = Register::Address<0xfffcc110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace SPI1_rncr{
        using Addr = Register::Address<0xfffcc114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace SPI1_tnpr{
        using Addr = Register::Address<0xfffcc118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace SPI1_tncr{
        using Addr = Register::Address<0xfffcc11c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace SPI1_ptcr{
        using Addr = Register::Address<0xfffcc120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace SPI1_ptsr{
        using Addr = Register::Address<0xfffcc124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
