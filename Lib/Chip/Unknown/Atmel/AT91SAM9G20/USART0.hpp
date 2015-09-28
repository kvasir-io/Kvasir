#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace USART0_cr{
        using Addr = Register::Address<0xfffb0000,0xfff00003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSTTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RSTSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STTBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STPBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STTTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SENDA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RSTIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RSTNACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RETTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DTREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DTRDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RTSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RTSDIS; 
    }
    namespace USART0_mr{
        using Addr = Register::Address<0xfffb0004,0x08800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> USART_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> USCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CHRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> PAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CHMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MODE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CLKO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OVER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> INACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DSNACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> VAR_SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MAX_ITERATION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FILTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> MODSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ONEBIT; 
    }
    namespace USART0_ier{
        using Addr = Register::Address<0xfffb0008,0xfef0c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RIIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DSRIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DCDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CTSIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MANE; 
    }
    namespace USART0_idr{
        using Addr = Register::Address<0xfffb000c,0xfef0c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RIIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DSRIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DCDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CTSIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MANE; 
    }
    namespace USART0_imr{
        using Addr = Register::Address<0xfffb0010,0xfef0c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RIIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DSRIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DCDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CTSIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MANE; 
    }
    namespace USART0_csr{
        using Addr = Register::Address<0xfffb0014,0xfe00c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RIIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DSRIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DCDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CTSIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MANERR; 
    }
    namespace USART0_rhr{
        using Addr = Register::Address<0xfffb0018,0xffff7e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RXCHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXSYNH; 
    }
    namespace USART0_thr{
        using Addr = Register::Address<0xfffb001c,0xffff7e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> TXCHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXSYNH; 
    }
    namespace USART0_brgr{
        using Addr = Register::Address<0xfffb0020,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> FP; 
    }
    namespace USART0_rtor{
        using Addr = Register::Address<0xfffb0024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TO; 
    }
    namespace USART0_ttgr{
        using Addr = Register::Address<0xfffb0028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TG; 
    }
    namespace USART0_fidi{
        using Addr = Register::Address<0xfffb0040,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> FI_DI_RATIO; 
    }
    namespace USART0_ner{
        using Addr = Register::Address<0xfffb0044,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> NB_ERRORS; 
    }
    namespace USART0_if{
        using Addr = Register::Address<0xfffb004c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IRDA_FILTER; 
    }
    namespace USART0_man{
        using Addr = Register::Address<0xfffb0050,0x8cf0ecf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TX_PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> TX_PP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TX_MPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RX_PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> RX_PP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RX_MPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STUCKTO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DRIFT; 
    }
    namespace USART0_rpr{
        using Addr = Register::Address<0xfffb0100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace USART0_rcr{
        using Addr = Register::Address<0xfffb0104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace USART0_tpr{
        using Addr = Register::Address<0xfffb0108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace USART0_tcr{
        using Addr = Register::Address<0xfffb010c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace USART0_rnpr{
        using Addr = Register::Address<0xfffb0110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace USART0_rncr{
        using Addr = Register::Address<0xfffb0114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace USART0_tnpr{
        using Addr = Register::Address<0xfffb0118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace USART0_tncr{
        using Addr = Register::Address<0xfffb011c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace USART0_ptcr{
        using Addr = Register::Address<0xfffb0120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace USART0_ptsr{
        using Addr = Register::Address<0xfffb0124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
