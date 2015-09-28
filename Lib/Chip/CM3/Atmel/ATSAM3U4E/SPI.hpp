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
        using Addr = Register::Address<0x40008010,0xfffef8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NSSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UNDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SPIENS; 
    }
    namespace SPI_ier{
        using Addr = Register::Address<0x40008014,0xfffff8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NSSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UNDES; 
    }
    namespace SPI_idr{
        using Addr = Register::Address<0x40008018,0xfffff8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> NSSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UNDES; 
    }
    namespace SPI_imr{
        using Addr = Register::Address<0x4000801c,0xfffff8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRES; 
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
}
