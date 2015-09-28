#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ISI_cfg1{
        using Addr = Register::Address<0xf0034000,0x00008023>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HSYNC_POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VSYNC_POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PIXCLK_POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EMB_SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CRC_SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> FRATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DISCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> THMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> SFD; 
    }
    namespace ISI_cfg2{
        using Addr = Register::Address<0xf0034004,0x08000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> IM_VSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> GS_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RGB_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> GRAYSCALE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RGB_SWAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> COL_SPACE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> IM_HSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> YCC_SWAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> RGB_CFG; 
    }
    namespace ISI_psize{
        using Addr = Register::Address<0xf0034008,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> PREV_VSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> PREV_HSIZE; 
    }
    namespace ISI_pdecf{
        using Addr = Register::Address<0xf003400c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DEC_FACTOR; 
    }
    namespace ISI_y2r_set0{
        using Addr = Register::Address<0xf0034010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> C2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> C3; 
    }
    namespace ISI_y2r_set1{
        using Addr = Register::Address<0xf0034014,0xffff8e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> C4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> Yoff; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> Croff; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> Cboff; 
    }
    namespace ISI_r2y_set0{
        using Addr = Register::Address<0xf0034018,0xfe808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> C2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> Roff; 
    }
    namespace ISI_r2y_set1{
        using Addr = Register::Address<0xf003401c,0xfe808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> C3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> C4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> C5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> Goff; 
    }
    namespace ISI_r2y_set2{
        using Addr = Register::Address<0xf0034020,0xfe808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> C6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> C7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> C8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> Boff; 
    }
    namespace ISI_cr{
        using Addr = Register::Address<0xf0034024,0xfffffef8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ISI_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ISI_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ISI_SRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ISI_CDC; 
    }
    namespace ISI_sr{
        using Addr = Register::Address<0xf0034028,0xf0f4faf8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIS_DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CDC_PND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> VSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PXFR_DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CXFR_DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> P_OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> C_OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CRC_ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FR_OVR; 
    }
    namespace ISI_ier{
        using Addr = Register::Address<0xf003402c,0xf0fcfbf9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIS_DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> VSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PXFR_DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CXFR_DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> P_OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> C_OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CRC_ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FR_OVR; 
    }
    namespace ISI_idr{
        using Addr = Register::Address<0xf0034030,0xf0fcfbf9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIS_DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> VSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PXFR_DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CXFR_DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> P_OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> C_OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CRC_ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FR_OVR; 
    }
    namespace ISI_imr{
        using Addr = Register::Address<0xf0034034,0xf0fcfbf9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIS_DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> VSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PXFR_DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CXFR_DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> P_OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> C_OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CRC_ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FR_OVR; 
    }
    namespace ISI_dma_cher{
        using Addr = Register::Address<0xf0034038,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P_CH_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> C_CH_EN; 
    }
    namespace ISI_dma_chdr{
        using Addr = Register::Address<0xf003403c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P_CH_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> C_CH_DIS; 
    }
    namespace ISI_dma_chsr{
        using Addr = Register::Address<0xf0034040,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P_CH_S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> C_CH_S; 
    }
    namespace ISI_dma_p_addr{
        using Addr = Register::Address<0xf0034044,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> P_ADDR; 
    }
    namespace ISI_dma_p_ctrl{
        using Addr = Register::Address<0xf0034048,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P_FETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P_WB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P_IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P_DONE; 
    }
    namespace ISI_dma_p_dscr{
        using Addr = Register::Address<0xf003404c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> P_DSCR; 
    }
    namespace ISI_dma_c_addr{
        using Addr = Register::Address<0xf0034050,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> C_ADDR; 
    }
    namespace ISI_dma_c_ctrl{
        using Addr = Register::Address<0xf0034054,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> C_FETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> C_WB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> C_IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> C_DONE; 
    }
    namespace ISI_dma_c_dscr{
        using Addr = Register::Address<0xf0034058,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> C_DSCR; 
    }
    namespace ISI_wpcr{
        using Addr = Register::Address<0xf00340e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WP_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WP_KEY; 
    }
    namespace ISI_wpsr{
        using Addr = Register::Address<0xf00340e8,0xff0000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WP_VS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WP_VSRC; 
    }
}
