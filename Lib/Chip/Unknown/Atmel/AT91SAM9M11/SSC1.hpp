#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SSC1_cr{
        using Addr = Register::Address<0xfffa0000,0xffff7cfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SWRST; 
    }
    namespace SSC1_cmr{
        using Addr = Register::Address<0xfffa0004,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DIV; 
    }
    namespace SSC1_rcmr{
        using Addr = Register::Address<0xfffa0010,0x0000e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> CKO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CKG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> STTDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PERIOD; 
    }
    namespace SSC1_rfmr{
        using Addr = Register::Address<0xfffa0014,0x0e80f040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DATLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LOOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DATNB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> FSLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> FSOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FSEDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> FSLEN_EXT; 
    }
    namespace SSC1_tcmr{
        using Addr = Register::Address<0xfffa0018,0x0000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> CKO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CKG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> STTDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PERIOD; 
    }
    namespace SSC1_tfmr{
        using Addr = Register::Address<0xfffa001c,0x0e00f040>;
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
    namespace SSC1_rhr{
        using Addr = Register::Address<0xfffa0020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RDAT; 
    }
    namespace SSC1_thr{
        using Addr = Register::Address<0xfffa0024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TDAT; 
    }
    namespace SSC1_rshr{
        using Addr = Register::Address<0xfffa0030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RSDAT; 
    }
    namespace SSC1_tshr{
        using Addr = Register::Address<0xfffa0034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TSDAT; 
    }
    namespace SSC1_rc0r{
        using Addr = Register::Address<0xfffa0038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CP0; 
    }
    namespace SSC1_rc1r{
        using Addr = Register::Address<0xfffa003c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CP1; 
    }
    namespace SSC1_sr{
        using Addr = Register::Address<0xfffa0040,0xfffcf000>;
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
    namespace SSC1_ier{
        using Addr = Register::Address<0xfffa0044,0xfffff000>;
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
    namespace SSC1_idr{
        using Addr = Register::Address<0xfffa0048,0xfffff000>;
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
    namespace SSC1_imr{
        using Addr = Register::Address<0xfffa004c,0xfffff000>;
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
    namespace SSC1_rpr{
        using Addr = Register::Address<0xfffa0100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace SSC1_rcr{
        using Addr = Register::Address<0xfffa0104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace SSC1_tpr{
        using Addr = Register::Address<0xfffa0108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace SSC1_tcr{
        using Addr = Register::Address<0xfffa010c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace SSC1_rnpr{
        using Addr = Register::Address<0xfffa0110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace SSC1_rncr{
        using Addr = Register::Address<0xfffa0114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace SSC1_tnpr{
        using Addr = Register::Address<0xfffa0118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace SSC1_tncr{
        using Addr = Register::Address<0xfffa011c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace SSC1_ptcr{
        using Addr = Register::Address<0xfffa0120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace SSC1_ptsr{
        using Addr = Register::Address<0xfffa0124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
