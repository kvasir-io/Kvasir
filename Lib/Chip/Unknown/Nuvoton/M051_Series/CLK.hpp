#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace Nonepwrcon{    ///<System Power Down Control Register
        using Addr = Register::Address<0x50000200,0xfffffe02,0,unsigned>;
        ///External Crystal Oscillator Control
The bit default value is set by flash controller user configuration register config0 [26:24]. When the default clock source is from external crystal. The bit is auto set to "1"
1 = Crystal oscillation enable 
0 = Crystal oscillation disable 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xtl12mEn{}; 
        ///Internal 22.1184 MHz Oscillator Control
1 = 22.1184 MHz Oscillation enable 
0 = 22.1184 MHz Oscillation disable 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osc22mEn{}; 
        ///Internal 10KHz Oscillator Control
1 = 10KHz Oscillation enable 
0 = 10KHz Oscillation disable 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osc10kEn{}; 
        ///Enable the wake up delay counter.
When the chip wakes up from power down mode, the clock control will delay certain clock cycles to wait system clock stable.
The delayed clock cycle is 4096 clock cycles when chip work at external crystal (4 ~ 24MHz), and 256 clock cycles when chip work at 22.1184 MHz oscillator.
1 = Enable the clock cycle delay
0 = Disable the clock cycle delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdWuDly{}; 
        ///Power down mode wake Up Interrupt Enable
0 = Disable
1 = Enable. The interrupt will occur when Power down mode (Deep Sleep Mode) wakeup.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdWuIntEn{}; 
        ///Chip power down wake up status flag
Set by "power down wake up", it indicates that resume from power down mode 
The flag is set if the GPIO(P0~P4), UART wakeup
Write 1 to clear the bit 
Note: This bit is working only if PD_WU_INT_EN (PWRCON[5]) set to 1. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdWuSts{}; 
        ///System power down enable bit
When set this bit "1", the chip power down mode is enabled and the chip power down active is depend on the PD_WAIT_CPU bit
(a) if the PD_WAIT_CPU is "0" then the chip power down after the PWR_DOWN_EN bit set.
(b) if the PD_WAIT_CPU is "1" then the chip keep active till the CPU sleep mode also active and then the chip power down
When chip wake up from power down, this bit is auto cleared, user need to set this bit again for next power down.
When in power down mode, external crystal (4~ 24MHz) and the 22.1184 MHz OSC will be disabled in this mode, but the 10 kHz OSC is not controlled by power down mode. 
When in power down mode, the PLL and system clock are disabled, and ignored the clock source selection. The clocks of peripheral are not controlled by power down mode, if the peripheral clock source is from 10 kHz oscillator.
1 = Chip enter the power down mode instant or wait CPU sleep command WFI
0 = Chip operate in normal mode or CPU in idle mode (sleep mode) because of WFI command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pwrDownEn{}; 
        ///This bit control the power down entry condition
1 = Chip entry power down mode when the both PWR_DOWN and CPU run WFI instruction.
0 = Chip entry power down mode when the PWR_DOWN bit is set to 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pdWaitCpu{}; 
    }
    namespace Noneahbclk{    ///<AHB Devices Clock Enable Control Register
        using Addr = Register::Address<0x50000204,0xfffffff3,0,unsigned>;
        ///Flash ISP Controller Clock Enable Control.
1 = To enable the Flash ISP controller clock.
0 = To disable the Flash ISP controller clock.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ispEn{}; 
        ///EBI Controller Clock Enable Control.
1 = To enable the EBI Controller clock.
0 = To disable the EBI Controller clock.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ebiEn{}; 
    }
    namespace Noneapbclk{    ///<APB Devices Clock Enable Control Register
        using Addr = Register::Address<0x50000208,0xef0cce82,0,unsigned>;
        ///Watch Dog Timer Clock Enable.
This bit is the protected bit, program this need a open lock sequence, write "59h","16h","88h" to address 0x5000_0100 to un-lock this bit. Reference the register REGWRPROT at address GCR_BA + 0x100
0 = Disable Watchdog Timer Clock
1 = Enable Watchdog Timer Clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wdtEn{}; 
        ///Timer0 Clock Enable Control
0 = Disable Timer0 Clock
1 = Enable Timer0 Clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tmr0En{}; 
        ///Timer1 Clock Enable Control
0 = Disable Timer1 Clock
1 = Enable Timer1 Clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tmr1En{}; 
        ///Timer2 Clock Enable Control
0 = Disable Timer2 Clock
1 = Enable Timer2 Clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tmr2En{}; 
        ///Timer3 Clock Enable Control
0 = Disable Timer3 Clock
1 = Enable Timer3 Clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tmr3En{}; 
        ///Clock Divider Clock Enable Control
0 = Disable FDIV Clock
1 = Enable FDIV Clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fdivEn{}; 
        ///I2C Clock Enable Control. 
0 = Disable I2C Clock
1 = Enable I2C Clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> i2cEn{}; 
        ///SPI0 Clock Enable Control. 
0 = Disable SPI0 Clock
1 = Enable SPI0 Clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi0En{}; 
        ///SPI1 Clock Enable Control. 
0 = Disable SPI1 Clock
1 = Enable SPI1 Clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spi1En{}; 
        ///UART0 Clock Enable Control.
1 = Enable UART0 clock
0 = Disable UART0 clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> uart0En{}; 
        ///UART1 Clock Enable Control.
1 = Enable UART1 clock
0 = Disable UART1 clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> uart1En{}; 
        ///PWM_01 Clock Enable Control.
1 = Enable PWM01 clock
0 = Disable PWM01 clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pwm01En{}; 
        ///PWM_23 Clock Enable Control.
1 = Enable PWM23 clock
0 = Disable PWM23 clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pwm23En{}; 
        ///PWM_45 Clock Enable Control.
1 = Enable PWM45 clock
0 = Disable PWM45 clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pwm45En{}; 
        ///PWM_67 Clock Enable Control.
1 = Enable PWM67 clock
0 = Disable PWM67 clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pwm67En{}; 
        ///Analog-Digital-Converter (ADC) Clock Enable Control.
1 = Enable ADC clock
0 = Disable ADC clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> adcEn{}; 
    }
    namespace Noneclkstatus{    ///<Clock status monitor Register
        using Addr = Register::Address<0x5000020c,0xffffff62,0,unsigned>;
        ///XTL12M clock source stable flag
1 = External Crystal clock is stable
0 = External Crystal clock is not stable or not enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xtl12mStb{}; 
        ///PLL clock source stable flag
1 = PLL clock is stable
0 = PLL clock is not stable or not enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pllStb{}; 
        ///OSC10K clock source stable flag
1 = OSC10K clock is stable
0 = OSC10K clock is not stable or not enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osc10kStb{}; 
        ///OSC22M clock source stable flag
1 = OSC22M clock is stable
0 = OSC22M clock is not stable or not enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> osc22mStb{}; 
        ///Clock switch fail flag
1 = Clock switch fail
0 = Clock switch success
This bit will be set when target switch clock source is not stable. Write 1 to clear this bit to zero.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clkSwFail{}; 
    }
    namespace Noneclksel0{    ///<Clock Source Select Control Register 0
        using Addr = Register::Address<0x50000210,0xffffffc0,0,unsigned>;
        ///HCLK clock source select.
Note:
Before clock switch the related clock sources (pre-select and new-select) must be turn on
The 3-bit default value is reloaded with the value of Config0.CFOSC[26:24] in user configuration register in Flash controller by any reset. Therefore the default value is either 000b or 111b.
These bits are protected bit, program this need an open lock sequence, write "59h","16h","88h" to address 0x5000_0100 to un-lock this bit. Reference the register REGWRPROT at address GCR_BA + 0x100
000 = clock source from external crystal clock (4 ~ 24MHz)
010 = clock source from PLL clock
011 = clock source from internal 10KHz oscillator clock
111 = clock source from internal 22.1184 MHz oscillator clock
others = Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> hclkS{}; 
        ///MCU Cortex_M0 SysTick clock source select.
These bits are protected bit, program this need an open lock sequence, write "59h","16h","88h" to address 0x5000_0100 to un-lock this bit. Reference the register REGWRPROT at address GCR_BA + 0x100
000 = Clock source from external crystal clock (4 ~ 24MHz)
010 = Clock source from external crystal clock (4 ~ 24MHz)/2
011 = clock source from HCLK/2
1xx = clock source from internal 22.1184 MHz oscillator clock/2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> stclkS{}; 
    }
    namespace Noneclksel1{    ///<Clock Source Select Control Register 1
        using Addr = Register::Address<0x50000214,0x0c8888f0,0,unsigned>;
        ///Watchdog Timer clock source select.
These bits are protected bit, program this need a open lock sequence, write "59h","16h","88h" to address 0x5000_0100 to un-lock this bit. Reference the register REGWRPROT at address GCR_BA + 0x100
00 = clock source from external crystal clock (4 ~ 24MHz).
10 = clock source from HCLK/2048 clock
11 = clock source from internal 10KHz oscillator clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wdtS{}; 
        ///ADC clock source select.
00 = clock source from external crystal clock (4 ~ 24MHz).
01 = clock source from PLL clock
1x = clock source from internal 22.1184 MHz oscillator clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> adcS{}; 
        ///TIMER0 clock source select.
000 = clock source from external crystal clock (4 ~ 24MHz)
010 = clock source from HCLK
011 = clock source from external trigger
1xx = clock source from internal 22.1184 MHz oscillator clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> tmr0S{}; 
        ///TIMER1 clock source select.
000 = clock source from external crystal clock (4 ~ 24MHz)
010 = clock source from HCLK
011 = clock source from external trigger
1xx = clock source from internal 22.1184 MHz oscillator clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> tmr1S{}; 
        ///TIMER2 clock source select.
000 = clock source from external crystal clock (4 ~ 24MHz)
010 = clock source from HCLK
011 = clock source from external trigger
1xx = clock source from internal 22.1184 MHz oscillator clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> tmr2S{}; 
        ///TIMER3 clock source select.
000 = clock source from external crystal clock (4 ~ 24MHz)
010 = clock source from HCLK
011 = clock source from external trigger
1xx = clock source from internal 22.1184 MHz oscillator clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> tmr3S{}; 
        ///UART clock source select.
00 = clock source from external crystal clock (4 ~ 24MHz)
01 = clock source from PLL clock
1x = clock source from internal 22.1184 MHz oscillator clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> uartS{}; 
        ///PWM0 and PWM1 clock source select.
PWM0 and PWM1 uses the same Engine clock source, both of them with the same pre-scalar
00 = clock source from external crystal clock (4 ~ 24MHz)
10 = clock source from HCLK
11 = clock source from internal 22.1184 MHz oscillator clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pwm01S{}; 
        ///PWM2 and PWM3 clock source select.
PWM2 and PWM3 uses the same Engine clock source, both of them with the same pre-scalar
00 = clock source from external crystal clock (4 ~ 24MHz)
10 = clock source from HCLK
11 = clock source from internal 22.1184 MHz oscillator clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pwm23S{}; 
    }
    namespace Noneclkdiv{    ///<Clock Divider Number Register
        using Addr = Register::Address<0x50000218,0xff00f0f0,0,unsigned>;
        ///HCLK clock divide number from HCLK clock source
The HCLK clock frequency = (HCLK clock source frequency) / (HCLK_N + 1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> hclkN{}; 
        ///UART clock divide number from UART clock source
The UART clock frequency = (UART clock source frequency ) / (UART_N + 1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> uartN{}; 
        ///ADC clock divide number from ADC clock source
The ADC clock frequency = (ADC clock source frequency ) / (ADC_N + 1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> adcN{}; 
    }
    namespace Noneclksel2{    ///<Clock Source Select Control Register 2
        using Addr = Register::Address<0x5000021c,0xffffff03,0,unsigned>;
        ///Clock Divider Clock Source Select
00 = clock source from external crystal clock (4 ~ 24MHz)
10 = clock source from HCLK
11 = clock source from internal 22.1184 MHz oscillator clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> frqdivS{}; 
        ///PWM4 and PWM5 clock source select. - PWM4 and PWM5 used the same Engine clock source, both of them with the same pre-scalar
00 = clock source from external crystal clock (4 ~ 24MHz)
10 = clock source from HCLK
11 = clock source from internal 22.1184 MHz oscillator clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pwm45S{}; 
        ///PWM6 and PWM7 clock source select. - PWM6 and PWM7 used the same Engine clock source, both of them with the same pre-scalar
00 = clock source from external crystal clock (4 ~ 24MHz)
10 = clock source from HCLK
11 = clock source from internal 22.1184 MHz oscillator clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pwm67S{}; 
    }
    namespace Nonepllcon{    ///<PLL Control Register
        using Addr = Register::Address<0x50000220,0xfff00000,0,unsigned>;
        ///PLL Feedback Divider Control Pins (PLL_F[8:0])
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> fbDv{}; 
        ///PLL Input Divider Control Pins (PLL_R[4:0])
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> inDv{}; 
        ///PLL Output Divider Control Pins (PLL_OD[1:0])
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> outDv{}; 
        ///Power Down Mode. 
If set the IDLE bit "1" in PWRCON register, the PLL will enter power down mode too
0 = PLL is in normal mode (default)
1 = PLL is in power-down mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pd{}; 
        ///PLL Bypass Control
0 = PLL is in normal mode (default)
1 = PLL clock output is same as clock input (XTALin)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> bp{}; 
        ///PLL OE (FOUT enable) pin Control
0 = PLL FOUT enable
1 = PLL FOUT is fixed low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> oe{}; 
        ///PLL Source Clock Select
1 = PLL source clock from 22.1184 MHz oscillator
0 = PLL source clock from external crystal clock (4 ~ 24 MHz)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pllSrc{}; 
    }
    namespace Nonefrqdiv{    ///<Frequency Divider Control Register
        using Addr = Register::Address<0x50000224,0xffffffe0,0,unsigned>;
        ///Divider Output Frequency Selection Bits
The formula of output frequency is
Fout = Fin/2(N+1), 
where Fin is the input clock frequency, Fout is the frequency of divider output clock, N is the 4-bit value of FSEL[3:0].
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fsel{}; 
        ///Frequency Divider Enable Bit
0 = Disable Frequency Divider
1 = Enable Frequency Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dividerEn{}; 
    }
}
