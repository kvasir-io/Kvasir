#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System configuration
    namespace Nonesysmemremap{    ///<System memory remap
        using Addr = Register::Address<0x40000000,0xfffffffc,0,unsigned>;
        ///System memory remap. Value 0x3 is reserved.
        enum class MapVal {
            bootLoaderMode=0x00000000,     ///<Boot Loader Mode. Interrupt vectors are re-mapped
										to Boot ROM.
            userRamMode=0x00000001,     ///<User RAM Mode. Interrupt vectors are re-mapped to
										Static RAM.
            userFlashMode=0x00000002,     ///<User Flash Mode. Interrupt vectors are not
										re-mapped and reside in Flash.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MapVal> map{}; 
        namespace MapValC{
            constexpr Register::FieldValue<decltype(map),MapVal::bootLoaderMode> bootLoaderMode{};
            constexpr Register::FieldValue<decltype(map),MapVal::userRamMode> userRamMode{};
            constexpr Register::FieldValue<decltype(map),MapVal::userFlashMode> userFlashMode{};
        }
    }
    namespace Noneahbmatprio{    ///<AHB multilayer matrix priority control
        using Addr = Register::Address<0x40000004,0xfffc3cc0,0,unsigned>;
        ///I-Code bus priority. Should be lower than PRI_DCODE for
								proper operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> priIcode{}; 
        namespace PriicodeValC{
        }
        ///D-Code bus priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> priDcode{}; 
        namespace PridcodeValC{
        }
        ///System bus priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> priSys{}; 
        namespace PrisysValC{
        }
        ///DMA controller priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> priDma{}; 
        namespace PridmaValC{
        }
        ///System FIFO bus priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> priFifo{}; 
        namespace PrififoValC{
        }
        ///Cortex-M0+ bus priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> priM0{}; 
        namespace Prim0ValC{
        }
    }
    namespace Nonesystckcal{    ///<System tick counter calibration
        using Addr = Register::Address<0x40000014,0xfc000000,0,unsigned>;
        ///System tick timer calibration value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cal{}; 
        namespace CalValC{
        }
        ///Initial value for the Systick timer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> skew{}; 
        namespace SkewValC{
        }
        ///Initial value for the Systick timer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> noref{}; 
        namespace NorefValC{
        }
    }
    namespace Nonenmisrc{    ///<NMI Source Select
        using Addr = Register::Address<0x4000001c,0x3fffc0c0,0,unsigned>;
        ///The IRQ number of the interrupt that acts as the
								Non-Maskable Interrupt (NMI) for the Cortex-M4, if enabled by
								NMIENM4.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> irqm4{}; 
        namespace Irqm4ValC{
        }
        ///The IRQ number of the interrupt that acts as the
								Non-Maskable Interrupt (NMI) for the Cortex-M0+, if enabled by
								NMIENM0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> irqm0{}; 
        namespace Irqm0ValC{
        }
        ///Write a 1 to this bit to enable the Non-Maskable Interrupt
								(NMI) source selected by IRQM0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nmienm0{}; 
        namespace Nmienm0ValC{
        }
        ///Write a 1 to this bit to enable the Non-Maskable Interrupt
								(NMI) source selected by IRQM4.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmienm4{}; 
        namespace Nmienm4ValC{
        }
    }
    namespace Noneasyncapbctrl{    ///<Asynchronous APB Control
        using Addr = Register::Address<0x40000020,0xfffffffe,0,unsigned>;
        ///Enables the asynchronous APB bridge and
								subsystem.
        enum class EnableVal {
            disabled=0x00000000,     ///<Disabled. Asynchronous APB bridge is
										disabled.
            enabled=0x00000001,     ///<Enabled. Asynchronous APB bridge is
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable),EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable),EnableVal::enabled> enabled{};
        }
    }
    namespace Nonesysrststat{    ///<System reset status register
        using Addr = Register::Address<0x40000040,0xffffffe0,0,unsigned>;
        ///POR reset status
        enum class PorVal {
            noPorDetected=0x00000000,     ///<No POR detected
            porDetected=0x00000001,     ///<POR detected. Writing a one clears this
										reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PorVal> por{}; 
        namespace PorValC{
            constexpr Register::FieldValue<decltype(por),PorVal::noPorDetected> noPorDetected{};
            constexpr Register::FieldValue<decltype(por),PorVal::porDetected> porDetected{};
        }
        ///Status of the external RESET pin. External reset
								status.
        enum class ExtrstVal {
            noResetEventDetec=0x00000000,     ///<No reset event detected.
            resetDetected=0x00000001,     ///<Reset detected. Writing a one clears this
										reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ExtrstVal> extrst{}; 
        namespace ExtrstValC{
            constexpr Register::FieldValue<decltype(extrst),ExtrstVal::noResetEventDetec> noResetEventDetec{};
            constexpr Register::FieldValue<decltype(extrst),ExtrstVal::resetDetected> resetDetected{};
        }
        ///Status of the Watchdog reset
        enum class WdtVal {
            noWdtResetDetecte=0x00000000,     ///<No WDT reset detected
            wdtResetDetected=0x00000001,     ///<WDT reset detected. Writing a one clears this
										reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WdtVal> wdt{}; 
        namespace WdtValC{
            constexpr Register::FieldValue<decltype(wdt),WdtVal::noWdtResetDetecte> noWdtResetDetecte{};
            constexpr Register::FieldValue<decltype(wdt),WdtVal::wdtResetDetected> wdtResetDetected{};
        }
        ///Status of the Brown-out detect reset
        enum class BodVal {
            noBodResetDetecte=0x00000000,     ///<No BOD reset detected
            bodResetDetected=0x00000001,     ///<BOD reset detected. Writing a one clears this
										reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodVal> bod{}; 
        namespace BodValC{
            constexpr Register::FieldValue<decltype(bod),BodVal::noBodResetDetecte> noBodResetDetecte{};
            constexpr Register::FieldValue<decltype(bod),BodVal::bodResetDetected> bodResetDetected{};
        }
        ///Status of the software system reset
        enum class SysrstVal {
            noSystemResetDete=0x00000000,     ///<No System reset detected
            systemResetDetecte=0x00000001,     ///<System reset detected. Writing a one clears this
										reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SysrstVal> sysrst{}; 
        namespace SysrstValC{
            constexpr Register::FieldValue<decltype(sysrst),SysrstVal::noSystemResetDete> noSystemResetDete{};
            constexpr Register::FieldValue<decltype(sysrst),SysrstVal::systemResetDetecte> systemResetDetecte{};
        }
    }
    namespace Nonepresetctrl0{    ///<Peripheral reset control 0
        using Addr = Register::Address<0x40000044,0xf303167f,0,unsigned>;
        ///Flash controller reset control. 0 = Clear reset to this
								function. 1 = Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flashRst{}; 
        namespace FlashrstValC{
        }
        ///Flash accelerator reset control. 0 = Clear reset to this
								function. 1 = Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fmcRst{}; 
        namespace FmcrstValC{
        }
        ///Input mux reset control. 0 = Clear reset to this function.
								1 = Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> muxRst{}; 
        namespace MuxrstValC{
        }
        ///IOCON reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ioconRst{}; 
        namespace IoconrstValC{
        }
        ///GPIO0 reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gpio0Rst{}; 
        namespace Gpio0rstValC{
        }
        ///GPIO1 reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> gpio1Rst{}; 
        namespace Gpio1rstValC{
        }
        ///Pin interrupt (PINT) reset control. 0 = Clear reset to this
								function. 1 = Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pintRst{}; 
        namespace PintrstValC{
        }
        ///Grouped interrupt (GINT) reset control. 0 = Clear reset to
								this function. 1 = Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> gintRst{}; 
        namespace GintrstValC{
        }
        ///DMA reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dmaRst{}; 
        namespace DmarstValC{
        }
        ///CRC generator reset control. 0 = Clear reset to this
								function. 1 = Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> crcRst{}; 
        namespace CrcrstValC{
        }
        ///Watchdog timer reset control. 0 = Clear reset to this
								function. 1 = Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> wwdtRst{}; 
        namespace WwdtrstValC{
        }
        ///RTC reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rtcRst{}; 
        namespace RtcrstValC{
        }
        ///Mailbox reset control. 0 = Clear reset to this function. 1
								= Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mailboxRst{}; 
        namespace MailboxrstValC{
        }
        ///ADC0 reset control. 0 = Clear reset to this function. 1 =
								Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> adc0Rst{}; 
        namespace Adc0rstValC{
        }
    }
    namespace Nonepresetctrl1{    ///<Peripheral reset control 1
        using Addr = Register::Address<0x40000048,0xf3bff9f8,0,unsigned>;
        ///Multi-rate timer (MRT) reset control. 0 = Clear reset to
								this function. 1 = Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mrtRst{}; 
        namespace MrtrstValC{
        }
        ///Repetitive interrupt timer (RIT) reset control. 0 = Clear
								reset to this function. 1 = Assert reset to this
								function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ritRst{}; 
        namespace RitrstValC{
        }
        ///State configurable timer 0 (SCT0) reset control. 0 = Clear
								reset to this function. 1 = Assert reset to this
								function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sct0Rst{}; 
        namespace Sct0rstValC{
        }
        ///System FIFO reset control. 0 = Clear reset to this
								function. 1 = Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fifoRst{}; 
        namespace FiforstValC{
        }
        ///Micro-tick Timer reset control. 0 = Clear reset to this
								function. 1 = Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> utickRst{}; 
        namespace UtickrstValC{
        }
        ///Timer 2 reset control. 0 = Clear reset to this function. 1
								= Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> timer2Rst{}; 
        namespace Timer2rstValC{
        }
        ///Timer 3 reset control. 0 = Clear reset to this function. 1
								= Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> timer3Rst{}; 
        namespace Timer3rstValC{
        }
        ///Timer 4 reset control. 0 = Clear reset to this function. 1
								= Assert reset to this function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> timer4Rst{}; 
        namespace Timer4rstValC{
        }
    }
    namespace Nonepresetctrlset0{    ///<Set bits in PRESETCTRL0
        using Addr = Register::Address<0x4000004c,0x00000000,0,unsigned>;
        ///Writing ones to this register sets the corresponding bit or
								bits in the PRESETCTRL0 register, if they are implemented. Bits that
								do not correspond to defined bits in PRESETCTRL0 are reserved and
								only zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rstSet0{}; 
        namespace Rstset0ValC{
        }
    }
    namespace Nonepresetctrlset1{    ///<Set bits in PRESETCTRL1
        using Addr = Register::Address<0x40000050,0x00000000,0,unsigned>;
        ///Writing ones to this register sets the corresponding bit or
								bits in the PRESETCTRL1 register, if they are implemented. Bits that
								do not correspond to defined bits in PRESETCTRL1 are reserved and
								only zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rstSet1{}; 
        namespace Rstset1ValC{
        }
    }
    namespace Nonepresetctrlclr0{    ///<Clear bits in PRESETCTRL0
        using Addr = Register::Address<0x40000054,0x00000000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bit
								or bits in the PRESETCTRL0 register, if they are implemented. Bits
								that do not correspond to defined bits in PRESETCTRL0 are reserved
								and only zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rstClr0{}; 
        namespace Rstclr0ValC{
        }
    }
    namespace Nonepresetctrlclr1{    ///<Clear bits in PRESETCTRL1
        using Addr = Register::Address<0x40000058,0x00000000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bit
								or bits in the PRESETCTRL1 register, if they are implemented. Bits
								that do not correspond to defined bits in PRESETCTRL1 are reserved
								and only zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rstClr1{}; 
        namespace Rstclr1ValC{
        }
    }
    namespace Nonepioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x4000005c,0x00000000,0,unsigned>;
        ///State of PIO0_31 through PIO0_0 at power-on
								reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pioporstat{}; 
        namespace PioporstatValC{
        }
    }
    namespace Nonepioporcap1{    ///<POR captured PIO status 1
        using Addr = Register::Address<0x40000060,0x00000000,0,unsigned>;
        ///State of PIO1_31 through PIO1_0 at power-on
								reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pioporstat{}; 
        namespace PioporstatValC{
        }
    }
    namespace Nonepiorescap0{    ///<Reset captured PIO status 0
        using Addr = Register::Address<0x40000068,0x00000000,0,unsigned>;
        ///State of PIO0_31 through PIO0_0 for resets other than
								power-on reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pioresstat{}; 
        namespace PioresstatValC{
        }
    }
    namespace Nonepiorescap1{    ///<Reset captured PIO status 1
        using Addr = Register::Address<0x4000006c,0x00000000,0,unsigned>;
        ///State of PIO1_31 through PIO1_0 for resets other than
								power-on reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pioresstat{}; 
        namespace PioresstatValC{
        }
    }
    namespace Nonemainclksela{    ///<Main clock source select A
        using Addr = Register::Address<0x40000080,0xfffffffc,0,unsigned>;
        ///Clock source for main clock source selector A
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC Oscillator
            clkin=0x00000001,     ///<CLKIN
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel),SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::clkin> clkin{};
            constexpr Register::FieldValue<decltype(sel),SelVal::watchdogOscillator> watchdogOscillator{};
        }
    }
    namespace Nonemainclkselb{    ///<Main clock source select B
        using Addr = Register::Address<0x40000084,0xfffffffc,0,unsigned>;
        ///Clock source for main clock source selector B. Selects the
								clock source for the main clock.
        enum class SelVal {
            mainclksela=0x00000000,     ///<MAINCLKSELA. Use the clock source selected in
										MAINCLKSELA register.
            systemPllInput=0x00000001,     ///<System PLL input.
            systemPllOutput=0x00000002,     ///<System PLL output.
            rtcOscOutput=0x00000003,     ///<RTC osc output. RTC oscillator 32 kHz
										output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel),SelVal::mainclksela> mainclksela{};
            constexpr Register::FieldValue<decltype(sel),SelVal::systemPllInput> systemPllInput{};
            constexpr Register::FieldValue<decltype(sel),SelVal::systemPllOutput> systemPllOutput{};
            constexpr Register::FieldValue<decltype(sel),SelVal::rtcOscOutput> rtcOscOutput{};
        }
    }
    namespace Noneadcclksel{    ///<ADC clock source select
        using Addr = Register::Address<0x4000008c,0xfffffffc,0,unsigned>;
        ///ADC clock source.
        enum class SelVal {
            mainClock=0x00000000,     ///<Main clock
            systemPllOutput=0x00000001,     ///<System PLL output
            ircOscillator=0x00000002,     ///<IRC Oscillator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel),SelVal::mainClock> mainClock{};
            constexpr Register::FieldValue<decltype(sel),SelVal::systemPllOutput> systemPllOutput{};
            constexpr Register::FieldValue<decltype(sel),SelVal::ircOscillator> ircOscillator{};
        }
    }
    namespace Noneclkoutsela{    ///<CLKOUT clock source select A
        using Addr = Register::Address<0x40000094,0xfffffffc,0,unsigned>;
        ///CLKOUT clock source
        enum class SelVal {
            mainClock=0x00000000,     ///<Main clock
            clkin=0x00000001,     ///<CLKIN
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
            ircOscillator=0x00000003,     ///<IRC oscillator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel),SelVal::mainClock> mainClock{};
            constexpr Register::FieldValue<decltype(sel),SelVal::clkin> clkin{};
            constexpr Register::FieldValue<decltype(sel),SelVal::watchdogOscillator> watchdogOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::ircOscillator> ircOscillator{};
        }
    }
    namespace Noneclkoutselb{    ///<CLKOUT clock source select B
        using Addr = Register::Address<0x40000098,0xfffffffc,0,unsigned>;
        ///CLKOUT clock source
        enum class SelVal {
            clkoutsela=0x00000000,     ///<CLKOUTSELA. Clock source selected in the CLKOUTSELA
										register.
            rtc32KhzClock=0x00000003,     ///<RTC 32 kHz clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel),SelVal::clkoutsela> clkoutsela{};
            constexpr Register::FieldValue<decltype(sel),SelVal::rtc32KhzClock> rtc32KhzClock{};
        }
    }
    namespace Nonesyspllclksel{    ///<PLL clock source select
        using Addr = Register::Address<0x400000a0,0xfffffffc,0,unsigned>;
        ///System PLL clock source
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC Oscillator
            clkin=0x00000001,     ///<CLKIN
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
            rtc32KhzClock=0x00000003,     ///<RTC 32 kHz clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel),SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::clkin> clkin{};
            constexpr Register::FieldValue<decltype(sel),SelVal::watchdogOscillator> watchdogOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::rtc32KhzClock> rtc32KhzClock{};
        }
    }
    namespace Noneahbclkctrl0{    ///<AHB Clock control 0
        using Addr = Register::Address<0x400000c0,0xf3031665,0,unsigned>;
        ///Enables the clock for the Boot ROM. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rom{}; 
        namespace RomValC{
        }
        ///Enables the clock for SRAM1. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sram1{}; 
        namespace Sram1ValC{
        }
        ///Enables the clock for SRAM2. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sram2{}; 
        namespace Sram2ValC{
        }
        ///Enables the clock for the flash controller. 0 = Disable; 1
								= Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flash{}; 
        namespace FlashValC{
        }
        ///Enables the clock for the Flash accelerator. 0 = Disable; 1
								= Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fmc{}; 
        namespace FmcValC{
        }
        ///Enables the clock for the input muxes. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> inputmux{}; 
        namespace InputmuxValC{
        }
        ///Enables the clock for the IOCON block. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> iocon{}; 
        namespace IoconValC{
        }
        ///Enables the clock for the GPIO0 port registers. 0 =
								Disable; 1 = Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gpio0{}; 
        namespace Gpio0ValC{
        }
        ///Enables the clock for the GPIO1 port registers. 0 =
								Disable; 1 = Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> gpio1{}; 
        namespace Gpio1ValC{
        }
        ///Enables the clock for the pin interrupt block.0 = Disable;
								1 = Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pint{}; 
        namespace PintValC{
        }
        ///Enables the clock for the grouped pin interrupt block. 0 =
								Disable; 1 = Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> gint{}; 
        namespace GintValC{
        }
        ///Enables the clock for the DMA controller. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dma{}; 
        namespace DmaValC{
        }
        ///Enables the clock for the CRC engine. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> crc{}; 
        namespace CrcValC{
        }
        ///Enables the clock for the Watchdog Timer. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> wwdt{}; 
        namespace WwdtValC{
        }
        ///Enables the clock for the RTC. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rtc{}; 
        namespace RtcValC{
        }
        ///Enables the clock for the Mailbox. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mailbox{}; 
        namespace MailboxValC{
        }
        ///Enables the clock for the ADC0 register interface. 0 =
								Disable; 1 = Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> adc0{}; 
        namespace Adc0ValC{
        }
    }
    namespace Noneahbclkctrl1{    ///<AHB Clock control 1
        using Addr = Register::Address<0x400000c4,0xf3bff9f8,0,unsigned>;
        ///Enables the clock for the Multi-Rate Timer. 0 = Disable; 1
								= Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mrt{}; 
        namespace MrtValC{
        }
        ///Enables the clock for the repetitive interrupt timer. 0 =
								Disable; 1 = Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rit{}; 
        namespace RitValC{
        }
        ///Enables the clock for SCT0. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sct0{}; 
        namespace Sct0ValC{
        }
        ///Enables the clock for system FIFOs. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fifo{}; 
        namespace FifoValC{
        }
        ///Enables the clock for the Micro-tick Timer. 0 = Disable; 1
								= Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> utick{}; 
        namespace UtickValC{
        }
        ///Enables the clock for Timer 2. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> timer2{}; 
        namespace Timer2ValC{
        }
        ///Enables the clock for Timer 3. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> timer3{}; 
        namespace Timer3ValC{
        }
        ///Enables the clock for Timer 4. 0 = Disable; 1 =
								Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> timer4{}; 
        namespace Timer4ValC{
        }
    }
    namespace Noneahbclkctrlset0{    ///<Set bits in AHBCLKCTRL0
        using Addr = Register::Address<0x400000c8,0x00000000,0,unsigned>;
        ///Writing ones to this register sets the corresponding bit or
								bits in the AHBCLKCTRL0 register, if they are implemented. Bits that
								do not correspond to defined bits in AHBCLKCTRL0 are reserved and
								only zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clkSet0{}; 
        namespace Clkset0ValC{
        }
    }
    namespace Noneahbclkctrlset1{    ///<Set bits in AHBCLKCTRL1
        using Addr = Register::Address<0x400000cc,0x00000000,0,unsigned>;
        ///Writing ones to this register sets the corresponding bit or
								bits in the AHBCLKCTRL1 register, if they are implemented. Bits that
								do not correspond to defined bits in AHBCLKCTRL1 are reserved and
								only zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clkSet1{}; 
        namespace Clkset1ValC{
        }
    }
    namespace Noneahbclkctrlclr0{    ///<Clear bits in AHBCLKCTRL0
        using Addr = Register::Address<0x400000d0,0x00000000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bit
								or bits in the AHBCLKCTRL0 register, if they are implemented. Bits
								that do not correspond to defined bits in AHBCLKCTRL0 are reserved
								and only zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clkClr0{}; 
        namespace Clkclr0ValC{
        }
    }
    namespace Noneahbclkctrlclr1{    ///<Clear bits in AHBCLKCTRL1
        using Addr = Register::Address<0x400000d4,0x00000000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bit
								or bits in the AHBCLKCTRL1 register, if they are implemented. Bits
								that do not correspond to defined bits in AHBCLKCTRL1 are reserved
								and only zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clkClr1{}; 
        namespace Clkclr1ValC{
        }
    }
    namespace Nonesystickclkdiv{    ///<SYSTICK clock divider
        using Addr = Register::Address<0x400000e0,0xffffff00,0,unsigned>;
        ///SYSTICK clock divider value. 0: Disable SYSTICK timer
								clock. 1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Noneahbclkdiv{    ///<System clock divider
        using Addr = Register::Address<0x40000100,0xffffff00,0,unsigned>;
        ///System AHB clock divider value. 0: System clock disabled.
								1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Noneadcclkdiv{    ///<ADC clock divider
        using Addr = Register::Address<0x40000108,0xffffff00,0,unsigned>;
        ///ADC clock divider value. 0: Disable ADC clock. 1: Divide by
								1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Noneclkoutdiv{    ///<CLKOUT clock divider
        using Addr = Register::Address<0x4000010c,0xffffff00,0,unsigned>;
        ///CLKOUT clock divider value. 0: Disable CLKOUT clock
								divider. 1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Nonefreqmectrl{    ///<Frequency measure register
        using Addr = Register::Address<0x40000120,0x7fffc000,0,unsigned>;
        ///Stores the capture result which is used to calculate the
								frequency of the target clock. This field is
								read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> capval{}; 
        namespace CapvalValC{
        }
        ///Set this bit to one to initiate a frequency measurement
								cycle. Hardware clears this bit when the measurement cycle has
								completed and there is valid capture data in the CAPVAL field (bits
								13:0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> prog{}; 
        namespace ProgValC{
        }
    }
    namespace Noneflashcfg{    ///<Flash wait states configuration
        using Addr = Register::Address<0x40000124,0xffff8fff,0,unsigned>;
        ///Flash memory access time. FLASHTIM +1 is equal to the
								number of system clocks used for flash access.
        enum class FlashtimVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,FlashtimVal> flashtim{}; 
        namespace FlashtimValC{
            constexpr Register::FieldValue<decltype(flashtim),FlashtimVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(flashtim),FlashtimVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(flashtim),FlashtimVal::v3ClockCycles> v3ClockCycles{};
            constexpr Register::FieldValue<decltype(flashtim),FlashtimVal::v4ClockCycles> v4ClockCycles{};
            constexpr Register::FieldValue<decltype(flashtim),FlashtimVal::v5ClockCycles> v5ClockCycles{};
            constexpr Register::FieldValue<decltype(flashtim),FlashtimVal::v6ClockCycles> v6ClockCycles{};
            constexpr Register::FieldValue<decltype(flashtim),FlashtimVal::v7ClockCycles> v7ClockCycles{};
            constexpr Register::FieldValue<decltype(flashtim),FlashtimVal::v8ClockCycles> v8ClockCycles{};
        }
    }
    namespace Nonefifoctrl{    ///<Serial interface FIFO enables
        using Addr = Register::Address<0x40000148,0xffffc0c0,0,unsigned>;
        ///USART0 transmitter FIFO enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> u0txfifoen{}; 
        namespace U0txfifoenValC{
        }
        ///USART1 transmitter FIFO enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> u1txfifoen{}; 
        namespace U1txfifoenValC{
        }
        ///USART2 transmitter FIFO enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> u2txfifoen{}; 
        namespace U2txfifoenValC{
        }
        ///USART3 transmitter FIFO enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> u3txfifoen{}; 
        namespace U3txfifoenValC{
        }
        ///SPI0 transmitter FIFO enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spi0txfifoen{}; 
        namespace Spi0txfifoenValC{
        }
        ///SPI1 transmitter FIFO enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi1txfifoen{}; 
        namespace Spi1txfifoenValC{
        }
        ///USART0 receiver FIFO enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> u0rxfifoen{}; 
        namespace U0rxfifoenValC{
        }
        ///USART1 receiver FIFO enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> u1rxfifoen{}; 
        namespace U1rxfifoenValC{
        }
        ///USART2 receiver FIFO enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> u2rxfifoen{}; 
        namespace U2rxfifoenValC{
        }
        ///USART3 receiver FIFO enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> u3rxfifoen{}; 
        namespace U3rxfifoenValC{
        }
        ///SPI0 receiver FIFO enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi0rxfifoen{}; 
        namespace Spi0rxfifoenValC{
        }
        ///SPI1 receiver FIFO enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spi1rxfifoen{}; 
        namespace Spi1rxfifoenValC{
        }
    }
    namespace Noneircctrl{    ///<IRC oscillator control
        using Addr = Register::Address<0x40000184,0xffffff00,0,unsigned>;
        ///Trim value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> trim{}; 
        namespace TrimValC{
        }
    }
    namespace Nonertcoscctrl{    ///<RTC oscillator 32 kHz output control
        using Addr = Register::Address<0x40000190,0xfffffffe,0,unsigned>;
        ///RTC 32 kHz clock enable.
        enum class EnVal {
            disabled=0x00000000,     ///<Disabled. RTC clock off.
            enabled=0x00000001,     ///<Enabled. RTC clock on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnVal> en{}; 
        namespace EnValC{
            constexpr Register::FieldValue<decltype(en),EnVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(en),EnVal::enabled> enabled{};
        }
    }
    namespace Nonesyspllctrl{    ///<PLL control
        using Addr = Register::Address<0x400001b0,0xffe00000,0,unsigned>;
        ///Bandwidth select R value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> selr{}; 
        namespace SelrValC{
        }
        ///Bandwidth select I value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,4),Register::ReadWriteAccess,unsigned> seli{}; 
        namespace SeliValC{
        }
        ///Bandwidth select P value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> selp{}; 
        namespace SelpValC{
        }
        ///PLL bypass control
        enum class BypassVal {
            disabled=0x00000000,     ///<Disabled. PLL CCO is used to create the PLL
										output.
            enabled=0x00000001,     ///<Enabled. PLL is bypassed, the PLL input clock is
										routed directly to the PLL output (default).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,BypassVal> bypass{}; 
        namespace BypassValC{
            constexpr Register::FieldValue<decltype(bypass),BypassVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bypass),BypassVal::enabled> enabled{};
        }
        ///Bypass feedback clock divide by 2.
        enum class Bypassccodiv2Val {
            divideBy2=0x00000000,     ///<Divide by 2. The CCO feedback clock is divided by 2
										in addition to the programmed M divide.
            bypass=0x00000001,     ///<Bypass. The CCO feedback clock is divided only by
										the programmed M divide.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Bypassccodiv2Val> bypassccodiv2{}; 
        namespace Bypassccodiv2ValC{
            constexpr Register::FieldValue<decltype(bypassccodiv2),Bypassccodiv2Val::divideBy2> divideBy2{};
            constexpr Register::FieldValue<decltype(bypassccodiv2),Bypassccodiv2Val::bypass> bypass{};
        }
        ///Enable spread spectrum/fractional mode
        enum class UplimoffVal {
            normalMode=0x00000000,     ///<Normal mode.
            ssgcMode=0x00000001,     ///<SSGC mode. Spread spectrum/fractional
										mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,UplimoffVal> uplimoff{}; 
        namespace UplimoffValC{
            constexpr Register::FieldValue<decltype(uplimoff),UplimoffVal::normalMode> normalMode{};
            constexpr Register::FieldValue<decltype(uplimoff),UplimoffVal::ssgcMode> ssgcMode{};
        }
        ///PLL filter control. Set this bit to one when the SSGC is
								disabled or at low frequencies.
        enum class BandselVal {
            sscgControl=0x00000000,     ///<SSCG control. The PLL filter uses the parameters
										derived from the SSCG decoder.
            mdecControl=0x00000001,     ///<MDEC control. The PLL filter uses the programmable
										fields SELP, SELR, and SELI in this register to control the
										filter constants.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,BandselVal> bandsel{}; 
        namespace BandselValC{
            constexpr Register::FieldValue<decltype(bandsel),BandselVal::sscgControl> sscgControl{};
            constexpr Register::FieldValue<decltype(bandsel),BandselVal::mdecControl> mdecControl{};
        }
        ///PLL0 direct input enable
        enum class DirectiVal {
            disabled=0x00000000,     ///<Disabled. The PLL input divider (N divider) output
										is used to drive the PLL CCO.
            enabled=0x00000001,     ///<Enabled. The PLL input divider (N divider) is
										bypassed. the PLL input clock is used directly to drive the
										PLL CCO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,DirectiVal> directi{}; 
        namespace DirectiValC{
            constexpr Register::FieldValue<decltype(directi),DirectiVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(directi),DirectiVal::enabled> enabled{};
        }
        ///PLL0 direct output enable
        enum class DirectoVal {
            disabled=0x00000000,     ///<Disabled. The PLL output divider (P divider) is
										used to create the PLL output.
            enabled=0x00000001,     ///<Enabled. The PLL output divider (P divider) is
										bypassed, the PLL CCO output is used as the PLL
										output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DirectoVal> directo{}; 
        namespace DirectoValC{
            constexpr Register::FieldValue<decltype(directo),DirectoVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(directo),DirectoVal::enabled> enabled{};
        }
    }
    namespace Nonesyspllstat{    ///<PLL status
        using Addr = Register::Address<0x400001b4,0xfffffffe,0,unsigned>;
        ///PLL0 lock indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
    }
    namespace Nonesyspllndec{    ///<PLL N decoder
        using Addr = Register::Address<0x400001b8,0xfffff800,0,unsigned>;
        ///Decoded N-divider coefficient value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ndec{}; 
        namespace NdecValC{
        }
        ///NDEC reload request. When a 1 is written to this bit, the
								NDEC value is loaded into the PLL. Must be cleared by software for
								any subsequent load, or the PLL can be powered down and back up via
								the PDEN_SYS_PLL bit in the PDRUNCFG register if the NDEC value is
								changed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nreq{}; 
        namespace NreqValC{
        }
    }
    namespace Nonesyspllpdec{    ///<PLL P decoder
        using Addr = Register::Address<0x400001bc,0xffffff00,0,unsigned>;
        ///Decoded P-divider coefficient value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pdec{}; 
        namespace PdecValC{
        }
        ///PDEC reload request. When a 1 is written to this bit, the
								PDEC value is loaded into the PLL. Must be cleared by software for
								any subsequent load, or the PLL can be powered down and back up via
								the PDEN_SYS_PLL bit in the PDRUNCFG register if the PDEC value is
								changed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> preq{}; 
        namespace PreqValC{
        }
    }
    namespace Nonesyspllssctrl0{    ///<PLL spread spectrum control 0
        using Addr = Register::Address<0x400001c0,0xfff80000,0,unsigned>;
        ///Decoded M-divider coefficient value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> mdec{}; 
        namespace MdecValC{
        }
        ///MDEC reload request. When a 1 is written to this bit, the
								MDEC value is loaded into the PLL. Must be cleared by software for
								any subsequent load, or the PLL can be powered down and back up via
								the PDEN_SYS_PLL bit in the PDRUNCFG register if the MDEC value is
								changed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mreq{}; 
        namespace MreqValC{
        }
        ///Select spread spectrum mode.
        enum class SelextVal {
            spreadSpectrumMode=0x00000000,     ///<Spread spectrum mode. Spread spectrum mode
										enabled.
            mdecEnabled=0x00000001,     ///<MDEC enabled. Spread spectrum clock generator not
										used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,SelextVal> selExt{}; 
        namespace SelextValC{
            constexpr Register::FieldValue<decltype(selExt),SelextVal::spreadSpectrumMode> spreadSpectrumMode{};
            constexpr Register::FieldValue<decltype(selExt),SelextVal::mdecEnabled> mdecEnabled{};
        }
    }
    namespace Nonesyspllssctrl1{    ///<PLL spread spectrum control 1
        using Addr = Register::Address<0x400001c4,0xc0000000,0,unsigned>;
        ///M- divider value with fraction. MD[18:11] : integer portion
								of the feedback divider value. MD[10:0] : fractional portion of the
								feedback divider value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
        ///MD reload request. When a 1 is written to this bit, the MD
								value is loaded into the PLL. This bit is cleared when the load is
								complete.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mdreq{}; 
        namespace MdreqValC{
        }
        ///Programmable modulation frequency fm = Fref/Nss with Fref =
								Fin/N 0b000 => Nss = 512 (fm = 3.9 - 7.8 kHz) 0b001 => Nss = 384 (fm
								= 5.2 - 10.4 kHz) 0b010 => Nss = 256 (fm = 7.8 - 15.6 kHz) 0b011 =>
								Nss = 128 (fm = 15.6 - 31.3 kHz) 0b100 => Nss = 64 (fm = 32.3 - 64.5
								kHz) 0b101 => Nss = 32 (fm = 62.5- 125 kHz) 0b110 => Nss = 24 (fm =
								83.3- 166.6 kHz) 0b111 => Nss = 16 (fm = 125- 250 kHz)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> mf{}; 
        namespace MfValC{
        }
        ///Programmable frequency modulation depth deltafmodpk-pk =
								Fref x k/Fcco = k/MDdec 0 = no spread 0b000 => k = 0 (no spread
								spectrum) 0b001 => k = 1 0b010 => k = 1.5 0b011 => k = 2 0b100 => k
								= 3 0b101 => k = 4 0b110 => k = 6 0b111 => k = 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> mr{}; 
        namespace MrValC{
        }
        ///Modulation waveform control 0 = no compensation
								Compensation for low pass filtering of the PLL to get a triangular
								modulation at the output of the PLL, giving a flat frequency
								spectrum. 0b00 => no compensation 0b10 => recommended setting 0b11
								=> max. compensation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> mc{}; 
        namespace McValC{
        }
        ///Power down.
        enum class PdVal {
            enabled=0x00000000,     ///<Enabled. Spread spectrum controller is
										enabled
            disabled=0x00000001,     ///<Disabled. Spread spectrum controller is
										disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd),PdVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(pd),PdVal::disabled> disabled{};
        }
        ///Select modulation frequency.
        enum class DitherVal {
            fixed=0x00000000,     ///<Fixed. Fixed modulation frequency.
            dither=0x00000001,     ///<Dither. Randomly dither between two modulation
										frequencies.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,DitherVal> dither{}; 
        namespace DitherValC{
            constexpr Register::FieldValue<decltype(dither),DitherVal::fixed> fixed{};
            constexpr Register::FieldValue<decltype(dither),DitherVal::dither> dither{};
        }
    }
    namespace Nonepdruncfg{    ///<Power configuration register
        using Addr = Register::Address<0x40000210,0xfe241a47,0,unsigned>;
        ///IRC oscillator output. 0 = Powered; 1 = Powered
								down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pdenIrcOsc{}; 
        namespace PdenircoscValC{
        }
        ///IRC oscillator. 0 = Powered; 1 = Powered
								down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pdenIrc{}; 
        namespace PdenircValC{
        }
        ///Flash memory. 0 = Powered; 1 = Powered down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdenFlash{}; 
        namespace PdenflashValC{
        }
        ///Brown-out Detect reset. 0 = Powered; 1 = Powered
								down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pdenBodRst{}; 
        namespace PdenbodrstValC{
        }
        ///Brown-out Detect interrupt. 0 = Powered; 1 = Powered
								down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pdenBodIntr{}; 
        namespace PdenbodintrValC{
        }
        ///ADC0. 0 = Powered; 1 = Powered down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pdenAdc0{}; 
        namespace Pdenadc0ValC{
        }
        ///First 8 kB of SRAM0). 0 = Powered; 1 = Powered
								down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pdenSram0a{}; 
        namespace Pdensram0aValC{
        }
        ///Remaining portion of SRAM0). 0 = Powered; 1 = Powered
								down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pdenSram0b{}; 
        namespace Pdensram0bValC{
        }
        ///SRAM1. 0 = Powered; 1 = Powered down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pdenSram1{}; 
        namespace Pdensram1ValC{
        }
        ///SRAM2 (undedicated 8 kB RAM). 0 = Powered; 1 = Powered
								down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pdenSram2{}; 
        namespace Pdensram2ValC{
        }
        ///ROM. 0 = Powered; 1 = Powered down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pdenRom{}; 
        namespace PdenromValC{
        }
        ///Vdda to the ADC, must be enabled for the ADC to work. Also
								see bit 23. 0 = Powered; 1 = Powered down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pdenVdda{}; 
        namespace PdenvddaValC{
        }
        ///Watchdog oscillator. 0 = Powered; 1 = Powered
								down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pdenWdtOsc{}; 
        namespace PdenwdtoscValC{
        }
        ///PLL0. 0 = Powered; 1 = Powered down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pdenSysPll{}; 
        namespace PdensyspllValC{
        }
        ///Vrefp to the ADC, must be enabled for the ADC to work. Also
								see bit 19. 0 = Powered; 1 = Powered down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pdenVrefp{}; 
        namespace PdenvrefpValC{
        }
        ///32 kHz RTC oscillator. 0 = Powered; 1 = Powered
								down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pden32kOsc{}; 
        namespace Pden32koscValC{
        }
    }
    namespace Nonepdruncfgset{    ///<Set bits in PDRUNCFG
        using Addr = Register::Address<0x40000214,0x00000000,0,unsigned>;
        ///Writing ones to this register sets the corresponding bit or
								bits in the PDRUNCFG register, if they are implemented. Bits that do
								not correspond to defined bits in PDRUNCFG are reserved and only
								zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdSet{}; 
        namespace PdsetValC{
        }
    }
    namespace Nonepdruncfgclr{    ///<Clear bits in PDRUNCFG
        using Addr = Register::Address<0x40000218,0x00000000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bit
								or bits in the PDRUNCFG register, if they are implemented. Bits that
								do not correspond to defined bits in PDRUNCFG are reserved and only
								zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdClr{}; 
        namespace PdclrValC{
        }
    }
    namespace Nonestarterp0{    ///<Start logic 0 wake-up enable register
        using Addr = Register::Address<0x40000240,0x40000004,0,unsigned>;
        ///WWDT interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wwdt{}; 
        namespace WwdtValC{
        }
        ///BOD interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bod{}; 
        namespace BodValC{
        }
        ///DMA wake-up. 0 = Wake-up disabled. 1 = Wake-up enabled.
								Typically used in sleep mode only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dma{}; 
        namespace DmaValC{
        }
        ///Group interrupt 0 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gint0{}; 
        namespace Gint0ValC{
        }
        ///GPIO pin interrupt 0 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled. Not for pattern match.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pint0{}; 
        namespace Pint0ValC{
        }
        ///GPIO pin interrupt 1 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled. Not for pattern match.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pint1{}; 
        namespace Pint1ValC{
        }
        ///GPIO pin interrupt 2 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled. Not for pattern match.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pint2{}; 
        namespace Pint2ValC{
        }
        ///GPIO pin interrupt 3 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled. Not for pattern match.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pint3{}; 
        namespace Pint3ValC{
        }
        ///Micro-tick Timer wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> utick{}; 
        namespace UtickValC{
        }
        ///Multi-Rate Timer wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Typically used in sleep mode only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mrt{}; 
        namespace MrtValC{
        }
        ///Timer 0 wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.Typically used in sleep mode only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> timer0{}; 
        namespace Timer0ValC{
        }
        ///Timer 1 wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.Typically used in sleep mode only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timer1{}; 
        namespace Timer1ValC{
        }
        ///Timer 2 wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.Typically used in sleep mode only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> timer2{}; 
        namespace Timer2ValC{
        }
        ///Timer 3 wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.Typically used in sleep mode only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timer3{}; 
        namespace Timer3ValC{
        }
        ///Timer 4 wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.Typically used in sleep mode only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timer4{}; 
        namespace Timer4ValC{
        }
        ///SCT0 wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.Typically used in sleep mode only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sct0{}; 
        namespace Sct0ValC{
        }
        ///USART0 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart0{}; 
        namespace Usart0ValC{
        }
        ///USART1 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart1{}; 
        namespace Usart1ValC{
        }
        ///USART2 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> usart2{}; 
        namespace Usart2ValC{
        }
        ///USART2 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> usart3{}; 
        namespace Usart3ValC{
        }
        ///I2C0 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c0{}; 
        namespace I2c0ValC{
        }
        ///I2C1 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c1{}; 
        namespace I2c1ValC{
        }
        ///I2C2 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2c2{}; 
        namespace I2c2ValC{
        }
        ///SPI0 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> spi0{}; 
        namespace Spi0ValC{
        }
        ///SPI1 interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled. Peripheral interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> spi1{}; 
        namespace Spi1ValC{
        }
        ///ADC0 sequence A interrupt wake-up. 0 = Wake-up disabled. 1
								= Wake-up enabled.Typically used in sleep mode only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> adc0Seqa{}; 
        namespace Adc0seqaValC{
        }
        ///ADC0 sequence B interrupt wake-up. 0 = Wake-up disabled. 1
								= Wake-up enabled.Typically used in sleep mode only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> adc0Seqb{}; 
        namespace Adc0seqbValC{
        }
        ///ADC0 threshold and error interrupt wake-up. 0 = Wake-up
								disabled. 1 = Wake-up enabled.Typically used in sleep mode
								only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> adc0Thcmp{}; 
        namespace Adc0thcmpValC{
        }
        ///RTC interrupt wake-up. 0 = Wake-up disabled. 1 = Wake-up
								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rtc{}; 
        namespace RtcValC{
        }
        ///Mailbox interrupt wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled.Typically used in sleep mode only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mailbox{}; 
        namespace MailboxValC{
        }
    }
    namespace Nonestarterp1{    ///<Start logic 1 wake-up enable register
        using Addr = Register::Address<0x40000244,0xfffffee0,0,unsigned>;
        ///Group interrupt 0 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gint1{}; 
        namespace Gint1ValC{
        }
        ///GPIO pin interrupt 4 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled. Not for pattern match.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pint4{}; 
        namespace Pint4ValC{
        }
        ///GPIO pin interrupt 5 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled. Not for pattern match.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pint5{}; 
        namespace Pint5ValC{
        }
        ///GPIO pin interrupt 6 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled. Not for pattern match.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pint6{}; 
        namespace Pint6ValC{
        }
        ///GPIO pin interrupt 7 wake-up. 0 = Wake-up disabled. 1 =
								Wake-up enabled. Not for pattern match.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pint7{}; 
        namespace Pint7ValC{
        }
        ///Repetitive Interrupt Timer interrupt wake-up. 0 = Wake-up
								disabled. 1 = Wake-up enabled. Typically used in sleep mode
								only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rit{}; 
        namespace RitValC{
        }
    }
    namespace Nonestarterpset0{    ///<Set bits in STARTERP0
        using Addr = Register::Address<0x40000248,0x00000000,0,unsigned>;
        ///Writing ones to this register sets the corresponding bit or
								bits in the STARTERP0 register, if they are implemented. Bits that
								do not correspond to defined bits in STARTERP0 are reserved and only
								zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> startSet0{}; 
        namespace Startset0ValC{
        }
    }
    namespace Nonestarterpset1{    ///<Set bits in STARTERP1
        using Addr = Register::Address<0x4000024c,0x00000000,0,unsigned>;
        ///Writing ones to this register sets the corresponding bit or
								bits in the STARTERP1 register, if they are implemented. Bits that
								do not correspond to defined bits in STARTERP1 are reserved and only
								zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> startSet1{}; 
        namespace Startset1ValC{
        }
    }
    namespace Nonestarterpclr0{    ///<Clear bits in STARTERP0
        using Addr = Register::Address<0x40000250,0x00000000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bit
								or bits in the STARTERP0 register, if they are implemented. Bits
								that do not correspond to defined bits in STARTERP0 are reserved and
								only zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> startClr0{}; 
        namespace Startclr0ValC{
        }
    }
    namespace Nonestarterpclr1{    ///<Clear bits in STARTERP1
        using Addr = Register::Address<0x40000254,0x00000000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bit
								or bits in the STARTERP1 register, if they are implemented. Bits
								that do not correspond to defined bits in STARTERP1 are reserved and
								only zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> startClr1{}; 
        namespace Startclr1ValC{
        }
    }
    namespace Nonecpuctrl{    ///<CPU Control for multiple processors
        using Addr = Register::Address<0x40000300,0xffffff82,0,unsigned>;
        ///Determines which CPU is considered the master. The master
								CPU cannot have its clock turned off via the related CMnCLKEN bit or
								be reset via the related CMxRSTEN in this register. The slave CPU
								wakes up briefly following device reset, then goes back to sleep
								until activated by the master CPU.
        enum class MastercpuVal {
            m0p=0x00000000,     ///<M0+. Cortex-M0+ is the master CPU.
            m4=0x00000001,     ///<M4. Cortex-M4 is the master CPU.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MastercpuVal> mastercpu{}; 
        namespace MastercpuValC{
            constexpr Register::FieldValue<decltype(mastercpu),MastercpuVal::m0p> m0p{};
            constexpr Register::FieldValue<decltype(mastercpu),MastercpuVal::m4> m4{};
        }
        ///Cortex-M4 clock enable.
        enum class Cm4clkenVal {
            disabled=0x00000000,     ///<Disabled. The Cortex-M4 clock is not
										enabled.
            enabled=0x00000001,     ///<Enabled. The Cortex-M4 clock is
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Cm4clkenVal> cm4clken{}; 
        namespace Cm4clkenValC{
            constexpr Register::FieldValue<decltype(cm4clken),Cm4clkenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cm4clken),Cm4clkenVal::enabled> enabled{};
        }
        ///Cortex-M0+ clock enable.
        enum class Cm0clkenVal {
            disabled=0x00000000,     ///<Disabled. The Cortex-M0+ clock is not
										enabled.
            enabled=0x00000001,     ///<Enabled. The Cortex-M0+ clock is
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Cm0clkenVal> cm0clken{}; 
        namespace Cm0clkenValC{
            constexpr Register::FieldValue<decltype(cm0clken),Cm0clkenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cm0clken),Cm0clkenVal::enabled> enabled{};
        }
        ///Cortex-M4 reset.
        enum class Cm4rstenVal {
            disabled=0x00000000,     ///<Disabled. The Cortex-M4 is not being
										reset.
            enabled=0x00000001,     ///<Enabled. The Cortex-M4 is being
										reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Cm4rstenVal> cm4rsten{}; 
        namespace Cm4rstenValC{
            constexpr Register::FieldValue<decltype(cm4rsten),Cm4rstenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cm4rsten),Cm4rstenVal::enabled> enabled{};
        }
        ///Cortex-M0+ reset.
        enum class Cm0rstenVal {
            disabled=0x00000000,     ///<Disabled. The Cortex-M0+ is not being
										reset.
            enabled=0x00000001,     ///<Enabled. The Cortex-M0+ is being
										reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Cm0rstenVal> cm0rsten{}; 
        namespace Cm0rstenValC{
            constexpr Register::FieldValue<decltype(cm0rsten),Cm0rstenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cm0rsten),Cm0rstenVal::enabled> enabled{};
        }
        ///Identifies the owner of reduced power mode control: which
								CPU can cause the device to enter Sleep, Deep Sleep, Power-down, and
								Deep Power-down modes.
        enum class PowercpuVal {
            m0p=0x00000000,     ///<M0+. Cortex-M0+ is the owner of reduced power mode
										control.
            m4=0x00000001,     ///<M4. Cortex-M4 is the owner of reduced power mode
										control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PowercpuVal> powercpu{}; 
        namespace PowercpuValC{
            constexpr Register::FieldValue<decltype(powercpu),PowercpuVal::m0p> m0p{};
            constexpr Register::FieldValue<decltype(powercpu),PowercpuVal::m4> m4{};
        }
    }
    namespace Nonecpboot{    ///<Coprocessor Boot Address
        using Addr = Register::Address<0x40000304,0x00000000,0,unsigned>;
        ///Slave processor boot address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bootaddr{}; 
        namespace BootaddrValC{
        }
    }
    namespace Nonecpstack{    ///<Coprocessor Stack Address
        using Addr = Register::Address<0x40000308,0x00000000,0,unsigned>;
        ///Slave processor stack address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> stackaddr{}; 
        namespace StackaddrValC{
        }
    }
    namespace Nonejtagidcode{    ///<JTAG ID code register
        using Addr = Register::Address<0x400003f4,0x00000000,0,unsigned>;
        ///JTAG ID code.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> jtagid{}; 
        namespace JtagidValC{
        }
    }
    namespace NonedeviceId0{    ///<Part ID register
        using Addr = Register::Address<0x400003f8,0x00000000,0,unsigned>;
        ///Part ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> partid{}; 
        namespace PartidValC{
        }
    }
    namespace NonedeviceId1{    ///<Boot ROM and die revision register
        using Addr = Register::Address<0x400003fc,0x00000000,0,unsigned>;
        ///Revision.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> revid{}; 
        namespace RevidValC{
        }
    }
}
