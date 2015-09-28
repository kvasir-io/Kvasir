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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RSTS_SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RSTS_CPU; 
    }
    namespace Noneiprstc1{
        using Addr = Register::Address<0x50000008,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHIP_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPU_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PDMA_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EBI_RST; 
    }
    namespace Noneiprstc2{
        using Addr = Register::Address<0x5000000c,0xc6080cc1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPIO_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TMR0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TMR1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TMR2_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TMR3_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> I2C0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> I2C1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SPI1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SPI3_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> UART0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> UART1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> UART2_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PWM03_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PWM47_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ACMP_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PS2_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CAN0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> USBD_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ADC_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> I2S_RST; 
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
    namespace Nonetempcr{
        using Addr = Register::Address<0x5000001c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VTEMP_EN; 
    }
    namespace Noneporcr{
        using Addr = Register::Address<0x50000024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> POR_DIS_CODE; 
    }
    namespace Nonegpa_mfp{
        using Addr = Register::Address<0x50000030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPA_MFP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPA_MFP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GPA_MFP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GPA_MFP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GPA_MFP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GPA_MFP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GPA_MFP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GPA_MFP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> GPA_MFP8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GPA_MFP9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GPA_MFP10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> GPA_MFP11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> GPA_MFP12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> GPA_MFP13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> GPA_MFP14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GPA_MFP15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> GPA_TYPEn; 
    }
    namespace Nonegpb_mfp{
        using Addr = Register::Address<0x50000034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPB_MFP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPB_MFP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GPB_MFP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GPB_MFP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GPB_MFP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GPB_MFP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GPB_MFP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GPB_MFP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> GPB_MFP8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GPB_MFP9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GPB_MFP10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> GPB_MFP11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> GPB_MFP12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> GPB_MFP13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> GPB_MFP14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GPB_MFP15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> GPB_TYPEn; 
    }
    namespace Nonegpc_mfp{
        using Addr = Register::Address<0x50000038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPI0_SS0_I2SLRCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SPI0_CLK_I2SBCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SPI0_MISO0_I2SDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SPI0_MOSI0_I2SDO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SPI0_MISO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPI0_MOSI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CPP0_AD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CPN0_AD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SPI1_SS0_MCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SPI1_CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SPI1_MISO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SPI1_MOSI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1_MISO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SPI1_MOSI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CPP1_AD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CPP1_AD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> SCHMITT; 
    }
    namespace Nonegpd_mfp{
        using Addr = Register::Address<0x5000003c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPD_MFP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPD_MFP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GPD_MFP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GPD_MFP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GPD_MFP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GPD_MFP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GPD_MFP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GPD_MFP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> GPD_MFP8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GPD_MFP9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GPD_MFP10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> GPD_MFP11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> GPD_MFP12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> GPD_MFP13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> GPD_MFP14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GPD_MFP15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> GPD_TYPEn; 
    }
    namespace Nonegpe_mfp{
        using Addr = Register::Address<0x50000040,0x0000ffdc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPE_MFP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GPE_MFP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GPE_MFP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> GPE_TYPEn; 
    }
    namespace Nonealt_mfp{
        using Addr = Register::Address<0x50000050,0xff008000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PB10_S01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB9_S11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PA7_S21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB14_S31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB11_PWM4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PC0_I2SLRCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC1_I2SBCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PC2_I2SDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PC3_I2SDO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PA15_I2SMCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PB12_CLKO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EBI_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EBI_MCLK_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EBI_nWRL_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EBI_nWRH_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> EBI_HB_EN; 
    }
    namespace Noneregwrprot{
        using Addr = Register::Address<0x50000100,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REGPROTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> REGWRPROT; 
    }
}
