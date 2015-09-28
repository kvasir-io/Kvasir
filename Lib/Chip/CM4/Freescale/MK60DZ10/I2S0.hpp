#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace I2S0_tx0{
        using Addr = Register::Address<0x4002f000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TX0; 
    }
    namespace I2S0_tx1{
        using Addr = Register::Address<0x4002f004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TX1; 
    }
    namespace I2S0_rx0{
        using Addr = Register::Address<0x4002f008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RX0; 
    }
    namespace I2S0_rx1{
        using Addr = Register::Address<0x4002f00c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RX1; 
    }
    namespace I2S0_cr{
        using Addr = Register::Address<0x4002f010,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> I2SEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SYN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> I2SMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYSCLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TCHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLKIST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TFRCLKDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RFRCLKDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SYNCTXFS; 
    }
    namespace I2S0_isr{
        using Addr = Register::Address<0x4002f014,0xfe780000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TFE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TFE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TUE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TUE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ROE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TDE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TDE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RDR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RDR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CMDDU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CMDAU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TRFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RFRC; 
    }
    namespace I2S0_ier{
        using Addr = Register::Address<0x4002f018,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TFE0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TFE1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RFF0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RFF1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RLSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TLSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RFSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TFSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TUE0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TUE1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROE0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ROE1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TDE0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TDE1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RDR0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RDR1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CMDDUEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CMDAUEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TFRC_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RFRC_EN; 
    }
    namespace I2S0_tcr{
        using Addr = Register::Address<0x4002f01c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TFSL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TFSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TSCKP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TSHFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TFDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TFEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TFEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXBIT0; 
    }
    namespace I2S0_rcr{
        using Addr = Register::Address<0x4002f020,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RFSL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RFSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSCKP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RSHFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RFDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RFEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RFEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXBIT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXEXT; 
    }
    namespace I2S0_tccr{
        using Addr = Register::Address<0x4002f024,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,13)> WL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DIV2; 
    }
    namespace I2S0_rccr{
        using Addr = Register::Address<0x4002f028,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,13)> WL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DIV2; 
    }
    namespace I2S0_fcsr{
        using Addr = Register::Address<0x4002f02c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TFWM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RFWM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TFCNT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> RFCNT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TFWM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> RFWM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TFCNT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> RFCNT1; 
    }
    namespace I2S0_acnt{
        using Addr = Register::Address<0x4002f038,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AC97EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,5)> FRDIV; 
    }
    namespace I2S0_acadd{
        using Addr = Register::Address<0x4002f03c,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0)> ACADD; 
    }
    namespace I2S0_acdat{
        using Addr = Register::Address<0x4002f040,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0)> ACDAT; 
    }
    namespace I2S0_atag{
        using Addr = Register::Address<0x4002f044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ATAG; 
    }
    namespace I2S0_tmsk{
        using Addr = Register::Address<0x4002f048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TMSK; 
    }
    namespace I2S0_rmsk{
        using Addr = Register::Address<0x4002f04c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RMSK; 
    }
    namespace I2S0_accst{
        using Addr = Register::Address<0x4002f050,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> ACCST; 
    }
    namespace I2S0_accen{
        using Addr = Register::Address<0x4002f054,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> ACCEN; 
    }
    namespace I2S0_accdis{
        using Addr = Register::Address<0x4002f058,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> ACCDIS; 
    }
}
