#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I/O configuration (IOCONFIG) 
    namespace Nonepio26{    ///<I/O configuration for pin PIO2_6/ CT32B0_MAT1
        using Addr = Register::Address<0x40044000,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio20{    ///<I/O configuration for pin PIO2_0/DTR/SSEL1
        using Addr = Register::Address<0x40044008,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace NoneresetPio00{    ///<I/O configuration for pin RESET/PIO0_0
        using Addr = Register::Address<0x4004400c,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio01{    ///<I/O configuration for pin PIO0_1/CLKOUT/CT32B0_MAT2
        using Addr = Register::Address<0x40044010,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio18{    ///<I/O configuration for pin PIO1_8/CT16B1_CAP0
        using Addr = Register::Address<0x40044014,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio02{    ///<I/O configuration for pin PIO0_2/SSEL0/CT16B0_CAP0
        using Addr = Register::Address<0x4004401c,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio27{    ///<I/O configuration for pin PIO2_7/ CT32B0_MAT2/RXD
        using Addr = Register::Address<0x40044020,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio28{    ///<I/O configuration for pin PIO2_8/ CT32B0_MAT3/TXD
        using Addr = Register::Address<0x40044024,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio21{    ///<I/O configuration for pin PIO2_1/DSR/SCK1
        using Addr = Register::Address<0x40044028,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio03{    ///<I/O configuration for pin PIO0_3
        using Addr = Register::Address<0x4004402c,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio04{    ///<I/O configuration for pin PIO0_4/SCL
        using Addr = Register::Address<0x40044030,0xfffffcf8,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects I2C mode. Select Standard mode (I2CMODE = 00, default) or Standard I/O functionality (I2CMODE = 01) if the pin function is GPIO (FUNC = 000).
        enum class i2cmodeVal {
            standardModeFast=0x00000000,     ///<Standard mode/ Fast-mode I2C.
            standardIoFunction=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
            reserved=0x00000003,     ///<Reserved.
        };
        namespace i2cmodeValC{
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardModeFast> standardModeFast{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardIoFunction> standardIoFunction{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,i2cmodeVal> i2cmode{}; 
    }
    namespace Nonepio05{    ///<I/O configuration for pin PIO0_5/SDA
        using Addr = Register::Address<0x40044034,0xfffffcf8,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects I2C mode. Select Standard mode (I2CMODE = 00, default) or Standard I/O functionality (I2CMODE = 01) if the pin function is GPIO (FUNC = 000).
        enum class i2cmodeVal {
            standardModeFast=0x00000000,     ///<Standard mode/ Fast-mode I2C.
            standardIoFunction=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
            reserved=0x00000003,     ///<Reserved.
        };
        namespace i2cmodeValC{
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardModeFast> standardModeFast{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardIoFunction> standardIoFunction{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,i2cmodeVal> i2cmode{}; 
    }
    namespace Nonepio19{    ///<I/O configuration for pin PIO1_9/CT16B1_MAT0/ MOSI1
        using Addr = Register::Address<0x40044038,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio34{    ///<I/O configuration for pin PIO3_4/ CT16B0_CAP1/RXD
        using Addr = Register::Address<0x4004403c,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio35{    ///<I/O configuration for pin PIO3_5/ CT16B1_CAP1/TXD
        using Addr = Register::Address<0x40044048,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio06{    ///<I/O configuration for pin PIO0_6/SCK0
        using Addr = Register::Address<0x4004404c,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio07{    ///<I/O configuration for pin PIO0_7/CTS
        using Addr = Register::Address<0x40044050,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio29{    ///<I/O configuration for pin PIO2_9/ CT32B0_CAP0
        using Addr = Register::Address<0x40044054,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio210{    ///<I/O configuration for pin PIO2_10
        using Addr = Register::Address<0x40044058,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio22{    ///<I/O configuration for pin PIO2_2/DCD/MISO1
        using Addr = Register::Address<0x4004405c,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio08{    ///<I/O configuration for pin PIO0_8/MISO0/CT16B0_MAT0
        using Addr = Register::Address<0x40044060,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio09{    ///<I/O configuration for pin PIO0_9/MOSI0/CT16B0_MAT1
        using Addr = Register::Address<0x40044064,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace NoneswclkPio010{    ///<I/O configuration for pin SWCLK/PIO0_10/ SCK0/CT16B0_MAT2
        using Addr = Register::Address<0x40044068,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio110{    ///<I/O configuration for pin PIO1_10/AD6/CT16B1_MAT1/ MISO1
        using Addr = Register::Address<0x4004406c,0xfffffb40,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects Analog/Digital mode
        enum class admodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode
            digitalFunctionalM=0x00000001,     ///<Digital functional mode
        };
        namespace admodeValC{
            constexpr MPL::Value<admodeVal,admodeVal::analogInputMode> analogInputMode{};
            constexpr MPL::Value<admodeVal,admodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,admodeVal> admode{}; 
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio211{    ///<I/O configuration for pin PIO2_11/SCK0/ CT32B0_CAP1
        using Addr = Register::Address<0x40044070,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace NonerPio011{    ///<I/O configuration for pin R/PIO0_11/AD0/CT32B0_MAT3
        using Addr = Register::Address<0x40044074,0xfffffb40,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects Analog/Digital mode
        enum class admodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode
            digitalFunctionalM=0x00000001,     ///<Digital functional mode
        };
        namespace admodeValC{
            constexpr MPL::Value<admodeVal,admodeVal::analogInputMode> analogInputMode{};
            constexpr MPL::Value<admodeVal,admodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,admodeVal> admode{}; 
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace NonerPio10{    ///<I/O configuration for pin R/PIO1_0/AD1/CT32B1_CAP0
        using Addr = Register::Address<0x40044078,0xfffffb40,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects Analog/Digital mode
        enum class admodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode
            digitalFunctionalM=0x00000001,     ///<Digital functional mode
        };
        namespace admodeValC{
            constexpr MPL::Value<admodeVal,admodeVal::analogInputMode> analogInputMode{};
            constexpr MPL::Value<admodeVal,admodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,admodeVal> admode{}; 
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace NonerPio11{    ///<I/O configuration for pin R/PIO1_1/AD2/CT32B1_MAT0
        using Addr = Register::Address<0x4004407c,0xfffffb40,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects Analog/Digital mode
        enum class admodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode
            digitalFunctionalM=0x00000001,     ///<Digital functional mode
        };
        namespace admodeValC{
            constexpr MPL::Value<admodeVal,admodeVal::analogInputMode> analogInputMode{};
            constexpr MPL::Value<admodeVal,admodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,admodeVal> admode{}; 
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace NonerPio12{    ///<I/O configuration for pin R/PIO1_2/AD3/CT32B1_MAT1
        using Addr = Register::Address<0x40044080,0xfffffb40,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects Analog/Digital mode
        enum class admodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode
            digitalFunctionalM=0x00000001,     ///<Digital functional mode
        };
        namespace admodeValC{
            constexpr MPL::Value<admodeVal,admodeVal::analogInputMode> analogInputMode{};
            constexpr MPL::Value<admodeVal,admodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,admodeVal> admode{}; 
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio30{    ///<I/O configuration for pin PIO3_0/DTR/CT16B0_MAT0/TXD
        using Addr = Register::Address<0x40044084,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio31{    ///<I/O configuration for pin PIO3_1/DSR/CT16B0_MAT1/RXD
        using Addr = Register::Address<0x40044088,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio23{    ///<I/O configuration for pin PIO2_3/RI/MOSI1
        using Addr = Register::Address<0x4004408c,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace NoneswdioPio13{    ///<I/O configuration for pin SWDIO/PIO1_3/AD4/CT32B1_MAT2
        using Addr = Register::Address<0x40044090,0xfffffb40,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects Analog/Digital mode
        enum class admodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode
            digitalFunctionalM=0x00000001,     ///<Digital functional mode
        };
        namespace admodeValC{
            constexpr MPL::Value<admodeVal,admodeVal::analogInputMode> analogInputMode{};
            constexpr MPL::Value<admodeVal,admodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,admodeVal> admode{}; 
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio14{    ///<I/O configuration for pin PIO1_4/AD5/CT32B1_MAT3
        using Addr = Register::Address<0x40044094,0xfffffb40,0,unsigned>;
        ///Selects pin function. This pin functions as WAKEUP pin if the LPC111x/LPC11Cxx is in Deep power-down mode regardless of the value of FUNC. All other values are reserved.
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
        ///Selects Analog/Digital mode
        enum class admodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode
            digitalFunctionalM=0x00000001,     ///<Digital functional mode
        };
        namespace admodeValC{
            constexpr MPL::Value<admodeVal,admodeVal::analogInputMode> analogInputMode{};
            constexpr MPL::Value<admodeVal,admodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,admodeVal> admode{}; 
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio111{    ///<I/O configuration for pin PIO1_11/AD7/CT32B1_CAP1
        using Addr = Register::Address<0x40044098,0xfffffb40,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects Analog/Digital mode
        enum class admodeVal {
            analogInputMode=0x00000000,     ///<Analog input mode
            digitalFunctionalM=0x00000001,     ///<Digital functional mode
        };
        namespace admodeValC{
            constexpr MPL::Value<admodeVal,admodeVal::analogInputMode> analogInputMode{};
            constexpr MPL::Value<admodeVal,admodeVal::digitalFunctionalM> digitalFunctionalM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,admodeVal> admode{}; 
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio32{    ///<I/O configuration for pin PIO3_2/DCD/ CT16B0_MAT2/SCK1
        using Addr = Register::Address<0x4004409c,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio15{    ///<I/O configuration for pin PIO1_5/RTS/CT32B0_CAP0
        using Addr = Register::Address<0x400440a0,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio16{    ///<I/O configuration for pin PIO1_6/RXD/CT32B0_MAT0
        using Addr = Register::Address<0x400440a4,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio17{    ///<I/O configuration for pin PIO1_7/TXD/CT32B0_MAT1
        using Addr = Register::Address<0x400440a8,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio33{    ///<I/O configuration for pin PIO3_3/RI/ CT16B0_CAP0
        using Addr = Register::Address<0x400440ac,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
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
        ///Selects pseudo open-drain mode.
        enum class odVal {
            standardGpioOutput=0x00000000,     ///<Standard GPIO output
            openDrainOutput=0x00000001,     ///<Open-drain output
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::standardGpioOutput> standardGpioOutput{};
            constexpr MPL::Value<odVal,odVal::openDrainOutput> openDrainOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonesck0Loc{    ///<SCK0 pin location select register
        using Addr = Register::Address<0x400440b0,0xfffffffc,0,unsigned>;
        ///Selects pin location for SCK0 function.
        enum class scklocVal {
            pio010=0x00000000,     ///<Selects SCK0 function in pin location SWCLK/PIO0_10/SCK0/CT16B0_MAT2 (see Table 129).
            pio211=0x00000001,     ///<Selects SCK0 function in pin location PIO2_11/SCK0 (see Table 131).
            pio06=0x00000002,     ///<Selects SCK0 function in pin location PIO0_6/SCK0 (see Table 122).
            reserved=0x00000003,     ///<Reserved.
        };
        namespace scklocValC{
            constexpr MPL::Value<scklocVal,scklocVal::pio010> pio010{};
            constexpr MPL::Value<scklocVal,scklocVal::pio211> pio211{};
            constexpr MPL::Value<scklocVal,scklocVal::pio06> pio06{};
            constexpr MPL::Value<scklocVal,scklocVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,scklocVal> sckloc{}; 
    }
    namespace NonedsrLoc{    ///<DSR pin location select register
        using Addr = Register::Address<0x400440b4,0xfffffffc,0,unsigned>;
        ///Selects pin location for DSR function.
        enum class dsrlocVal {
            pio21=0x00000000,     ///<Selects  DSR function in pin location PIO2_1/DSR/SCK1 (see Table 113).
            pio31=0x00000001,     ///<Selects DSR function in pin location PIO3_1/DSR (see Table 137).
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace dsrlocValC{
            constexpr MPL::Value<dsrlocVal,dsrlocVal::pio21> pio21{};
            constexpr MPL::Value<dsrlocVal,dsrlocVal::pio31> pio31{};
            constexpr MPL::Value<dsrlocVal,dsrlocVal::reserved> reserved{};
            constexpr MPL::Value<dsrlocVal,dsrlocVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dsrlocVal> dsrloc{}; 
    }
    namespace NonedcdLoc{    ///<DCD pin location select register
        using Addr = Register::Address<0x400440b8,0xfffffffc,0,unsigned>;
        ///Selects pin location for DCD function.
        enum class dcdlocVal {
            pio22=0x00000000,     ///<Selects  DCD function in pin location PIO2_2/DCD/MISO1 (see  Table 126).
            pio32=0x00000001,     ///<Selects DCD function in pin location PIO3_2/DCD (see  Table 142).
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace dcdlocValC{
            constexpr MPL::Value<dcdlocVal,dcdlocVal::pio22> pio22{};
            constexpr MPL::Value<dcdlocVal,dcdlocVal::pio32> pio32{};
            constexpr MPL::Value<dcdlocVal,dcdlocVal::reserved> reserved{};
            constexpr MPL::Value<dcdlocVal,dcdlocVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dcdlocVal> dcdloc{}; 
    }
    namespace NoneriLoc{    ///<RI pin location select register
        using Addr = Register::Address<0x400440bc,0xfffffffc,0,unsigned>;
        ///Selects pin location for RI function.
        enum class rilocVal {
            pio23=0x00000000,     ///<Selects  RI function in pin location PIO2_3/RI/MOSI1 (see Table 138).
            pio33=0x00000001,     ///<Selects RI function in pin location PIO3_3/RI (see Table 146).
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace rilocValC{
            constexpr MPL::Value<rilocVal,rilocVal::pio23> pio23{};
            constexpr MPL::Value<rilocVal,rilocVal::pio33> pio33{};
            constexpr MPL::Value<rilocVal,rilocVal::reserved> reserved{};
            constexpr MPL::Value<rilocVal,rilocVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,rilocVal> riloc{}; 
    }
    namespace Nonessel1Loc{    ///<SSEL1 pin location select register
        using Addr = Register::Address<0x40044018,0xfffffffc,0,unsigned>;
        ///Selects pin location for SSEL1 function.
        enum class ssel1locVal {
            pio22=0x00000000,     ///<Selects SSEL1 function in pin location PIO2_2/DCD/MISO1 (see Table 126).
            pio24=0x00000001,     ///<Selects SSEL1 function in pin location  PIO2_4/CT16B1_MAT1/SSEL1 (see Table 119).
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace ssel1locValC{
            constexpr MPL::Value<ssel1locVal,ssel1locVal::pio22> pio22{};
            constexpr MPL::Value<ssel1locVal,ssel1locVal::pio24> pio24{};
            constexpr MPL::Value<ssel1locVal,ssel1locVal::reserved> reserved{};
            constexpr MPL::Value<ssel1locVal,ssel1locVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ssel1locVal> ssel1loc{}; 
    }
    namespace Nonesck1Loc{    ///<SCK1 pin location select register
        using Addr = Register::Address<0x400440c4,0xfffffffc,0,unsigned>;
        ///Selects pin location for SCK1 function.
        enum class sck1locVal {
            pio21=0x00000000,     ///<Selects SCK1 function in pin location PIO2_1/DSR/SCK1 (see Table 113).
            pio32=0x00000001,     ///<Selects SCK1 function in pin location PIO3_2/DCD/CT16B0_MAT2/SCK1 (see Table 142).
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace sck1locValC{
            constexpr MPL::Value<sck1locVal,sck1locVal::pio21> pio21{};
            constexpr MPL::Value<sck1locVal,sck1locVal::pio32> pio32{};
            constexpr MPL::Value<sck1locVal,sck1locVal::reserved> reserved{};
            constexpr MPL::Value<sck1locVal,sck1locVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sck1locVal> sck1loc{}; 
    }
    namespace Nonemiso1Loc{    ///<MISO1 pin location select register
        using Addr = Register::Address<0x400440c8,0xfffffffc,0,unsigned>;
        ///Selects pin location for the MISO1 function.
        enum class miso1locVal {
            pio22=0x00000000,     ///<Selects MISO1 function in pin location PIO2_2/DCD/MISO1 (see Table 126).
            pio110=0x00000001,     ///<Selects MISO1 function in pin location PIO1_10/AD6/CT16B1_MAT1/MISO1 (see  Table 130).
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace miso1locValC{
            constexpr MPL::Value<miso1locVal,miso1locVal::pio22> pio22{};
            constexpr MPL::Value<miso1locVal,miso1locVal::pio110> pio110{};
            constexpr MPL::Value<miso1locVal,miso1locVal::reserved> reserved{};
            constexpr MPL::Value<miso1locVal,miso1locVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,miso1locVal> miso1loc{}; 
    }
    namespace Nonemosi1Loc{    ///<MOSI1 pin location select register
        using Addr = Register::Address<0x400440cc,0xfffffffc,0,unsigned>;
        ///Selects pin location for the MOSI1 function.
        enum class mosi1locVal {
            pio23=0x00000000,     ///<Selects MOSI1 function in pin location PIO2_3/RI/MOSI1 (see Table 138).
            pio19=0x00000001,     ///<Selects MOSI1 function in pin location PIO1_9/CT16B1_MAT0/MOSI1 (see Table 117).
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace mosi1locValC{
            constexpr MPL::Value<mosi1locVal,mosi1locVal::pio23> pio23{};
            constexpr MPL::Value<mosi1locVal,mosi1locVal::pio19> pio19{};
            constexpr MPL::Value<mosi1locVal,mosi1locVal::reserved> reserved{};
            constexpr MPL::Value<mosi1locVal,mosi1locVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,mosi1locVal> mosi1loc{}; 
    }
    namespace NonerxdLoc{    ///<RXD pin location select register
        using Addr = Register::Address<0x400440d4,0xfffffffc,0,unsigned>;
        ///Selects pin location for the RXD function.
        enum class rxdlocVal {
            pio16=0x00000000,     ///<Selects RXD function in pin location PIO1_6/RXD/CT32B0_MAT0 (see Table 144).
            pio27=0x00000001,     ///<Selects RXD function in pin location PIO2_7/CT32B0_MAT2/RXD (see Table 111).
            pio31=0x00000002,     ///<Selects RXD function in pin location PIO3_1/DSR/CT16B0_MAT1/RXD (see Table 137).
            pio34=0x00000003,     ///<Selects RXD function in pin location PIO3_4/CT16B0_CAP1/RXD (see Table 118).
        };
        namespace rxdlocValC{
            constexpr MPL::Value<rxdlocVal,rxdlocVal::pio16> pio16{};
            constexpr MPL::Value<rxdlocVal,rxdlocVal::pio27> pio27{};
            constexpr MPL::Value<rxdlocVal,rxdlocVal::pio31> pio31{};
            constexpr MPL::Value<rxdlocVal,rxdlocVal::pio34> pio34{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,rxdlocVal> rxdloc{}; 
    }
}
