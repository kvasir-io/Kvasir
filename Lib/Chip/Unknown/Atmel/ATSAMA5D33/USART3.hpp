#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace USART3_cr{
        using Addr = Register::Address<0xf8024000,0xfff30003>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RTSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RTSDIS; 
    }
    namespace USART3_cr_spi_mode{
        using Addr = Register::Address<0xf8024000,0xfff3fe03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSTTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RSTSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RCS; 
    }
    namespace USART3_mr{
        using Addr = Register::Address<0xf8024004,0x08000000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> INVDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MAX_ITERATION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FILTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> MODSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ONEBIT; 
    }
    namespace USART3_mr_spi_mode{
        using Addr = Register::Address<0xf8024004,0xffeefe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> USART_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> USCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CHRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> WRDBT; 
    }
    namespace USART3_ier{
        using Addr = Register::Address<0xf8024008,0xfef7d818>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CTSIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MANE; 
    }
    namespace USART3_ier_spi_mode{
        using Addr = Register::Address<0xf8024008,0xfffff9dc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UNRE; 
    }
    namespace USART3_idr{
        using Addr = Register::Address<0xf802400c,0xfef7d818>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CTSIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MANE; 
    }
    namespace USART3_idr_spi_mode{
        using Addr = Register::Address<0xf802400c,0xfffff9dc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UNRE; 
    }
    namespace USART3_imr{
        using Addr = Register::Address<0xf8024010,0xfef7d818>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CTSIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MANE; 
    }
    namespace USART3_imr_spi_mode{
        using Addr = Register::Address<0xf8024010,0xfffff9dc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UNRE; 
    }
    namespace USART3_csr{
        using Addr = Register::Address<0xf8024014,0xfe77d818>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CTSIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MANERR; 
    }
    namespace USART3_csr_spi_mode{
        using Addr = Register::Address<0xf8024014,0xfffff9dc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UNRE; 
    }
    namespace USART3_rhr{
        using Addr = Register::Address<0xf8024018,0xffff7e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RXCHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXSYNH; 
    }
    namespace USART3_thr{
        using Addr = Register::Address<0xf802401c,0xffff7e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> TXCHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXSYNH; 
    }
    namespace USART3_brgr{
        using Addr = Register::Address<0xf8024020,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> FP; 
    }
    namespace USART3_rtor{
        using Addr = Register::Address<0xf8024024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TO; 
    }
    namespace USART3_ttgr{
        using Addr = Register::Address<0xf8024028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TG; 
    }
    namespace USART3_fidi{
        using Addr = Register::Address<0xf8024040,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> FI_DI_RATIO; 
    }
    namespace USART3_ner{
        using Addr = Register::Address<0xf8024044,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> NB_ERRORS; 
    }
    namespace USART3_if{
        using Addr = Register::Address<0xf802404c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IRDA_FILTER; 
    }
    namespace USART3_man{
        using Addr = Register::Address<0xf8024050,0x8cf0ecf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TX_PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> TX_PP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TX_MPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RX_PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> RX_PP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RX_MPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DRIFT; 
    }
    namespace USART3_wpmr{
        using Addr = Register::Address<0xf80240e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace USART3_wpsr{
        using Addr = Register::Address<0xf80240e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
