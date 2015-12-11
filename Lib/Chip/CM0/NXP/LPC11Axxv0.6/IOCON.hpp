#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//IOCON block
    namespace NoneresetPio00{    ///<I/O configuration register for pin RESET/PIO0_0
        using Addr = Register::Address<0x40044000,0xfffff980,0,unsigned>;
        ///Selects pin function for pin RESET/PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio01{    ///<I/O configuration register for pin PIO0_1/RXD/CLKOUT/ CT32B0_MAT2/SSEL0/ CLKIN
        using Addr = Register::Address<0x40044004,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO0_1/RXD/CLKOUT/ CT32B0_MAT2/SSEL0/ CLKIN
        enum class FuncVal {
            pio01=0x00000000,     ///<General purpose digital input/output pin. A LOW level on
                                    this pin during reset starts the ISP command
                                    handler.
            rxd=0x00000001,     ///<Receiver data input for USART.
            clkout=0x00000002,     ///<Clock output.
            ct32b0Mat2=0x00000003,     ///<Match output 2 for 32-bit timer 0.
            ssel0=0x00000004,     ///<Slave Select for SSP0.
            clkin=0x00000005,     ///<External clock input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio01> pio01{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::rxd> rxd{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::clkout> clkout{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b0Mat2> ct32b0Mat2{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ssel0> ssel0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::clkin> clkin{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio02{    ///<I/O configuration register for pin PIO0_2/SCL/ACMP_O/ TCK/SWCLK/ CT16B0_CAP0
        using Addr = Register::Address<0x40044008,0xfffffcf8,0,unsigned>;
        ///Selects pin function for pin PIO0_2/SCL/ACMP_O/ TCK/SWCLK/ CT16B0_CAP0
        enum class FuncVal {
            pio02=0x00000000,     ///<General purpose digital input/output pin. High-current
                                    sink (20 mA) or standard-current sink (4 mA) programmable; true
                                    open-drain for all pin functions. Input glitch filter (50 ns)
                                    capable.
            scl=0x00000001,     ///<I2C-bus clock (true                                     open-drain) input/output. Input glitch filter (50 ns)                                     capable.
            acmpO=0x00000002,     ///<Analog comparator output.
            tckSwclk=0x00000003,     ///<Serial Wire Debug Clock (secondary for LQFP and HVQFN                                     packages). Input glitch filter (50 ns) capable. For the WLCSP20                                     package only, this pin is configured to the SWCLK function by                                     the boot loader after reset.
            ct16b0Cap0=0x00000004,     ///<Capture input 0 for 16-bit timer 0.Input glitch filter                                     (50 ns) capable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio02> pio02{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::scl> scl{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::acmpO> acmpO{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::tckSwclk> tckSwclk{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b0Cap0> ct16b0Cap0{};
        }
        }
        ///Controls glitch filter and slew rate.
        enum class HsVal {
            enabled=0x00000000,     ///<Enabled. 
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,HsVal> hs{}; 
        namespace HsValC{
            constexpr Register::FieldValue<decltype(hs)::Type,HsVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(hs)::Type,HsVal::disabled> disabled{};
        }
        }
        ///Controls sink current.
        enum class HidriveVal {
            standard=0x00000000,     ///<Standard; 4 mA sink current.
            high=0x00000001,     ///<High; 20 mA sink current.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,HidriveVal> hidrive{}; 
        namespace HidriveValC{
            constexpr Register::FieldValue<decltype(hidrive)::Type,HidriveVal::standard> standard{};
            constexpr Register::FieldValue<decltype(hidrive)::Type,HidriveVal::high> high{};
        }
        }
    }
    namespace Nonepio03{    ///<I/O configuration register for pin PIO0_3/SDA/ACMP_O/ SWDIO/CT16B1_CAP0
        using Addr = Register::Address<0x4004400c,0xfffffcf8,0,unsigned>;
        ///Selects pin function for pin PIO0_3/SDA/ACMP_O/ SWDIO/CT16B1_CAP0
        enum class FuncVal {
            pio03=0x00000000,     ///<General purpose digital input/output pin. High-current
                                    sink (20 mA) or standard-current sink (4 mA) programmable; true
                                    open-drain for all pin functions. Input glitch filter (50 ns)
                                    capable.
            sda=0x00000001,     ///<I2C-bus data (true open-drain)                                     input/output. Input glitch filter (50 ns) capable.
            acmpO=0x00000002,     ///<Analog comparator output.
            swdio=0x00000003,     ///<Serial Wire Debug I/O (secondary for LQFP and HVQFN                                     packages). Input glitch filter (50 ns) capable. For the WLCSP20                                     package only, this pin is configured to the SWDIO function by                                     the boot loader after reset.
            ct16b1Cap0=0x00000004,     ///<Capture input 0 for 16-bit timer 1. Input glitch filter                                     (50 ns) capable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio03> pio03{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::sda> sda{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::acmpO> acmpO{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::swdio> swdio{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b1Cap0> ct16b1Cap0{};
        }
        }
        ///Controls glitch filter and slew rate.
        enum class HsVal {
            enabled=0x00000000,     ///<Enabled. 
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,HsVal> hs{}; 
        namespace HsValC{
            constexpr Register::FieldValue<decltype(hs)::Type,HsVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(hs)::Type,HsVal::disabled> disabled{};
        }
        }
        ///Controls sink current.
        enum class HidriveVal {
            standard=0x00000000,     ///<Standard; 4 mA sink current.
            high=0x00000001,     ///<High; 20 mA sink current.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,HidriveVal> hidrive{}; 
        namespace HidriveValC{
            constexpr Register::FieldValue<decltype(hidrive)::Type,HidriveVal::standard> standard{};
            constexpr Register::FieldValue<decltype(hidrive)::Type,HidriveVal::high> high{};
        }
        }
    }
    namespace Nonepio04{    ///<I/O configuration register for pin PIO0_4/R/AOUT/ CT16B0_MAT1/MOSI0
        using Addr = Register::Address<0x40044010,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin PIO0_4/R/AOUT/ CT16B0_MAT1/MOSI0
        enum class FuncVal {
            pio04=0x00000000,     ///<General purpose digital input/output pin. Input glitch
                                    filter (10 ns) capable.
            r=0x00000001,     ///<Reserved.
            aout=0x00000002,     ///<D/A converter output.
            ct16b0Mat1=0x00000003,     ///<Match output 1 for 16-bit timer 0.
            mosi0=0x00000004,     ///<Master Out Slave In for SSP0. Input glitch filter (10 ns)                                     capable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio04> pio04{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::r> r{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::aout> aout{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b0Mat1> ct16b0Mat1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::mosi0> mosi0{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Selects Analog/Digital mode.
        enum class AdmodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdmodeVal> admode{}; 
        namespace AdmodeValC{
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::analogInputMode> analogInputMode{};
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        }
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace NonetckSwclkPio05{    ///<I/O configuration register for pin TCK/SWCLK/PIO0_5/ R/CT16B0_MAT2/ SCK0 
        using Addr = Register::Address<0x40044014,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin TCK/SWCLK/PIO0_5/ R/CT16B0_MAT2/ SCK0 
        enum class FuncVal {
            tckSwclk=0x00000000,     ///<Test clock TCK for JTAG interface and primary (default)
                                    Serial Wire Debug Clock. Input glitch filter (10 ns)
                                    capable.
            pio05=0x00000001,     ///<General purpose digital input/output pin. Input glitch                                     filter (10 ns) capable.
            r=0x00000002,     ///<Reserved.
            ct16b0Mat2=0x00000003,     ///<Match output 2 for 16-bit timer 0.
            sck0=0x00000004,     ///<Serial clock for SSP0. Input glitch filter (10 ns)                                     capable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::tckSwclk> tckSwclk{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio05> pio05{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::r> r{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b0Mat2> ct16b0Mat2{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::sck0> sck0{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Selects Analog/Digital mode.
        enum class AdmodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdmodeVal> admode{}; 
        namespace AdmodeValC{
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::analogInputMode> analogInputMode{};
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        }
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace NonetdiPio06{    ///<I/O configuration register for pin TDI/PIO0_6/AD0/ CT32B0_MAT3/MISO0
        using Addr = Register::Address<0x40044018,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin TDI/PIO0_6/AD0/ CT32B0_MAT3/MISO0
        enum class FuncVal {
            tdi=0x00000000,     ///<Test Data In for JTAG interface. Input glitch filter (10
                                    ns) capable.
            pio06=0x00000001,     ///<General purpose digital input/output pin. Input glitch                                     filter (10 ns) capable.
            ad0=0x00000002,     ///<A/D converter input 0.
            ct32b0Mat3=0x00000003,     ///<Match output 3 for 32-bit timer 0.
            miso0=0x00000004,     ///<Master In Slave Out for SSP0. Input glitch filter (10 ns)                                     capable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::tdi> tdi{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio06> pio06{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ad0> ad0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b0Mat3> ct32b0Mat3{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::miso0> miso0{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Selects Analog/Digital mode.
        enum class AdmodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdmodeVal> admode{}; 
        namespace AdmodeValC{
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::analogInputMode> analogInputMode{};
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        }
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace NonetmsPio07{    ///<I/O configuration register for pin TMS/PIO0_7/AD1/ CT32B1_CAP0/ CT16B0_MAT0
        using Addr = Register::Address<0x4004401c,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin TMS/PIO0_7/AD1/ CT32B1_CAP0/ CT16B0_MAT0
        enum class FuncVal {
            tms=0x00000000,     ///<Test Mode Select for JTAG interface. Input glitch filter
                                    (10 ns) capable.
            pio07=0x00000001,     ///<General purpose digital input/output pin. Input glitch                                     filter (10 ns) capable.
            ad1=0x00000002,     ///<A/D converter input 1.
            ct32b1Cap0=0x00000003,     ///<Capture input 0 for 32-bit timer 1. Input glitch filter                                     (10 ns) capable.
            ct16b0Mat0=0x00000004,     ///<Match output 2 for 16-bit timer 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::tms> tms{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio07> pio07{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ad1> ad1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Cap0> ct32b1Cap0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b0Mat0> ct16b0Mat0{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Selects Analog/Digital mode.
        enum class AdmodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdmodeVal> admode{}; 
        namespace AdmodeValC{
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::analogInputMode> analogInputMode{};
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        }
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace NonetdoPio08{    ///<I/O configuration register for pin TDO/PIO0_8/AD2/ CT32B1_MAT0/SCK1
        using Addr = Register::Address<0x40044020,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin TDO/PIO0_8/AD2/ CT32B1_MAT0/SCK1
        enum class FuncVal {
            tdo=0x00000000,     ///<Test Data Out for JTAG interface.
            pio08=0x00000001,     ///<General purpose digital input/output pin. Input glitch                                     filter (10 ns) capable.
            ad2=0x00000002,     ///<A/D converter input 2.
            ct32b1Mat0=0x00000003,     ///<Match output 0 for 32-bit timer 1.
            sck1=0x00000004,     ///<Serial clock for SSP1. Input glitch filter (10 ns)                                     capable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::tdo> tdo{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio08> pio08{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ad2> ad2{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Mat0> ct32b1Mat0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::sck1> sck1{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Selects Analog/Digital mode.
        enum class AdmodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdmodeVal> admode{}; 
        namespace AdmodeValC{
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::analogInputMode> analogInputMode{};
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        }
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace NonetrstPio09{    ///<I/O configuration register for pin TRST/PIO0_9/AD3/CT32B1_MAT1/CT16B0_MAT1/CTS
        using Addr = Register::Address<0x40044024,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin TRST/PIO0_9/AD3/CT32B1_MAT1/CT16B0_MAT1/CTS
        enum class FuncVal {
            trst=0x00000000,     ///<Test Reset for JTAG interface. Input glitch filter (10
                                    ns) capable.
            pio09=0x00000001,     ///<General purpose digital input/output pin. Input glitch                                     filter (10 ns) capable.
            ad3=0x00000002,     ///<A/D converter, input 3.
            ct32b1Mat1=0x00000003,     ///<Match output 1 for 32-bit timer 1.
            ct16b0Mat1=0x00000004,     ///<Match output 1 for 16-bit timer 0.
            cts=0x00000005,     ///<Clear To Send input for USART. Input glitch filter (10                                     ns) capable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::trst> trst{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio09> pio09{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ad3> ad3{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Mat1> ct32b1Mat1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b0Mat1> ct16b0Mat1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::cts> cts{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Selects Analog/Digital mode.
        enum class AdmodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdmodeVal> admode{}; 
        namespace AdmodeValC{
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::analogInputMode> analogInputMode{};
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        }
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace NoneswdioPio010{    ///<I/O configuration register for pin SWDIO/PIO0_10/AD4/ CT32B1_MAT2/ CT16B0_MAT2/RTS
        using Addr = Register::Address<0x40044028,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin SWDIO/PIO0_10/AD4/ CT32B1_MAT2/ CT16B0_MAT2/RTS
        enum class FuncVal {
            swdio=0x00000000,     ///<Primary (default) Serial Wire Debug I/O for the LQFP48
                                    and HVQFN33 packages. For the WLCSP20 package, use PIO0_3. Input
                                    glitch filter (10 ns) capable.
            pio010=0x00000001,     ///<General purpose digital input/output pin. Input glitch                                     filter (10 ns) capable.
            ad4=0x00000002,     ///<A/D converter, input 4.
            ct32b1Mat2=0x00000003,     ///<Match output 2 for 32-bit timer 1.
            ct16b0Mat2=0x00000004,     ///<Match output 2 for 16-bit timer 0.
            rts=0x00000005,     ///<Request To Send output for USART.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::swdio> swdio{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio010> pio010{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ad4> ad4{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Mat2> ct32b1Mat2{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b0Mat2> ct16b0Mat2{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::rts> rts{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Selects Analog/Digital mode.
        enum class AdmodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdmodeVal> admode{}; 
        namespace AdmodeValC{
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::analogInputMode> analogInputMode{};
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        }
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio011{    ///<I/O configuration register for pin PIO0_11/SCLK/ AD5/CT32B1_MAT3/ CT32B0_CAP0
        using Addr = Register::Address<0x4004402c,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin PIO0_11/SCLK/ AD5/CT32B1_MAT3/ CT32B0_CAP0
        enum class FuncVal {
            pio011=0x00000000,     ///<General purpose digital input/output pin. Input glitch
                                    filter (10 ns) capable.
            sclk=0x00000001,     ///<Serial clock for USART. Input glitch filter (10 ns)                                     capable.
            ad5=0x00000002,     ///<A/D converter, input 5.
            ct32b1Mat3=0x00000003,     ///<Match output 3 for 32-bit timer 1.
            ct32b0Cap0=0x00000004,     ///<Capture input 0 for 32-bit timer 0. Input glitch filter                                     (10 ns) capable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio011> pio011{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::sclk> sclk{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ad5> ad5{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Mat3> ct32b1Mat3{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b0Cap0> ct32b0Cap0{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Selects Analog/Digital mode.
        enum class AdmodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdmodeVal> admode{}; 
        namespace AdmodeValC{
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::analogInputMode> analogInputMode{};
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        }
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio012{    ///<I/O configuration register for pin PIO0_12/RXD/ ACMP_O/ CT32B0_MAT0/SCL/ CLKIN
        using Addr = Register::Address<0x40044030,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO0_12/RXD/ ACMP_O/ CT32B0_MAT0/SCL/ CLKIN
        enum class FuncVal {
            pio012=0x00000000,     ///<General purpose digital input/output pin.
            rxd=0x00000001,     ///<Receiver data input for USART. This pin is used for ISP                                     communication.
            acmpO=0x00000002,     ///<Analog comparator output.
            ct32b0Mat0=0x00000003,     ///<Match output 0 for 32-bit timer 0.
            scl=0x00000004,     ///<I2C-bus clock input/output.                                     This is not an I2C-bus open-drain                                         pin[8]. 
            clkin=0x00000005,     ///<External clock input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio012> pio012{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::rxd> rxd{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::acmpO> acmpO{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b0Mat0> ct32b0Mat0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::scl> scl{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::clkin> clkin{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio013{    ///<I/O configuration register for pin PIO0_13/TXD/ ACMP_I2/ CT32B0_MAT1/SDA
        using Addr = Register::Address<0x40044034,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin PIO0_13/TXD/ ACMP_I2/ CT32B0_MAT1/SDA
        enum class FuncVal {
            pio013=0x00000000,     ///<General purpose digital input/output pin. Input glitch
                                    filter (10 ns) capable.
            txd=0x00000001,     ///<Transmitter data output for USART. This pin is used for                                     ISP communication.
            acmpI2=0x00000002,     ///<Analog comparator input 2.
            ct32b0Mat1=0x00000003,     ///<Match output 1 for 32-bit timer 0. 
            sda=0x00000004,     ///<I2C-bus data input/output.                                     This is not an I2C-bus open-drain                                         pin[8]. Input glitch filter (10 ns)                                     capable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio013> pio013{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::txd> txd{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::acmpI2> acmpI2{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b0Mat1> ct32b0Mat1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::sda> sda{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Selects Analog/Digital mode.
        enum class AdmodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdmodeVal> admode{}; 
        namespace AdmodeValC{
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::analogInputMode> analogInputMode{};
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        }
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio014{    ///<I/O configuration register for pin PIO0_14/MISO1/AD6/CT32B0_CAP1/CT16B1_MAT1/VDDCMP
        using Addr = Register::Address<0x40044038,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin PIO0_14/MISO1/AD6/CT32B0_CAP1/CT16B1_MAT1/xxxCMP
        enum class FuncVal {
            pio014=0x00000000,     ///<General purpose digital input/output pin. Input glitch
                                    filter (10 ns) capable.
            miso1=0x00000001,     ///<Master In Slave Out for SSP1. Input glitch filter (10 ns)                                     capable.
            ad6=0x00000002,     ///<A/D converter, input 6.
            ct32b0Cap1=0x00000003,     ///<Capture input 1 for 32-bit timer 0. Input glitch filter                                     (10 ns) capable.
            ct16b1Mat1=0x00000004,     ///<Match output 1 for 16-bit timer 1.
            vddcmp=0x00000005,     ///<Analog comparator alternate reference voltage.                                 
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio014> pio014{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::miso1> miso1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ad6> ad6{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b0Cap1> ct32b0Cap1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b1Mat1> ct16b1Mat1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::vddcmp> vddcmp{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Selects Analog/Digital mode.
        enum class AdmodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdmodeVal> admode{}; 
        namespace AdmodeValC{
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::analogInputMode> analogInputMode{};
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        }
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio015{    ///<I/O configuration register for pin PIO0_15/TXD/AD7/ CT32B0_CAP2/SDA
        using Addr = Register::Address<0x4004403c,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin PIO0_15/TXD/AD7/ CT32B0_CAP2/SDA
        enum class FuncVal {
            pio015=0x00000000,     ///<General purpose digital input/output pin. Input glitch
                                    filter (10 ns) capable.
            txd=0x00000001,     ///<Transmitter data output for USART.
            ad7=0x00000002,     ///<A/D converter, input 7.
            ct32b0Cap2=0x00000003,     ///<Capture input 2 for 32-bit timer 0. Input glitch filter                                     (10 ns) capable.
            sda=0x00000004,     ///<I2C-bus data input/output.                                     This is not an I2C-bus open-drain                                         pin[8]. Input glitch filter (10 ns)                                     capable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio015> pio015{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::txd> txd{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ad7> ad7{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b0Cap2> ct32b0Cap2{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::sda> sda{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Selects Analog/Digital mode.
        enum class AdmodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdmodeVal> admode{}; 
        namespace AdmodeValC{
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::analogInputMode> analogInputMode{};
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        }
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio016{    ///<I/O configuration register for pin PIO0_16/ ATRG0/ACMP_I3/ CT16B0_CAP1/SCL
        using Addr = Register::Address<0x40044040,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin PIO0_16/ ATRG0/ACMP_I3/ CT16B0_CAP1/SCL
        enum class FuncVal {
            pio016=0x00000000,     ///<General purpose digital input/output pin. Input glitch
                                    filter (10 ns) capable.
            atrg0=0x00000001,     ///<Conversion trigger 0 for ADC or DAC. Input glitch filter                                     (10 ns) capable.
            acmpI3=0x00000002,     ///<Analog comparator input 3.
            ct16b0Cap1=0x00000003,     ///<Capture input 1 for 16-bit timer 0. Input glitch filter                                     (10 ns) capable.
            scl=0x00000004,     ///<I2C-bus clock input/output.                                     This is not an I2C-bus open-drain                                         pin[8]. Input glitch filter (10 ns)                                     capable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio016> pio016{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::atrg0> atrg0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::acmpI3> acmpI3{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b0Cap1> ct16b0Cap1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::scl> scl{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Selects Analog/Digital mode.
        enum class AdmodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdmodeVal> admode{}; 
        namespace AdmodeValC{
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::analogInputMode> analogInputMode{};
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        }
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio017{    ///<I/O configuration register for pin PIO0_17/ ATRG1/ACMP_I4/ CT16B0_CAP2/ CT16B0_MAT0
        using Addr = Register::Address<0x40044044,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin PIO0_17/ ATRG1/ACMP_I4/ CT16B0_CAP2/ CT16B0_MAT0
        enum class FuncVal {
            pio017=0x00000000,     ///<General purpose digital input/output pin. Input glitch
                                    filter (10 ns) capable.
            atrg1=0x00000001,     ///<Conversion trigger 1 for ADC or DAC. Input glitch filter                                     (10 ns) capable.
            acmpI4=0x00000002,     ///<Analog comparator input 4.
            ct16b0Cap2=0x00000003,     ///<Capture input 2 for 16-bit timer 0. Input glitch filter                                     (10 ns) capable.
            ct16b0Mat0=0x00000004,     ///<Match output 0 for 16-bit timer 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio017> pio017{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::atrg1> atrg1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::acmpI4> acmpI4{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b0Cap2> ct16b0Cap2{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b0Mat0> ct16b0Mat0{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Selects Analog/Digital mode.
        enum class AdmodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdmodeVal> admode{}; 
        namespace AdmodeValC{
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::analogInputMode> analogInputMode{};
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        }
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio018{    ///<I/O configuration register for pin PIO0_18/R/SSEL0/ CT16B0_CAP0/ CT16B1_CAP1
        using Addr = Register::Address<0x40044048,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO0_18/R/SSEL0/ CT16B0_CAP0/ CT16B1_CAP1
        enum class FuncVal {
            pio018=0x00000000,     ///<General purpose digital input/output pin.
            r=0x00000001,     ///<Reserved.
            ssel0=0x00000002,     ///<Slave Select for SSP0.
            ct16b0Cap0=0x00000003,     ///<Capture input 0 for 16-bit timer 0.
            ct16b1Cap1=0x00000004,     ///<Capture input 1 for 16-bit timer 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio018> pio018{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::r> r{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ssel0> ssel0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b0Cap0> ct16b0Cap0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b1Cap1> ct16b1Cap1{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio019{    ///<I/O configuration register for pin PIO0_19/CLKIN/ CLKOUT/ MOSI0/CT16B1_MAT0
        using Addr = Register::Address<0x4004404c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO0_19/CLKIN/ CLKOUT/ MOSI0/CT16B1_MAT0
        enum class FuncVal {
            pio019=0x00000000,     ///<General purpose digital input/output pin.
            clkin=0x00000001,     ///<External clock input.
            clkout=0x00000002,     ///<Clock output.
            mosi0=0x00000003,     ///<Master Out Slave In for SSP0.
            ct16b1Mat0=0x00000004,     ///<Match output 0 for 16-bit timer 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio019> pio019{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::clkin> clkin{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::clkout> clkout{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::mosi0> mosi0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b1Mat0> ct16b1Mat0{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio020{    ///<I/O configuration register for pin PIO0_20/R/SCK0/ CT32B1_CAP0/ CT16B1_MAT2
        using Addr = Register::Address<0x40044050,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO0_20/R/SCK0/ CT32B1_CAP0/ CT16B1_MAT2
        enum class FuncVal {
            pio020=0x00000000,     ///<General purpose digital input/output pin.
            r=0x00000001,     ///<Reserved.
            sck0=0x00000002,     ///<Serial clock for SSP0.
            ct32b1Cap0=0x00000003,     ///<Capture input 0 for 32-bit timer 1.
            ct16b1Mat2=0x00000004,     ///<Match output 2 for 16-bit timer 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio020> pio020{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::r> r{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::sck0> sck0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Cap0> ct32b1Cap0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b1Mat2> ct16b1Mat2{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio021{    ///<I/O configuration register for pin PIO0_21/CTS/ ACMP_O/ CT32B1_CAP1/SCLK
        using Addr = Register::Address<0x40044054,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO0_21/CTS/ ACMP_O/ CT32B1_CAP1/SCLK
        enum class FuncVal {
            pio021=0x00000000,     ///<General purpose digital input/output pin. If configured
                                    as output, this pin is a high-current source output driver (20
                                    mA).
            cts=0x00000001,     ///<Clear To Send input for USART.
            acmpO=0x00000002,     ///<Analog comparator output.
            ct32b1Cap1=0x00000003,     ///<Capture input 1 for 32-bit timer 1.
            sclk=0x00000004,     ///<Serial clock for USART.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio021> pio021{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::cts> cts{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::acmpO> acmpO{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Cap1> ct32b1Cap1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::sclk> sclk{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio022{    ///<I/O configuration register for pin PIO0_22/MISO0/ ACMP_I5/ CT32B1_MAT2/ CT32B1_CAP2
        using Addr = Register::Address<0x40044058,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin PIO0_22/MISO0/ ACMP_I5/ CT32B1_MAT2/ CT32B1_CAP2
        enum class FuncVal {
            pio022=0x00000000,     ///<General purpose digital input/output pin. Input glitch
                                    filter (10 ns) capable.
            miso0=0x00000001,     ///<Master In Slave Out for SSP0. Input glitch filter (10 ns)                                     capable.
            acmpI5=0x00000002,     ///<Analog comparator input 5.
            ct32b1Mat2=0x00000003,     ///<Match output 2 for 32-bit timer 1.
            ct32b1Cap2=0x00000004,     ///<Capture input 2 for 32-bit timer 1. Input glitch filter                                     (10 ns) capable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio022> pio022{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::miso0> miso0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::acmpI5> acmpI5{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Mat2> ct32b1Mat2{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Cap2> ct32b1Cap2{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Selects Analog/Digital mode.
        enum class AdmodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdmodeVal> admode{}; 
        namespace AdmodeValC{
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::analogInputMode> analogInputMode{};
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        }
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio023{    ///<I/O configuration register for pin PIO0_23/RTS/ ACMP_O/ CT32B0_CAP0/SCLK
        using Addr = Register::Address<0x4004405c,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin PIO0_23/RTS/ ACMP_O/ CT32B0_CAP0/SCLK
        enum class FuncVal {
            pio023=0x00000000,     ///<General purpose digital input/output pin.
            rts=0x00000001,     ///<Request To Send output for USART.
            acmpO=0x00000002,     ///<Analog comparator output.
            ct32b0Cap0=0x00000003,     ///<Capture input 0 for 32-bit timer 0.
            sclk=0x00000004,     ///<Serial clock for USART.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio023> pio023{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::rts> rts{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::acmpO> acmpO{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b0Cap0> ct32b0Cap0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::sclk> sclk{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Selects Analog/Digital mode.
        enum class AdmodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdmodeVal> admode{}; 
        namespace AdmodeValC{
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::analogInputMode> analogInputMode{};
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        }
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio024{    ///<I/O configuration register for pin PIO0_24/SCL/CLKIN/ CT16B1_CAP0
        using Addr = Register::Address<0x40044060,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO0_24/SCL/CLKIN/ CT16B1_CAP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio025{    ///<I/O configuration register for pin PIO0_25/SDA/SSEL1/ CT16B1_MAT0
        using Addr = Register::Address<0x40044064,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO0_25/SDA/SSEL1/ CT16B1_MAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio026{    ///<I/O configuration register for pin PIO0_26/TXD/MISO1/ CT16B1_CAP1/ CT32B0_CAP2
        using Addr = Register::Address<0x40044068,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO0_26/TXD/MISO1/ CT16B1_CAP1/ CT32B0_CAP2
        enum class FuncVal {
            pio026=0x00000000,     ///<General purpose digital input/output pin.
            txd=0x00000001,     ///<Transmitter data output for USART.
            miso1=0x00000002,     ///<Master In Slave Out for SSP1.
            ct16b1Cap1=0x00000003,     ///<Capture input 1 for 16-bit timer 1.
            ct32b0Cap2=0x00000004,     ///<Capture input 2 for 32-bit timer 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio026> pio026{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::txd> txd{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::miso1> miso1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b1Cap1> ct16b1Cap1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b0Cap2> ct32b0Cap2{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio027{    ///<I/O configuration register for pin PIO0_27/MOSI1/ ACMP_I1/ CT32B1_MAT1/ CT16B1_CAP2
        using Addr = Register::Address<0x4004406c,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin PIO0_27/MOSI1/ ACMP_I1/ CT32B1_MAT1/ CT16B1_CAP2
        enum class FuncVal {
            pio027=0x00000000,     ///<General purpose digital input/output pin. Input glitch
                                    filter (10 ns) capable.
            mosi1=0x00000001,     ///<Master Out Slave In for SSP1. Input glitch filter (10 ns)                                     capable.
            acmpI1=0x00000002,     ///<Analog comparator input 1.
            ct32b1Mat1=0x00000003,     ///<Match output 1 for 32-bit timer 1.
            ct16b1Cap2=0x00000004,     ///<Capture input 2 for 16-bit timer 1. Input glitch filter                                     (10 ns) capable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio027> pio027{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::mosi1> mosi1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::acmpI1> acmpI1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Mat1> ct32b1Mat1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b1Cap2> ct16b1Cap2{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Selects Analog/Digital mode.
        enum class AdmodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdmodeVal> admode{}; 
        namespace AdmodeValC{
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::analogInputMode> analogInputMode{};
            constexpr Register::FieldValue<decltype(admode)::Type,AdmodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        }
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio028{    ///<I/O configuration register for pin PIO0_28/DTR/SSEL1/ CT32B0_CAP0
        using Addr = Register::Address<0x40044070,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO0_28/DTR/SSEL1/ CT32B0_CAP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio029{    ///<I/O configuration register for pin PIO0_29/DSR/SCK1/ CT32B0_CAP1
        using Addr = Register::Address<0x40044074,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO0_29/DSR/SCK1/ CT32B0_CAP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio030{    ///<I/O configuration register for pin PIO0_30/RI/MOSI1/ CT32B0_MAT0/ CT16B0_CAP0
        using Addr = Register::Address<0x40044078,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO0_30/RI/MOSI1/ CT32B0_MAT0/ CT16B0_CAP0
        enum class FuncVal {
            pio030=0x00000000,     ///<General purpose digital input/output pin.
            ri=0x00000001,     ///<Ring Indicator input for USART.
            mosi1=0x00000002,     ///<Master Out Slave In for SSP1.
            ct32b0Mat0=0x00000003,     ///<Match output 0 for 32-bit timer 0.
            ct16b0Cap0=0x00000004,     ///<Capture input 0 for 16-bit timer 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio030> pio030{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ri> ri{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::mosi1> mosi1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b0Mat0> ct32b0Mat0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b0Cap0> ct16b0Cap0{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio031{    ///<I/O configuration register for pin PIO0_31/RI/MOSI1/ CT32B1_MAT0/ CT16B1_CAP1
        using Addr = Register::Address<0x4004407c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO0_31/RI/MOSI1/ CT32B1_MAT0/ CT16B1_CAP1
        enum class FuncVal {
            pio031=0x00000000,     ///<General purpose digital input/output pin.
            ri=0x00000001,     ///<Ring Indicator input for USART.
            mosi1=0x00000002,     ///<Master Out Slave In for SSP1.
            ct32b1Mat0=0x00000003,     ///<Match output 0 for 32-bit timer 1.
            ct16b1Cap1=0x00000004,     ///<Capture input 1 for 16-bit timer 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio031> pio031{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ri> ri{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::mosi1> mosi1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Mat0> ct32b1Mat0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b1Cap1> ct16b1Cap1{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio10{    ///<I/O configuration register for pin PIO1_0/DCD/SCK0/ CT32B1_MAT3/ CT16B0_MAT1
        using Addr = Register::Address<0x40044080,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO1_0/DCD/SCK0/ CT32B1_MAT3/ CT16B0_MAT1
        enum class FuncVal {
            pio10=0x00000000,     ///<General purpose digital input/output pin.
            dcd=0x00000001,     ///<Data Carrier Detect input for USART.
            sck0=0x00000002,     ///<Serial clock for SSP0.
            ct32b1Mat3=0x00000003,     ///<Match output 3 for 32-bit timer 1.
            ct16b0Mat1=0x00000004,     ///<Match output 1 for 16-bit timer 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio10> pio10{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::dcd> dcd{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::sck0> sck0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Mat3> ct32b1Mat3{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b0Mat1> ct16b0Mat1{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio11{    ///<I/O configuration register for pin PIO1_1/DTR/SSEL0/ CT32B1_MAT3/ CT16B1_MAT0
        using Addr = Register::Address<0x40044084,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO1_1/DTR/SSEL0/ CT32B1_MAT3/ CT16B1_MAT0
        enum class FuncVal {
            pio11=0x00000000,     ///<General purpose digital input/output pin.
            dtr=0x00000001,     ///<Data Terminal Ready output for USART.
            ssel0=0x00000002,     ///<Slave Select for SSP0.
            ct32b1Mat3=0x00000003,     ///<Match output 3 for 32-bit timer 1.
            ct16b1Mat0=0x00000004,     ///<Match output 0 for 16-bit timer 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio11> pio11{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::dtr> dtr{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ssel0> ssel0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Mat3> ct32b1Mat3{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b1Mat0> ct16b1Mat0{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio12{    ///<I/O configuration register for pin PIO1_2/DSR/MISO0/ CT16B1_MAT2/ CT16B1_MAT1
        using Addr = Register::Address<0x40044088,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO1_2/DSR/MISO0/ CT16B1_MAT2/ CT16B1_MAT1
        enum class FuncVal {
            pio12=0x00000000,     ///<General purpose digital input/output pin.
            dsr=0x00000001,     ///<Data Set Ready input for USART.
            miso0=0x00000002,     ///<Master In Slave Out for SSP0.
            ct16b1Mat2=0x00000003,     ///<Match output 2 for 16-bit timer 1.
            ct16b1Mat1=0x00000004,     ///<Match output 1 for 16-bit timer 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio12> pio12{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::dsr> dsr{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::miso0> miso0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b1Mat2> ct16b1Mat2{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b1Mat1> ct16b1Mat1{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio13{    ///<I/O configuration register for pin PIO1_3/RI/MOSI0/ CT16B1_CAP0
        using Addr = Register::Address<0x4004408c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO1_3/RI/MOSI0/ CT16B1_CAP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio14{    ///<I/O configuration register for pin PIO1_4/RXD/SSEL1/ CT32B0_MAT1/ CT32B1_CAP0/ CT16B0_CAP1
        using Addr = Register::Address<0x40044090,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO1_4/RXD/SSEL1/ CT32B0_MAT1/ CT32B1_CAP0/ CT16B0_CAP1
        enum class FuncVal {
            pio14=0x00000000,     ///<General purpose digital input/output pin.
            rxd=0x00000001,     ///<Receiver data input for USART.
            ssel1=0x00000002,     ///<Slave Select for SSP1.
            ct32b0Mat1=0x00000003,     ///<Match output 1 for 32-bit timer 0.
            ct32b1Cap0=0x00000004,     ///<Capture input 0 for 32-bit timer 1.
            ct16b0Cap1=0x00000005,     ///<Capture input 1 for 16-bit timer 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio14> pio14{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::rxd> rxd{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ssel1> ssel1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b0Mat1> ct32b0Mat1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Cap0> ct32b1Cap0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b0Cap1> ct16b0Cap1{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio15{    ///<I/O configuration register for pin PIO1_5/TXD/SCK1/ CT32B0_MAT2/ CT32B1_CAP1/ CT16B0_CAP2
        using Addr = Register::Address<0x40044094,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO1_5/TXD/SCK1/ CT32B0_MAT2/ CT32B1_CAP1/ CT16B0_CAP2
        enum class FuncVal {
            pio15=0x00000000,     ///<General purpose digital input/output pin.
            txd=0x00000001,     ///<Transmitter data output for USART.
            sck1=0x00000002,     ///<Serial clock for SSP1.
            ct32b0Mat2=0x00000003,     ///<Match output 2 for 32-bit timer 0.
            ct32b1Cap1=0x00000004,     ///<Capture input 1 for 32-bit timer 1.
            ct16b0Cap2=0x00000005,     ///<Capture input 2 for 16-bit timer 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio15> pio15{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::txd> txd{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::sck1> sck1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b0Mat2> ct32b0Mat2{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Cap1> ct32b1Cap1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b0Cap2> ct16b0Cap2{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio16{    ///<I/O configuration register for pin PIO1_6/RTS/MOSI1/ CT32B0_MAT3/ CT32B1_CAP2/ CT16B0_MAT0
        using Addr = Register::Address<0x40044098,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO1_6/RTS/MOSI1/ CT32B0_MAT3/ CT32B1_CAP2/ CT16B0_MAT0
        enum class FuncVal {
            pio16=0x00000000,     ///<General purpose digital input/output pin.
            rts=0x00000001,     ///<Request To Send output for USART.
            mosi1=0x00000002,     ///<Master Out Slave In for SSP1.
            ct32b0Mat3=0x00000003,     ///<Match output 3 for 32-bit timer 0.
            ct32b1Cap2=0x00000004,     ///<Capture input 2 for 32-bit timer 1.
            ct16b0Mat0=0x00000005,     ///<Match output 0 for 16-bit timer 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio16> pio16{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::rts> rts{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::mosi1> mosi1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b0Mat3> ct32b0Mat3{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Cap2> ct32b1Cap2{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b0Mat0> ct16b0Mat0{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio17{    ///<I/O configuration register for pin PIO1_7/CTS/MOSI0/ CT32B1_MAT1/ CT16B0_MAT2/ CT16B1_CAP2
        using Addr = Register::Address<0x4004409c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO1_7/CTS/MOSI0/ CT32B1_MAT1/ CT16B0_MAT2/ CT16B1_CAP2
        enum class FuncVal {
            pio17=0x00000000,     ///<General purpose digital input/output pin.
            cts=0x00000001,     ///<Clear To Send input for USART.
            mosi0=0x00000002,     ///<Master Out Slave In for SSP0.
            ct32b1Mat1=0x00000003,     ///<Match output 1 for 32-bit timer 1.
            ct16b0Mat2=0x00000004,     ///<Match output 2 for 16-bit timer 0.
            ct16b1Cap2=0x00000005,     ///<Capture input 2 for 16-bit timer 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio17> pio17{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::cts> cts{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::mosi0> mosi0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Mat1> ct32b1Mat1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b0Mat2> ct16b0Mat2{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b1Cap2> ct16b1Cap2{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio18{    ///<I/O configuration register for pin PIO1_8/RXD / MISO1/ CT32B1_MAT0/ CT16B1_MAT1
        using Addr = Register::Address<0x400440a0,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO1_8/RXD / MISO1/ CT32B1_MAT0/ CT16B1_MAT1
        enum class FuncVal {
            pio18=0x00000000,     ///<General purpose digital input/output pin.
            rxd=0x00000001,     ///<Receiver data input for USART.
            miso1=0x00000002,     ///<Master In Slave Out for SSP1.
            ct32b1Mat0=0x00000003,     ///<Match output 0 for 32-bit timer 1.
            ct16b1Mat1=0x00000004,     ///<Match output 1 for 16-bit timer 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio18> pio18{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::rxd> rxd{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::miso1> miso1{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Mat0> ct32b1Mat0{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b1Mat1> ct16b1Mat1{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
    namespace Nonepio19{    ///<I/O configuration register for pin PIO1_9/DCD/R/ CT32B1_MAT2 / CT16B1_MAT2
        using Addr = Register::Address<0x400440a4,0xfffff980,0,unsigned>;
        ///Selects pin function for pin PIO1_9/DCD/R/ CT32B1_MAT2 / CT16B1_MAT2
        enum class FuncVal {
            pio19=0x00000000,     ///<General purpose digital input/output pin.
            dcd=0x00000001,     ///<Data Carrier Detect input for USART.
            r=0x00000002,     ///<Reserved.
            ct32b1Mat2=0x00000003,     ///<Match output 2 for 32-bit timer 1.
            ct16b1Mat2=0x00000004,     ///<Match output 2 for 16-bit timer 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FuncVal> func{}; 
        namespace FuncValC{
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::pio19> pio19{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::dcd> dcd{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::r> r{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct32b1Mat2> ct32b1Mat2{};
            constexpr Register::FieldValue<decltype(func)::Type,FuncVal::ct16b1Mat2> ct16b1Mat2{};
        }
        }
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class ModeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDownResistorE> pullDownResistorE{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeaterMode> repeaterMode{};
        }
        }
        ///Hysteresis.
        enum class HysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::disable> disable{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::enable> enable{};
        }
        }
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        }
        ///Driver slew rate
        enum class SlewVal {
            slow=0x00000000,     ///<Slow. More outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::slow> slow{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fast> fast{};
        }
        }
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        }
    }
}
