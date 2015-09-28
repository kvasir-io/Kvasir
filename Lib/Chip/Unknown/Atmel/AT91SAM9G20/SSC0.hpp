#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SSC0_cr{
        using Addr = Register::Address<0xfffbc000,0xffff7cfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SWRST; 
    }
    namespace SSC0_cmr{
        using Addr = Register::Address<0xfffbc004,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DIV; 
    }
    namespace SSC0_rcmr{
        using Addr = Register::Address<0xfffbc010,0x0000e000>;
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
        using Addr = Register::Address<0xfffbc014,0xfe80f040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DATLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LOOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DATNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> FSLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> FSOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FSEDGE; 
    }
    namespace SSC0_tcmr{
        using Addr = Register::Address<0xfffbc018,0x0000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> CKO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CKG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> STTDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PERIOD; 
    }
    namespace SSC0_tfmr{
        using Addr = Register::Address<0xfffbc01c,0xfe00f040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DATLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DATDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DATNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> FSLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> FSOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FSDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FSEDGE; 
    }
    namespace SSC0_rhr{
        using Addr = Register::Address<0xfffbc020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RDAT; 
    }
    namespace SSC0_thr{
        using Addr = Register::Address<0xfffbc024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TDAT; 
    }
    namespace SSC0_rshr{
        using Addr = Register::Address<0xfffbc030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RSDAT; 
    }
    namespace SSC0_tshr{
        using Addr = Register::Address<0xfffbc034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TSDAT; 
    }
    namespace SSC0_rc0r{
        using Addr = Register::Address<0xfffbc038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CP0; 
    }
    namespace SSC0_rc1r{
        using Addr = Register::Address<0xfffbc03c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CP1; 
    }
    namespace SSC0_sr{
        using Addr = Register::Address<0xfffbc040,0xfffcf000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXSYN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RXSYN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXEN; 
    }
    namespace SSC0_ier{
        using Addr = Register::Address<0xfffbc044,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXSYN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RXSYN; 
    }
    namespace SSC0_idr{
        using Addr = Register::Address<0xfffbc048,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXSYN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RXSYN; 
    }
    namespace SSC0_imr{
        using Addr = Register::Address<0xfffbc04c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXSYN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RXSYN; 
    }
    namespace SSC0_rpr{
        using Addr = Register::Address<0xfffbc100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace SSC0_rcr{
        using Addr = Register::Address<0xfffbc104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace SSC0_tpr{
        using Addr = Register::Address<0xfffbc108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace SSC0_tcr{
        using Addr = Register::Address<0xfffbc10c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace SSC0_rnpr{
        using Addr = Register::Address<0xfffbc110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace SSC0_rncr{
        using Addr = Register::Address<0xfffbc114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace SSC0_tnpr{
        using Addr = Register::Address<0xfffbc118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace SSC0_tncr{
        using Addr = Register::Address<0xfffbc11c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace SSC0_ptcr{
        using Addr = Register::Address<0xfffbc120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace SSC0_ptsr{
        using Addr = Register::Address<0xfffbc124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
