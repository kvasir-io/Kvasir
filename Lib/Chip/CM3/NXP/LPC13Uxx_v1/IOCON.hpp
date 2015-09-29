#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//IO ocnfiguration
    namespace NoneresetPio00{    ///<I/O configuration for pin RESET/PIO0_0
        using Addr = Register::Address<0x40044000,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio01{    ///<I/O configuration for pin PIO0_1/CLKOUT/CT32B0_MAT2/ USB_FTOGGLE
        using Addr = Register::Address<0x40044004,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio02{    ///<I/O configuration for pin PIO0_2/SSEL0/CT16B0_CAP0
        using Addr = Register::Address<0x40044008,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio03{    ///<I/O configuration for pin PIO0_3/USB_VBUS
        using Addr = Register::Address<0x4004400c,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio04{    ///<I/O configuration for pin PIO0_4/SCL
        using Addr = Register::Address<0x40044010,0xfffffcf8,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects I2C mode (see Section 6.3.8). Select Standard mode (I2CMODE = 0, default) or Standard I/O functionality (I2CMODE = 1) if the pin function is GPIO (FUNC = 0).
        enum class i2cmodeVal {
            standardModeFast=0x00000000,     ///<Standard mode/ Fast-mode I2C.
            standardIoFunctio=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
            reserved=0x00000003,     ///<Reserved.
        };
        namespace i2cmodeValC{
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardModeFast> standardModeFast{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardIoFunctio> standardIoFunctio{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,i2cmodeVal> i2cmode{}; 
    }
    namespace Nonepio05{    ///<I/O configuration for pin PIO0_5/SDA
        using Addr = Register::Address<0x40044014,0xfffffcf8,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects I2C mode (see Section 6.3.8). Select Standard mode (I2CMODE = 00, default) or Standard I/O functionality (I2CMODE = 01) if the pin function is GPIO (FUNC = 0).
        enum class i2cmodeVal {
            standardModeFast=0x00000000,     ///<Standard mode/ Fast-mode I2C.
            standardIoFunctio=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
            reserved=0x00000003,     ///<Reserved.
        };
        namespace i2cmodeValC{
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardModeFast> standardModeFast{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardIoFunctio> standardIoFunctio{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,i2cmodeVal> i2cmode{}; 
    }
    namespace Nonepio06{    ///<I/O configuration for pin PIO0_6/USB_CONNECT/SCK0
        using Addr = Register::Address<0x40044018,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio07{    ///<I/O configuration for pin PIO0_7/CTS
        using Addr = Register::Address<0x4004401c,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio08{    ///<I/O configuration for pin PIO0_8/MISO0/CT16B0_MAT0/ ARM_TRACE_CLK
        using Addr = Register::Address<0x40044020,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio09{    ///<I/O configuration for pin PIO0_9/MOSI0/CT16B0_MAT1/ ARM_TRACE_SWV
        using Addr = Register::Address<0x40044024,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace NoneswclkPio010{    ///<I/O configuration for pin SWCLK/PIO0_10/ SCK0/CT16B0_MAT2
        using Addr = Register::Address<0x40044028,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace NonetdiPio011{    ///<I/O configuration for pin TDI/PIO0_11/AD0/CT32B0_MAT3
        using Addr = Register::Address<0x4004402c,0xfffffa00,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
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
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace NonetmsPio012{    ///<I/O configuration for pin TMS/PIO0_12/AD1/CT32B1_CAP0
        using Addr = Register::Address<0x40044030,0xfffffa00,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
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
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace NonetdoPio013{    ///<I/O configuration for pin TDO/PIO0_13/AD2/CT32B1_MAT0
        using Addr = Register::Address<0x40044034,0xfffffa00,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
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
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace NonetrstPio014{    ///<I/O configuration for pin TRST/PIO0_14/AD3/CT32B1_MAT1
        using Addr = Register::Address<0x40044038,0xfffffa00,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
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
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace NoneswdioPio015{    ///<I/O configuration for pin SWDIO/PIO0_15/AD4/CT32B1_MAT2
        using Addr = Register::Address<0x4004403c,0xfffffa00,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
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
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio016{    ///<I/O configuration for pin PIO0_16/AD5/CT32B1_MAT3/ WAKEUP
        using Addr = Register::Address<0x40044040,0xfffffa00,0,unsigned>;
        ///Selects pin function. This pin functions as WAKEUP pin if the LPC1315/16/17/45/46/47 is in Deep power-down mode regardless of the value of FUNC. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
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
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio017{    ///<I/O configuration for pin PIO0_17/RTS/CT32B0_CAP0/SCLK
        using Addr = Register::Address<0x40044044,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio018{    ///<I/O configuration for pin PIO0_18/RXD/CT32B0_MAT0
        using Addr = Register::Address<0x40044048,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio019{    ///<I/O configuration for pin PIO0_19/TXD/CT32B0_MAT1
        using Addr = Register::Address<0x4004404c,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio020{    ///<I/O configuration for pin PIO0_20/CT16B1_CAP0
        using Addr = Register::Address<0x40044050,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio021{    ///<I/O configuration for pin PIO0_21/CT16B1_MAT0/MOSI1
        using Addr = Register::Address<0x40044054,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio022{    ///<I/O configuration for pin PIO0_22/AD6/CT16B1_MAT1/MISO1
        using Addr = Register::Address<0x40044058,0xfffffa00,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
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
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio023{    ///<I/O configuration for pin PIO0_23/AD7
        using Addr = Register::Address<0x4004405c,0xfffffa00,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
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
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio10{    ///<I/O configuration for pin PIO1_0/CT32B1_MAT0
        using Addr = Register::Address<0x40044060,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio11{    ///<I/O configuration for pin PIO1_1/CT32B1_MAT1
        using Addr = Register::Address<0x40044064,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio12{    ///<I/O configuration for pin PIO1_2/CT32B1_MAT2
        using Addr = Register::Address<0x40044068,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio13{    ///<I/O configuration for pin PIO1_3/CT32B1_MAT3
        using Addr = Register::Address<0x4004406c,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio14{    ///<I/O configuration for pin PIO1_4/CT32B1_CAP0
        using Addr = Register::Address<0x40044070,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio15{    ///<I/O configuration for pin PIO1_5/CT32B1_CAP1
        using Addr = Register::Address<0x40044074,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio17{    ///<I/O configuration for pin PIO1_7
        using Addr = Register::Address<0x4004407c,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio18{    ///<I/O configuration for pin PIO1_8
        using Addr = Register::Address<0x40044080,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x1 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio110{    ///<I/O configuration for pin PIO1_10
        using Addr = Register::Address<0x40044088,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x1 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio111{    ///<I/O configuration for pin PIO1_11
        using Addr = Register::Address<0x4004408c,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x1 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio113{    ///<I/O configuration for PIO1_13/DTR/CT16B0_MAT0/TXD
        using Addr = Register::Address<0x40044094,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio114{    ///<I/O configuration for PIO1_14/DSR/CT16B0_MAT1/RXD
        using Addr = Register::Address<0x40044098,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio115{    ///<I/O configuration for pin PIO1_15/DCD/ CT16B0_MAT2/SCK1
        using Addr = Register::Address<0x4004409c,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x4 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio116{    ///<I/O configuration for pin PIO1_16/RI/CT16B0_CAP0
        using Addr = Register::Address<0x400440a0,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio117{    ///<I/O configuration for PIO1_17/CT16B0_CAP1/RXD
        using Addr = Register::Address<0x400440a4,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio118{    ///<I/O configuration for PIO1_18/CT16B1_CAP1/TXD
        using Addr = Register::Address<0x400440a8,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio119{    ///<I/O configuration for pin PIO1_19/DTR/SSEL1
        using Addr = Register::Address<0x400440ac,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio120{    ///<I/O configuration for pin PIO1_20/DSR/SCK1
        using Addr = Register::Address<0x400440b0,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio121{    ///<I/O configuration for pin PIO1_21/DCD/MISO1
        using Addr = Register::Address<0x400440b4,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio122{    ///<I/O configuration for pin PIO1_22/RI/MOSI1
        using Addr = Register::Address<0x400440b8,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio123{    ///<I/O configuration for pin PIO1_23/CT16B1_MAT1/SSEL1
        using Addr = Register::Address<0x400440bc,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio124{    ///<I/O configuration for pin PIO1_24/ CT32B0_MAT0
        using Addr = Register::Address<0x400440c0,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio125{    ///<I/O configuration for pin PIO1_25/CT32B0_MAT1
        using Addr = Register::Address<0x400440c4,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x2 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio126{    ///<I/O configuration for pin PIO1_26/CT32B0_MAT2/ RXD
        using Addr = Register::Address<0x400440c8,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio127{    ///<I/O configuration for pin PIO1_27/CT32B0_MAT3/ TXD
        using Addr = Register::Address<0x400440cc,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio128{    ///<I/O configuration for pin PIO1_28/CT32B0_CAP0/ SCLK
        using Addr = Register::Address<0x400440d0,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio129{    ///<I/O configuration for pin PIO1_29/SCK0/ CT32B0_CAP1
        using Addr = Register::Address<0x400440d4,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio131{    ///<I/O configuration for pin PIO1_31
        using Addr = Register::Address<0x400440dc,0xfffffb80,0,unsigned>;
        ///Selects pin function. Values 0x1 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled).
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1, LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Open-drain mode.
        enum class odVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled. This is not a true open-drain mode. Input cannot be pulled up above VDD.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
}
