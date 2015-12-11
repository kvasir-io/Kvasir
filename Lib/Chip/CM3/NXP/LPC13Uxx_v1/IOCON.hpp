#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//IO ocnfiguration
    namespace NoneresetPio00{    ///<I/O configuration for pin RESET/PIO0_0
        using Addr = Register::Address<0x40044000,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
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
    namespace Nonepio01{    ///<I/O configuration for pin PIO0_1/CLKOUT/CT32B0_MAT2/ USB_FTOGGLE
        using Addr = Register::Address<0x40044004,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
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
    namespace Nonepio02{    ///<I/O configuration for pin PIO0_2/SSEL0/CT16B0_CAP0
        using Addr = Register::Address<0x40044008,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
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
    namespace Nonepio03{    ///<I/O configuration for pin PIO0_3/USB_VBUS
        using Addr = Register::Address<0x4004400c,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
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
    namespace Nonepio04{    ///<I/O configuration for pin PIO0_4/SCL
        using Addr = Register::Address<0x40044010,0xfffffcf8,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects I2C mode (see Section 6.3.8). Select Standard mode (I2CMODE = 0, default) or Standard I/O functionality (I2CMODE = 1) if the pin function is GPIO (FUNC = 0).
        enum class I2cmodeVal {
            standardModeFast=0x00000000,     ///<Standard mode/ Fast-mode I2C.
            standardIoFunctio=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,I2cmodeVal> i2cmode{}; 
        namespace I2cmodeValC{
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardModeFast> standardModeFast{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardIoFunctio> standardIoFunctio{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
        }
    }
    namespace Nonepio05{    ///<I/O configuration for pin PIO0_5/SDA
        using Addr = Register::Address<0x40044014,0xfffffcf8,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects I2C mode (see Section 6.3.8). Select Standard mode (I2CMODE = 00, default) or Standard I/O functionality (I2CMODE = 01) if the pin function is GPIO (FUNC = 0).
        enum class I2cmodeVal {
            standardModeFast=0x00000000,     ///<Standard mode/ Fast-mode I2C.
            standardIoFunctio=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,I2cmodeVal> i2cmode{}; 
        namespace I2cmodeValC{
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardModeFast> standardModeFast{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardIoFunctio> standardIoFunctio{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
        }
    }
    namespace Nonepio06{    ///<I/O configuration for pin PIO0_6/USB_CONNECT/SCK0
        using Addr = Register::Address<0x40044018,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
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
    namespace Nonepio07{    ///<I/O configuration for pin PIO0_7/CTS
        using Addr = Register::Address<0x4004401c,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
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
    namespace Nonepio08{    ///<I/O configuration for pin PIO0_8/MISO0/CT16B0_MAT0/ ARM_TRACE_CLK
        using Addr = Register::Address<0x40044020,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
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
    namespace Nonepio09{    ///<I/O configuration for pin PIO0_9/MOSI0/CT16B0_MAT1/ ARM_TRACE_SWV
        using Addr = Register::Address<0x40044024,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
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
    namespace NoneswclkPio010{    ///<I/O configuration for pin SWCLK/PIO0_10/ SCK0/CT16B0_MAT2
        using Addr = Register::Address<0x40044028,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
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
    namespace NonetdiPio011{    ///<I/O configuration for pin TDI/PIO0_11/AD0/CT32B0_MAT3
        using Addr = Register::Address<0x4004402c,0xfffffa00,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
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
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
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
    namespace NonetmsPio012{    ///<I/O configuration for pin TMS/PIO0_12/AD1/CT32B1_CAP0
        using Addr = Register::Address<0x40044030,0xfffffa00,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
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
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
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
    namespace NonetdoPio013{    ///<I/O configuration for pin TDO/PIO0_13/AD2/CT32B1_MAT0
        using Addr = Register::Address<0x40044034,0xfffffa00,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
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
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
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
    namespace NonetrstPio014{    ///<I/O configuration for pin TRST/PIO0_14/AD3/CT32B1_MAT1
        using Addr = Register::Address<0x40044038,0xfffffa00,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
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
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
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
    namespace NoneswdioPio015{    ///<I/O configuration for pin SWDIO/PIO0_15/AD4/CT32B1_MAT2
        using Addr = Register::Address<0x4004403c,0xfffffa00,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
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
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
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
    namespace Nonepio016{    ///<I/O configuration for pin PIO0_16/AD5/CT32B1_MAT3/ WAKEUP
        using Addr = Register::Address<0x40044040,0xfffffa00,0,unsigned>;
        ///Selects pin function. This pin functions as WAKEUP pin if the LPC1315/16/17/45/46/47 is in Deep power-down mode regardless of the value of FUNC. Values 0x3 to 0x7 are reserved.
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
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
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
    namespace Nonepio017{    ///<I/O configuration for pin PIO0_17/RTS/CT32B0_CAP0/SCLK
        using Addr = Register::Address<0x40044044,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
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
    namespace Nonepio018{    ///<I/O configuration for pin PIO0_18/RXD/CT32B0_MAT0
        using Addr = Register::Address<0x40044048,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
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
    namespace Nonepio019{    ///<I/O configuration for pin PIO0_19/TXD/CT32B0_MAT1
        using Addr = Register::Address<0x4004404c,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
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
    namespace Nonepio020{    ///<I/O configuration for pin PIO0_20/CT16B1_CAP0
        using Addr = Register::Address<0x40044050,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
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
    namespace Nonepio021{    ///<I/O configuration for pin PIO0_21/CT16B1_MAT0/MOSI1
        using Addr = Register::Address<0x40044054,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
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
    namespace Nonepio022{    ///<I/O configuration for pin PIO0_22/AD6/CT16B1_MAT1/MISO1
        using Addr = Register::Address<0x40044058,0xfffffa00,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
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
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
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
    namespace Nonepio023{    ///<I/O configuration for pin PIO0_23/AD7
        using Addr = Register::Address<0x4004405c,0xfffffa00,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
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
        ///Selects 10 ns input glitch filter.
        enum class FiltrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FiltrVal> filtr{}; 
        namespace FiltrValC{
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filtr)::Type,FiltrVal::filterDisabled> filterDisabled{};
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
    namespace Nonepio10{    ///<I/O configuration for pin PIO1_0/CT32B1_MAT0
        using Addr = Register::Address<0x40044060,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
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
    namespace Nonepio11{    ///<I/O configuration for pin PIO1_1/CT32B1_MAT1
        using Addr = Register::Address<0x40044064,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
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
    namespace Nonepio12{    ///<I/O configuration for pin PIO1_2/CT32B1_MAT2
        using Addr = Register::Address<0x40044068,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
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
    namespace Nonepio13{    ///<I/O configuration for pin PIO1_3/CT32B1_MAT3
        using Addr = Register::Address<0x4004406c,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
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
    namespace Nonepio14{    ///<I/O configuration for pin PIO1_4/CT32B1_CAP0
        using Addr = Register::Address<0x40044070,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
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
    namespace Nonepio15{    ///<I/O configuration for pin PIO1_5/CT32B1_CAP1
        using Addr = Register::Address<0x40044074,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
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
    namespace Nonepio17{    ///<I/O configuration for pin PIO1_7
        using Addr = Register::Address<0x4004407c,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
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
    namespace Nonepio18{    ///<I/O configuration for pin PIO1_8
        using Addr = Register::Address<0x40044080,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x1 to 0x7 are reserved.
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
    namespace Nonepio110{    ///<I/O configuration for pin PIO1_10
        using Addr = Register::Address<0x40044088,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x1 to 0x7 are reserved.
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
    namespace Nonepio111{    ///<I/O configuration for pin PIO1_11
        using Addr = Register::Address<0x4004408c,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x1 to 0x7 are reserved.
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
    namespace Nonepio113{    ///<I/O configuration for PIO1_13/DTR/CT16B0_MAT0/TXD
        using Addr = Register::Address<0x40044094,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
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
    namespace Nonepio114{    ///<I/O configuration for PIO1_14/DSR/CT16B0_MAT1/RXD
        using Addr = Register::Address<0x40044098,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
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
    namespace Nonepio115{    ///<I/O configuration for pin PIO1_15/DCD/ CT16B0_MAT2/SCK1
        using Addr = Register::Address<0x4004409c,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
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
    namespace Nonepio116{    ///<I/O configuration for pin PIO1_16/RI/CT16B0_CAP0
        using Addr = Register::Address<0x400440a0,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
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
    namespace Nonepio117{    ///<I/O configuration for PIO1_17/CT16B0_CAP1/RXD
        using Addr = Register::Address<0x400440a4,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
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
    namespace Nonepio118{    ///<I/O configuration for PIO1_18/CT16B1_CAP1/TXD
        using Addr = Register::Address<0x400440a8,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
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
    namespace Nonepio119{    ///<I/O configuration for pin PIO1_19/DTR/SSEL1
        using Addr = Register::Address<0x400440ac,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///mode (on-chip pull-up/pull-down resistor control).
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
    namespace Nonepio120{    ///<I/O configuration for pin PIO1_20/DSR/SCK1
        using Addr = Register::Address<0x400440b0,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
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
    namespace Nonepio121{    ///<I/O configuration for pin PIO1_21/DCD/MISO1
        using Addr = Register::Address<0x400440b4,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
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
    namespace Nonepio122{    ///<I/O configuration for pin PIO1_22/RI/MOSI1
        using Addr = Register::Address<0x400440b8,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
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
    namespace Nonepio123{    ///<I/O configuration for pin PIO1_23/CT16B1_MAT1/SSEL1
        using Addr = Register::Address<0x400440bc,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
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
    namespace Nonepio124{    ///<I/O configuration for pin PIO1_24/ CT32B0_MAT0
        using Addr = Register::Address<0x400440c0,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
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
    namespace Nonepio125{    ///<I/O configuration for pin PIO1_25/CT32B0_MAT1
        using Addr = Register::Address<0x400440c4,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
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
    namespace Nonepio126{    ///<I/O configuration for pin PIO1_26/CT32B0_MAT2/ RXD
        using Addr = Register::Address<0x400440c8,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
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
    namespace Nonepio127{    ///<I/O configuration for pin PIO1_27/CT32B0_MAT3/ TXD
        using Addr = Register::Address<0x400440cc,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
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
    namespace Nonepio128{    ///<I/O configuration for pin PIO1_28/CT32B0_CAP0/ SCLK
        using Addr = Register::Address<0x400440d0,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
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
    namespace Nonepio129{    ///<I/O configuration for pin PIO1_29/SCK0/ CT32B0_CAP1
        using Addr = Register::Address<0x400440d4,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
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
    namespace Nonepio131{    ///<I/O configuration for pin PIO1_31
        using Addr = Register::Address<0x400440dc,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x1 to 0x7 are reserved.
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
