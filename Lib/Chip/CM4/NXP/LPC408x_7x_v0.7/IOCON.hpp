#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//IOCON pin configuration
    namespace Nonep00{    ///<I/O configuration register for pin P0[0]
        using Addr = Register::Address<0x4002c000,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[0]
        enum class funcVal {
            p00=0x00000000,     ///<General purpose digital input/output pin.
            canRd1=0x00000001,     ///<CAN1 receiver input.
            u3Txd=0x00000002,     ///<Transmitter output for UART3.
            i2c1Sda=0x00000003,     ///<I2C1 data input/output (this                                     pin does not use a specialized I2C pad).
            u0Txd=0x00000004,     ///<Transmitter output for UART0.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p00> p00{};
            constexpr MPL::Value<funcVal,funcVal::canRd1> canRd1{};
            constexpr MPL::Value<funcVal,funcVal::u3Txd> u3Txd{};
            constexpr MPL::Value<funcVal,funcVal::i2c1Sda> i2c1Sda{};
            constexpr MPL::Value<funcVal,funcVal::u0Txd> u0Txd{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep01{    ///<I/O configuration register for pin P0[1]
        using Addr = Register::Address<0x4002c004,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[1]
        enum class funcVal {
            p01=0x00000000,     ///<General purpose digital input/output pin.
            canTd1=0x00000001,     ///<CAN1 transmitter output.
            u3Rxd=0x00000002,     ///<Receiver input for UART3.
            i2c1Scl=0x00000003,     ///<I2C1 clock input/output (this                                     pin does not use a specialized I2C pad).
            u0Rxd=0x00000004,     ///<Receiver input for UART0.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p01> p01{};
            constexpr MPL::Value<funcVal,funcVal::canTd1> canTd1{};
            constexpr MPL::Value<funcVal,funcVal::u3Rxd> u3Rxd{};
            constexpr MPL::Value<funcVal,funcVal::i2c1Scl> i2c1Scl{};
            constexpr MPL::Value<funcVal,funcVal::u0Rxd> u0Rxd{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep02{    ///<I/O configuration register for pin P0[2]
        using Addr = Register::Address<0x4002c008,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[2]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep03{    ///<I/O configuration register for pin P0[3]
        using Addr = Register::Address<0x4002c00c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[3]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep04{    ///<I/O configuration register for pin P0[4]
        using Addr = Register::Address<0x4002c010,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[4]
        enum class funcVal {
            p04=0x00000000,     ///<General purpose digital input/output pin.
            i2sRxSck=0x00000001,     ///<I2S Receive clock. It is                                     driven by the master and received by the slave. Corresponds to                                     the signal SCK in the                                             I2S-bus                                         specification.
            canRd2=0x00000002,     ///<CAN2 receiver input.
            t2Cap0=0x00000003,     ///<Capture input for Timer 2, channel 0.
            cmpRosc=0x00000005,     ///<Comparator relaxation oscillator for 555 timer                                 applications.
            lcdVd0=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p04> p04{};
            constexpr MPL::Value<funcVal,funcVal::i2sRxSck> i2sRxSck{};
            constexpr MPL::Value<funcVal,funcVal::canRd2> canRd2{};
            constexpr MPL::Value<funcVal,funcVal::t2Cap0> t2Cap0{};
            constexpr MPL::Value<funcVal,funcVal::cmpRosc> cmpRosc{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd0> lcdVd0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep05{    ///<I/O configuration register for pin P0[5]
        using Addr = Register::Address<0x4002c014,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[5]
        enum class funcVal {
            p05=0x00000000,     ///<General purpose digital input/output pin.
            i2sRxWs=0x00000001,     ///<I2S Receive word select. It is                                     driven by the master and received by the slave. Corresponds to                                     the signal WS in the                                             I2S-bus                                         specification.
            canTd2=0x00000002,     ///<CAN2 transmitter output.
            t2Cap1=0x00000003,     ///<Capture input for Timer 2, channel 1.
            cmpReset=0x00000005,     ///<Comparator reset.
            lcdVd1=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p05> p05{};
            constexpr MPL::Value<funcVal,funcVal::i2sRxWs> i2sRxWs{};
            constexpr MPL::Value<funcVal,funcVal::canTd2> canTd2{};
            constexpr MPL::Value<funcVal,funcVal::t2Cap1> t2Cap1{};
            constexpr MPL::Value<funcVal,funcVal::cmpReset> cmpReset{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd1> lcdVd1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep06{    ///<I/O configuration register for pin P0[6]
        using Addr = Register::Address<0x4002c018,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[6]
        enum class funcVal {
            p06=0x00000000,     ///<General purpose digital input/output pin.
            i2sRxSda=0x00000001,     ///<I2S Receive data. It is driven                                     by the transmitter and read by the receiver. Corresponds to the                                     signal SD in the                                             I2S-bus                                         specification.
            ssp1Ssel=0x00000002,     ///<Slave Select for SSP1.
            t2Mat0=0x00000003,     ///<Match output for Timer 2, channel 0.
            u1Rts=0x00000004,     ///<Request to Send output for UART1. Can also be configured                                     to be an RS-485/EIA-485 output enable signal for                                     UART1.
            cmpRosc=0x00000005,     ///<Comparator relaxation oscillator for 555 timer                                 applications.
            lcdVd8=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p06> p06{};
            constexpr MPL::Value<funcVal,funcVal::i2sRxSda> i2sRxSda{};
            constexpr MPL::Value<funcVal,funcVal::ssp1Ssel> ssp1Ssel{};
            constexpr MPL::Value<funcVal,funcVal::t2Mat0> t2Mat0{};
            constexpr MPL::Value<funcVal,funcVal::u1Rts> u1Rts{};
            constexpr MPL::Value<funcVal,funcVal::cmpRosc> cmpRosc{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd8> lcdVd8{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep07{    ///<I/O configuration register for pin P0[7] 
        using Addr = Register::Address<0x4002c01c,0xfffff880,0,unsigned>;
        ///Selects pin function for pin P0[7] 
        enum class funcVal {
            p07=0x00000000,     ///<General purpose digital input/output pin.
            i2sTxSck=0x00000001,     ///<I2S transmit clock. It is                                     driven by the master and received by the slave. Corresponds to                                     the signal SCK in the                                             I2S-bus                                         specification.
            ssp1Sck=0x00000002,     ///<Serial Clock for SSP1.
            t2Mat1=0x00000003,     ///<Match output for Timer 2, channel 1.
            rtcEv0=0x00000004,     ///<Event input 0 to Event Monitor/Recorder.
            cmpVref=0x00000005,     ///<Comparator reference voltage.
            lcdVd9=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p07> p07{};
            constexpr MPL::Value<funcVal,funcVal::i2sTxSck> i2sTxSck{};
            constexpr MPL::Value<funcVal,funcVal::ssp1Sck> ssp1Sck{};
            constexpr MPL::Value<funcVal,funcVal::t2Mat1> t2Mat1{};
            constexpr MPL::Value<funcVal,funcVal::rtcEv0> rtcEv0{};
            constexpr MPL::Value<funcVal,funcVal::cmpVref> cmpVref{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd9> lcdVd9{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Glitch filter control
        enum class filterVal {
            enabled=0x00000000,     ///<Noise pulses below approximately 10 ns are filtered
                                out.
            disabled=0x00000001,     ///<No input filtering is done.
        };
        namespace filterValC{
            constexpr MPL::Value<filterVal,filterVal::enabled> enabled{};
            constexpr MPL::Value<filterVal,filterVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filterVal> filter{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep08{    ///<I/O configuration register for pin P0[8] 
        using Addr = Register::Address<0x4002c020,0xfffff880,0,unsigned>;
        ///Selects pin function for pin P0[8] 
        enum class funcVal {
            p08=0x00000000,     ///<General purpose digital input/output pin.
            i2sTxWs=0x00000001,     ///<I2S Transmit word select. It                                     is driven by the master and received by the slave. Corresponds                                     to the signal WS in the                                             I2S-bus                                         specification.
            ssp1Miso=0x00000002,     ///<Master In Slave Out for SSP1.
            t2Mat2=0x00000003,     ///<Match output for Timer 2, channel 2.
            rtcEv1=0x00000004,     ///<Event input 1 to Event Monitor/Recorder.
            cmp1In3=0x00000005,     ///<Comparator 1, input 3.
            lcdVd16=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p08> p08{};
            constexpr MPL::Value<funcVal,funcVal::i2sTxWs> i2sTxWs{};
            constexpr MPL::Value<funcVal,funcVal::ssp1Miso> ssp1Miso{};
            constexpr MPL::Value<funcVal,funcVal::t2Mat2> t2Mat2{};
            constexpr MPL::Value<funcVal,funcVal::rtcEv1> rtcEv1{};
            constexpr MPL::Value<funcVal,funcVal::cmp1In3> cmp1In3{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd16> lcdVd16{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Glitch filter control
        enum class filterVal {
            enabled=0x00000000,     ///<Noise pulses below approximately 10 ns are filtered
                                out.
            disabled=0x00000001,     ///<No input filtering is done.
        };
        namespace filterValC{
            constexpr MPL::Value<filterVal,filterVal::enabled> enabled{};
            constexpr MPL::Value<filterVal,filterVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filterVal> filter{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep09{    ///<I/O configuration register for pin P0[9]
        using Addr = Register::Address<0x4002c024,0xfffff880,0,unsigned>;
        ///Selects pin function for pin P0[9]
        enum class funcVal {
            p09=0x00000000,     ///<General purpose digital input/output pin.
            i2sTxSda=0x00000001,     ///<I2S transmit data. It is                                     driven by the transmitter and read by the receiver. Corresponds                                     to the signal SD in the                                             I2S-bus                                         specification.
            ssp1Mosi=0x00000002,     ///<Master Out Slave In for SSP1.
            t2Mat3=0x00000003,     ///<Match output for Timer 2, channel 3.
            rtcEv2=0x00000004,     ///<Event input 2 to Event Monitor/Recorder.
            cmp1In2=0x00000005,     ///<Comparator 1, input 2.
            lcdVd17=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p09> p09{};
            constexpr MPL::Value<funcVal,funcVal::i2sTxSda> i2sTxSda{};
            constexpr MPL::Value<funcVal,funcVal::ssp1Mosi> ssp1Mosi{};
            constexpr MPL::Value<funcVal,funcVal::t2Mat3> t2Mat3{};
            constexpr MPL::Value<funcVal,funcVal::rtcEv2> rtcEv2{};
            constexpr MPL::Value<funcVal,funcVal::cmp1In2> cmp1In2{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd17> lcdVd17{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Glitch filter control
        enum class filterVal {
            enabled=0x00000000,     ///<Noise pulses below approximately 10 ns are filtered
                                out.
            disabled=0x00000001,     ///<No input filtering is done.
        };
        namespace filterValC{
            constexpr MPL::Value<filterVal,filterVal::enabled> enabled{};
            constexpr MPL::Value<filterVal,filterVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filterVal> filter{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep010{    ///<I/O configuration register for pin P0[10]
        using Addr = Register::Address<0x4002c028,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[10]
        enum class funcVal {
            p010=0x00000000,     ///<General purpose digital input/output pin.
            u2Txd=0x00000001,     ///<Transmitter output for UART2.
            i2c2Sda=0x00000002,     ///<I2C2 data input/output (this                                     pin does not use a specialized I2C pad).
            t3Mat0=0x00000003,     ///<Match output for Timer 3, channel 0.
            lcdVd5=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p010> p010{};
            constexpr MPL::Value<funcVal,funcVal::u2Txd> u2Txd{};
            constexpr MPL::Value<funcVal,funcVal::i2c2Sda> i2c2Sda{};
            constexpr MPL::Value<funcVal,funcVal::t3Mat0> t3Mat0{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd5> lcdVd5{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep011{    ///<I/O configuration register for pin P0[11]
        using Addr = Register::Address<0x4002c02c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[11]
        enum class funcVal {
            p011=0x00000000,     ///<General purpose digital input/output pin.
            u2Rxd=0x00000001,     ///<Receiver input for UART2.
            i2c2Scl=0x00000002,     ///<I2C2 clock input/output (this                                     pin does not use a specialized I2C pad).
            t3Mat1=0x00000003,     ///<Match output for Timer 3, channel 1.
            lcdVd10=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p011> p011{};
            constexpr MPL::Value<funcVal,funcVal::u2Rxd> u2Rxd{};
            constexpr MPL::Value<funcVal,funcVal::i2c2Scl> i2c2Scl{};
            constexpr MPL::Value<funcVal,funcVal::t3Mat1> t3Mat1{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd10> lcdVd10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep012{    ///<I/O configuration register for pin P0[12]
        using Addr = Register::Address<0x4002c030,0xfffffff8,0,unsigned>;
        ///Selects pin function for pin P0[12]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
    }
    namespace Nonep013{    ///<I/O configuration register for pin P0[13]
        using Addr = Register::Address<0x4002c034,0xfffffff8,0,unsigned>;
        ///Selects pin function for pin P0[13]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
    }
    namespace Nonep014{    ///<I/O configuration register for pin P0[14]
        using Addr = Register::Address<0x4002c038,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[14]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep015{    ///<I/O configuration register for pin P0[15]
        using Addr = Register::Address<0x4002c03c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[15]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep016{    ///<I/O configuration register for pin P0[16]
        using Addr = Register::Address<0x4002c040,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[16]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep017{    ///<I/O configuration register for pin P0[17]
        using Addr = Register::Address<0x4002c044,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[17]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep018{    ///<I/O configuration register for pin P0[18]
        using Addr = Register::Address<0x4002c048,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[18]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep019{    ///<I/O configuration register for pin P0[19]
        using Addr = Register::Address<0x4002c04c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[19]
        enum class funcVal {
            p019=0x00000000,     ///<General purpose digital input/output pin.
            u1Dsr=0x00000001,     ///<Data Set Ready input for UART1.
            sdClk=0x00000002,     ///<Clock output line for SD card interface.
            i2c1Sda=0x00000003,     ///<I2C1 data input/output (this                                     pin does not use a specialized I2C pad).
            lcdVd13=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p019> p019{};
            constexpr MPL::Value<funcVal,funcVal::u1Dsr> u1Dsr{};
            constexpr MPL::Value<funcVal,funcVal::sdClk> sdClk{};
            constexpr MPL::Value<funcVal,funcVal::i2c1Sda> i2c1Sda{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd13> lcdVd13{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep020{    ///<I/O configuration register for pin P0[20]
        using Addr = Register::Address<0x4002c050,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[20]
        enum class funcVal {
            p020=0x00000000,     ///<General purpose digital input/output pin.
            u1Dtr=0x00000001,     ///<Data Terminal Ready output for UART1. Can also be                                     configured to be an RS-485/EIA-485 output enable signal for                                     UART1.
            sdCmd=0x00000002,     ///<Command line for SD card interface.
            i2c1Scl=0x00000003,     ///<I2C1 clock input/output (this                                     pin does not use a specialized I2C pad).
            lcdVd14=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p020> p020{};
            constexpr MPL::Value<funcVal,funcVal::u1Dtr> u1Dtr{};
            constexpr MPL::Value<funcVal,funcVal::sdCmd> sdCmd{};
            constexpr MPL::Value<funcVal,funcVal::i2c1Scl> i2c1Scl{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd14> lcdVd14{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep021{    ///<I/O configuration register for pin P0[21]
        using Addr = Register::Address<0x4002c054,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P0[21]
        enum class funcVal {
            p021=0x00000000,     ///<General purpose digital input/output pin.
            u1Ri=0x00000001,     ///<Ring Indicator input for UART1.
            sdPwr=0x00000002,     ///<Power Supply Enable for external SD card power                                     supply.
            u4Oe=0x00000003,     ///<RS-485/EIA-485 output enable signal for                                     UART4.
            canRd1=0x00000004,     ///<CAN1 receiver input.
            u4Sclk=0x00000005,     ///<USART 4 clock input or output in synchronous                                     mode.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p021> p021{};
            constexpr MPL::Value<funcVal,funcVal::u1Ri> u1Ri{};
            constexpr MPL::Value<funcVal,funcVal::sdPwr> sdPwr{};
            constexpr MPL::Value<funcVal,funcVal::u4Oe> u4Oe{};
            constexpr MPL::Value<funcVal,funcVal::canRd1> canRd1{};
            constexpr MPL::Value<funcVal,funcVal::u4Sclk> u4Sclk{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep022{    ///<I/O configuration register for pin P0[22]
        using Addr = Register::Address<0x4002c058,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin P0[22]
        enum class funcVal {
            p022=0x00000000,     ///<General purpose digital input/output pin.
            u1Rts=0x00000001,     ///<Request to Send output for UART1. Can also be configured                                     to be an RS-485/EIA-485 output enable signal for                                     UART1.
            sdDat0=0x00000002,     ///<Data line 0 for SD card interface.
            u4Txd=0x00000003,     ///<Transmitter output for USART4 (input/output in smart card                                     mode).
            canTd1=0x00000004,     ///<CAN1 transmitter output.
            spifiClk=0x00000005,     ///<Clock output for SPIFI.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p022> p022{};
            constexpr MPL::Value<funcVal,funcVal::u1Rts> u1Rts{};
            constexpr MPL::Value<funcVal,funcVal::sdDat0> sdDat0{};
            constexpr MPL::Value<funcVal,funcVal::u4Txd> u4Txd{};
            constexpr MPL::Value<funcVal,funcVal::canTd1> canTd1{};
            constexpr MPL::Value<funcVal,funcVal::spifiClk> spifiClk{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Selects Analog/Digital mode.
        enum class admodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        namespace admodeValC{
            constexpr MPL::Value<admodeVal,admodeVal::analogInputMode> analogInputMode{};
            constexpr MPL::Value<admodeVal,admodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,admodeVal> admode{}; 
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep023{    ///<I/O configuration register for pin P0[23]
        using Addr = Register::Address<0x4002c05c,0xfffffff8,0,unsigned>;
        ///Selects pin function for pin P0[23]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
    }
    namespace Nonep024{    ///<I/O configuration register for pin P0[24]
        using Addr = Register::Address<0x4002c060,0xfffffff8,0,unsigned>;
        ///Selects pin function for pin P0[24]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
    }
    namespace Nonep025{    ///<I/O configuration register for pin P0[25]
        using Addr = Register::Address<0x4002c064,0xfffffff8,0,unsigned>;
        ///Selects pin function for pin P0[25]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
    }
    namespace Nonep026{    ///<I/O configuration register for pin P0[26]
        using Addr = Register::Address<0x4002c068,0xfffefa00,0,unsigned>;
        ///Selects pin function for pin P0[26]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Selects Analog/Digital mode.
        enum class admodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        namespace admodeValC{
            constexpr MPL::Value<admodeVal,admodeVal::analogInputMode> analogInputMode{};
            constexpr MPL::Value<admodeVal,admodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,admodeVal> admode{}; 
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///DAC output enable.
        enum class dacenVal {
            disable=0x00000000,     ///<DAC disable.
            enable=0x00000001,     ///<DAC enable.
        };
        namespace dacenValC{
            constexpr MPL::Value<dacenVal,dacenVal::disable> disable{};
            constexpr MPL::Value<dacenVal,dacenVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,dacenVal> dacen{}; 
    }
    namespace Nonep027{    ///<I/O configuration register for pin P0[27]
        using Addr = Register::Address<0x4002c06c,0xfffffcb8,0,unsigned>;
        ///Selects pin function for pin P0[27]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Configures I2C features for standard mode, fast mode, and Fast Mode
                        Plus operation.
        enum class hsVal {
            enabled=0x00000000,     ///<I2C 50ns glitch filter and slew rate control
                                enabled.
            disabled=0x00000001,     ///<I2C 50ns glitch filter and slew rate control
                                disabled.
        };
        namespace hsValC{
            constexpr MPL::Value<hsVal,hsVal::enabled> enabled{};
            constexpr MPL::Value<hsVal,hsVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,hsVal> hs{}; 
        ///Controls sink current capability of the pin, only for P5[2] and
                        P5[3].
        enum class hidriveVal {
            lowdrive=0x00000000,     ///<Output drive sink is 4 mA. This is sufficient for standard
                                and fast mode I2C.
            highdrive=0x00000001,     ///<Output drive sink is 20 mA. This is needed for Fast Mode
                                Plus I2C. Refer to the appropriate specific device data sheet for
                                details.
        };
        namespace hidriveValC{
            constexpr MPL::Value<hidriveVal,hidriveVal::lowdrive> lowdrive{};
            constexpr MPL::Value<hidriveVal,hidriveVal::highdrive> highdrive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,hidriveVal> hidrive{}; 
    }
    namespace Nonep028{    ///<I/O configuration register for pin P0[28]
        using Addr = Register::Address<0x4002c070,0xfffffcb8,0,unsigned>;
        ///Selects pin function for pin P0[28]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Configures I2C features for standard mode, fast mode, and Fast Mode
                        Plus operation.
        enum class hsVal {
            enabled=0x00000000,     ///<I2C 50ns glitch filter and slew rate control
                                enabled.
            disabled=0x00000001,     ///<I2C 50ns glitch filter and slew rate control
                                disabled.
        };
        namespace hsValC{
            constexpr MPL::Value<hsVal,hsVal::enabled> enabled{};
            constexpr MPL::Value<hsVal,hsVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,hsVal> hs{}; 
        ///Controls sink current capability of the pin, only for P5[2] and
                        P5[3].
        enum class hidriveVal {
            lowdrive=0x00000000,     ///<Output drive sink is 4 mA. This is sufficient for standard
                                and fast mode I2C.
            highdrive=0x00000001,     ///<Output drive sink is 20 mA. This is needed for Fast Mode
                                Plus I2C. Refer to the appropriate specific device data sheet for
                                details.
        };
        namespace hidriveValC{
            constexpr MPL::Value<hidriveVal,hidriveVal::lowdrive> lowdrive{};
            constexpr MPL::Value<hidriveVal,hidriveVal::highdrive> highdrive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,hidriveVal> hidrive{}; 
    }
    namespace Nonep029{    ///<I/O configuration register for pin P0[29]
        using Addr = Register::Address<0x4002c074,0xfffffff8,0,unsigned>;
        ///Selects pin function for pin P0[29]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
    }
    namespace Nonep030{    ///<I/O configuration register for pin P0[30]
        using Addr = Register::Address<0x4002c078,0xfffffff8,0,unsigned>;
        ///Selects pin function for pin P0[30]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
    }
    namespace Nonep031{    ///<I/O configuration register for pin P0[31]
        using Addr = Register::Address<0x4002c07c,0xfffffff8,0,unsigned>;
        ///Selects pin function for pin P0[31]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
    }
    namespace Nonep10{    ///<I/O configuration register for pin P1[0]
        using Addr = Register::Address<0x4002c080,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep11{    ///<I/O configuration register for pin P1[1]
        using Addr = Register::Address<0x4002c084,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep12{    ///<I/O configuration register for pin P1[2]
        using Addr = Register::Address<0x4002c088,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[2]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep13{    ///<I/O configuration register for pin P1[3]
        using Addr = Register::Address<0x4002c08c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[3]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep14{    ///<I/O configuration register for pin P1[4] 
        using Addr = Register::Address<0x4002c090,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[4] 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep15{    ///<I/O configuration register for pin P1[5]
        using Addr = Register::Address<0x4002c094,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[5]
        enum class funcVal {
            p15=0x00000000,     ///<General purpose digital input/output pin.
            enetTxEr=0x00000001,     ///<Ethernet Transmit Error (MII interface).
            sdPwr=0x00000002,     ///<Power Supply Enable for external SD card power                                     supply.
            pwm03=0x00000003,     ///<Pulse Width Modulator 0, output 3.
            cmp1In1=0x00000005,     ///<Comparator 1, input 1.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p15> p15{};
            constexpr MPL::Value<funcVal,funcVal::enetTxEr> enetTxEr{};
            constexpr MPL::Value<funcVal,funcVal::sdPwr> sdPwr{};
            constexpr MPL::Value<funcVal,funcVal::pwm03> pwm03{};
            constexpr MPL::Value<funcVal,funcVal::cmp1In1> cmp1In1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep16{    ///<I/O configuration register for pin P1[6]
        using Addr = Register::Address<0x4002c098,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[6]
        enum class funcVal {
            p16=0x00000000,     ///<General purpose digital input/output pin.
            enetTxClk=0x00000001,     ///<Ethernet Transmit Clock (MII interface).
            sdDat0=0x00000002,     ///<Data line 0 for SD card interface.
            pwm04=0x00000003,     ///<Pulse Width Modulator 0, output 4.
            cmp0In3=0x00000005,     ///<Comparator 0, input 3.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p16> p16{};
            constexpr MPL::Value<funcVal,funcVal::enetTxClk> enetTxClk{};
            constexpr MPL::Value<funcVal,funcVal::sdDat0> sdDat0{};
            constexpr MPL::Value<funcVal,funcVal::pwm04> pwm04{};
            constexpr MPL::Value<funcVal,funcVal::cmp0In3> cmp0In3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep17{    ///<I/O configuration register for pin P1[7]
        using Addr = Register::Address<0x4002c09c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[7]
        enum class funcVal {
            p17=0x00000000,     ///<General purpose digital input/output pin.
            enetCol=0x00000001,     ///<Ethernet Collision detect (MII interface).
            sdDat1=0x00000002,     ///<Data line 1 for SD card interface.
            pwm05=0x00000003,     ///<Pulse Width Modulator 0, output 5.
            cmp1In0=0x00000005,     ///<Comparator 1, input 0.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p17> p17{};
            constexpr MPL::Value<funcVal,funcVal::enetCol> enetCol{};
            constexpr MPL::Value<funcVal,funcVal::sdDat1> sdDat1{};
            constexpr MPL::Value<funcVal,funcVal::pwm05> pwm05{};
            constexpr MPL::Value<funcVal,funcVal::cmp1In0> cmp1In0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep18{    ///<I/O configuration register for pin P1[8]
        using Addr = Register::Address<0x4002c0a0,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[8]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep19{    ///<I/O configuration register for pin P1[9]
        using Addr = Register::Address<0x4002c0a4,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[9]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep110{    ///<I/O configuration register for pin P1[10]
        using Addr = Register::Address<0x4002c0a8,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[10]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep111{    ///<I/O configuration register for pin P1[11]
        using Addr = Register::Address<0x4002c0ac,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[11]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep112{    ///<I/O configuration register for pin P1[12]
        using Addr = Register::Address<0x4002c0b0,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[12]
        enum class funcVal {
            p112=0x00000000,     ///<General purpose digital input/output pin.
            enetRxd3=0x00000001,     ///<Ethernet Receive Data (MII interface).
            sdDat3=0x00000002,     ///<Data line 3 for SD card interface.
            pwm0Cap0=0x00000003,     ///<Capture input for PWM0, channel 0.
            cmp1Out=0x00000005,     ///<Comparator 1, output.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p112> p112{};
            constexpr MPL::Value<funcVal,funcVal::enetRxd3> enetRxd3{};
            constexpr MPL::Value<funcVal,funcVal::sdDat3> sdDat3{};
            constexpr MPL::Value<funcVal,funcVal::pwm0Cap0> pwm0Cap0{};
            constexpr MPL::Value<funcVal,funcVal::cmp1Out> cmp1Out{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep113{    ///<I/O configuration register for pin P1[13]
        using Addr = Register::Address<0x4002c0b4,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[13]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep114{    ///<I/O configuration register for pin P1[14]
        using Addr = Register::Address<0x4002c0b8,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[14]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep115{    ///<I/O configuration register for pin P1[15]
        using Addr = Register::Address<0x4002c0bc,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[15]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep116{    ///<I/O configuration register for pin P1[16]
        using Addr = Register::Address<0x4002c0c0,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[16]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep117{    ///<I/O configuration register for pin P1[17]
        using Addr = Register::Address<0x4002c0c4,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[17]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep118{    ///<I/O configuration register for pin P1[18]
        using Addr = Register::Address<0x4002c0c8,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[18]
        enum class funcVal {
            p118=0x00000000,     ///<General purpose digital input/output pin.
            usbUpLed1=0x00000001,     ///<It is LOW when the device is configured (non-control                                     endpoints enabled), or when the host is enabled and has detected                                     a device on the bus. It is HIGH when the device is not                                     configured, or when host is enabled and has not detected a                                     device on the bus, or during global suspend. It transitions                                     between LOW and HIGH (flashes) when the host is enabled and                                     detects activity on the bus.
            pwm11=0x00000002,     ///<Pulse Width Modulator 1, channel 1 output.
            t1Cap0=0x00000003,     ///<Capture input for Timer 1, channel 0.
            ssp1Miso=0x00000005,     ///<Master In Slave Out for SSP1.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p118> p118{};
            constexpr MPL::Value<funcVal,funcVal::usbUpLed1> usbUpLed1{};
            constexpr MPL::Value<funcVal,funcVal::pwm11> pwm11{};
            constexpr MPL::Value<funcVal,funcVal::t1Cap0> t1Cap0{};
            constexpr MPL::Value<funcVal,funcVal::ssp1Miso> ssp1Miso{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep119{    ///<I/O configuration register for pin P1[19]
        using Addr = Register::Address<0x4002c0cc,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[19]
        enum class funcVal {
            p119=0x00000000,     ///<General purpose digital input/output pin.
            usbTxE1=0x00000001,     ///<Transmit Enable signal for USB port 1 (OTG                                     transceiver).
            usbPpwr1=0x00000002,     ///<Port Power enable signal for USB port 1.
            t1Cap1=0x00000003,     ///<Capture input for Timer 1, channel 1.
            mc0a=0x00000004,     ///<Motor control PWM channel 0, output A.
            ssp1Sck=0x00000005,     ///<Serial clock for SSP1.
            u2Oe=0x00000006,     ///<RS-485/EIA-485 output enable signal for                                     UART2.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p119> p119{};
            constexpr MPL::Value<funcVal,funcVal::usbTxE1> usbTxE1{};
            constexpr MPL::Value<funcVal,funcVal::usbPpwr1> usbPpwr1{};
            constexpr MPL::Value<funcVal,funcVal::t1Cap1> t1Cap1{};
            constexpr MPL::Value<funcVal,funcVal::mc0a> mc0a{};
            constexpr MPL::Value<funcVal,funcVal::ssp1Sck> ssp1Sck{};
            constexpr MPL::Value<funcVal,funcVal::u2Oe> u2Oe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep120{    ///<I/O configuration register for pin P1[20]
        using Addr = Register::Address<0x4002c0d0,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[20]
        enum class funcVal {
            p120=0x00000000,     ///<General purpose digital input/output pin.
            usbTxDp1=0x00000001,     ///<D+ transmit data for USB port 1 (OTG                                     transceiver).
            pwm12=0x00000002,     ///<Pulse Width Modulator 1, channel 2 output.
            qeiPha=0x00000003,     ///<Quadrature Encoder Interface PHA input.
            mcFb0=0x00000004,     ///<Motor control PWM channel 0 feedback input.
            ssp0Sck=0x00000005,     ///<Serial clock for SSP0.
            lcdVd6=0x00000006,     ///<LCD data.
            lcdVd10=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p120> p120{};
            constexpr MPL::Value<funcVal,funcVal::usbTxDp1> usbTxDp1{};
            constexpr MPL::Value<funcVal,funcVal::pwm12> pwm12{};
            constexpr MPL::Value<funcVal,funcVal::qeiPha> qeiPha{};
            constexpr MPL::Value<funcVal,funcVal::mcFb0> mcFb0{};
            constexpr MPL::Value<funcVal,funcVal::ssp0Sck> ssp0Sck{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd6> lcdVd6{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd10> lcdVd10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep121{    ///<I/O configuration register for pin P1[21]
        using Addr = Register::Address<0x4002c0d4,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[21]
        enum class funcVal {
            p121=0x00000000,     ///<General purpose digital input/output pin.
            usbTxDm1=0x00000001,     ///<D- transmit data for USB port                                     1 (OTG transceiver).
            pwm13=0x00000002,     ///<Pulse Width Modulator 1, channel 3 output.
            ssp0Ssel=0x00000003,     ///<Slave Select for SSP0.
            mcAbort=0x00000004,     ///<Motor control PWM, active low fast abort.
            lcdVd7=0x00000006,     ///<LCD data.
            lcdVd11=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p121> p121{};
            constexpr MPL::Value<funcVal,funcVal::usbTxDm1> usbTxDm1{};
            constexpr MPL::Value<funcVal,funcVal::pwm13> pwm13{};
            constexpr MPL::Value<funcVal,funcVal::ssp0Ssel> ssp0Ssel{};
            constexpr MPL::Value<funcVal,funcVal::mcAbort> mcAbort{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd7> lcdVd7{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd11> lcdVd11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep122{    ///<I/O configuration register for pin P1[22]
        using Addr = Register::Address<0x4002c0d8,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[22]
        enum class funcVal {
            p122=0x00000000,     ///<General purpose digital input/output pin.
            usbRcv1=0x00000001,     ///<Differential receive data for USB port 1 (OTG                                     transceiver).
            usbPwrd1=0x00000002,     ///<Power Status for USB port 1 (host power                                     switch).
            t1Mat0=0x00000003,     ///<Match output for Timer 1, channel 0.
            mc0b=0x00000004,     ///<Motor control PWM channel 0, output B.
            ssp1Mosi=0x00000005,     ///<Master Out Slave In for SSP1.
            lcdVd8=0x00000006,     ///<LCD data.
            lcdVd12=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p122> p122{};
            constexpr MPL::Value<funcVal,funcVal::usbRcv1> usbRcv1{};
            constexpr MPL::Value<funcVal,funcVal::usbPwrd1> usbPwrd1{};
            constexpr MPL::Value<funcVal,funcVal::t1Mat0> t1Mat0{};
            constexpr MPL::Value<funcVal,funcVal::mc0b> mc0b{};
            constexpr MPL::Value<funcVal,funcVal::ssp1Mosi> ssp1Mosi{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd8> lcdVd8{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd12> lcdVd12{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep123{    ///<I/O configuration register for pin P1[23]
        using Addr = Register::Address<0x4002c0dc,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[23]
        enum class funcVal {
            p123=0x00000000,     ///<General purpose digital input/output pin.
            usbRxDp1=0x00000001,     ///<D+ receive data for USB port 1 (OTG                                     transceiver).
            pwm14=0x00000002,     ///<Pulse Width Modulator 1, channel 4 output.
            qeiPhb=0x00000003,     ///<Quadrature Encoder Interface PHB input.
            mcFb1=0x00000004,     ///<Motor control PWM channel 1 feedback input.
            ssp0Miso=0x00000005,     ///<Master In Slave Out for SSP0.
            lcdVd9=0x00000006,     ///<LCD data.
            lcdVd13=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p123> p123{};
            constexpr MPL::Value<funcVal,funcVal::usbRxDp1> usbRxDp1{};
            constexpr MPL::Value<funcVal,funcVal::pwm14> pwm14{};
            constexpr MPL::Value<funcVal,funcVal::qeiPhb> qeiPhb{};
            constexpr MPL::Value<funcVal,funcVal::mcFb1> mcFb1{};
            constexpr MPL::Value<funcVal,funcVal::ssp0Miso> ssp0Miso{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd9> lcdVd9{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd13> lcdVd13{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep124{    ///<I/O configuration register for pin P1[24]
        using Addr = Register::Address<0x4002c0e0,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[24]
        enum class funcVal {
            p124=0x00000000,     ///<General purpose digital input/output pin.
            usbRxDm1=0x00000001,     ///<D- receive data for USB port 1                                     (OTG transceiver).
            pwm15=0x00000002,     ///<Pulse Width Modulator 1, channel 5 output.
            qeiIdx=0x00000003,     ///<Quadrature Encoder Interface INDEX input.
            mcFb2=0x00000004,     ///<Motor control PWM channel 2 feedback input.
            ssp0Mosi=0x00000005,     ///<Master Out Slave in for SSP0.
            lcdVd10=0x00000006,     ///<LCD data.
            lcdVd14=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p124> p124{};
            constexpr MPL::Value<funcVal,funcVal::usbRxDm1> usbRxDm1{};
            constexpr MPL::Value<funcVal,funcVal::pwm15> pwm15{};
            constexpr MPL::Value<funcVal,funcVal::qeiIdx> qeiIdx{};
            constexpr MPL::Value<funcVal,funcVal::mcFb2> mcFb2{};
            constexpr MPL::Value<funcVal,funcVal::ssp0Mosi> ssp0Mosi{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd10> lcdVd10{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd14> lcdVd14{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep125{    ///<I/O configuration register for pin P1[25]
        using Addr = Register::Address<0x4002c0e4,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[25]
        enum class funcVal {
            p125=0x00000000,     ///<General purpose digital input/output pin.
            usbLs1=0x00000001,     ///<Low Speed status for USB port 1 (OTG                                     transceiver).
            usbHsten1=0x00000002,     ///<Host Enabled status for USB port 1.
            t1Mat1=0x00000003,     ///<Match output for Timer 1, channel 1.
            mc1a=0x00000004,     ///<Motor control PWM channel 1, output A.
            clkout=0x00000005,     ///<Selectable clock output.
            lcdVd11=0x00000006,     ///<LCD data.
            lcdVd15=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p125> p125{};
            constexpr MPL::Value<funcVal,funcVal::usbLs1> usbLs1{};
            constexpr MPL::Value<funcVal,funcVal::usbHsten1> usbHsten1{};
            constexpr MPL::Value<funcVal,funcVal::t1Mat1> t1Mat1{};
            constexpr MPL::Value<funcVal,funcVal::mc1a> mc1a{};
            constexpr MPL::Value<funcVal,funcVal::clkout> clkout{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd11> lcdVd11{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd15> lcdVd15{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep126{    ///<I/O configuration register for pin P1[26]
        using Addr = Register::Address<0x4002c0e8,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[26]
        enum class funcVal {
            p126=0x00000000,     ///<General purpose digital input/output pin.
            usbSspnd1=0x00000001,     ///<USB port 1 Bus Suspend status (OTG                                     transceiver).
            pwm16=0x00000002,     ///<Pulse Width Modulator 1, channel 6 output.
            t0Cap0=0x00000003,     ///<Capture input for Timer 0, channel 0.
            mc1b=0x00000004,     ///<Motor control PWM channel 1, output B.
            ssp1Ssel=0x00000005,     ///<Slave Select for SSP1.
            lcdVd12=0x00000006,     ///<LCD data.
            lcdVd20=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p126> p126{};
            constexpr MPL::Value<funcVal,funcVal::usbSspnd1> usbSspnd1{};
            constexpr MPL::Value<funcVal,funcVal::pwm16> pwm16{};
            constexpr MPL::Value<funcVal,funcVal::t0Cap0> t0Cap0{};
            constexpr MPL::Value<funcVal,funcVal::mc1b> mc1b{};
            constexpr MPL::Value<funcVal,funcVal::ssp1Ssel> ssp1Ssel{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd12> lcdVd12{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd20> lcdVd20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep127{    ///<I/O configuration register for pin P1[27]
        using Addr = Register::Address<0x4002c0ec,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[27]
        enum class funcVal {
            p127=0x00000000,     ///<General purpose digital input/output pin.
            usbInt1=0x00000001,     ///<USB port 1 OTG transceiver interrupt (OTG                                     transceiver).
            usbOvrcr1=0x00000002,     ///<USB port 1 Over-Current status.
            t0Cap1=0x00000003,     ///<Capture input for Timer 0, channel 1.
            clkout=0x00000004,     ///<Selectable clock output.
            lcdVd13=0x00000006,     ///<LCD data.
            lcdVd21=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p127> p127{};
            constexpr MPL::Value<funcVal,funcVal::usbInt1> usbInt1{};
            constexpr MPL::Value<funcVal,funcVal::usbOvrcr1> usbOvrcr1{};
            constexpr MPL::Value<funcVal,funcVal::t0Cap1> t0Cap1{};
            constexpr MPL::Value<funcVal,funcVal::clkout> clkout{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd13> lcdVd13{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd21> lcdVd21{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep128{    ///<I/O configuration register for pin P1[28]
        using Addr = Register::Address<0x4002c0f0,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[28]
        enum class funcVal {
            p128=0x00000000,     ///<General purpose digital input/output pin.
            usbScl1=0x00000001,     ///<USB port 1 I2C serial clock                                     (OTG transceiver).
            pwm1Cap0=0x00000002,     ///<Capture input for PWM1, channel 0.
            t0Mat0=0x00000003,     ///<Match output for Timer 0, channel 0.
            mc2a=0x00000004,     ///<Motor control PWM channel 2, output A.
            ssp0Ssel=0x00000005,     ///<Slave Select for SSP0.
            lcdVd14=0x00000006,     ///<LCD data.
            lcdVd22=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p128> p128{};
            constexpr MPL::Value<funcVal,funcVal::usbScl1> usbScl1{};
            constexpr MPL::Value<funcVal,funcVal::pwm1Cap0> pwm1Cap0{};
            constexpr MPL::Value<funcVal,funcVal::t0Mat0> t0Mat0{};
            constexpr MPL::Value<funcVal,funcVal::mc2a> mc2a{};
            constexpr MPL::Value<funcVal,funcVal::ssp0Ssel> ssp0Ssel{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd14> lcdVd14{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd22> lcdVd22{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep129{    ///<I/O configuration register for pin P1[29]
        using Addr = Register::Address<0x4002c0f4,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P1[29]
        enum class funcVal {
            p129=0x00000000,     ///<General purpose digital input/output pin.
            usbSda1=0x00000001,     ///<USB port 1 I2C serial data                                     (OTG transceiver).
            pwm1Cap1=0x00000002,     ///<Capture input for PWM1, channel 1.
            t0Mat1=0x00000003,     ///<Match output for Timer 0, channel 1.
            mc2b=0x00000004,     ///<Motor control PWM channel 2, output B.
            u4Txd=0x00000005,     ///<Transmitter output for USART4 (input/output in smart card                                     mode).
            lcdVd15=0x00000006,     ///<LCD data.
            lcdVd23=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p129> p129{};
            constexpr MPL::Value<funcVal,funcVal::usbSda1> usbSda1{};
            constexpr MPL::Value<funcVal,funcVal::pwm1Cap1> pwm1Cap1{};
            constexpr MPL::Value<funcVal,funcVal::t0Mat1> t0Mat1{};
            constexpr MPL::Value<funcVal,funcVal::mc2b> mc2b{};
            constexpr MPL::Value<funcVal,funcVal::u4Txd> u4Txd{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd15> lcdVd15{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd23> lcdVd23{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep130{    ///<I/O configuration register for pin P1[30]
        using Addr = Register::Address<0x4002c0f8,0xfffffff8,0,unsigned>;
        ///Selects pin function for pin P1[30]
        enum class funcVal {
            p130=0x00000000,     ///<General purpose digital input/output pin.
            usbPwrd2=0x00000001,     ///<Power Status for USB port 2.
            usbVbus=0x00000002,     ///<Monitors the presence of USB bus power.This signal must be HIGH for USB reset to                                     occur.
            adc0In4=0x00000003,     ///<A/D converter 0, input 4. When configured as an ADC                                     input, the digital function of the pin must be                                     disabled.
            i2c0Sda=0x00000004,     ///<I2C0 data input/output (this                                     pin does not use a specialized I2C pad.
            u3Oe=0x00000005,     ///<RS-485/EIA-485 output enable signal for                                     UART3.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p130> p130{};
            constexpr MPL::Value<funcVal,funcVal::usbPwrd2> usbPwrd2{};
            constexpr MPL::Value<funcVal,funcVal::usbVbus> usbVbus{};
            constexpr MPL::Value<funcVal,funcVal::adc0In4> adc0In4{};
            constexpr MPL::Value<funcVal,funcVal::i2c0Sda> i2c0Sda{};
            constexpr MPL::Value<funcVal,funcVal::u3Oe> u3Oe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
    }
    namespace Nonep131{    ///<I/O configuration register for pin P1[31]
        using Addr = Register::Address<0x4002c0fc,0xfffffff8,0,unsigned>;
        ///Selects pin function for pin P1[31]
        enum class funcVal {
            p131=0x00000000,     ///<General purpose digital input/output pin.
            usbOvrcr2=0x00000001,     ///<Over-Current status for USB port 2.
            ssp1Sck=0x00000002,     ///<Serial Clock for SSP1.
            adc0In5=0x00000003,     ///<A/D converter 0, input 5. When configured as an ADC                                     input, the digital function of the pin must be                                     disabled.
            i2c0Scl=0x00000004,     ///<I2C0 clock input/output (this                                     pin does not use a specialized I2C pad.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p131> p131{};
            constexpr MPL::Value<funcVal,funcVal::usbOvrcr2> usbOvrcr2{};
            constexpr MPL::Value<funcVal,funcVal::ssp1Sck> ssp1Sck{};
            constexpr MPL::Value<funcVal,funcVal::adc0In5> adc0In5{};
            constexpr MPL::Value<funcVal,funcVal::i2c0Scl> i2c0Scl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
    }
    namespace Nonep20{    ///<I/O configuration register for pin P2[0]
        using Addr = Register::Address<0x4002c100,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep21{    ///<I/O configuration register for pin P2[1]
        using Addr = Register::Address<0x4002c104,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep22{    ///<I/O configuration register for pin P2[2]
        using Addr = Register::Address<0x4002c108,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[2]
        enum class funcVal {
            p22=0x00000000,     ///<General purpose digital input/output pin.
            pwm13=0x00000001,     ///<Pulse Width Modulator 1, channel 3 output.
            u1Cts=0x00000002,     ///<Clear to Send input for UART1.
            t2Mat3=0x00000003,     ///<Match output for Timer 2, channel 3.
            tracedata3=0x00000005,     ///<Trace data, bit 3.
            lcdDclk=0x00000007,     ///<LCD panel clock.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p22> p22{};
            constexpr MPL::Value<funcVal,funcVal::pwm13> pwm13{};
            constexpr MPL::Value<funcVal,funcVal::u1Cts> u1Cts{};
            constexpr MPL::Value<funcVal,funcVal::t2Mat3> t2Mat3{};
            constexpr MPL::Value<funcVal,funcVal::tracedata3> tracedata3{};
            constexpr MPL::Value<funcVal,funcVal::lcdDclk> lcdDclk{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep23{    ///<I/O configuration register for pin P2[3]
        using Addr = Register::Address<0x4002c10c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[3]
        enum class funcVal {
            p23=0x00000000,     ///<General purpose digital input/output pin.
            pwm14=0x00000001,     ///<Pulse Width Modulator 1, channel 4 output.
            u1Dcd=0x00000002,     ///<Data Carrier Detect input for UART1.
            t2Mat2=0x00000003,     ///<Match output for Timer 2, channel 2.
            tracedata2=0x00000005,     ///<Trace data, bit 2.
            lcdFp=0x00000007,     ///<Frame pulse (STN). Vertical synchronization pulse                                     (TFT).
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p23> p23{};
            constexpr MPL::Value<funcVal,funcVal::pwm14> pwm14{};
            constexpr MPL::Value<funcVal,funcVal::u1Dcd> u1Dcd{};
            constexpr MPL::Value<funcVal,funcVal::t2Mat2> t2Mat2{};
            constexpr MPL::Value<funcVal,funcVal::tracedata2> tracedata2{};
            constexpr MPL::Value<funcVal,funcVal::lcdFp> lcdFp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep24{    ///<I/O configuration register for pin P2[4]
        using Addr = Register::Address<0x4002c110,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[4]
        enum class funcVal {
            p24=0x00000000,     ///<General purpose digital input/output pin.
            pwm15=0x00000001,     ///<Pulse Width Modulator 1, channel 5 output.
            u1Dsr=0x00000002,     ///<Data Set Ready input for UART1.
            t2Mat1=0x00000003,     ///<Match output for Timer 2, channel 1.
            tracedata1=0x00000005,     ///<Trace data, bit 1.
            lcdEnabM=0x00000007,     ///<STN AC bias drive or TFT data enable output.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p24> p24{};
            constexpr MPL::Value<funcVal,funcVal::pwm15> pwm15{};
            constexpr MPL::Value<funcVal,funcVal::u1Dsr> u1Dsr{};
            constexpr MPL::Value<funcVal,funcVal::t2Mat1> t2Mat1{};
            constexpr MPL::Value<funcVal,funcVal::tracedata1> tracedata1{};
            constexpr MPL::Value<funcVal,funcVal::lcdEnabM> lcdEnabM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep25{    ///<I/O configuration register for pin P2[5]
        using Addr = Register::Address<0x4002c114,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[5]
        enum class funcVal {
            p25=0x00000000,     ///<General purpose digital input/output pin.
            pwm16=0x00000001,     ///<Pulse Width Modulator 1, channel 6 output.
            u1Dtr=0x00000002,     ///<Data Terminal Ready output for UART1. Can also be                                     configured to be an RS-485/EIA-485 output enable signal for                                     UART1.
            t2Mat0=0x00000003,     ///<Match output for Timer 2, channel 0.
            tracedata0=0x00000005,     ///<Trace data, bit 0.
            lcdLp=0x00000007,     ///<Line synchronization pulse (STN). Horizontal                                     synchronization pulse (TFT).
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p25> p25{};
            constexpr MPL::Value<funcVal,funcVal::pwm16> pwm16{};
            constexpr MPL::Value<funcVal,funcVal::u1Dtr> u1Dtr{};
            constexpr MPL::Value<funcVal,funcVal::t2Mat0> t2Mat0{};
            constexpr MPL::Value<funcVal,funcVal::tracedata0> tracedata0{};
            constexpr MPL::Value<funcVal,funcVal::lcdLp> lcdLp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep26{    ///<I/O configuration register for pin P2[6]
        using Addr = Register::Address<0x4002c118,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[6]
        enum class funcVal {
            p26=0x00000000,     ///<General purpose digital input/output pin.
            pwm1Cap0=0x00000001,     ///<Capture input for PWM1, channel 0.
            u1Ri=0x00000002,     ///<Ring Indicator input for UART1.
            t2Cap0=0x00000003,     ///<Capture input for Timer 2, channel 0.
            u2Oe=0x00000004,     ///<RS-485/EIA-485 output enable signal for                                     UART2.
            traceclk=0x00000005,     ///<Trace clock.
            lcdVd0=0x00000006,     ///<LCD data.
            lcdVd4=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p26> p26{};
            constexpr MPL::Value<funcVal,funcVal::pwm1Cap0> pwm1Cap0{};
            constexpr MPL::Value<funcVal,funcVal::u1Ri> u1Ri{};
            constexpr MPL::Value<funcVal,funcVal::t2Cap0> t2Cap0{};
            constexpr MPL::Value<funcVal,funcVal::u2Oe> u2Oe{};
            constexpr MPL::Value<funcVal,funcVal::traceclk> traceclk{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd0> lcdVd0{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd4> lcdVd4{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep27{    ///<I/O configuration register for pin P2[7]
        using Addr = Register::Address<0x4002c11c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[7]
        enum class funcVal {
            p27=0x00000000,     ///<General purpose digital input/output pin.
            canRd2=0x00000001,     ///<CAN2 receiver input.
            u1Rts=0x00000002,     ///<Request to Send output for UART1. Can also be configured                                     to be an RS-485/EIA-485 output enable signal for                                     UART1.
            spifiCs=0x00000005,     ///<Chip select output for SPIFI.
            lcdVd1=0x00000006,     ///<LCD data.
            lcdVd5=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p27> p27{};
            constexpr MPL::Value<funcVal,funcVal::canRd2> canRd2{};
            constexpr MPL::Value<funcVal,funcVal::u1Rts> u1Rts{};
            constexpr MPL::Value<funcVal,funcVal::spifiCs> spifiCs{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd1> lcdVd1{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd5> lcdVd5{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep28{    ///<I/O configuration register for pin P2[8]
        using Addr = Register::Address<0x4002c120,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[8]
        enum class funcVal {
            p28=0x00000000,     ///<General purpose digital input/output pin.
            canTd2=0x00000001,     ///<CAN2 transmitter output.
            u2Txd=0x00000002,     ///<Transmitter output for UART2.
            u1Cts=0x00000003,     ///<Clear to Send input for UART1.
            enetMdc=0x00000004,     ///<Ethernet MIIM clock.
            lcdVd2=0x00000006,     ///<LCD data.
            lcdVd6=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p28> p28{};
            constexpr MPL::Value<funcVal,funcVal::canTd2> canTd2{};
            constexpr MPL::Value<funcVal,funcVal::u2Txd> u2Txd{};
            constexpr MPL::Value<funcVal,funcVal::u1Cts> u1Cts{};
            constexpr MPL::Value<funcVal,funcVal::enetMdc> enetMdc{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd2> lcdVd2{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd6> lcdVd6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep29{    ///<I/O configuration register for pin P2[9]
        using Addr = Register::Address<0x4002c124,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[9]
        enum class funcVal {
            p29=0x00000000,     ///<General purpose digital input/output pin.
            usbConnect1=0x00000001,     ///<USB1 SoftConnect control. Signal used to switch an                                     external 1.5 kW resistor under the                                     software control. Used with the SoftConnect USB                                     feature.
            u2Rxd=0x00000002,     ///<Receiver input for UART2.
            u4Rxd=0x00000003,     ///<Receiver input for USART4.
            enetMdio=0x00000004,     ///<Ethernet MIIM data input and output.
            lcdVd3=0x00000006,     ///<LCD data.
            lcdVd7=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p29> p29{};
            constexpr MPL::Value<funcVal,funcVal::usbConnect1> usbConnect1{};
            constexpr MPL::Value<funcVal,funcVal::u2Rxd> u2Rxd{};
            constexpr MPL::Value<funcVal,funcVal::u4Rxd> u4Rxd{};
            constexpr MPL::Value<funcVal,funcVal::enetMdio> enetMdio{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd3> lcdVd3{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd7> lcdVd7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep210{    ///<I/O configuration register for pin P2[10]
        using Addr = Register::Address<0x4002c128,0xfffffff8,0,unsigned>;
        ///Selects pin function for pin P2[10]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
    }
    namespace Nonep211{    ///<I/O configuration register for pin P2[11]
        using Addr = Register::Address<0x4002c12c,0xfffffff8,0,unsigned>;
        ///Selects pin function for pin P2[11]
        enum class funcVal {
            p211=0x00000000,     ///<General purpose digital input/output pin. This pin
                                    includes a 5 ns input glitch filter.
            eint1=0x00000001,     ///<External interrupt 1 input.
            sdDat1=0x00000002,     ///<Data line 1 for SD card interface.
            i2sTxSck=0x00000003,     ///<Transmit Clock. It is driven by the master and received                                     by the slave. Corresponds to the signal SCK in the                                             I2S-bus                                         specification.
            lcdClkin=0x00000007,     ///<LCD clock.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p211> p211{};
            constexpr MPL::Value<funcVal,funcVal::eint1> eint1{};
            constexpr MPL::Value<funcVal,funcVal::sdDat1> sdDat1{};
            constexpr MPL::Value<funcVal,funcVal::i2sTxSck> i2sTxSck{};
            constexpr MPL::Value<funcVal,funcVal::lcdClkin> lcdClkin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
    }
    namespace Nonep212{    ///<I/O configuration register for pin P2[12]
        using Addr = Register::Address<0x4002c130,0xfffffff8,0,unsigned>;
        ///Selects pin function for pin P2[12]
        enum class funcVal {
            p212=0x00000000,     ///<General purpose digital input/output pin. This pin
                                    includes a 5 ns input glitch filter.
            eint2=0x00000001,     ///<External interrupt 2 input.
            sdDat2=0x00000002,     ///<Data line 2 for SD card interface.
            i2sTxWs=0x00000003,     ///<Transmit Word Select. It is driven by the master and                                     received by the slave. Corresponds to the signal WS in the                                             I2S-bus                                         specification.
            lcdVd4=0x00000004,     ///<LCD data.
            lcdVd3=0x00000005,     ///<LCD data.
            lcdVd8=0x00000006,     ///<LCD data.
            lcdVd18=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p212> p212{};
            constexpr MPL::Value<funcVal,funcVal::eint2> eint2{};
            constexpr MPL::Value<funcVal,funcVal::sdDat2> sdDat2{};
            constexpr MPL::Value<funcVal,funcVal::i2sTxWs> i2sTxWs{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd4> lcdVd4{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd3> lcdVd3{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd8> lcdVd8{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd18> lcdVd18{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
    }
    namespace Nonep213{    ///<I/O configuration register for pin P2[13]
        using Addr = Register::Address<0x4002c134,0xfffffff8,0,unsigned>;
        ///Selects pin function for pin P2[13]
        enum class funcVal {
            p213=0x00000000,     ///<General purpose digital input/output pin. This pin
                                    includes a 5 ns input glitch filter.
            eint3=0x00000001,     ///<External interrupt 3 input.
            sdDat3=0x00000002,     ///<Data line 3 for SD card interface.
            i2sTxSda=0x00000003,     ///<Transmit data. It is driven by the transmitter and read                                     by the receiver. Corresponds to the signal SD in the                                             I2S-bus                                         specification.
            lcdVd5=0x00000005,     ///<LCD data.
            lcdVd9=0x00000006,     ///<LCD data.
            lcdVd19=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p213> p213{};
            constexpr MPL::Value<funcVal,funcVal::eint3> eint3{};
            constexpr MPL::Value<funcVal,funcVal::sdDat3> sdDat3{};
            constexpr MPL::Value<funcVal,funcVal::i2sTxSda> i2sTxSda{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd5> lcdVd5{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd9> lcdVd9{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd19> lcdVd19{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
    }
    namespace Nonep214{    ///<I/O configuration register for pin P2[14]
        using Addr = Register::Address<0x4002c138,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[14]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep215{    ///<I/O configuration register for pin P2[15]
        using Addr = Register::Address<0x4002c13c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[15]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep216{    ///<I/O configuration register for pin P2[16]
        using Addr = Register::Address<0x4002c140,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[16]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep217{    ///<I/O configuration register for pin P2[17]
        using Addr = Register::Address<0x4002c144,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[17]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep218{    ///<I/O configuration register for pin P2[18]
        using Addr = Register::Address<0x4002c148,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin P2[18]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Selects Analog/Digital mode.
        enum class admodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        namespace admodeValC{
            constexpr MPL::Value<admodeVal,admodeVal::analogInputMode> analogInputMode{};
            constexpr MPL::Value<admodeVal,admodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,admodeVal> admode{}; 
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep219{    ///<I/O configuration register for pin P2[19]
        using Addr = Register::Address<0x4002c14c,0xfffffa00,0,unsigned>;
        ///Selects pin function for pin P2[19]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Selects Analog/Digital mode.
        enum class admodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode.
            digitalFunctionalM=0x00000001,     ///<Digital functional mode.
        };
        namespace admodeValC{
            constexpr MPL::Value<admodeVal,admodeVal::analogInputMode> analogInputMode{};
            constexpr MPL::Value<admodeVal,admodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,admodeVal> admode{}; 
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterDisabled=0x00000000,     ///<Filter disabled.
            filterEnabled=0x00000001,     ///<Filter enabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep220{    ///<I/O configuration register for pin P2[20]
        using Addr = Register::Address<0x4002c150,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[20]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep221{    ///<I/O configuration register for pin P2[21]
        using Addr = Register::Address<0x4002c154,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[21]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep222{    ///<I/O configuration register for pin P2[22]
        using Addr = Register::Address<0x4002c158,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[22]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep223{    ///<I/O configuration register for pin P2[23]
        using Addr = Register::Address<0x4002c15c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[23]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep224{    ///<I/O configuration register for pin P2[24]
        using Addr = Register::Address<0x4002c160,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[24]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep225{    ///<I/O configuration register for pin P2[25]
        using Addr = Register::Address<0x4002c164,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[25]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep226{    ///<I/O configuration register for pin P2[26]
        using Addr = Register::Address<0x4002c168,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[26]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep227{    ///<I/O configuration register for pin P2[27]
        using Addr = Register::Address<0x4002c16c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[27]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep228{    ///<I/O configuration register for pin P2[28]
        using Addr = Register::Address<0x4002c170,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[28]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep229{    ///<I/O configuration register for pin P2[29]
        using Addr = Register::Address<0x4002c174,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[29]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep230{    ///<I/O configuration register for pin P2[30]
        using Addr = Register::Address<0x4002c178,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[30]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep231{    ///<I/O configuration register for pin P2[31]
        using Addr = Register::Address<0x4002c17c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P2[31]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep30{    ///<I/O configuration register for pin P3[0]
        using Addr = Register::Address<0x4002c180,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep31{    ///<I/O configuration register for pin P3[1]
        using Addr = Register::Address<0x4002c184,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep32{    ///<I/O configuration register for pin P3[2]
        using Addr = Register::Address<0x4002c188,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[2]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep33{    ///<I/O configuration register for pin P3[3]
        using Addr = Register::Address<0x4002c18c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[3]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep34{    ///<I/O configuration register for pin P3[4]
        using Addr = Register::Address<0x4002c190,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[4]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep35{    ///<I/O configuration register for pin P3[5]
        using Addr = Register::Address<0x4002c194,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[5]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep36{    ///<I/O configuration register for pin P3[6]
        using Addr = Register::Address<0x4002c198,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[6]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep37{    ///<I/O configuration register for pin P3[7]
        using Addr = Register::Address<0x4002c19c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[7]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep38{    ///<I/O configuration register for pin P3[8]
        using Addr = Register::Address<0x4002c1a0,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[8]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep39{    ///<I/O configuration register for pin P3[9]
        using Addr = Register::Address<0x4002c1a4,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[9]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep310{    ///<I/O configuration register for pin P3[10]
        using Addr = Register::Address<0x4002c1a8,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[10]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep311{    ///<I/O configuration register for pin P3[11]
        using Addr = Register::Address<0x4002c1ac,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[11]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep312{    ///<I/O configuration register for pin P3[12]
        using Addr = Register::Address<0x4002c1b0,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[12]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep313{    ///<I/O configuration register for pin P3[13]
        using Addr = Register::Address<0x4002c1b4,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[13]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep314{    ///<I/O configuration register for pin P3[14]
        using Addr = Register::Address<0x4002c1b8,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[14]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep315{    ///<I/O configuration register for pin P3[15]
        using Addr = Register::Address<0x4002c1bc,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[15]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep316{    ///<I/O configuration register for pin P3[16]
        using Addr = Register::Address<0x4002c1c0,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[16]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep317{    ///<I/O configuration register for pin P3[17]
        using Addr = Register::Address<0x4002c1c4,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[17]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep318{    ///<I/O configuration register for pin P3[18]
        using Addr = Register::Address<0x4002c1c8,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[18]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep319{    ///<I/O configuration register for pin P3[19]
        using Addr = Register::Address<0x4002c1cc,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[19]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep320{    ///<I/O configuration register for pin P3[20]
        using Addr = Register::Address<0x4002c1d0,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[20]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep321{    ///<I/O configuration register for pin P3[21]
        using Addr = Register::Address<0x4002c1d4,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[21]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep322{    ///<I/O configuration register for pin P3[22]
        using Addr = Register::Address<0x4002c1d8,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[22]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep323{    ///<I/O configuration register for pin P3[23]
        using Addr = Register::Address<0x4002c1dc,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[23]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep324{    ///<I/O configuration register for pin P3[24]
        using Addr = Register::Address<0x4002c1e0,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[24]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep325{    ///<I/O configuration register for pin P3[25]
        using Addr = Register::Address<0x4002c1e4,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[25]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep326{    ///<I/O configuration register for pin P3[26]
        using Addr = Register::Address<0x4002c1e8,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[26]
        enum class funcVal {
            p326=0x00000000,     ///<General purpose digital input/output pin.
            emcD26=0x00000001,     ///<External memory data line 26.
            pwm13=0x00000002,     ///<Pulse Width Modulator 1, output 3.
            t0Mat1=0x00000003,     ///<Match output for Timer 0, channel 1.
            stclk=0x00000004,     ///<System tick timer clock input.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p326> p326{};
            constexpr MPL::Value<funcVal,funcVal::emcD26> emcD26{};
            constexpr MPL::Value<funcVal,funcVal::pwm13> pwm13{};
            constexpr MPL::Value<funcVal,funcVal::t0Mat1> t0Mat1{};
            constexpr MPL::Value<funcVal,funcVal::stclk> stclk{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep327{    ///<I/O configuration register for pin P3[27]
        using Addr = Register::Address<0x4002c1ec,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[27]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep328{    ///<I/O configuration register for pin P3[28]
        using Addr = Register::Address<0x4002c1f0,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[28]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep329{    ///<I/O configuration register for pin P3[29]
        using Addr = Register::Address<0x4002c1f4,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[29]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep330{    ///<I/O configuration register for pin P3[30]
        using Addr = Register::Address<0x4002c1f8,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[30]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep331{    ///<I/O configuration register for pin P3[31]
        using Addr = Register::Address<0x4002c1fc,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P3[31]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep40{    ///<I/O configuration register for pin P4[0]
        using Addr = Register::Address<0x4002c200,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep41{    ///<I/O configuration register for pin P4[1]
        using Addr = Register::Address<0x4002c204,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep42{    ///<I/O configuration register for pin P4[2]
        using Addr = Register::Address<0x4002c208,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[2]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep43{    ///<I/O configuration register for pin P4[3]
        using Addr = Register::Address<0x4002c20c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[3]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep44{    ///<I/O configuration register for pin P4[4]
        using Addr = Register::Address<0x4002c210,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[4]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep45{    ///<I/O configuration register for pin P4[5]
        using Addr = Register::Address<0x4002c214,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[5]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep46{    ///<I/O configuration register for pin P4[6]
        using Addr = Register::Address<0x4002c218,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[6]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep47{    ///<I/O configuration register for pin P4[7]
        using Addr = Register::Address<0x4002c21c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[7]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep48{    ///<I/O configuration register for pin P4[8]
        using Addr = Register::Address<0x4002c220,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[8]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep49{    ///<I/O configuration register for pin P4[9]
        using Addr = Register::Address<0x4002c224,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[9]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep410{    ///<I/O configuration register for pin P4[10]
        using Addr = Register::Address<0x4002c228,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[10]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep411{    ///<I/O configuration register for pin P4[11]
        using Addr = Register::Address<0x4002c22c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[11]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep412{    ///<I/O configuration register for pin P4[12]
        using Addr = Register::Address<0x4002c230,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[12]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep413{    ///<I/O configuration register for pin P4[13]
        using Addr = Register::Address<0x4002c234,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[13]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep414{    ///<I/O configuration register for pin P4[14]
        using Addr = Register::Address<0x4002c238,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[14]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep415{    ///<I/O configuration register for pin P4[15]
        using Addr = Register::Address<0x4002c23c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[15]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep416{    ///<I/O configuration register for pin P4[16]
        using Addr = Register::Address<0x4002c240,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[16]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep417{    ///<I/O configuration register for pin P4[17]
        using Addr = Register::Address<0x4002c244,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[17]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep418{    ///<I/O configuration register for pin P4[18]
        using Addr = Register::Address<0x4002c248,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[18]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep419{    ///<I/O configuration register for pin P4[19]
        using Addr = Register::Address<0x4002c24c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[19]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep420{    ///<I/O configuration register for pin P4[20]
        using Addr = Register::Address<0x4002c250,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[20]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep421{    ///<I/O configuration register for pin P4[21]
        using Addr = Register::Address<0x4002c254,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[21]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep422{    ///<I/O configuration register for pin P4[22]
        using Addr = Register::Address<0x4002c258,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[22]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep423{    ///<I/O configuration register for pin P4[23]
        using Addr = Register::Address<0x4002c25c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[23]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep424{    ///<I/O configuration register for pin P4[24]
        using Addr = Register::Address<0x4002c260,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[24]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep425{    ///<I/O configuration register for pin P4[25]
        using Addr = Register::Address<0x4002c264,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[25]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep426{    ///<I/O configuration register for pin P4[26]
        using Addr = Register::Address<0x4002c268,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[26]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep427{    ///<I/O configuration register for pin P4[27]
        using Addr = Register::Address<0x4002c26c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[27]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep428{    ///<I/O configuration register for pin P4[28]
        using Addr = Register::Address<0x4002c270,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[28]
        enum class funcVal {
            p428=0x00000000,     ///<General purpose digital input/output pin.
            emcBls2=0x00000001,     ///<LOW active Byte Lane select signal 2.
            u3Txd=0x00000002,     ///<Transmitter output for UART3.
            t2Mat0=0x00000003,     ///<Match output for Timer 2, channel 0.
            lcdVd6=0x00000005,     ///<LCD data.
            lcdVd10=0x00000006,     ///<LCD data.
            lcdVd2=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p428> p428{};
            constexpr MPL::Value<funcVal,funcVal::emcBls2> emcBls2{};
            constexpr MPL::Value<funcVal,funcVal::u3Txd> u3Txd{};
            constexpr MPL::Value<funcVal,funcVal::t2Mat0> t2Mat0{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd6> lcdVd6{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd10> lcdVd10{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd2> lcdVd2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep429{    ///<I/O configuration register for pin P4[29]
        using Addr = Register::Address<0x4002c274,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[29]
        enum class funcVal {
            p429=0x00000000,     ///<General purpose digital input/output pin.
            emcBls3=0x00000001,     ///<LOW active Byte Lane select signal 3.
            u3Rxd=0x00000002,     ///<Receiver input for UART3.
            t2Mat1=0x00000003,     ///<Match output for Timer 2, channel 1.
            i2c2Scl=0x00000004,     ///<I2C2 clock input/output (this                                     pin does not use a specialized I2C pad).
            lcdVd7=0x00000005,     ///<LCD data.
            lcdVd11=0x00000006,     ///<LCD data.
            lcdVd3=0x00000007,     ///<LCD data.
        };
        namespace funcValC{
            constexpr MPL::Value<funcVal,funcVal::p429> p429{};
            constexpr MPL::Value<funcVal,funcVal::emcBls3> emcBls3{};
            constexpr MPL::Value<funcVal,funcVal::u3Rxd> u3Rxd{};
            constexpr MPL::Value<funcVal,funcVal::t2Mat1> t2Mat1{};
            constexpr MPL::Value<funcVal,funcVal::i2c2Scl> i2c2Scl{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd7> lcdVd7{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd11> lcdVd11{};
            constexpr MPL::Value<funcVal,funcVal::lcdVd3> lcdVd3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,funcVal> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep430{    ///<I/O configuration register for pin P4[30]
        using Addr = Register::Address<0x4002c278,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[30]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep431{    ///<I/O configuration register for pin P4[31]
        using Addr = Register::Address<0x4002c27c,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P4[31]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep50{    ///<I/O configuration register for pin P5[0]
        using Addr = Register::Address<0x4002c280,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P5[0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep51{    ///<I/O configuration register for pin P5[1]
        using Addr = Register::Address<0x4002c284,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P5[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonep52{    ///<I/O configuration register for pin P5[2]
        using Addr = Register::Address<0x4002c288,0xfffffcb8,0,unsigned>;
        ///Selects pin function for pin P5[2]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Configures I2C features for standard mode, fast mode, and Fast Mode
                        Plus operation.
        enum class hsVal {
            enabled=0x00000000,     ///<I2C 50ns glitch filter and slew rate control
                                enabled.
            disabled=0x00000001,     ///<I2C 50ns glitch filter and slew rate control
                                disabled.
        };
        namespace hsValC{
            constexpr MPL::Value<hsVal,hsVal::enabled> enabled{};
            constexpr MPL::Value<hsVal,hsVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,hsVal> hs{}; 
        ///Controls sink current capability of the pin, only for P5[2] and
                        P5[3].
        enum class hidriveVal {
            lowdrive=0x00000000,     ///<Output drive sink is 4 mA. This is sufficient for standard
                                and fast mode I2C.
            highdrive=0x00000001,     ///<Output drive sink is 20 mA. This is needed for Fast Mode
                                Plus I2C. Refer to the appropriate specific device data sheet for
                                details.
        };
        namespace hidriveValC{
            constexpr MPL::Value<hidriveVal,hidriveVal::lowdrive> lowdrive{};
            constexpr MPL::Value<hidriveVal,hidriveVal::highdrive> highdrive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,hidriveVal> hidrive{}; 
    }
    namespace Nonep53{    ///<I/O configuration register for pin P5[3]
        using Addr = Register::Address<0x4002c28c,0xfffffcb8,0,unsigned>;
        ///Selects pin function for pin P5[3]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Configures I2C features for standard mode, fast mode, and Fast Mode
                        Plus operation.
        enum class hsVal {
            enabled=0x00000000,     ///<I2C 50ns glitch filter and slew rate control
                                enabled.
            disabled=0x00000001,     ///<I2C 50ns glitch filter and slew rate control
                                disabled.
        };
        namespace hsValC{
            constexpr MPL::Value<hsVal,hsVal::enabled> enabled{};
            constexpr MPL::Value<hsVal,hsVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,hsVal> hs{}; 
        ///Controls sink current capability of the pin, only for P5[2] and
                        P5[3].
        enum class hidriveVal {
            lowdrive=0x00000000,     ///<Output drive sink is 4 mA. This is sufficient for standard
                                and fast mode I2C.
            highdrive=0x00000001,     ///<Output drive sink is 20 mA. This is needed for Fast Mode
                                Plus I2C. Refer to the appropriate specific device data sheet for
                                details.
        };
        namespace hidriveValC{
            constexpr MPL::Value<hidriveVal,hidriveVal::lowdrive> lowdrive{};
            constexpr MPL::Value<hidriveVal,hidriveVal::highdrive> highdrive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,hidriveVal> hidrive{}; 
    }
    namespace Nonep54{    ///<I/O configuration register for pin P5[4]
        using Addr = Register::Address<0x4002c290,0xfffff980,0,unsigned>;
        ///Selects pin function for pin P5[4]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
                        control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor
                                enabled).
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled.
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled.
            repeaterMode=0x00000003,     ///<Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis.
        enum class hysVal {
            disable=0x00000000,     ///<Disable.
            enable=0x00000001,     ///<Enable.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::disable> disable{};
            constexpr MPL::Value<hysVal,hysVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin
                                reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as
                                1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Driver slew rate
        enum class slewVal {
            standard=0x00000000,     ///<Standard mode, output slew rate control is enabled. More
                                outputs can be switched simultaneously.
            fast=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to the
                                appropriate specific device data sheet for details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standard> standard{};
            constexpr MPL::Value<slewVal,slewVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain
                                mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
}
