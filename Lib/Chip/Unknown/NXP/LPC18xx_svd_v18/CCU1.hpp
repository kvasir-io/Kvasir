#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepm{
        using Addr = Register::Address<0x40051000,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
    }
    namespace Nonebase_stat{
        using Addr = Register::Address<0x40051004,0xfffffe70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BASE_APB3_CLK_IND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BASE_APB1_CLK_IND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BASE_SPIFI_CLK_IND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BASE_M3_CLK_IND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BASE_USB0_CLK_IND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BASE_USB1_CLK_IND; 
    }
    namespace Noneclk_apb3_bus_cfg{
        using Addr = Register::Address<0x40051100,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb3_i2c1_cfg{
        using Addr = Register::Address<0x40051108,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb3_dac_cfg{
        using Addr = Register::Address<0x40051110,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb3_adc0_cfg{
        using Addr = Register::Address<0x40051118,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb3_adc1_cfg{
        using Addr = Register::Address<0x40051120,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb3_can0_cfg{
        using Addr = Register::Address<0x40051128,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb1_bus_cfg{
        using Addr = Register::Address<0x40051200,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb1_motoconpwm_cfg{
        using Addr = Register::Address<0x40051208,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_abp1_i2c0_cfg{
        using Addr = Register::Address<0x40051210,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb1_i2s_cfg{
        using Addr = Register::Address<0x40051218,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb1_can1_cfg{
        using Addr = Register::Address<0x40051220,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_spifi_cfg{
        using Addr = Register::Address<0x40051300,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_bus_cfg{
        using Addr = Register::Address<0x40051400,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_spifi_cfg{
        using Addr = Register::Address<0x40051408,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_gpio_cfg{
        using Addr = Register::Address<0x40051410,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_lcd_cfg{
        using Addr = Register::Address<0x40051418,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_ethernet_cfg{
        using Addr = Register::Address<0x40051420,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_usb0_cfg{
        using Addr = Register::Address<0x40051428,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_emc_cfg{
        using Addr = Register::Address<0x40051430,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_sdio_cfg{
        using Addr = Register::Address<0x40051438,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_dma_cfg{
        using Addr = Register::Address<0x40051440,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_m3core_cfg{
        using Addr = Register::Address<0x40051448,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_sct_cfg{
        using Addr = Register::Address<0x40051468,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_usb1_cfg{
        using Addr = Register::Address<0x40051470,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_emcdiv_cfg{
        using Addr = Register::Address<0x40051478,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_wwdt_cfg{
        using Addr = Register::Address<0x40051500,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_usart0_cfg{
        using Addr = Register::Address<0x40051508,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_uart1_cfg{
        using Addr = Register::Address<0x40051510,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_ssp0_cfg{
        using Addr = Register::Address<0x40051518,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_timer0_cfg{
        using Addr = Register::Address<0x40051520,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_timer1_cfg{
        using Addr = Register::Address<0x40051528,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_scu_cfg{
        using Addr = Register::Address<0x40051530,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_creg_cfg{
        using Addr = Register::Address<0x40051538,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_ritimer_cfg{
        using Addr = Register::Address<0x40051600,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_usart2_cfg{
        using Addr = Register::Address<0x40051608,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_usart3_cfg{
        using Addr = Register::Address<0x40051610,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_timer2_cfg{
        using Addr = Register::Address<0x40051618,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_timer3_cfg{
        using Addr = Register::Address<0x40051620,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_ssp1_cfg{
        using Addr = Register::Address<0x40051628,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_qei_cfg{
        using Addr = Register::Address<0x40051630,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_usb0_cfg{
        using Addr = Register::Address<0x40051800,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_usb1_cfg{
        using Addr = Register::Address<0x40051900,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_vadc_cfg{
        using Addr = Register::Address<0x40051b00,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb3_bus_stat{
        using Addr = Register::Address<0x40051104,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb3_i2c1_stat{
        using Addr = Register::Address<0x4005110c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb3_dac_stat{
        using Addr = Register::Address<0x40051114,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb3_adc0_stat{
        using Addr = Register::Address<0x4005111c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb3_adc1_stat{
        using Addr = Register::Address<0x40051124,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb3_can0_stat{
        using Addr = Register::Address<0x4005112c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb1_bus_stat{
        using Addr = Register::Address<0x40051204,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb1_motoconpwm_stat{
        using Addr = Register::Address<0x4005120c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb1_i2c0_stat{
        using Addr = Register::Address<0x40051214,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb1_i2s_stat{
        using Addr = Register::Address<0x4005121c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_apb1_can1_stat{
        using Addr = Register::Address<0x40051224,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_spifi_stat{
        using Addr = Register::Address<0x40051304,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_bus_stat{
        using Addr = Register::Address<0x40051404,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_spifi_stat{
        using Addr = Register::Address<0x4005140c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_gpio_stat{
        using Addr = Register::Address<0x40051414,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_lcd_stat{
        using Addr = Register::Address<0x4005141c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_ethernet_stat{
        using Addr = Register::Address<0x40051424,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_usb0_stat{
        using Addr = Register::Address<0x4005142c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_emc_stat{
        using Addr = Register::Address<0x40051434,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_sdio_stat{
        using Addr = Register::Address<0x4005143c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_dma_stat{
        using Addr = Register::Address<0x40051444,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_m3core_stat{
        using Addr = Register::Address<0x4005144c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_sct_stat{
        using Addr = Register::Address<0x4005146c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_usb1_stat{
        using Addr = Register::Address<0x40051474,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_emcdiv_stat{
        using Addr = Register::Address<0x4005147c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_wwdt_stat{
        using Addr = Register::Address<0x40051504,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_usart0_stat{
        using Addr = Register::Address<0x4005150c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_uart1_stat{
        using Addr = Register::Address<0x40051514,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_ssp0_stat{
        using Addr = Register::Address<0x4005151c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_timer0_stat{
        using Addr = Register::Address<0x40051524,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_timer1_stat{
        using Addr = Register::Address<0x4005152c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_scu_stat{
        using Addr = Register::Address<0x40051534,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_creg_stat{
        using Addr = Register::Address<0x4005153c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_ritimer_stat{
        using Addr = Register::Address<0x40051604,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_usart2_stat{
        using Addr = Register::Address<0x4005160c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_usart3_stat{
        using Addr = Register::Address<0x40051614,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_timer2_stat{
        using Addr = Register::Address<0x4005161c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_timer3_stat{
        using Addr = Register::Address<0x40051624,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_ssp1_stat{
        using Addr = Register::Address<0x4005162c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_m3_qei_stat{
        using Addr = Register::Address<0x40051634,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_usb0_stat{
        using Addr = Register::Address<0x40051804,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_usb1_stat{
        using Addr = Register::Address<0x40051904,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
    namespace Noneclk_vadc_stat{
        using Addr = Register::Address<0x40051b04,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUP; 
    }
}
