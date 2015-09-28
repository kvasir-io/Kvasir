#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace AFE_ch0_cfr{
        using Addr = Register::Address<0x40030000,0x1ec581ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HW_TRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DEC_CLK_INP_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DEC_CLK_EDGE_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DEC_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SD_MOD_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BYP_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,19)> PGA_GAIN_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PGA_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> DEC_OSR; 
    }
    namespace AFE_ch1_cfr{
        using Addr = Register::Address<0x40030004,0x1ec581ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HW_TRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DEC_CLK_INP_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DEC_CLK_EDGE_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DEC_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SD_MOD_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BYP_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,19)> PGA_GAIN_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PGA_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> DEC_OSR; 
    }
    namespace AFE_ch2_cfr{
        using Addr = Register::Address<0x40030008,0x1ffd81ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HW_TRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DEC_CLK_INP_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DEC_CLK_EDGE_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DEC_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SD_MOD_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BYP_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> DEC_OSR; 
    }
    namespace AFE_ch3_cfr{
        using Addr = Register::Address<0x4003000c,0x1ffd81ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HW_TRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DEC_CLK_INP_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DEC_CLK_EDGE_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DEC_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SD_MOD_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BYP_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> DEC_OSR; 
    }
    namespace AFE_cr{
        using Addr = Register::Address<0x40030018,0x059b01ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,9)> STRTUP_CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RESULT_FORMAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DLY_OK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RST_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> LPM_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SOFT_TRG3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SOFT_TRG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SOFT_TRG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SOFT_TRG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MSTR_EN; 
    }
    namespace AFE_ckr{
        using Addr = Register::Address<0x4003001c,0x0f9fffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> CLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> DIV; 
    }
    namespace AFE_di{
        using Addr = Register::Address<0x40030020,0x087fffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> INTEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> INTEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> INTEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> INTEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMAEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMAEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMAEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DMAEN0; 
    }
    namespace AFE_ch0_dr{
        using Addr = Register::Address<0x4003002c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> DLY; 
    }
    namespace AFE_ch1_dr{
        using Addr = Register::Address<0x40030030,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> DLY; 
    }
    namespace AFE_ch2_dr{
        using Addr = Register::Address<0x40030034,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> DLY; 
    }
    namespace AFE_ch3_dr{
        using Addr = Register::Address<0x40030038,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> DLY; 
    }
    namespace AFE_ch0_rr{
        using Addr = Register::Address<0x40030044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> SDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,23)> SIGN_BITS; 
    }
    namespace AFE_ch1_rr{
        using Addr = Register::Address<0x40030048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> SDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,23)> SIGN_BITS; 
    }
    namespace AFE_ch2_rr{
        using Addr = Register::Address<0x4003004c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> SDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,23)> SIGN_BITS; 
    }
    namespace AFE_ch3_rr{
        using Addr = Register::Address<0x40030050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> SDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,23)> SIGN_BITS; 
    }
    namespace AFE_sr{
        using Addr = Register::Address<0x4003005c,0x0e10ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RDY3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RDY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RDY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> OVR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OVR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> OVR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> OVR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> COC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> COC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> COC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> COC0; 
    }
}
