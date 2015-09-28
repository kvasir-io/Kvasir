#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SSC0_cr{
        using Addr = Register::Address<0xf0008000,0xffff7cfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SWRST; 
    }
    namespace SSC0_cmr{
        using Addr = Register::Address<0xf0008004,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DIV; 
    }
    namespace SSC0_rcmr{
        using Addr = Register::Address<0xf0008010,0x0000e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> CKO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CKG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> STTDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PERIOD; 
    }
    namespace SSC0_rfmr{
        using Addr = Register::Address<0xf0008014,0x0e80f040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DATLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LOOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DATNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> FSLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> FSOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FSEDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> FSLEN_EXT; 
    }
    namespace SSC0_tcmr{
        using Addr = Register::Address<0xf0008018,0x0000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> CKO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CKG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> STTDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PERIOD; 
    }
    namespace SSC0_tfmr{
        using Addr = Register::Address<0xf000801c,0x0e00f040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DATLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DATDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DATNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> FSLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> FSOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FSDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FSEDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> FSLEN_EXT; 
    }
    namespace SSC0_rhr{
        using Addr = Register::Address<0xf0008020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RDAT; 
    }
    namespace SSC0_thr{
        using Addr = Register::Address<0xf0008024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TDAT; 
    }
    namespace SSC0_rshr{
        using Addr = Register::Address<0xf0008030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RSDAT; 
    }
    namespace SSC0_tshr{
        using Addr = Register::Address<0xf0008034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TSDAT; 
    }
    namespace SSC0_rc0r{
        using Addr = Register::Address<0xf0008038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CP0; 
    }
    namespace SSC0_rc1r{
        using Addr = Register::Address<0xf000803c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CP1; 
    }
    namespace SSC0_sr{
        using Addr = Register::Address<0xf0008040,0xfffcf0cc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXSYN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RXSYN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXEN; 
    }
    namespace SSC0_ier{
        using Addr = Register::Address<0xf0008044,0xfffff0cc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXSYN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RXSYN; 
    }
    namespace SSC0_idr{
        using Addr = Register::Address<0xf0008048,0xfffff0cc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXSYN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RXSYN; 
    }
    namespace SSC0_imr{
        using Addr = Register::Address<0xf000804c,0xfffff0cc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXSYN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RXSYN; 
    }
    namespace SSC0_wpmr{
        using Addr = Register::Address<0xf00080e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace SSC0_wpsr{
        using Addr = Register::Address<0xf00080e8,0xffffffff>;
    }
}
