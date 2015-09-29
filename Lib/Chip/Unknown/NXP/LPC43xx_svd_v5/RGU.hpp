#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10503 Chapter title=LPC43xx Reset Generation
Unit (RGU) Modification date=7/20/2011 Major revision=0 Minor revision=13 
    namespace NoneresetCtrl0{    ///<Reset control register 0
        using Addr = Register::Address<0x40053100,0xef80d8c8,0,unsigned>;
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> coreRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after three clock cycles.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> periphRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after three clock cycles.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> masterRst{}; 
        ///Writing a one to this bit has no effect.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wwdtRst{}; 
        ///Writing a one to this bit has no effect.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cregRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle. Do not use during normal operation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> busRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> scuRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinmuxRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> m4Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lcdRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usb0Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usb1Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dmaRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sdioRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> emcRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ethernetRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> gpioRst{}; 
    }
    namespace NoneresetCtrl1{    ///<Reset control register 1
        using Addr = Register::Address<0x40053104,0xf8000800,0,unsigned>;
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timer0Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timer1Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> timer2Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timer3Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ritimerRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sctRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> motoconpwmRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> qeiRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adc0Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adc1Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dacRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uart0Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> uart1Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> uart2Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> uart3Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> i2c0Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> i2c1Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ssp0Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ssp1Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> i2sRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> spifiRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> can1Rst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> can0Rst{}; 
        ///Writing a one activates the reset. Writing a 0 clears the reset. This bit must be cleared manually.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> m0appRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> sgpioRst{}; 
        ///Writing a one activates the reset. This bit is automatically cleared to 0 after one clock cycle.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> spiRst{}; 
    }
    namespace NoneresetStatus0{    ///<Reset status register 0
        using Addr = Register::Address<0x40053110,0xf3f0f0c0,0,unsigned>;
        ///Status of the CORE_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> coreRst{}; 
        ///Status of the PERIPH_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> periphRst{}; 
        ///Status of the MASTER_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> masterRst{}; 
        ///Status of the WWDT_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> wwdtRst{}; 
        ///Status of the CREG_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cregRst{}; 
        ///Status of the BUS_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> busRst{}; 
        ///Status of the SCU_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> scuRst{}; 
        ///Status of the M4_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> m4Rst{}; 
    }
    namespace NoneresetStatus1{    ///<Reset status register 1
        using Addr = Register::Address<0x40053114,0xfcffc000,0,unsigned>;
        ///Status of the LCD_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> lcdRst{}; 
        ///Status of the USB0_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> usb0Rst{}; 
        ///Status of the USB1_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> usb1Rst{}; 
        ///Status of the DMA_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dmaRst{}; 
        ///Status of the SDIO_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sdioRst{}; 
        ///Status of the EMC_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> emcRst{}; 
        ///Status of the ETHERNET_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> ethernetRst{}; 
        ///Status of the GPIO_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> gpioRst{}; 
    }
    namespace NoneresetStatus2{    ///<Reset status register 2
        using Addr = Register::Address<0x40053118,0x00c00000,0,unsigned>;
        ///Status of the TIMER0_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> timer0Rst{}; 
        ///Status of the TIMER1_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> timer1Rst{}; 
        ///Status of the TIMER2_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> timer2Rst{}; 
        ///Status of the TIMER3_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> timer3Rst{}; 
        ///Status of the RITIMER_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ritimerRst{}; 
        ///Status of the SCT_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sctRst{}; 
        ///Status of the MOTOCONPWM_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> motoconpwmRst{}; 
        ///Status of the QEI_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> qeiRst{}; 
        ///Status of the ADC0_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> adc0Rst{}; 
        ///Status of the ADC1_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> adc1Rst{}; 
        ///Status of the DAC_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> dacRst{}; 
        ///Status of the UART0_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> uart0Rst{}; 
        ///Status of the UART1_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> uart1Rst{}; 
        ///Status of the UART2_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> uart2Rst{}; 
        ///Status of the UART3_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> uart3Rst{}; 
    }
    namespace NoneresetStatus3{    ///<Reset status register 3
        using Addr = Register::Address<0x4005311c,0xffc00000,0,unsigned>;
        ///Status of the I2C0_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> i2c0Rst{}; 
        ///Status of the I2C1_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> i2c1Rst{}; 
        ///Status of the SSP0_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ssp0Rst{}; 
        ///Status of the SSP1_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ssp1Rst{}; 
        ///Status of the I2S_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> i2sRst{}; 
        ///Status of the SPIFI_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> spifiRst{}; 
        ///Status of the CAN1_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> can1Rst{}; 
        ///Status of the CAN0_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> can0Rst{}; 
        ///Status of the M0APP_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> m0appRst{}; 
        ///Status of the SGPIO_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sgpioRst{}; 
        ///Status of the SPI_RST reset generator output 00 = No reset activated 01 = Reset output activated by input to the reset generator 10 = Reserved 11 = Reset output activated by software write to RESET_CTRL register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> spiRst{}; 
    }
    namespace NoneresetActiveStatus0{    ///<Reset active status register 0
        using Addr = Register::Address<0x40053150,0xef80d8c8,0,unsigned>;
        ///Current status of the CORE_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> coreRst{}; 
        ///Current status of the PERIPH_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> periphRst{}; 
        ///Current status of the MASTER_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> masterRst{}; 
        ///Current status of the WWDT_RS 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wwdtRst{}; 
        ///Current status of the CREG_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cregRst{}; 
        ///Current status of the BUS_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> busRst{}; 
        ///Current status of the SCU_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> scuRst{}; 
        ///Current status of the PINMUX_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pinmuxRst{}; 
        ///Current status of the M3_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> m3Rst{}; 
        ///Current status of the LCD_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lcdRst{}; 
        ///Current status of the USB0_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usb0Rst{}; 
        ///Current status of the USB1_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usb1Rst{}; 
        ///Current status of the DMA_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dmaRst{}; 
        ///Current status of the SDIO_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sdioRst{}; 
        ///Current status of the EMC_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> emcRst{}; 
        ///Current status of the ETHERNET_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ethernetRst{}; 
        ///Current status of the GPIO_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> gpioRst{}; 
    }
    namespace NoneresetActiveStatus1{    ///<Reset active status register 1
        using Addr = Register::Address<0x40053154,0xf8000800,0,unsigned>;
        ///Current status of the TIMER0_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timer0Rst{}; 
        ///Current status of the TIMER1_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timer1Rst{}; 
        ///Current status of the TIMER2_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> timer2Rst{}; 
        ///Current status of the TIMER3_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> timer3Rst{}; 
        ///Current status of the RITIMER_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ritimerRst{}; 
        ///Current status of the SCT_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sctRst{}; 
        ///Current status of the MOTOCONPWM_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> motoconpwmRst{}; 
        ///Current status of the QEI_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> qeiRst{}; 
        ///Current status of the ADC0_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adc0Rst{}; 
        ///Current status of the ADC1_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adc1Rst{}; 
        ///Current status of the DAC_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dacRst{}; 
        ///Current status of the UART0_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uart0Rst{}; 
        ///Current status of the UART1_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> uart1Rst{}; 
        ///Current status of the UART2_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> uart2Rst{}; 
        ///Current status of the UART3_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> uart3Rst{}; 
        ///Current status of the I2C0_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> i2c0Rst{}; 
        ///Current status of the I2C1_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> i2c1Rst{}; 
        ///Current status of the SSP0_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ssp0Rst{}; 
        ///Current status of the SSP1_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ssp1Rst{}; 
        ///Current status of the I2S_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> i2sRst{}; 
        ///Current status of the SPIFI_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> spifiRst{}; 
        ///Current status of the CAN1_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> can1Rst{}; 
        ///Current status of the CAN0_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> can0Rst{}; 
        ///Current status of the M0APP_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> moappRst{}; 
        ///Current status of the SGPIO_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> sgpioRst{}; 
        ///Current status of the SPI_RST 0 = Reset asserted 1 = No reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> spiRst{}; 
    }
    namespace NoneresetExtStat0{    ///<Reset external status register 0 for CORE_RST
        using Addr = Register::Address<0x40053400,0xffffffce,0,unsigned>;
        ///Reset activated by external reset from reset pin. Write 0 to clear. 0 = Reset not activated by reset pin 1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extReset{}; 
        ///Reset activated by BOD reset. Write 0 to clear. 0 = Reset not activated by BOD 1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bodReset{}; 
        ///Reset activated by WWDT time-out. Write 0 to clear. 0 = Reset not activated by WWDT 1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wwdtReset{}; 
    }
    namespace NoneresetExtStat1{    ///<Reset external status register 1 for PERIPH_RST
        using Addr = Register::Address<0x40053404,0xfffffffd,0,unsigned>;
        ///Reset activated by CORE_RST output. Write 0 to clear. 0 = Reset not activated 1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> coreReset{}; 
    }
    namespace NoneresetExtStat2{    ///<Reset external status register 2 for MASTER_RST
        using Addr = Register::Address<0x40053408,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat4{    ///<Reset external status register 4 for WWDT_RST
        using Addr = Register::Address<0x40053410,0xfffffffd,0,unsigned>;
        ///Reset activated by CORE_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> coreReset{}; 
    }
    namespace NoneresetExtStat5{    ///<Reset external status register 5 for CREG_RST
        using Addr = Register::Address<0x40053414,0xfffffffd,0,unsigned>;
        ///Reset activated by CORE_RST output. Write 0 to clear. 0 = Reset not activated 1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> coreReset{}; 
    }
    namespace NoneresetExtStat8{    ///<Reset external status register
        using Addr = Register::Address<0x40053420,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat9{    ///<Reset external status register
        using Addr = Register::Address<0x40053424,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat13{    ///<Reset external status register
        using Addr = Register::Address<0x40053434,0xfffffff7,0,unsigned>;
        ///Reset activated by MASTER_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> masterReset{}; 
    }
    namespace NoneresetExtStat16{    ///<Reset external status register
        using Addr = Register::Address<0x40053440,0xfffffff7,0,unsigned>;
        ///Reset activated by MASTER_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> masterReset{}; 
    }
    namespace NoneresetExtStat17{    ///<Reset external status register
        using Addr = Register::Address<0x40053444,0xfffffff7,0,unsigned>;
        ///Reset activated by MASTER_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> masterReset{}; 
    }
    namespace NoneresetExtStat18{    ///<Reset external status register
        using Addr = Register::Address<0x40053448,0xfffffff7,0,unsigned>;
        ///Reset activated by MASTER_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> masterReset{}; 
    }
    namespace NoneresetExtStat19{    ///<Reset external status register
        using Addr = Register::Address<0x4005344c,0xfffffff7,0,unsigned>;
        ///Reset activated by MASTER_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> masterReset{}; 
    }
    namespace NoneresetExtStat20{    ///<Reset external status register
        using Addr = Register::Address<0x40053450,0xfffffff7,0,unsigned>;
        ///Reset activated by MASTER_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> masterReset{}; 
    }
    namespace NoneresetExtStat21{    ///<Reset external status register
        using Addr = Register::Address<0x40053454,0xfffffff7,0,unsigned>;
        ///Reset activated by MASTER_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> masterReset{}; 
    }
    namespace NoneresetExtStat22{    ///<Reset external status register
        using Addr = Register::Address<0x40053458,0xfffffff7,0,unsigned>;
        ///Reset activated by MASTER_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> masterReset{}; 
    }
    namespace NoneresetExtStat23{    ///<Reset external status register
        using Addr = Register::Address<0x4005345c,0xfffffff7,0,unsigned>;
        ///Reset activated by MASTER_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> masterReset{}; 
    }
    namespace NoneresetExtStat28{    ///<Reset external status register
        using Addr = Register::Address<0x40053470,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat32{    ///<Reset external status register
        using Addr = Register::Address<0x40053480,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat33{    ///<Reset external status register
        using Addr = Register::Address<0x40053484,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat34{    ///<Reset external status register
        using Addr = Register::Address<0x40053488,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat35{    ///<Reset external status register
        using Addr = Register::Address<0x4005348c,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat36{    ///<Reset external status register
        using Addr = Register::Address<0x40053490,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat37{    ///<Reset external status register
        using Addr = Register::Address<0x40053494,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat38{    ///<Reset external status register
        using Addr = Register::Address<0x40053498,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat39{    ///<Reset external status register
        using Addr = Register::Address<0x4005349c,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat40{    ///<Reset external status register
        using Addr = Register::Address<0x400534a0,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat41{    ///<Reset external status register
        using Addr = Register::Address<0x400534a4,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat42{    ///<Reset external status register
        using Addr = Register::Address<0x400534a8,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat44{    ///<Reset external status register
        using Addr = Register::Address<0x400534b0,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat45{    ///<Reset external status register
        using Addr = Register::Address<0x400534b4,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat46{    ///<Reset external status register
        using Addr = Register::Address<0x400534b8,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat47{    ///<Reset external status register
        using Addr = Register::Address<0x400534bc,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat48{    ///<Reset external status register
        using Addr = Register::Address<0x400534c0,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat49{    ///<Reset external status register
        using Addr = Register::Address<0x400534c4,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat50{    ///<Reset external status register
        using Addr = Register::Address<0x400534c8,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat51{    ///<Reset external status register
        using Addr = Register::Address<0x400534cc,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat52{    ///<Reset external status register
        using Addr = Register::Address<0x400534d0,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat53{    ///<Reset external status register
        using Addr = Register::Address<0x400534d4,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat54{    ///<Reset external status register
        using Addr = Register::Address<0x400534d8,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
    namespace NoneresetExtStat55{    ///<Reset external status register
        using Addr = Register::Address<0x400534dc,0xfffffffb,0,unsigned>;
        ///Reset activated by PERIPHERAL_RST output. Write 0 to clear. 0 = Reset not activated  1 = Reset activated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peripheralReset{}; 
    }
}
