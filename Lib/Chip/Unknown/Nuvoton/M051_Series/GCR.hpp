#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepdid{
        using Addr = Register::Address<0x50000000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PDID; 
    }
    namespace Nonerstsrc{
        using Addr = Register::Address<0x50000004,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RSTS_POR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RSTS_RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTS_WDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSTS_LVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RSTS_BOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RSTS_MCU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RSTS_CPU; 
    }
    namespace Noneiprstc1{
        using Addr = Register::Address<0x50000008,0xfffffff4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHIP_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPU_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EBI_RST; 
    }
    namespace Noneiprstc2{
        using Addr = Register::Address<0x5000000c,0xefcccec1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPIO_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TMR0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TMR1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TMR2_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TMR3_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> I2C_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SPI1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> UART0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> UART1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PWM03_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PWM47_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ADC_RST; 
    }
    namespace Nonebodcr{
        using Addr = Register::Address<0x50000018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BOD_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> BOD_VL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BOD_RSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BOD_INTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BOD_LPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BOD_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LVR_EN; 
    }
    namespace Noneporcr{
        using Addr = Register::Address<0x50000024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> POR_DIS_CODE; 
    }
    namespace Nonep0_mfp{
        using Addr = Register::Address<0x50000030,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> P0_MFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P0_ALT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P0_ALT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P0_ALT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P0_ALT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P0_ALT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P0_ALT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P0_ALT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P0_ALT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> P0_TYPEn; 
    }
    namespace Nonep1_mfp{
        using Addr = Register::Address<0x50000034,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> P1_MFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P1_ALT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P1_ALT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P1_ALT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P1_ALT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P1_ALT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P1_ALT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P1_ALT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P1_ALT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> P1_TYPEn; 
    }
    namespace Nonep2_mfp{
        using Addr = Register::Address<0x50000038,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> P2_MFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P2_ALT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P2_ALT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P2_ALT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P2_ALT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P2_ALT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P2_ALT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P2_ALT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P2_ALT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> P2_TYPEn; 
    }
    namespace Nonep3_mfp{
        using Addr = Register::Address<0x5000003c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> P3_MFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P3_ALT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P3_ALT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P3_ALT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P3_ALT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P3_ALT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P3_ALT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P3_ALT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P3_ALT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> P3_TYPEn; 
    }
    namespace Nonep4_mfp{
        using Addr = Register::Address<0x50000040,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> P4_MFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P4_ALT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P4_ALT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P4_ALT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P4_ALT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P4_ALT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P4_ALT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P4_ALT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P4_ALT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> P4_TYPEn; 
    }
    namespace Noneregwrprot{
        using Addr = Register::Address<0x50000100,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> REGWRPROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REGPROTDIS; 
    }
}
