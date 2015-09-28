#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonespi1_cr0{
        using Addr = Register::Address<0x40044000,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SELOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SSELC; 
    }
    namespace Nonespi1_cr1{
        using Addr = Register::Address<0x40044004,0xffff80f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> FORMAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SELAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FIRSTBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SELM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MODE; 
    }
    namespace Nonespi1_ier{
        using Addr = Register::Address<0x40044008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXBEIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXBNEIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ROIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SAIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TOIEN; 
    }
    namespace Nonespi1_cpr{
        using Addr = Register::Address<0x4004400c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CP; 
    }
    namespace Nonespi1_dr{
        using Addr = Register::Address<0x40044010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DR; 
    }
    namespace Nonespi1_sr{
        using Addr = Register::Address<0x40044014,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXBNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BUSY; 
    }
    namespace Nonespi1_fcr{
        using Addr = Register::Address<0x40044018,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TXFTLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RXFTLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TFPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RFPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FIFOEN; 
    }
    namespace Nonespi1_fsr{
        using Addr = Register::Address<0x4004401c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TXFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RXFS; 
    }
    namespace Nonespi1_ftocr{
        using Addr = Register::Address<0x40044020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TOC; 
    }
}
