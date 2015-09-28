#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonereset_ctrl0{
        using Addr = Register::Address<0x40053100,0xef80d8c8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CORE_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PERIPH_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MASTER_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WWDT_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CREG_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BUS_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SCU_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PINMUX_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> M3_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LCD_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USB0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USB1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DMA_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SDIO_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EMC_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ETHERNET_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> GPIO_RST; 
    }
    namespace Nonereset_ctrl1{
        using Addr = Register::Address<0x40053104,0xff000800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIMER0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIMER1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIMER2_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMER3_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OSTIMER_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCT_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MOTOCONPWM_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> QEI_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ADC0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADC1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DAC_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UART0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> UART1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> UART2_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> UART3_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> I2C0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> I2C1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SSP0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SSP1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> I2S_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SPIFI_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CAN1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CAN0_RST; 
    }
    namespace Nonereset_status0{
        using Addr = Register::Address<0x40053110,0xf3f0f0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CORE_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PERIPH_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MASTER_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WWDT_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> CREG_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> BUS_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> SCU_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> M3_RST; 
    }
    namespace Nonereset_status1{
        using Addr = Register::Address<0x40053114,0xfcffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LCD_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> USB0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> USB1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> DMA_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SDIO_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EMC_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ETHERNET_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> GPIO_RST; 
    }
    namespace Nonereset_status2{
        using Addr = Register::Address<0x40053118,0x00c00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TIMER0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> TIMER1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TIMER2_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TIMER3_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> RITIMER_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SCT_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> MOTOCONPWM_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> QEI_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> ADC0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> ADC1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> DAC_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> UART0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> UART1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> UART2_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> UART3_RST; 
    }
    namespace Nonereset_status3{
        using Addr = Register::Address<0x4005311c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> I2C0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> I2C1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SSP0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SSP1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> I2S_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SPIFI_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CAN1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CAN0_RST; 
    }
    namespace Nonereset_active_status0{
        using Addr = Register::Address<0x40053150,0xef80d8c8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CORE_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PERIPH_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MASTER_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WWDT_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CREG_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BUS_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SCU_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PINMUX_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> M3_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LCD_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USB0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USB1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DMA_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SDIO_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EMC_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ETHERNET_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> GPIO_RST; 
    }
    namespace Nonereset_active_status1{
        using Addr = Register::Address<0x40053154,0xff000800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIMER0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIMER1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIMER2_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMER3_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RITIMER_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCT_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MOTOCONPWM_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> QEI_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ADC0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADC1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DAC_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UART0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> UART1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> UART2_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> UART3_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> I2C0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> I2C1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SSP0_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SSP1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> I2S_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SPIFI_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CAN1_RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CAN0_RST; 
    }
    namespace Nonereset_ext_stat0{
        using Addr = Register::Address<0x40053400,0xffffffce>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXT_RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BOD_RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WWDT_RESET; 
    }
    namespace Nonereset_ext_stat1{
        using Addr = Register::Address<0x40053404,0xfffffffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CORE_RESET; 
    }
    namespace Nonereset_ext_stat2{
        using Addr = Register::Address<0x40053408,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat4{
        using Addr = Register::Address<0x40053410,0xfffffffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CORE_RESET; 
    }
    namespace Nonereset_ext_stat5{
        using Addr = Register::Address<0x40053414,0xfffffffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CORE_RESET; 
    }
    namespace Nonereset_ext_stat8{
        using Addr = Register::Address<0x40053420,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat9{
        using Addr = Register::Address<0x40053424,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat13{
        using Addr = Register::Address<0x40053434,0xfffffff7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MASTER_RESET; 
    }
    namespace Nonereset_ext_stat16{
        using Addr = Register::Address<0x40053440,0xfffffff7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MASTER_RESET; 
    }
    namespace Nonereset_ext_stat17{
        using Addr = Register::Address<0x40053444,0xfffffff7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MASTER_RESET; 
    }
    namespace Nonereset_ext_stat18{
        using Addr = Register::Address<0x40053448,0xfffffff7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MASTER_RESET; 
    }
    namespace Nonereset_ext_stat19{
        using Addr = Register::Address<0x4005344c,0xfffffff7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MASTER_RESET; 
    }
    namespace Nonereset_ext_stat20{
        using Addr = Register::Address<0x40053450,0xfffffff7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MASTER_RESET; 
    }
    namespace Nonereset_ext_stat21{
        using Addr = Register::Address<0x40053454,0xfffffff7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MASTER_RESET; 
    }
    namespace Nonereset_ext_stat22{
        using Addr = Register::Address<0x40053458,0xfffffff7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MASTER_RESET; 
    }
    namespace Nonereset_ext_stat23{
        using Addr = Register::Address<0x4005345c,0xfffffff7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MASTER_RESET; 
    }
    namespace Nonereset_ext_stat28{
        using Addr = Register::Address<0x40053470,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat32{
        using Addr = Register::Address<0x40053480,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat33{
        using Addr = Register::Address<0x40053484,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat34{
        using Addr = Register::Address<0x40053488,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat35{
        using Addr = Register::Address<0x4005348c,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat36{
        using Addr = Register::Address<0x40053490,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat37{
        using Addr = Register::Address<0x40053494,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat38{
        using Addr = Register::Address<0x40053498,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat39{
        using Addr = Register::Address<0x4005349c,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat40{
        using Addr = Register::Address<0x400534a0,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat41{
        using Addr = Register::Address<0x400534a4,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat42{
        using Addr = Register::Address<0x400534a8,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat44{
        using Addr = Register::Address<0x400534b0,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat45{
        using Addr = Register::Address<0x400534b4,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat46{
        using Addr = Register::Address<0x400534b8,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat47{
        using Addr = Register::Address<0x400534bc,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat48{
        using Addr = Register::Address<0x400534c0,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat49{
        using Addr = Register::Address<0x400534c4,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat50{
        using Addr = Register::Address<0x400534c8,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat51{
        using Addr = Register::Address<0x400534cc,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat52{
        using Addr = Register::Address<0x400534d0,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat53{
        using Addr = Register::Address<0x400534d4,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat54{
        using Addr = Register::Address<0x400534d8,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
    namespace Nonereset_ext_stat55{
        using Addr = Register::Address<0x400534dc,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PERIPHERAL_RESET; 
    }
}
