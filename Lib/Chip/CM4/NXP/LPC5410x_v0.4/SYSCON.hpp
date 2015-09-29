#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System configuration
    namespace Nonesysmemremap{    ///<System memory remap
        using Addr = Register::Address<0x40000000,0xfffffffc,0,unsigned>;
        ///System memory remap. Value 0x3 is reserved.
        enum class mapVal {
            bootLoaderMode=0x00000000,     ///<Boot Loader Mode. Interrupt vectors are re-mapped
										to Boot ROM.
            userRamMode=0x00000001,     ///<User RAM Mode. Interrupt vectors are re-mapped to
										Static RAM.
            userFlashMode=0x00000002,     ///<User Flash Mode. Interrupt vectors are not
										re-mapped and reside in Flash.
        };
        namespace mapValC{
            constexpr MPL::Value<mapVal,mapVal::bootLoaderMode> bootLoaderMode{};
            constexpr MPL::Value<mapVal,mapVal::userRamMode> userRamMode{};
            constexpr MPL::Value<mapVal,mapVal::userFlashMode> userFlashMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,mapVal> map{}; 
    }
    namespace Noneahbmatprio{    ///<AHB multilayer matrix priority control
        using Addr = Register::Address<0x40000004,0xfffc3cc0,0,unsigned>;
        ///I-Code bus priority. Should be lower than PRI_DCODE for
								proper operation.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> priIcode{}; 
        ///D-Code bus priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> priDcode{}; 
        ///System bus priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> priSys{}; 
        ///DMA controller priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> priDma{}; 
        ///System FIFO bus priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> priFifo{}; 
        ///Cortex-M0+ bus priority.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> priM0{}; 
    }
    namespace Nonesystckcal{    ///<System tick counter calibration
        using Addr = Register::Address<0x40000014,0xfc000000,0,unsigned>;
        ///System tick timer calibration value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cal{}; 
        ///Initial value for the Systick timer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> skew{}; 
        ///Initial value for the Systick timer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> noref{}; 
    }
    namespace Nonenmisrc{    ///<NMI Source Select
        using Addr = Register::Address<0x4000001c,0x3fffc0c0,0,unsigned>;
        ///The IRQ number of the interrupt that acts as the
								Non-Maskable Interrupt (NMI) for the Cortex-M4, if enabled by
								NMIENM4.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> irqm4{}; 
        ///The IRQ number of the interrupt that acts as the
								Non-Maskable Interrupt (NMI) for the Cortex-M0+, if enabled by
								NMIENM0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> irqm0{}; 
        ///Write a 1 to this bit to enable the Non-Maskable Interrupt
								(NMI) source selected by IRQM0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nmienm0{}; 
        ///Write a 1 to this bit to enable the Non-Maskable Interrupt
								(NMI) source selected by IRQM4.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmienm4{}; 
    }
    namespace Noneasyncapbctrl{    ///<Asynchronous APB Control
        using Addr = Register::Address<0x40000020,0xfffffffe,0,unsigned>;
        ///Enables the asynchronous APB bridge and
								subsystem.
        enum class enableVal {
            disabled=0x00000000,     ///<Disabled. Asynchronous APB bridge is
										disabled.
            enabled=0x00000001,     ///<Enabled. Asynchronous APB bridge is
										enabled.
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabled> disabled{};
            constexpr MPL::Value<enableVal,enableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enableVal> enable{}; 
    }
    namespace Nonesysrststat{    ///<System reset status register
        using Addr = Register::Address<0x40000040,0xffffffe0,0,unsigned>;
        ///POR reset status
        enum class porVal {
            noPorDetected=0x00000000,     ///<No POR detected
            porDetected=0x00000001,     ///<POR detected. Writing a one clears this
										reset.
        };
        namespace porValC{
            constexpr MPL::Value<porVal,porVal::noPorDetected> noPorDetected{};
            constexpr MPL::Value<porVal,porVal::porDetected> porDetected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,porVal> por{}; 
        ///Status of the external RESET pin. External reset
								status.
        enum class extrstVal {
            noResetEventDetec=0x00000000,     ///<No reset event detected.
            resetDetected=0x00000001,     ///<Reset detected. Writing a one clears this
										reset.
        };
        namespace extrstValC{
            constexpr MPL::Value<extrstVal,extrstVal::noResetEventDetec> noResetEventDetec{};
            constexpr MPL::Value<extrstVal,extrstVal::resetDetected> resetDetected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,extrstVal> extrst{}; 
        ///Status of the Watchdog reset
        enum class wdtVal {
            noWdtResetDetecte=0x00000000,     ///<No WDT reset detected
            wdtResetDetected=0x00000001,     ///<WDT reset detected. Writing a one clears this
										reset.
        };
        namespace wdtValC{
            constexpr MPL::Value<wdtVal,wdtVal::noWdtResetDetecte> noWdtResetDetecte{};
            constexpr MPL::Value<wdtVal,wdtVal::wdtResetDetected> wdtResetDetected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wdtVal> wdt{}; 
        ///Status of the Brown-out detect reset
        enum class bodVal {
            noBodResetDetecte=0x00000000,     ///<No BOD reset detected
            bodResetDetected=0x00000001,     ///<BOD reset detected. Writing a one clears this
										reset.
        };
        namespace bodValC{
            constexpr MPL::Value<bodVal,bodVal::noBodResetDetecte> noBodResetDetecte{};
            constexpr MPL::Value<bodVal,bodVal::bodResetDetected> bodResetDetected{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bodVal> bod{}; 
        ///Status of the software system reset
        enum class sysrstVal {
            noSystemResetDete=0x00000000,     ///<No System reset detected
            systemResetDetecte=0x00000001,     ///<System reset detected. Writing a one clears this
										reset.
        };
        namespace sysrstValC{
            constexpr MPL::Value<sysrstVal,sysrstVal::noSystemResetDete> noSystemResetDete{};
            constexpr MPL::Value<sysrstVal,sysrstVal::systemResetDetecte> systemResetDetecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,sysrstVal> sysrst{}; 
    }
    namespace Nonepresetctrl0{    ///<Peripheral reset control 0
        using Addr = Register::Address<0x40000044,0xf303167f,0,unsigned>;
        ///Flash controller reset control. 0 = Clear reset to this
								function. 1 = Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flashRst{}; 
        ///Flash accelerator reset control. 0 = Clear reset to this
								function. 1 = Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fmcRst{}; 
        ///Input mux reset control. 0 = Clear reset to this function.
								1 = Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> muxRst{}; 
        ///IOCON reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ioconRst{}; 
        ///GPIO0 reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gpio0Rst{}; 
        ///GPIO1 reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> gpio1Rst{}; 
        ///Pin interrupt (PINT) reset control. 0 = Clear reset to this
								function. 1 = Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pintRst{}; 
        ///Grouped interrupt (GINT) reset control. 0 = Clear reset to
								this function. 1 = Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> gintRst{}; 
        ///DMA reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dmaRst{}; 
        ///CRC generator reset control. 0 = Clear reset to this
								function. 1 = Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> crcRst{}; 
        ///Watchdog timer reset control. 0 = Clear reset to this
								function. 1 = Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> wwdtRst{}; 
        ///RTC reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rtcRst{}; 
        ///Mailbox reset control. 0 = Clear reset to this function. 1
								= Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mailboxRst{}; 
        ///ADC0 reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> adc0Rst{}; 
    }
    namespace Nonepresetctrl1{    ///<Peripheral reset control 1
        using Addr = Register::Address<0x40000048,0xf3bff9f8,0,unsigned>;
        ///Multi-rate timer (MRT) reset control. 0 = Clear reset to
								this function. 1 = Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mrtRst{}; 
        ///Repetitive interrupt timer (RIT) reset control. 0 = Clear
								reset to this function. 1 = Assert reset to this
								function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ritRst{}; 
        ///State configurable timer 0 (SCT0) reset control. 0 = Clear
								reset to this function. 1 = Assert reset to this
								function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sct0Rst{}; 
        ///System FIFO reset control. 0 = Clear reset to this
								function. 1 = Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fifoRst{}; 
        ///Micro-tick Timer reset control. 0 = Clear reset to this
								function. 1 = Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> utickRst{}; 
        ///Timer 2 reset control. 0 = Clear reset to this function. 1
								= Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> timer2Rst{}; 
        ///Timer 3 reset control. 0 = Clear reset to this function. 1
								= Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> timer3Rst{}; 
        ///Timer 4 reset control. 0 = Clear reset to this function. 1
								= Assert reset to this function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> timer4Rst{}; 
    }
    namespace Nonepresetctrlset0{    ///<Set bits in PRESETCTRL0
        using Addr = Register::Address<0x4000004c,0x00000000,0,unsigned>;
        ///Writing ones to this register sets the corresponding bit or
								bits in the PRESETCTRL0 register, if they are implemented. Bits that
								do not correspond to defined bits in PRESETCTRL0 are reserved and
								only zeroes should be written to them.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rstSet0{}; 
    }
    namespace Nonepresetctrlset1{    ///<Set bits in PRESETCTRL1
        using Addr = Register::Address<0x40000050,0x00000000,0,unsigned>;
        ///Writing ones to this register sets the corresponding bit or
								bits in the PRESETCTRL1 register, if they are implemented. Bits that
								do not correspond to defined bits in PRESETCTRL1 are reserved and
								only zeroes should be written to them.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rstSet1{}; 
    }
    namespace Nonepresetctrlclr0{    ///<Clear bits in PRESETCTRL0
        using Addr = Register::Address<0x40000054,0x00000000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bit
								or bits in the PRESETCTRL0 register, if they are implemented. Bits
								that do not correspond to defined bits in PRESETCTRL0 are reserved
								and only zeroes should be written to them.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rstClr0{}; 
    }
    namespace Nonepresetctrlclr1{    ///<Clear bits in PRESETCTRL1
        using Addr = Register::Address<0x40000058,0x00000000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bit
								or bits in the PRESETCTRL1 register, if they are implemented. Bits
								that do not correspond to defined bits in PRESETCTRL1 are reserved
								and only zeroes should be written to them.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rstClr1{}; 
    }
    namespace Nonepioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x4000005c,0x00000000,0,unsigned>;
        ///State of PIO0_31 through PIO0_0 at power-on
								reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pioporstat{}; 
    }
    namespace Nonepioporcap1{    ///<POR captured PIO status 1
        using Addr = Register::Address<0x40000060,0x00000000,0,unsigned>;
        ///State of PIO1_31 through PIO1_0 at power-on
								reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pioporstat{}; 
    }
    namespace Nonepiorescap0{    ///<Reset captured PIO status 0
        using Addr = Register::Address<0x40000068,0x00000000,0,unsigned>;
        ///State of PIO0_31 through PIO0_0 for resets other than
								power-on reset.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pioresstat{}; 
    }
    namespace Nonepiorescap1{    ///<Reset captured PIO status 1
        using Addr = Register::Address<0x4000006c,0x00000000,0,unsigned>;
        ///State of PIO1_31 through PIO1_0 for resets other than
								power-on reset.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pioresstat{}; 
    }
    namespace Nonemainclksela{    ///<Main clock source select A
        using Addr = Register::Address<0x40000080,0xfffffffc,0,unsigned>;
        ///Clock source for main clock source selector A
        enum class selVal {
            ircOscillator=0x00000000,     ///<IRC Oscillator
            clkin=0x00000001,     ///<CLKIN
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
            reserved=0x00000003,     ///<Reserved
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::ircOscillator> ircOscillator{};
            constexpr MPL::Value<selVal,selVal::clkin> clkin{};
            constexpr MPL::Value<selVal,selVal::watchdogOscillator> watchdogOscillator{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Nonemainclkselb{    ///<Main clock source select B
        using Addr = Register::Address<0x40000084,0xfffffffc,0,unsigned>;
        ///Clock source for main clock source selector B. Selects the
								clock source for the main clock.
        enum class selVal {
            mainclksela=0x00000000,     ///<MAINCLKSELA. Use the clock source selected in
										MAINCLKSELA register.
            systemPllInput=0x00000001,     ///<System PLL input.
            systemPllOutput=0x00000002,     ///<System PLL output.
            rtcOscOutput=0x00000003,     ///<RTC osc output. RTC oscillator 32 kHz
										output.
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::mainclksela> mainclksela{};
            constexpr MPL::Value<selVal,selVal::systemPllInput> systemPllInput{};
            constexpr MPL::Value<selVal,selVal::systemPllOutput> systemPllOutput{};
            constexpr MPL::Value<selVal,selVal::rtcOscOutput> rtcOscOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Noneadcclksel{    ///<ADC clock source select
        using Addr = Register::Address<0x4000008c,0xfffffffc,0,unsigned>;
        ///ADC clock source.
        enum class selVal {
            mainClock=0x00000000,     ///<Main clock
            systemPllOutput=0x00000001,     ///<System PLL output
            ircOscillator=0x00000002,     ///<IRC Oscillator
            reserved=0x00000003,     ///<reserved
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::mainClock> mainClock{};
            constexpr MPL::Value<selVal,selVal::systemPllOutput> systemPllOutput{};
            constexpr MPL::Value<selVal,selVal::ircOscillator> ircOscillator{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Noneclkoutsela{    ///<CLKOUT clock source select A
        using Addr = Register::Address<0x40000094,0xfffffffc,0,unsigned>;
        ///CLKOUT clock source
        enum class selVal {
            mainClock=0x00000000,     ///<Main clock
            clkin=0x00000001,     ///<CLKIN
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
            ircOscillator=0x00000003,     ///<IRC oscillator
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::mainClock> mainClock{};
            constexpr MPL::Value<selVal,selVal::clkin> clkin{};
            constexpr MPL::Value<selVal,selVal::watchdogOscillator> watchdogOscillator{};
            constexpr MPL::Value<selVal,selVal::ircOscillator> ircOscillator{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Noneclkoutselb{    ///<CLKOUT clock source select B
        using Addr = Register::Address<0x40000098,0xfffffffc,0,unsigned>;
        ///CLKOUT clock source
        enum class selVal {
            clkoutsela=0x00000000,     ///<CLKOUTSELA. Clock source selected in the CLKOUTSELA
										register.
            reserved=0x00000001,     ///<reserved
            reserved=0x00000002,     ///<reserved
            rtc32KhzClock=0x00000003,     ///<RTC 32 kHz clock
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::clkoutsela> clkoutsela{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
            constexpr MPL::Value<selVal,selVal::reserved> reserved{};
            constexpr MPL::Value<selVal,selVal::rtc32KhzClock> rtc32KhzClock{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Nonesyspllclksel{    ///<PLL clock source select
        using Addr = Register::Address<0x400000a0,0xfffffffc,0,unsigned>;
        ///System PLL clock source
        enum class selVal {
            ircOscillator=0x00000000,     ///<IRC Oscillator
            clkin=0x00000001,     ///<CLKIN
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
            rtc32KhzClock=0x00000003,     ///<RTC 32 kHz clock
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::ircOscillator> ircOscillator{};
            constexpr MPL::Value<selVal,selVal::clkin> clkin{};
            constexpr MPL::Value<selVal,selVal::watchdogOscillator> watchdogOscillator{};
            constexpr MPL::Value<selVal,selVal::rtc32KhzClock> rtc32KhzClock{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,selVal> sel{}; 
    }
    namespace Noneahbclkctrl0{    ///<AHB Clock control 0
        using Addr = Register::Address<0x400000c0,0xf3031665,0,unsigned>;
        ///Enables the clock for the Boot ROM. 0 = Disable; 1 =
								Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rom{}; 
        ///Enables the clock for SRAM1. 0 = Disable; 1 =
								Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sram1{}; 
        ///Enables the clock for SRAM2. 0 = Disable; 1 =
								Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sram2{}; 
        ///Enables the clock for the flash controller. 0 = Disable; 1
								= Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flash{}; 
        ///Enables the clock for the Flash accelerator. 0 = Disable; 1
								= Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fmc{}; 
        ///Enables the clock for the input muxes. 0 = Disable; 1 =
								Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> inputmux{}; 
        ///Enables the clock for the IOCON block. 0 = Disable; 1 =
								Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> iocon{}; 
        ///Enables the clock for the GPIO0 port registers. 0 =
								Disable; 1 = Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gpio0{}; 
        ///Enables the clock for the GPIO1 port registers. 0 =
								Disable; 1 = Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> gpio1{}; 
        ///Enables the clock for the pin interrupt block.0 = Disable;
								1 = Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pint{}; 
        ///Enables the clock for the grouped pin interrupt block. 0 =
								Disable; 1 = Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> gint{}; 
        ///Enables the clock for the DMA controller. 0 = Disable; 1 =
								Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Enables the clock for the CRC engine. 0 = Disable; 1 =
								Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> crc{}; 
        ///Enables the clock for the Watchdog Timer. 0 = Disable; 1 =
								Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> wwdt{}; 
        ///Enables the clock for the RTC. 0 = Disable; 1 =
								Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rtc{}; 
        ///Enables the clock for the Mailbox. 0 = Disable; 1 =
								Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mailbox{}; 
        ///Enables the clock for the ADC0 register interface. 0 =
								Disable; 1 = Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> adc0{}; 
    }
    namespace Noneahbclkctrl1{    ///<AHB Clock control 1
        using Addr = Register::Address<0x400000c4,0xf3bff9f8,0,unsigned>;
        ///Enables the clock for the Multi-Rate Timer. 0 = Disable; 1
								= Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mrt{}; 
        ///Enables the clock for the repetitive interrupt timer. 0 =
								Disable; 1 = Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rit{}; 
        ///Enables the clock for SCT0. 0 = Disable; 1 =
								Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sct0{}; 
        ///Enables the clock for system FIFOs. 0 = Disable; 1 =
								Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fifo{}; 
        ///Enables the clock for the Micro-tick Timer. 0 = Disable; 1
								= Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> utick{}; 
        ///Enables the clock for Timer 2. 0 = Disable; 1 =
								Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> timer2{}; 
        ///Enables the clock for Timer 3. 0 = Disable; 1 =
								Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> timer3{}; 
        ///Enables the clock for Timer 4. 0 = Disable; 1 =
								Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> timer4{}; 
    }
    namespace Noneahbclkctrlset0{    ///<Set bits in AHBCLKCTRL0
        using Addr = Register::Address<0x400000c8,0x00000000,0,unsigned>;
        ///Writing ones to this register sets the corresponding bit or
								bits in the AHBCLKCTRL0 register, if they are implemented. Bits that
								do not correspond to defined bits in AHBCLKCTRL0 are reserved and
								only zeroes should be written to them.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clkSet0{}; 
    }
    namespace Noneahbclkctrlset1{    ///<Set bits in AHBCLKCTRL1
        using Addr = Register::Address<0x400000cc,0x00000000,0,unsigned>;
        ///Writing ones to this register sets the corresponding bit or
								bits in the AHBCLKCTRL1 register, if they are implemented. Bits that
								do not correspond to defined bits in AHBCLKCTRL1 are reserved and
								only zeroes should be written to them.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clkSet1{}; 
    }
    namespace Noneahbclkctrlclr0{    ///<Clear bits in AHBCLKCTRL0
        using Addr = Register::Address<0x400000d0,0x00000000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bit
								or bits in the AHBCLKCTRL0 register, if they are implemented. Bits
								that do not correspond to defined bits in AHBCLKCTRL0 are reserved
								and only zeroes should be written to them.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clkClr0{}; 
    }
    namespace Noneahbclkctrlclr1{    ///<Clear bits in AHBCLKCTRL1
        using Addr = Register::Address<0x400000d4,0x00000000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bit
								or bits in the AHBCLKCTRL1 register, if they are implemented. Bits
								that do not correspond to defined bits in AHBCLKCTRL1 are reserved
								and only zeroes should be written to them.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clkClr1{}; 
    }
    namespace Nonesystickclkdiv{    ///<SYSTICK clock divider
        using Addr = Register::Address<0x400000e0,0xffffff00,0,unsigned>;
        ///SYSTICK clock divider value. 0: Disable SYSTICK timer
								clock. 1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneahbclkdiv{    ///<System clock divider
        using Addr = Register::Address<0x40000100,0xffffff00,0,unsigned>;
        ///System AHB clock divider value. 0: System clock disabled.
								1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneadcclkdiv{    ///<ADC clock divider
        using Addr = Register::Address<0x40000108,0xffffff00,0,unsigned>;
        ///ADC clock divider value. 0: Disable ADC clock. 1: Divide by
								1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Noneclkoutdiv{    ///<CLKOUT clock divider
        using Addr = Register::Address<0x4000010c,0xffffff00,0,unsigned>;
        ///CLKOUT clock divider value. 0: Disable CLKOUT clock
								divider. 1: Divide by 1. to 255: Divide by 255.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonefreqmectrl{    ///<Frequency measure register
        using Addr = Register::Address<0x40000120,0x7fffc000,0,unsigned>;
        ///Stores the capture result which is used to calculate the
								frequency of the target clock. This field is
								read-only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> capval{}; 
        ///Set this bit to one to initiate a frequency measurement
								cycle. Hardware clears this bit when the measurement cycle has
								completed and there is valid capture data in the CAPVAL field (bits
								13:0).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> prog{}; 
    }
    namespace Noneflashcfg{    ///<Flash wait states configuration
        using Addr = Register::Address<0x40000124,0xffff8fff,0,unsigned>;
        ///Flash memory access time. FLASHTIM +1 is equal to the
								number of system clocks used for flash access.
        enum class flashtimVal {
            v1ClockCycle=0x00000000,     ///<1 clock cycle. 1 system clock flash access time
										(for system clock frequencies of up to MHz).
            v2ClockCycles=0x00000001,     ///<2 clock cycles. 2 system clocks flash access time
										(for system clock frequencies of up to MHz).
            v3ClockCycles=0x00000002,     ///<3 clock cycles. 3 system clocks flash access time
										(for system clock frequencies of up to MHz).
            v4ClockCycles=0x00000003,     ///<4 clock cycles. 4 system clocks flash access
										time.
            v5ClockCycles=0x00000004,     ///<5 clock cycles. 5 system clocks flash access
										time.
            v6ClockCycles=0x00000005,     ///<6 clock cycles. 6 system clocks flash access
										time.
            v7ClockCycles=0x00000006,     ///<7 clock cycles. 7 system clocks flash access
										time.
            v8ClockCycles=0x00000007,     ///<8 clock cycles. 8 system clocks flash access
										time.
        };
        namespace flashtimValC{
            constexpr MPL::Value<flashtimVal,flashtimVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<flashtimVal,flashtimVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<flashtimVal,flashtimVal::v3ClockCycles> v3ClockCycles{};
            constexpr MPL::Value<flashtimVal,flashtimVal::v4ClockCycles> v4ClockCycles{};
            constexpr MPL::Value<flashtimVal,flashtimVal::v5ClockCycles> v5ClockCycles{};
            constexpr MPL::Value<flashtimVal,flashtimVal::v6ClockCycles> v6ClockCycles{};
            constexpr MPL::Value<flashtimVal,flashtimVal::v7ClockCycles> v7ClockCycles{};
            constexpr MPL::Value<flashtimVal,flashtimVal::v8ClockCycles> v8ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,flashtimVal> flashtim{}; 
    }
    namespace Nonefifoctrl{    ///<Serial interface FIFO enables
        using Addr = Register::Address<0x40000148,0xffffc0c0,0,unsigned>;
        ///USART0 transmitter FIFO enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> u0txfifoen{}; 
        ///USART1 transmitter FIFO enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> u1txfifoen{}; 
        ///USART2 transmitter FIFO enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> u2txfifoen{}; 
        ///USART3 transmitter FIFO enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> u3txfifoen{}; 
        ///SPI0 transmitter FIFO enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spi0txfifoen{}; 
        ///SPI1 transmitter FIFO enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi1txfifoen{}; 
        ///USART0 receiver FIFO enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> u0rxfifoen{}; 
        ///USART1 receiver FIFO enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> u1rxfifoen{}; 
        ///USART2 receiver FIFO enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> u2rxfifoen{}; 
        ///USART3 receiver FIFO enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> u3rxfifoen{}; 
        ///SPI0 receiver FIFO enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi0rxfifoen{}; 
        ///SPI1 receiver FIFO enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spi1rxfifoen{}; 
    }
    namespace Noneircctrl{    ///<IRC oscillator control
        using Addr = Register::Address<0x40000184,0xffffff00,0,unsigned>;
        ///Trim value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> trim{}; 
    }
    namespace Nonertcoscctrl{    ///<RTC oscillator 32 kHz output control
        using Addr = Register::Address<0x40000190,0xfffffffe,0,unsigned>;
        ///RTC 32 kHz clock enable.
        enum class enVal {
            disabled=0x00000000,     ///<Disabled. RTC clock off.
            enabled=0x00000001,     ///<Enabled. RTC clock on.
        };
        namespace enValC{
            constexpr MPL::Value<enVal,enVal::disabled> disabled{};
            constexpr MPL::Value<enVal,enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enVal> en{}; 
    }
    namespace Nonesyspllctrl{    ///<PLL control
        using Addr = Register::Address<0x400001b0,0xffe00000,0,unsigned>;
        ///Bandwidth select R value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> selr{}; 
        ///Bandwidth select I value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,4),Register::ReadWriteAccess,unsigned> seli{}; 
        ///Bandwidth select P value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> selp{}; 
        ///PLL bypass control
        enum class bypassVal {
            disabled=0x00000000,     ///<Disabled. PLL CCO is used to create the PLL
										output.
            enabled=0x00000001,     ///<Enabled. PLL is bypassed, the PLL input clock is
										routed directly to the PLL output (default).
        };
        namespace bypassValC{
            constexpr MPL::Value<bypassVal,bypassVal::disabled> disabled{};
            constexpr MPL::Value<bypassVal,bypassVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,bypassVal> bypass{}; 
        ///Bypass feedback clock divide by 2.
        enum class bypassccodiv2Val {
            divideBy2=0x00000000,     ///<Divide by 2. The CCO feedback clock is divided by 2
										in addition to the programmed M divide.
            bypass=0x00000001,     ///<Bypass. The CCO feedback clock is divided only by
										the programmed M divide.
        };
        namespace bypassccodiv2ValC{
            constexpr MPL::Value<bypassccodiv2Val,bypassccodiv2Val::divideBy2> divideBy2{};
            constexpr MPL::Value<bypassccodiv2Val,bypassccodiv2Val::bypass> bypass{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,bypassccodiv2Val> bypassccodiv2{}; 
        ///Enable spread spectrum/fractional mode
        enum class uplimoffVal {
            normalMode=0x00000000,     ///<Normal mode.
            ssgcMode=0x00000001,     ///<SSGC mode. Spread spectrum/fractional
										mode.
        };
        namespace uplimoffValC{
            constexpr MPL::Value<uplimoffVal,uplimoffVal::normalMode> normalMode{};
            constexpr MPL::Value<uplimoffVal,uplimoffVal::ssgcMode> ssgcMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,uplimoffVal> uplimoff{}; 
        ///PLL filter control. Set this bit to one when the SSGC is
								disabled or at low frequencies.
        enum class bandselVal {
            sscgControl=0x00000000,     ///<SSCG control. The PLL filter uses the parameters
										derived from the SSCG decoder.
            mdecControl=0x00000001,     ///<MDEC control. The PLL filter uses the programmable
										fields SELP, SELR, and SELI in this register to control the
										filter constants.
        };
        namespace bandselValC{
            constexpr MPL::Value<bandselVal,bandselVal::sscgControl> sscgControl{};
            constexpr MPL::Value<bandselVal,bandselVal::mdecControl> mdecControl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,bandselVal> bandsel{}; 
        ///PLL0 direct input enable
        enum class directiVal {
            disabled=0x00000000,     ///<Disabled. The PLL input divider (N divider) output
										is used to drive the PLL CCO.
            enabled=0x00000001,     ///<Enabled. The PLL input divider (N divider) is
										bypassed. the PLL input clock is used directly to drive the
										PLL CCO.
        };
        namespace directiValC{
            constexpr MPL::Value<directiVal,directiVal::disabled> disabled{};
            constexpr MPL::Value<directiVal,directiVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,directiVal> directi{}; 
        ///PLL0 direct output enable
        enum class directoVal {
            disabled=0x00000000,     ///<Disabled. The PLL output divider (P divider) is
										used to create the PLL output.
            enabled=0x00000001,     ///<Enabled. The PLL output divider (P divider) is
										bypassed, the PLL CCO output is used as the PLL
										output.
        };
        namespace directoValC{
            constexpr MPL::Value<directoVal,directoVal::disabled> disabled{};
            constexpr MPL::Value<directoVal,directoVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,directoVal> directo{}; 
    }
    namespace Nonesyspllstat{    ///<PLL status
        using Addr = Register::Address<0x400001b4,0xfffffffe,0,unsigned>;
        ///PLL0 lock indicator
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace Nonesyspllndec{    ///<PLL N decoder
        using Addr = Register::Address<0x400001b8,0xfffff800,0,unsigned>;
        ///Decoded N-divider coefficient value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ndec{}; 
        ///NDEC reload request. When a 1 is written to this bit, the
								NDEC value is loaded into the PLL. Must be cleared by software for
								any subsequent load, or the PLL can be powered down and back up via
								the PDEN_SYS_PLL bit in the PDRUNCFG register if the NDEC value is
								changed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nreq{}; 
    }
    namespace Nonesyspllpdec{    ///<PLL P decoder
        using Addr = Register::Address<0x400001bc,0xffffff00,0,unsigned>;
        ///Decoded P-divider coefficient value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pdec{}; 
        ///PDEC reload request. When a 1 is written to this bit, the
								PDEC value is loaded into the PLL. Must be cleared by software for
								any subsequent load, or the PLL can be powered down and back up via
								the PDEN_SYS_PLL bit in the PDRUNCFG register if the PDEC value is
								changed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> preq{}; 
    }
    namespace Nonesyspllssctrl0{    ///<PLL spread spectrum control 0
        using Addr = Register::Address<0x400001c0,0xfff80000,0,unsigned>;
        ///Decoded M-divider coefficient value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> mdec{}; 
        ///MDEC reload request. When a 1 is written to this bit, the
								MDEC value is loaded into the PLL. Must be cleared by software for
								any subsequent load, or the PLL can be powered down and back up via
								the PDEN_SYS_PLL bit in the PDRUNCFG register if the MDEC value is
								changed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mreq{}; 
        ///Select spread spectrum mode.
        enum class selExtVal {
            spreadSpectrumMode=0x00000000,     ///<Spread spectrum mode. Spread spectrum mode
										enabled.
            mdecEnabled=0x00000001,     ///<MDEC enabled. Spread spectrum clock generator not
										used.
        };
        namespace selExtValC{
            constexpr MPL::Value<selExtVal,selExtVal::spreadSpectrumMode> spreadSpectrumMode{};
            constexpr MPL::Value<selExtVal,selExtVal::mdecEnabled> mdecEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,selExtVal> selExt{}; 
    }
    namespace Nonesyspllssctrl1{    ///<PLL spread spectrum control 1
        using Addr = Register::Address<0x400001c4,0xc0000000,0,unsigned>;
        ///M- divider value with fraction. MD[18:11] : integer portion
								of the feedback divider value. MD[10:0] : fractional portion of the
								feedback divider value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> md{}; 
        ///MD reload request. When a 1 is written to this bit, the MD
								value is loaded into the PLL. This bit is cleared when the load is
								complete.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mdreq{}; 
        ///Programmable modulation frequency fm = Fref/Nss with Fref =
								Fin/N 0b000 => Nss = 512 (fm = 3.9 - 7.8 kHz) 0b001 => Nss = 384 (fm
								= 5.2 - 10.4 kHz) 0b010 => Nss = 256 (fm = 7.8 - 15.6 kHz) 0b011 =>
								Nss = 128 (fm = 15.6 - 31.3 kHz) 0b100 => Nss = 64 (fm = 32.3 - 64.5
								kHz) 0b101 => Nss = 32 (fm = 62.5- 125 kHz) 0b110 => Nss = 24 (fm =
								83.3- 166.6 kHz) 0b111 => Nss = 16 (fm = 125- 250 kHz)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> mf{}; 
        ///Programmable frequency modulation depth deltafmodpk-pk =
								Fref x k/Fcco = k/MDdec 0 = no spread 0b000 => k = 0 (no spread
								spectrum) 0b001 => k = 1 0b010 => k = 1.5 0b011 => k = 2 0b100 => k
								= 3 0b101 => k = 4 0b110 => k = 6 0b111 => k = 8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> mr{}; 
        ///Modulation waveform control 0 = no compensation
								Compensation for low pass filtering of the PLL to get a triangular
								modulation at the output of the PLL, giving a flat frequency
								spectrum. 0b00 => no compensation 0b10 => recommended setting 0b11
								=> max. compensation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Power down.
        enum class pdVal {
            enabled=0x00000000,     ///<Enabled. Spread spectrum controller is
										enabled
            disabled=0x00000001,     ///<Disabled. Spread spectrum controller is
										disabled
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::enabled> enabled{};
            constexpr MPL::Value<pdVal,pdVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,pdVal> pd{}; 
        ///Select modulation frequency.
        enum class ditherVal {
            fixed=0x00000000,     ///<Fixed. Fixed modulation frequency.
            dither=0x00000001,     ///<Dither. Randomly dither between two modulation
										frequencies.
        };
        namespace ditherValC{
            constexpr MPL::Value<ditherVal,ditherVal::fixed> fixed{};
            constexpr MPL::Value<ditherVal,ditherVal::dither> dither{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ditherVal> dither{}; 
    }
    namespace Nonepdruncfg{    ///<Power configuration register
        using Addr = Register::Address<0x40000210,0xfe241a47,0,unsigned>;
        ///IRC oscillator output. 0 = Powered; 1 = Powered
								down.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pdenIrcOsc{}; 
        ///IRC oscillator. 0 = Powered; 1 = Powered
								down.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdenIrc{}; 
        ///Flash memory. 0 = Powered; 1 = Powered down.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdenFlash{}; 
        ///Brown-out Detect reset. 0 = Powered; 1 = Powered
								down.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdenBodRst{}; 
        ///Brown-out Detect interrupt. 0 = Powered; 1 = Powered
								down.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pdenBodIntr{}; 
        ///ADC0. 0 = Powered; 1 = Powered down.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pdenAdc0{}; 
        ///First 8 kB of SRAM0). 0 = Powered; 1 = Powered
								down.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pdenSram0a{}; 
        ///Remaining portion of SRAM0). 0 = Powered; 1 = Powered
								down.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pdenSram0b{}; 
        ///SRAM1. 0 = Powered; 1 = Powered down.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pdenSram1{}; 
        ///SRAM2 (undedicated 8 kB RAM). 0 = Powered; 1 = Powered
								down.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdenSram2{}; 
        ///ROM. 0 = Powered; 1 = Powered down.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pdenRom{}; 
        ///Vdda to the ADC, must be enabled for the ADC to work. Also
								see bit 23. 0 = Powered; 1 = Powered down.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pdenVdda{}; 
        ///Watchdog oscillator. 0 = Powered; 1 = Powered
								down.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pdenWdtOsc{}; 
        ///PLL0. 0 = Powered; 1 = Powered down.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdenSysPll{}; 
        ///Vrefp to the ADC, must be enabled for the ADC to work. Also
								see bit 19. 0 = Powered; 1 = Powered down.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdenVrefp{}; 
        ///32 kHz RTC oscillator. 0 = Powered; 1 = Powered
								down.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pden32kOsc{}; 
    }
    namespace Nonepdruncfgset{    ///<Set bits in PDRUNCFG
        using Addr = Register::Address<0x40000214,0x00000000,0,unsigned>;
        ///Writing ones to this register sets the corresponding bit or
								bits in the PDRUNCFG register, if they are implemented. Bits that do
								not correspond to defined bits in PDRUNCFG are reserved and only
								zeroes should be written to them.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdSet{}; 
    }
    namespace Nonepdruncfgclr{    ///<Clear bits in PDRUNCFG
        using Addr = Register::Address<0x40000218,0x00000000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bit
								or bits in the PDRUNCFG register, if they are implemented. Bits that
								do not correspond to defined bits in PDRUNCFG are reserved and only
								zeroes should be written to them.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdClr{}; 
    }
    namespace Nonestarterp0{    ///<Start logic 0 wake-up enable register
        using Addr = Register::Address<0x40000240,0x40000004,0,unsigned>;
        ///WWDT interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wwdt{}; 
        ///BOD interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bod{}; 
        ///DMA wake-up. 0 = Wake-up disabled. 1 = Wake-up enabled.
								Typically used in sleep mode only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Group interrupt 0 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gint0{}; 
        ///GPIO pin interrupt 0 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled. Not for pattern match.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pint0{}; 
        ///GPIO pin interrupt 1 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled. Not for pattern match.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pint1{}; 
        ///GPIO pin interrupt 2 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled. Not for pattern match.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pint2{}; 
        ///GPIO pin interrupt 3 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled. Not for pattern match.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pint3{}; 
        ///Micro-tick Timer wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> utick{}; 
        ///Multi-Rate Timer wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Typically used in sleep mode only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mrt{}; 
        ///Timer 0 wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.Typically used in sleep mode only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> timer0{}; 
        ///Timer 1 wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.Typically used in sleep mode only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timer1{}; 
        ///Timer 2 wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.Typically used in sleep mode only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> timer2{}; 
        ///Timer 3 wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.Typically used in sleep mode only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timer3{}; 
        ///Timer 4 wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.Typically used in sleep mode only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timer4{}; 
        ///SCT0 wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.Typically used in sleep mode only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sct0{}; 
        ///USART0 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart0{}; 
        ///USART1 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart1{}; 
        ///USART2 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> usart2{}; 
        ///USART2 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> usart3{}; 
        ///I2C0 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c0{}; 
        ///I2C1 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c1{}; 
        ///I2C2 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2c2{}; 
        ///SPI0 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> spi0{}; 
        ///SPI1 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> spi1{}; 
        ///ADC0 sequence A interrupt wake-up. 0 = Wake-up disabled. 1
								= Wake-up enabled.Typically used in sleep mode only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> adc0Seqa{}; 
        ///ADC0 sequence B interrupt wake-up. 0 = Wake-up disabled. 1
								= Wake-up enabled.Typically used in sleep mode only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> adc0Seqb{}; 
        ///ADC0 threshold and error interrupt wake-up. 0 = Wake-up
								disabled. 1 = Wake-up enabled.Typically used in sleep mode
								only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> adc0Thcmp{}; 
        ///RTC interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rtc{}; 
        ///Mailbox interrupt wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled.Typically used in sleep mode only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mailbox{}; 
    }
    namespace Nonestarterp1{    ///<Start logic 1 wake-up enable register
        using Addr = Register::Address<0x40000244,0xfffffee0,0,unsigned>;
        ///Group interrupt 0 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gint1{}; 
        ///GPIO pin interrupt 4 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled. Not for pattern match.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pint4{}; 
        ///GPIO pin interrupt 5 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled. Not for pattern match.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pint5{}; 
        ///GPIO pin interrupt 6 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled. Not for pattern match.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pint6{}; 
        ///GPIO pin interrupt 7 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled. Not for pattern match.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pint7{}; 
        ///Repetitive Interrupt Timer interrupt wake-up. 0 = Wake-up
								disabled. 1 = Wake-up enabled. Typically used in sleep mode
								only.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rit{}; 
    }
    namespace Nonestarterpset0{    ///<Set bits in STARTERP0
        using Addr = Register::Address<0x40000248,0x00000000,0,unsigned>;
        ///Writing ones to this register sets the corresponding bit or
								bits in the STARTERP0 register, if they are implemented. Bits that
								do not correspond to defined bits in STARTERP0 are reserved and only
								zeroes should be written to them.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> startSet0{}; 
    }
    namespace Nonestarterpset1{    ///<Set bits in STARTERP1
        using Addr = Register::Address<0x4000024c,0x00000000,0,unsigned>;
        ///Writing ones to this register sets the corresponding bit or
								bits in the STARTERP1 register, if they are implemented. Bits that
								do not correspond to defined bits in STARTERP1 are reserved and only
								zeroes should be written to them.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> startSet1{}; 
    }
    namespace Nonestarterpclr0{    ///<Clear bits in STARTERP0
        using Addr = Register::Address<0x40000250,0x00000000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bit
								or bits in the STARTERP0 register, if they are implemented. Bits
								that do not correspond to defined bits in STARTERP0 are reserved and
								only zeroes should be written to them.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> startClr0{}; 
    }
    namespace Nonestarterpclr1{    ///<Clear bits in STARTERP1
        using Addr = Register::Address<0x40000254,0x00000000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bit
								or bits in the STARTERP1 register, if they are implemented. Bits
								that do not correspond to defined bits in STARTERP1 are reserved and
								only zeroes should be written to them.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> startClr1{}; 
    }
    namespace Nonecpuctrl{    ///<CPU Control for multiple processors
        using Addr = Register::Address<0x40000300,0xffffff82,0,unsigned>;
        ///Determines which CPU is considered the master. The master
								CPU cannot have its clock turned off via the related CMnCLKEN bit or
								be reset via the related CMxRSTEN in this register. The slave CPU
								wakes up briefly following device reset, then goes back to sleep
								until activated by the master CPU.
        enum class mastercpuVal {
            m0p=0x00000000,     ///<M0+. Cortex-M0+ is the master CPU.
            m4=0x00000001,     ///<M4. Cortex-M4 is the master CPU.
        };
        namespace mastercpuValC{
            constexpr MPL::Value<mastercpuVal,mastercpuVal::m0p> m0p{};
            constexpr MPL::Value<mastercpuVal,mastercpuVal::m4> m4{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,mastercpuVal> mastercpu{}; 
        ///Cortex-M4 clock enable.
        enum class cm4clkenVal {
            disabled=0x00000000,     ///<Disabled. The Cortex-M4 clock is not
										enabled.
            enabled=0x00000001,     ///<Enabled. The Cortex-M4 clock is
										enabled.
        };
        namespace cm4clkenValC{
            constexpr MPL::Value<cm4clkenVal,cm4clkenVal::disabled> disabled{};
            constexpr MPL::Value<cm4clkenVal,cm4clkenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cm4clkenVal> cm4clken{}; 
        ///Cortex-M0+ clock enable.
        enum class cm0clkenVal {
            disabled=0x00000000,     ///<Disabled. The Cortex-M0+ clock is not
										enabled.
            enabled=0x00000001,     ///<Enabled. The Cortex-M0+ clock is
										enabled.
        };
        namespace cm0clkenValC{
            constexpr MPL::Value<cm0clkenVal,cm0clkenVal::disabled> disabled{};
            constexpr MPL::Value<cm0clkenVal,cm0clkenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cm0clkenVal> cm0clken{}; 
        ///Cortex-M4 reset.
        enum class cm4rstenVal {
            disabled=0x00000000,     ///<Disabled. The Cortex-M4 is not being
										reset.
            enabled=0x00000001,     ///<Enabled. The Cortex-M4 is being
										reset.
        };
        namespace cm4rstenValC{
            constexpr MPL::Value<cm4rstenVal,cm4rstenVal::disabled> disabled{};
            constexpr MPL::Value<cm4rstenVal,cm4rstenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,cm4rstenVal> cm4rsten{}; 
        ///Cortex-M0+ reset.
        enum class cm0rstenVal {
            disabled=0x00000000,     ///<Disabled. The Cortex-M0+ is not being
										reset.
            enabled=0x00000001,     ///<Enabled. The Cortex-M0+ is being
										reset.
        };
        namespace cm0rstenValC{
            constexpr MPL::Value<cm0rstenVal,cm0rstenVal::disabled> disabled{};
            constexpr MPL::Value<cm0rstenVal,cm0rstenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cm0rstenVal> cm0rsten{}; 
        ///Identifies the owner of reduced power mode control: which
								CPU can cause the device to enter Sleep, Deep Sleep, Power-down, and
								Deep Power-down modes.
        enum class powercpuVal {
            m0p=0x00000000,     ///<M0+. Cortex-M0+ is the owner of reduced power mode
										control.
            m4=0x00000001,     ///<M4. Cortex-M4 is the owner of reduced power mode
										control.
        };
        namespace powercpuValC{
            constexpr MPL::Value<powercpuVal,powercpuVal::m0p> m0p{};
            constexpr MPL::Value<powercpuVal,powercpuVal::m4> m4{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,powercpuVal> powercpu{}; 
    }
    namespace Nonecpboot{    ///<Coprocessor Boot Address
        using Addr = Register::Address<0x40000304,0x00000000,0,unsigned>;
        ///Slave processor boot address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bootaddr{}; 
    }
    namespace Nonecpstack{    ///<Coprocessor Stack Address
        using Addr = Register::Address<0x40000308,0x00000000,0,unsigned>;
        ///Slave processor stack address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> stackaddr{}; 
    }
    namespace Nonejtagidcode{    ///<JTAG ID code register
        using Addr = Register::Address<0x400003f4,0x00000000,0,unsigned>;
        ///JTAG ID code.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> jtagid{}; 
    }
    namespace NonedeviceId0{    ///<Part ID register
        using Addr = Register::Address<0x400003f8,0x00000000,0,unsigned>;
        ///Part ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> partid{}; 
    }
    namespace NonedeviceId1{    ///<Boot ROM and die revision register
        using Addr = Register::Address<0x400003fc,0x00000000,0,unsigned>;
        ///Revision.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> revid{}; 
    }
}
