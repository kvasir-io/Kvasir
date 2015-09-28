#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace AC97C_mr{
        using Addr = Register::Address<0xfffac008,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VRA; 
    }
    namespace AC97C_ica{
        using Addr = Register::Address<0xfffac010,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> CHID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> CHID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> CHID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> CHID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> CHID8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> CHID9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> CHID10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> CHID11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,27)> CHID12; 
    }
    namespace AC97C_oca{
        using Addr = Register::Address<0xfffac014,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CHID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> CHID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> CHID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> CHID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> CHID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> CHID8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> CHID9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> CHID10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> CHID11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,27)> CHID12; 
    }
    namespace AC97C_carhr{
        using Addr = Register::Address<0xfffac020,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0)> RDATA; 
    }
    namespace AC97C_cathr{
        using Addr = Register::Address<0xfffac024,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0)> TDATA; 
    }
    namespace AC97C_casr{
        using Addr = Register::Address<0xfffac028,0xffff33c8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXBUFF; 
    }
    namespace AC97C_camr{
        using Addr = Register::Address<0xfffac02c,0xff9833c8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PDCEN; 
    }
    namespace AC97C_cbrhr{
        using Addr = Register::Address<0xfffac030,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0)> RDATA; 
    }
    namespace AC97C_cbthr{
        using Addr = Register::Address<0xfffac034,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0)> TDATA; 
    }
    namespace AC97C_cbsr{
        using Addr = Register::Address<0xfffac038,0xffff39c8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXBUFF; 
    }
    namespace AC97C_cbmr{
        using Addr = Register::Address<0xfffac03c,0xff9833c8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PDCEN; 
    }
    namespace AC97C_corhr{
        using Addr = Register::Address<0xfffac040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SDATA; 
    }
    namespace AC97C_cothr{
        using Addr = Register::Address<0xfffac044,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> CADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> READ; 
    }
    namespace AC97C_cosr{
        using Addr = Register::Address<0xfffac048,0xffffffc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRUN; 
    }
    namespace AC97C_comr{
        using Addr = Register::Address<0xfffac04c,0xffffffc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRUN; 
    }
    namespace AC97C_sr{
        using Addr = Register::Address<0xfffac050,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> COEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CBEVT; 
    }
    namespace AC97C_ier{
        using Addr = Register::Address<0xfffac054,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> COEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CBEVT; 
    }
    namespace AC97C_idr{
        using Addr = Register::Address<0xfffac058,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> COEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CBEVT; 
    }
    namespace AC97C_imr{
        using Addr = Register::Address<0xfffac05c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> COEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CBEVT; 
    }
    namespace AC97C_rpr{
        using Addr = Register::Address<0xfffac100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace AC97C_rcr{
        using Addr = Register::Address<0xfffac104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace AC97C_tpr{
        using Addr = Register::Address<0xfffac108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace AC97C_tcr{
        using Addr = Register::Address<0xfffac10c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace AC97C_rnpr{
        using Addr = Register::Address<0xfffac110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace AC97C_rncr{
        using Addr = Register::Address<0xfffac114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace AC97C_tnpr{
        using Addr = Register::Address<0xfffac118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace AC97C_tncr{
        using Addr = Register::Address<0xfffac11c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace AC97C_ptcr{
        using Addr = Register::Address<0xfffac120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace AC97C_ptsr{
        using Addr = Register::Address<0xfffac124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
