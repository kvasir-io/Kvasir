#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ISI_cr1{
        using Addr = Register::Address<0xfffc0000,0x00000820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ISI_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ISI_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HSYNC_POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VSYNC_POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PIXCLK_POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EMB_SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CRC_SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> FRATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> THMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CODEC_ON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> SFD; 
    }
    namespace ISI_cr2{
        using Addr = Register::Address<0xfffc0004,0x08000000>;
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
    namespace ISI_sr{
        using Addr = Register::Address<0xfffc0008,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOFTRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CDC_PND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRC_ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FO_C_OVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FO_P_OVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FO_P_EMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FO_C_EMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FR_OVR; 
    }
    namespace ISI_ier{
        using Addr = Register::Address<0xfffc000c,0xfffffc08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOFTRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRC_ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FO_C_OVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FO_P_OVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FO_P_EMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FO_C_EMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FR_OVR; 
    }
    namespace ISI_idr{
        using Addr = Register::Address<0xfffc0010,0xfffffc08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOFTRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRC_ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FO_C_OVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FO_P_OVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FO_P_EMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FO_C_EMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FR_OVR; 
    }
    namespace ISI_imr{
        using Addr = Register::Address<0xfffc0014,0xfffffc08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOFTRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRC_ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FO_C_OVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FO_P_OVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FO_P_EMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FO_C_EMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FR_OVR; 
    }
    namespace ISI_psize{
        using Addr = Register::Address<0xfffc0020,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> PREV_VSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> PREV_HSIZE; 
    }
    namespace ISI_pdecf{
        using Addr = Register::Address<0xfffc0024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DEC_FACTOR; 
    }
    namespace ISI_ppfbd{
        using Addr = Register::Address<0xfffc0028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PREV_FBD_ADDR; 
    }
    namespace ISI_cdba{
        using Addr = Register::Address<0xfffc002c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CODEC_DMA_ADDR; 
    }
    namespace ISI_y2r_set0{
        using Addr = Register::Address<0xfffc0030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> C2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> C3; 
    }
    namespace ISI_y2r_set1{
        using Addr = Register::Address<0xfffc0034,0xffff8e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> C4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> Yoff; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> Croff; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> Cboff; 
    }
    namespace ISI_r2y_set0{
        using Addr = Register::Address<0xfffc0038,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> C2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> Roff; 
    }
    namespace ISI_r2y_set1{
        using Addr = Register::Address<0xfffc003c,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> C3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> C4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> C5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> Goff; 
    }
    namespace ISI_r2y_set2{
        using Addr = Register::Address<0xfffc0040,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> C6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> C7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> C8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> Boff; 
    }
}
