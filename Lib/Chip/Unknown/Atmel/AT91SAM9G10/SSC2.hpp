#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SSC2_cr{
        using Addr = Register::Address<0xfffc4000,0xffff7cfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SWRST; 
    }
    namespace SSC2_cmr{
        using Addr = Register::Address<0xfffc4004,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DIV; 
    }
    namespace SSC2_rcmr{
        using Addr = Register::Address<0xfffc4010,0x0000e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> CKO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CKG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> STTDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PERIOD; 
    }
    namespace SSC2_rfmr{
        using Addr = Register::Address<0xfffc4014,0xfe80f040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DATLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LOOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DATNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> FSLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> FSOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FSEDGE; 
    }
    namespace SSC2_tcmr{
        using Addr = Register::Address<0xfffc4018,0x0000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> CKO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CKG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> STTDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PERIOD; 
    }
    namespace SSC2_tfmr{
        using Addr = Register::Address<0xfffc401c,0xfe00f040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DATLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DATDEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DATNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> FSLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> FSOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FSDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FSEDGE; 
    }
    namespace SSC2_rhr{
        using Addr = Register::Address<0xfffc4020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RDAT; 
    }
    namespace SSC2_thr{
        using Addr = Register::Address<0xfffc4024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TDAT; 
    }
    namespace SSC2_rshr{
        using Addr = Register::Address<0xfffc4030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RSDAT; 
    }
    namespace SSC2_tshr{
        using Addr = Register::Address<0xfffc4034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TSDAT; 
    }
    namespace SSC2_rc0r{
        using Addr = Register::Address<0xfffc4038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CP0; 
    }
    namespace SSC2_rc1r{
        using Addr = Register::Address<0xfffc403c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CP1; 
    }
    namespace SSC2_sr{
        using Addr = Register::Address<0xfffc4040,0xfffcf000>;
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
    namespace SSC2_ier{
        using Addr = Register::Address<0xfffc4044,0xfffff000>;
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
    namespace SSC2_idr{
        using Addr = Register::Address<0xfffc4048,0xfffff000>;
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
    namespace SSC2_imr{
        using Addr = Register::Address<0xfffc404c,0xfffff000>;
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
    namespace SSC2_rpr{
        using Addr = Register::Address<0xfffc4100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace SSC2_rcr{
        using Addr = Register::Address<0xfffc4104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace SSC2_tpr{
        using Addr = Register::Address<0xfffc4108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace SSC2_tcr{
        using Addr = Register::Address<0xfffc410c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace SSC2_rnpr{
        using Addr = Register::Address<0xfffc4110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace SSC2_rncr{
        using Addr = Register::Address<0xfffc4114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace SSC2_tnpr{
        using Addr = Register::Address<0xfffc4118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace SSC2_tncr{
        using Addr = Register::Address<0xfffc411c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace SSC2_ptcr{
        using Addr = Register::Address<0xfffc4120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace SSC2_ptsr{
        using Addr = Register::Address<0xfffc4124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
