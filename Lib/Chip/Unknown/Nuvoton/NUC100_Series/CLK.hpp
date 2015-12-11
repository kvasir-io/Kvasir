#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace Nonepwrcon{    ///<System Power Down Control Register
        using Addr = Register::Address<0x50000200,0xfffffe00,0,unsigned>;
        ///External 4~24 MHz Crystal Enable (write-protection bit)
The bit default value is set by flash controller user configuration register config0 [26:24]. When the default clock source is from external 4~24 MHz crystal, this bit is set to 1 automatically
1 = Enable external 4~24 MHz crystal 
0 = Disable external 4~24 MHz crystal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xtl12mEn{}; 
        ///External 32.768 KHz Crystal Enable (write-protection bit)
1 = Enable external 32.768 kHz Crystal (Normal operation)
0 = Disable external 32.768 kHz Crystal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> xtl32kEn{}; 
        ///Internal 22.1184MHz Oscillator Enable (write-protection bit)
1 = Enable 22.1184MHz Oscillation 
0 = Disable 22.1184MHz Oscillation 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osc22mEn{}; 
        ///Internal 10KHz Oscillator Enable (write-protection bit)
1 = Enable 10KHz Oscillation 
0 = Disable 10KHz Oscillation 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osc10kEn{}; 
        ///Enable the wake up delay counter (write-protection bit)
When the chip wakes up from power down mode, the clock control will delay certain clock cycles to wait system clock stable.
The delayed clock cycle is 4096 clock cycles when chip work at external 4~24 MHz crystal, and 256 clock cycles when chip work at internal 22.1184 MHz oscillator.
1 = Enable clock cycles delay
0 = Disable clock cycles delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdWuDly{}; 
        ///Power down mode wake up Interrupt enable (write-protection bit)
0 = Disable
1 = Enable.
The interrupt will occur when both PD_WU_STS and PD_WU_INT_EN are high.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdWuIntEn{}; 
        ///Power down mode wake up interrupt status
Set by "power down wake up", it indicates that resume from power down mode 
The flag is set if the GPIO, USB, UART, WDT, CAN, ACMP, BOD or RTC wakeup occurred 
Write 1 to clear the bit 
Note: This bit is working only if PD_WU_INT_EN (PWRCON[5]) set to 1. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdWuSts{}; 
        ///System power down enable bit (write-protection bit)
When CPU sets this bit "1" the chip power down mode is enabled, and chip power-down behavior will depends on the PD_WAIT_CPU bit.
(a) If the PD_WAIT_CPU is "0", then the chip enters power down mode immediately after the PWR_DOWN_EN bit set.
(b) if the PD_WAIT_CPU is "1", then the chip keeps active till the CPU sleep mode is also active and then the chip enters power down mode.
When chip wakes up from power down mode, this bit is auto cleared. Users need to set this bit again for next power down.
When in power down mode, external 4~24 MHz crystal and the internal 22.1184 MHz oscillator will be disabled in this mode, but the external 32 kHz crystal and internal 10 kHz oscillator are not controlled by power down mode.
When in power down mode, the PLL and system clock are disabled, and ignored the clock source selection. The clocks of peripheral are not controlled by power down mode, if the peripheral clock source is from 32 kHz crystal or the 10 kHz oscillator.
1 = Chip enter the power down mode instant or wait CPU sleep command WFI.
0 = Chip operate in normal mode or CPU in idle mode (sleep mode) because of WFI command.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pwrDownEn{}; 
        ///This bit control the power down entry condition (write-protection bit)
1 = Chip enter power down mode when the both PWR_DOWN_EN bit is set to 1 and CPU run WFI instruction.
0 = Chip entry power down mode when the PWR_DOWN_EN bit is set to 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pdWaitCpu{}; 
    }
    namespace Noneahbclk{    ///<AHB Devices Clock Enable Control Register
        using Addr = Register::Address<0x50000204,0xfffffff1,0,unsigned>;
        ///PDMA Controller Clock Enable Control.
1 = Enable the PDMA engine clock.
0 = Disable the PDMA engine clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdmaEn{}; 
        ///Flash ISP Controller Clock Enable Control.
1 = Enable the Flash ISP engine clock.
0 = Disable the Flash ISP engine clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ispEn{}; 
        ///EBI Controller Clock Enable Control (Low Density Only)
1 = Enable the EBI engine clock.
0 = Disable the EBI engine clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ebiEn{}; 
    }
    namespace Noneapbclk{    ///<APB Devices Clock Enable Control Register
        using Addr = Register::Address<0x50000208,0x06080c80,0,unsigned>;
        ///Watch Dog Timer Clock Enable (write-protection bit)
This bit is the protected bit. It means programming this needs to write "59h", "16h", "88h" to address 0x5000_0100 to disable register protection. Reference the register REGWRPROT at address GCR_BA+0x100.
The bit default value is set by flash controller. User configuration register config0 bit[31]
1 = Enable Watchdog Timer Clock
0 = Disable Watchdog Timer Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wdtEn{}; 
        ///Real-Time-Clock APB interface Clock Enable. 
This bit is used to control the RTC APB clock only, The RTC engine clock source is from the 32.768KHz crystal.
1 = Enable RTC Clock
0 = Disable RTC Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtcEn{}; 
        ///Timer0 Clock Enable
1 = Enable Timer0 Clock
0 = Disable Timer0 Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tmr0En{}; 
        ///Timer1 Clock Enable 
1 = Enable Timer1 Clock
0 = Disable Timer1 Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tmr1En{}; 
        ///Timer2 Clock Enable 
1 = Enable Timer2 Clock
0 = Disable Timer2 Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tmr2En{}; 
        ///Timer3 Clock Enable 
1 = Enable Timer3 Clock
0 = Disable Timer3 Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tmr3En{}; 
        ///Frequency Divider Output Clock Enable
1 = Enable FDIV Clock
0 = Disable FDIV Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fdivEn{}; 
        ///I2C0 Clock Enable . 
1 = Enable I2C0 Clock
0 = Disable I2C0 Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> i2c0En{}; 
        ///I2C1 Clock Enable. 
1 = Enable I2C1 Clock
0 = Disable I2C1 Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> i2c1En{}; 
        ///SPI0 Clock Enable. 
1 = Enable SPI0 Clock
0 = Disable SPI0 Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi0En{}; 
        ///SPI1 Clock Enable. 
1 = Enable SPI1 Clock
0 = Disable SPI1 Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spi1En{}; 
        ///SPI2 Clock Enable. (Medium Density Only)
1 = Enable SPI2 Clock
0 = Disable SPI2 Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2En{}; 
        ///SPI3 Clock Enable. (Medium Density Only)
1 = Enable SPI3 Clock
0 = Disable SPI3 Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3En{}; 
        ///UART0 Clock Enable.
1 = Enable UART0 clock
0 = Disable UART0 clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> uart0En{}; 
        ///UART1 Clock Enable.
1 = Enable UART1 clock
0 = Disable UART1 clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> uart1En{}; 
        ///UART2 Clock Enable.(Medium Density Only)
1 = Enable UART2 clock
0 = Disable UART2 clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uart2En{}; 
        ///PWM_01 Clock Enable.
1 = Enable PWM01 clock
0 = Disable PWM01 clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pwm01En{}; 
        ///PWM_23 Clock Enable.
1 = Enable PWM23 clock
0 = Disable PWM23 clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pwm23En{}; 
        ///PWM_45 Clock Enable.(Medium Density Only)
1 = Enable PWM45 clock
0 = Disable PWM45 clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pwm45En{}; 
        ///PWM_67 Clock Enable.(Medium Density Only)
1 = Enable PWM67 clock
0 = Disable PWM67 clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pwm67En{}; 
        ///CAN Bus Controller-0 Clock Enable
1 = Enable CAN0 clock
0 = Disable CAN0 clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> can0En{}; 
        ///USB 2.0 FS Device Controller Clock Enable
1 = Enable USB clock
0 = Disable USB clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> usbdEn{}; 
        ///Analog-Digital-Converter (ADC) Clock Enable.
1 = Enable ADC clock
0 = Disable ADC clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> adcEn{}; 
        ///I2S Clock Enable
1 = Enable I2S Clock
0 = Disable I2S Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> i2sEn{}; 
        ///Analog Comparator Clock Enable.
1 = Enable the Analog Comparator Clock
0 = Disable the Analog Comparator Clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> acmpEn{}; 
        ///PS2 Clock Enable.
1 = Enable PS2 clock
0 = Disable PS2 clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ps2En{}; 
    }
    namespace Noneclkstatus{    ///<Clock status monitor Register
        using Addr = Register::Address<0x5000020c,0xffffff60,0,unsigned>;
        ///XTL12M clock source stable flag
1 = XTL12M clock is stable
0 = XTL12M clock is not stable or disabled
This is read only bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xtl12mStb{}; 
        ///XTL32K clock source stable flag
1 = XTL32K clock is stable
0 = XTL32K clock is not stable or disabled
This is read only bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> xtl32kStb{}; 
        ///PLL clock source stable flag
1 = PLL clock is stable
0 = PLL clock is not stable or disabled
This is read only bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pllStb{}; 
        ///OSC10K clock source stable flag
1 = OSC10K clock is stable
0 = OSC10K clock is not stable or disabled
This is read only bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osc10kStb{}; 
        ///OSC22M clock source stable flag
1 = OSC22M clock is stable
0 = OSC22M clock is not stable or disabled
This is read only bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> osc22mStb{}; 
        ///Clock switching fail flag
1 = Clock switching failure
0 = Clock switching success
This bit is updated when software switches system clock source. If switch target clock is stable, this bit will be set to 1'b0. If switch target clock is not stable, this bit will be set to 1'b1.
Write 1 to clear the bit to zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clkSwFail{}; 
    }
    namespace Noneclksel0{    ///<Clock Source Select Control Register 0
        using Addr = Register::Address<0x50000210,0xffffffc0,0,unsigned>;
        ///HCLK clock source select (write-protection bits)
Note:
1. Before clock switching, the related clock sources (both pre-select and new-select) must be turn on
2. The 3-bit default value is reloaded from the value of CFOSC (Config0[26:24]) in user configuration register of Flash controller by any reset. Therefore the default value is either 000b or 111b.
3. These bits are protected bit, It means programming this bit needs to write "59h", "16h", "88h" to address 0x5000_0100 to disable register protection. Reference the register REGWRPROT at address GCR_BA+0x100.
000 = Clock source from external 4~24 MHz crystal clock
001 = Clock source from external 32.768 kHz crystal clock
010 = Clock source from PLL clock
011 = Clock source from internal 10 kHz oscillator clock
111 = Clock source from internal 22.1184 MHz oscillator clock
Others = reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> hclkS{}; 
        ///Cortex_M0 SysTick clock source select (write-protection bits)
If SYST_CSR[2]=0, SysTick uses listed clock source below
These bits are protected bit. It means programming this bit needs to write "59h", "16h", "88h" to address 0x5000_0100 to disable register protection. Reference the register REGWRPROT at address GCR_BA+0x100.
000 = clock source from 4~24 MHz crystal clock 
001 = Clock source from external 32.768 kHz crystal clock
010 = clock source from 12MHz crystal clock / 2
011 = clock source from HCLK / 2
1xx = Clock source from internal 22.1184 MHz oscillator clock / 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> stclkS{}; 
    }
    namespace Noneclksel1{    ///<Clock Source Select Control Register 1
        using Addr = Register::Address<0x50000214,0x008888f0,0,unsigned>;
        ///Watchdog Timer clock source select (write-protection bits)
These bits are protected bit, program this need to write "59h", "16h", "88h" to address 0x5000_0100 to disable register protection. Reference the register REGWRPROT at address GCR_BA+0x100.
00 = Clock source from external 4~24 MHz crystal clock.
01 = Reserved
10 = Clock source from HCLK/2048 clock.
11 = Clock source from internal 10 kHz oscillator clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wdtS{}; 
        ///ADC clock source select
00 = Clock source from external 4~24 MHz crystal clock.
01 = clock source from PLL clock
1x = Clock source from internal 22.1184 MHz oscillator clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> adcS{}; 
        ///TIMER0 clock source select.
000 = Clock source from external 4~24 MHz crystal clock.
001 = Clock source from external 32.768 kHz crystal clock.
010 = Clock source from HCLK.
011 = Clock source from external trigger.
1xx = Clock source from internal 22.1184 MHz oscillator clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> tmr0S{}; 
        ///TIMER1 clock source select.
000 = Clock source from external 4~24 MHz crystal clock.
001 = Clock source from external 32.768 kHz crystal clock.
010 = Clock source from HCLK.
011 = Clock source from external trigger.
1xx = Clock source from internal 22.1184 MHz oscillator clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> tmr1S{}; 
        ///TIMER2 clock source select.
000 = Clock source from external 4~24 MHz crystal clock.
001 = Clock source from external 32.768 kHz crystal clock.
010 = Clock source from HCLK.
011 = Clock source from external trigger.
1xx = Clock source from internal 22.1184 MHz oscillator clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> tmr2S{}; 
        ///TIMER3 clock source select.
000 = Clock source from external 4~24 MHz crystal clock.
001 = Clock source from external 32.768 kHz crystal clock.
010 = Clock source from HCLK.
011 = Clock source from external trigger.
1xx = Clock source from internal 22.1184 MHz oscillator clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> tmr3S{}; 
        ///UART clock source select.
00 = Clock source from external 4~24 MHz crystal clock.
01 = Clock source from PLL clock.
1x = Clock source from internal 22.1184 MHz oscillator clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> uartS{}; 
        ///CAN clock source select
00 = Clock source from external 4~24 MHz crystal clock.
01 = Clock source from PLL clock.
1x = Clock source from internal 22.1184 MHz oscillator clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> canS{}; 
        ///PWM0 and PWM1 clock source select
PWM0 and PWM1 uses the same Engine clock source, both of them use the same prescaler.
00 = Clock source from external 4~24 MHz crystal clock.
01 = Clock source from external 32.768 kHz crystal clock.
10 = Clock source from HCLK.
11 = Clock source from internal 22.1184 MHz oscillator clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pwm01S{}; 
        ///PWM2 and PWM3 clock source select
PWM2 and PWM3 uses the same Engine clock source, both of them use the same prescaler.
00 = Clock source from external 4~24 MHz crystal clock.
01 = Clock source from external 32.768 kHz crystal clock.
10 = Clock source from HCLK.
11 = Clock source from internal 22.1184 MHz oscillator clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pwm23S{}; 
    }
    namespace Noneclkdiv{    ///<Clock Divider Number Register
        using Addr = Register::Address<0x50000218,0xc0000000,0,unsigned>;
        ///HCLK clock divide number from HCLK clock source
The HCLK clock frequency = (HCLK clock source frequency) / (HCLK_N + 1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> hclkN{}; 
        ///USB clock divide number from PLL clock
The USB clock frequency = (PLL frequency ) / (USB_N + 1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> usbN{}; 
        ///UART clock divide number from UART clock source
The UART clock frequency = (UART clock source frequency ) / (UART_N + 1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> uartN{}; 
        ///CAN clock divide number from CAN clock source
The CAN clock frequency = (CAN clock source frequency ) / (CAN_N + 1)
Which CAN_N = 16 * CAN_N_H + CAN_N_L
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> canNL{}; 
        ///ADC clock divide number from ADC clock source
The ADC clock frequency = (ADC engine clock source frequency ) / (ADC_N + 1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> adcN{}; 
        ///CAN clock divide number from CAN clock source (Low Density Only)
The CAN clock frequency = (CAN clock source frequency ) / (CAN_N + 1)
Which CAN_N = 16 * CAN_N_H + CAN_N_L
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> canNH{}; 
    }
    namespace Noneclksel2{    ///<Clock Source Select Control Register 2
        using Addr = Register::Address<0x5000021c,0xffffff00,0,unsigned>;
        ///I2S clock source select.
00 = Clock source from external 4~24 MHz crystal clock.
01 = Clock source from PLL clock.
10 = Clock source from HCLK.
11 = Clock source from internal 22.1184 MHz oscillator clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> i2sS{}; 
        ///Clock Divider Clock Source Select.
00 = Clock source from external 4~24 MHz crystal clock.
01 = Clock source from external 32.768 kHz crystal clock.
10 = Clock source from HCLK.
11 = Clock source from internal 22.1184 MHz oscillator clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> frqdivS{}; 
        ///PWM4 and PWM5 Clock Source Select.(Medium Density Only)
PWM4 and PWM5 used the same Engine clock source, both of them use the same prescaler.
00 = Clock source from external 4~24 MHz crystal clock.
01 = Clock source from external 32.768 kHz crystal clock.
10 = Clock source from HCLK.
11 = Clock source from internal 22.1184 MHz oscillator clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pwm45S{}; 
        ///PWM6 and PWM7 Clock Source Select.(Medium Density Only)
PWM6 and PWM7 used the same Engine clock source, both of them use the same prescaler.
00 = Clock source from external 4~24 MHz crystal clock.
01 = Clock source from external 32.768 kHz crystal clock.
10 = Clock source from HCLK.
11 = Clock source from internal 22.1184 MHz oscillator clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pwm67S{}; 
    }
    namespace Nonepllcon{    ///<PLL Control Register
        using Addr = Register::Address<0x50000220,0xfff00000,0,unsigned>;
        ///PLL Feedback Divider Control Pins
Refer to the formulas below the table.
FOUT = FIN x NF/NR x 1/NO
Constrain:
1. 3.2MHz < FIN < 150MHz
2. 800KHz < FIN/(2xNR) < 8MHz
3. 100MHz < FCO = FINxNF/NR < 200MHz
, 120M < FCO is preferred.
Symbol	Description	
FOUT	Output Clock Frequency	
FIN	Input (Reference) Clock Frequency	
NR	Input Divider (IN_DV + 2)	
NF	Feedback Divider (FB_DV + 2)	
NO	OUT_DV = "00":NO = 1
OUT_DV = "01":NO = 2
OUT_DV = "10":NO = 2
OUT_DV = "11":NO = 4	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> fbDv{}; 
        ///PLL Input Divider Control Pins
Refer to the formulas below the table.
(Table is the same as FB_DV).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> inDv{}; 
        ///PLL Output Divider Control Pins 
Refer to the formulas below the table.
(Table is the same as FB_DV).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> outDv{}; 
        ///Power Down Mode. 
If set the IDLE bit "1" in PWRCON register, the PLL will enter power down mode too
0 = PLL is in normal mode 
1 = PLL is in power-down mode(default)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pd{}; 
        ///PLL Bypass Control
0 = PLL is in normal mode (default)
1 = PLL clock output is same as clock input (XTALin)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> bp{}; 
        ///PLL OE (FOUT enable) pin Control
0 = PLL FOUT enable
1 = PLL FOUT is fixed low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> oe{}; 
        ///PLL Source Clock Select
1 = PLL source clock from 22.1184 MHz oscillator
0 = PLL source clock from 4~24 MHz crystal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pllSrc{}; 
    }
    namespace Nonefrqdiv{    ///<Frequency Divider Control Register
        using Addr = Register::Address<0x50000224,0xffffffe0,0,unsigned>;
        ///Divider Output Frequency Selection Bits
The formula of output frequency is
Fout = Fin/(2^(N+1)),
Fin is the input clock frequency.
Fout is the frequency of divider output clock.
N is the 4-bit value of FSEL[3:0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fsel{}; 
        ///Frequency Divider Enable Bit
0 = Disable Frequency Divider
1 = Enable Frequency Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dividerEn{}; 
    }
}
