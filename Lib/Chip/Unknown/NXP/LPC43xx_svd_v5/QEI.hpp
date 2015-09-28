#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecon{
        using Addr = Register::Address<0x400c6000,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RESP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RESPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RESV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RESI; 
    }
    namespace Noneconf{
        using Addr = Register::Address<0x400c6008,0xfff0ffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIRINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SIGMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INVINX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRESPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> INXGATE; 
    }
    namespace Nonestat{
        using Addr = Register::Address<0x400c6004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
    }
    namespace Nonepos{
        using Addr = Register::Address<0x400c600c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> POS; 
    }
    namespace Nonemaxpos{
        using Addr = Register::Address<0x400c6010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MAXPOS; 
    }
    namespace Nonecmpos0{
        using Addr = Register::Address<0x400c6014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PCMP0; 
    }
    namespace Nonecmpos1{
        using Addr = Register::Address<0x400c6018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PCMP1; 
    }
    namespace Nonecmpos2{
        using Addr = Register::Address<0x400c601c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PCMP2; 
    }
    namespace Noneinxcnt{
        using Addr = Register::Address<0x400c6020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ENCPOS; 
    }
    namespace Noneinxcmp0{
        using Addr = Register::Address<0x400c6024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ICMP0; 
    }
    namespace Noneload{
        using Addr = Register::Address<0x400c6028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VELLOAD; 
    }
    namespace Nonetime{
        using Addr = Register::Address<0x400c602c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VELVAL; 
    }
    namespace Nonevel{
        using Addr = Register::Address<0x400c6030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VELPC; 
    }
    namespace Nonecap{
        using Addr = Register::Address<0x400c6034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VELCAP; 
    }
    namespace Nonevelcomp{
        using Addr = Register::Address<0x400c6038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VELCMP; 
    }
    namespace Nonefilterpha{
        using Addr = Register::Address<0x400c603c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FILTA; 
    }
    namespace Nonefilterphb{
        using Addr = Register::Address<0x400c6040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FILTB; 
    }
    namespace Nonefilterinx{
        using Addr = Register::Address<0x400c6044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FITLINX; 
    }
    namespace Nonewindow{
        using Addr = Register::Address<0x400c6048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> WINDOW; 
    }
    namespace Noneinxcmp1{
        using Addr = Register::Address<0x400c604c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ICMP1; 
    }
    namespace Noneinxcmp2{
        using Addr = Register::Address<0x400c6050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ICMP2; 
    }
    namespace Noneiec{
        using Addr = Register::Address<0x400c6fd8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INX_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VELC_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENCLK_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> POS0_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POS1_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> POS2_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POS0REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> POS1REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> POS2REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REV1_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REV2_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MAXPOS_Int; 
    }
    namespace Noneies{
        using Addr = Register::Address<0x400c6fdc,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INX_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VELC_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENCLK_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> POS0_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POS1_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> POS2_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POS0REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> POS1REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> POS2REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REV1_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REV2_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MAXPOS_Int; 
    }
    namespace Noneintstat{
        using Addr = Register::Address<0x400c6fe0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INX_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VELC_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIR_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERR_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENCLK_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> POS0_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POS1_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> POS2_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POS0REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> POS1REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> POS2REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REV1_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REV2_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MAXPOS_Int; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c6fe4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INX_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VELC_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIR_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERR_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENCLK_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> POS0_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POS1_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> POS2_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POS0REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> POS1REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> POS2REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REV1_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REV2_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MAXPOS_Int; 
    }
    namespace Noneclr{
        using Addr = Register::Address<0x400c6fe8,0xffff1000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INX_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VELC_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIR_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERR_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENCLK_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> POS0_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POS1_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> POS2_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POS0REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> POS1REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REV1_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REV2_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MAXPOS_Int; 
    }
    namespace Noneset{
        using Addr = Register::Address<0x400c6fec,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INX_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VELC_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIR_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERR_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENCLK_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> POS0_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POS1_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> POS2_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POS0REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> POS1REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> POS2REV_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REV1_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REV2_Int; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MAXPOS_Int; 
    }
}
