#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonefreq_mon{
        using Addr = Register::Address<0x40050014,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,9)> FCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MEAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonextal_osc_ctrl{
        using Addr = Register::Address<0x40050018,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HF; 
    }
    namespace Nonepll0usb_stat{
        using Addr = Register::Address<0x4005001c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FR; 
    }
    namespace Nonepll0usb_ctrl{
        using Addr = Register::Address<0x40050020,0xe0fff7a0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DIRECTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIRECTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonepll0usb_mdiv{
        using Addr = Register::Address<0x40050024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0)> MDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,17)> SELP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,22)> SELI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> SELR; 
    }
    namespace Nonepll0usb_np_div{
        using Addr = Register::Address<0x40050028,0xffc00f80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,12)> NDEC; 
    }
    namespace Nonepll0audio_stat{
        using Addr = Register::Address<0x4005002c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FR; 
    }
    namespace Nonepll0audio_ctrl{
        using Addr = Register::Address<0x40050030,0xe0ff87a0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DIRECTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIRECTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PLLFRAQ_REQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SEL_EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MOD_PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonepll0audio_mdiv{
        using Addr = Register::Address<0x40050034,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0)> MDEC; 
    }
    namespace Nonepll0audio_np_div{
        using Addr = Register::Address<0x40050038,0xffc00f80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,12)> NDEC; 
    }
    namespace Nonepll0audio_frac{
        using Addr = Register::Address<0x4005003c,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0)> PLLFRACT_CTRL; 
    }
    namespace Nonepll1_stat{
        using Addr = Register::Address<0x40050040,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LOCK; 
    }
    namespace Nonepll1_ctrl{
        using Addr = Register::Address<0x40050044,0xe000c43c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FBSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIRECT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Noneidiva_ctrl{
        using Addr = Register::Address<0x40050048,0xe0fff7f2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> IDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Noneidivb_ctrl{
        using Addr = Register::Address<0x4005004c,0xe0fff7c2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> IDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Noneidivc_ctrl{
        using Addr = Register::Address<0x40050450,0xe0fff7c2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> IDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Noneidivd_ctrl{
        using Addr = Register::Address<0x40050454,0xe0fff7c2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> IDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Noneidive_ctrl{
        using Addr = Register::Address<0x40050058,0xe0fff402>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,2)> IDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_safe_clk{
        using Addr = Register::Address<0x4005005c,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_usb0_clk{
        using Addr = Register::Address<0x40050060,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_periph_clk{
        using Addr = Register::Address<0x40050064,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_usb1_clk{
        using Addr = Register::Address<0x40050068,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_m4_clk{
        using Addr = Register::Address<0x4005006c,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_spifi_clk{
        using Addr = Register::Address<0x40050070,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_spi_clk{
        using Addr = Register::Address<0x40050074,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_phy_rx_clk{
        using Addr = Register::Address<0x40050078,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_phy_tx_clk{
        using Addr = Register::Address<0x4005007c,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_apb1_clk{
        using Addr = Register::Address<0x40050080,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_apb3_clk{
        using Addr = Register::Address<0x40050084,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_lcd_clk{
        using Addr = Register::Address<0x40050088,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_sdio_clk{
        using Addr = Register::Address<0x40050090,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_ssp0_clk{
        using Addr = Register::Address<0x40050094,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_ssp1_clk{
        using Addr = Register::Address<0x40050098,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_uart0_clk{
        using Addr = Register::Address<0x4005009c,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_uart1_clk{
        using Addr = Register::Address<0x400500a0,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_uart2_clk{
        using Addr = Register::Address<0x400500a4,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_uart3_clk{
        using Addr = Register::Address<0x400500a8,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_out_clk{
        using Addr = Register::Address<0x400500ac,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_apll_clk{
        using Addr = Register::Address<0x400500c0,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_cgu_out0_clk{
        using Addr = Register::Address<0x400500c4,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
    namespace Nonebase_cgu_out1_clk{
        using Addr = Register::Address<0x400500c8,0xe0fff7fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTOBLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CLK_SEL; 
    }
}
