#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10398 Chapter title=LPC1100XL series: I/O configuration (IOCONFIG) Modification date=2/22/2012 Major revision=8 Minor revision=not available 
    namespace NoneioconPio26{    ///<I/O configuration for pin PIO2_6/ CT32B0_MAT1
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
    namespace NoneioconPio20{    ///<I/O configuration for pin PIO2_0/DTR/SSEL1
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
    namespace NoneioconResetPio00{    ///<I/O configuration for pin RESET/PIO0_0
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
    namespace NoneioconPio01{    ///<I/O configuration for pin PIO0_1/CLKOUT/CT32B0_MAT2
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
    namespace NoneioconPio18{    ///<I/O configuration for pin PIO1_8/CT16B1_CAP0
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
    namespace NoneioconPio02{    ///<I/O configuration for pin PIO0_2/SSEL0/CT16B0_CAP0
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
    namespace NoneioconPio27{    ///<I/O configuration for pin PIO2_7/ CT32B0_MAT2/RXD
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
    namespace NoneioconPio28{    ///<I/O configuration for pin PIO2_8/ CT32B0_MAT3/TXD
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
    namespace NoneioconPio21{    ///<I/O configuration for pin PIO2_1/DSR/SCK1
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
    namespace NoneioconPio03{    ///<I/O configuration for pin PIO0_3
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
    namespace NoneioconPio04{    ///<I/O configuration for pin PIO0_4/SCL
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
    namespace NoneioconPio05{    ///<I/O configuration for pin PIO0_5/SDA
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
    namespace NoneioconPio19{    ///<I/O configuration for pin PIO1_9/CT16B1_MAT0/ MOSI1
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
    namespace NoneioconPio34{    ///<I/O configuration for pin PIO3_4/ CT16B0_CAP1/RXD
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
    namespace NoneioconPio24{    ///<I/O configuration for pin PIO2_4/ CT16B1_MAT1/ SSEL1
        using Addr = Register::Address<0x40044040,0xfffffbc0,0,unsigned>;
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
    namespace NoneioconPio25{    ///<I/O configuration for pin PIO2_5/ CT32B0_MAT0
        using Addr = Register::Address<0x40044044,0xfffffbc0,0,unsigned>;
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
    namespace NoneioconPio35{    ///<I/O configuration for pin PIO3_5/ CT16B1_CAP1/TXD
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
    namespace NoneioconPio06{    ///<I/O configuration for pin PIO0_6/SCK0
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
    namespace NoneioconPio07{    ///<I/O configuration for pin PIO0_7/CTS
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
    namespace NoneioconPio29{    ///<I/O configuration for pin PIO2_9/ CT32B0_CAP0
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
    namespace NoneioconPio210{    ///<I/O configuration for pin PIO2_10
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
    namespace NoneioconPio22{    ///<I/O configuration for pin PIO2_2/DCD/MISO1
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
    namespace NoneioconPio08{    ///<I/O configuration for pin PIO0_8/MISO0/CT16B0_MAT0
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
    namespace NoneioconPio09{    ///<I/O configuration for pin PIO0_9/MOSI0/CT16B0_MAT1
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
    namespace NoneioconSwclkPio010{    ///<I/O configuration for pin SWCLK/PIO0_10/ SCK0/CT16B0_MAT2
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
    namespace NoneioconPio110{    ///<I/O configuration for pin PIO1_10/AD6/CT16B1_MAT1/ MISO1
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
    namespace NoneioconPio211{    ///<I/O configuration for pin PIO2_11/SCK0/ CT32B0_CAP1
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
    namespace NoneioconRPio011{    ///<I/O configuration for pin R/PIO0_11/AD0/CT32B0_MAT3
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
    namespace NoneioconRPio10{    ///<I/O configuration for pin R/PIO1_0/AD1/CT32B1_CAP0
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
    namespace NoneioconRPio11{    ///<I/O configuration for pin R/PIO1_1/AD2/CT32B1_MAT0
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
    namespace NoneioconRPio12{    ///<I/O configuration for pin R/PIO1_2/AD3/CT32B1_MAT1
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
    namespace NoneioconPio30{    ///<I/O configuration for pin PIO3_0/DTR/CT16B0_MAT0/TXD
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
    namespace NoneioconPio31{    ///<I/O configuration for pin PIO3_1/DSR/CT16B0_MAT1/RXD
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
    namespace NoneioconPio23{    ///<I/O configuration for pin PIO2_3/RI/MOSI1
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
    namespace NoneioconSwdioPio13{    ///<I/O configuration for pin SWDIO/PIO1_3/AD4/CT32B1_MAT2
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
    namespace NoneioconPio14{    ///<I/O configuration for pin PIO1_4/AD5/CT32B1_MAT3
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
    namespace NoneioconPio111{    ///<I/O configuration for pin PIO1_11/AD7/CT32B1_CAP1
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
    namespace NoneioconPio32{    ///<I/O configuration for pin PIO3_2/DCD/ CT16B0_MAT2/SCK1
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
    namespace NoneioconPio15{    ///<I/O configuration for pin PIO1_5/RTS/CT32B0_CAP0
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
    namespace NoneioconPio16{    ///<I/O configuration for pin PIO1_6/RXD/CT32B0_MAT0
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
    namespace NoneioconPio17{    ///<I/O configuration for pin PIO1_7/TXD/CT32B0_MAT1
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
    namespace NoneioconPio33{    ///<I/O configuration for pin PIO3_3/RI/ CT16B0_CAP0
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
    namespace NoneioconSck0Loc{    ///<SCK0 pin location select register
        using Addr = Register::Address<0x400440b0,0xfffffffc,0,unsigned>;
        ///Selects pin location for SCK0 function.
        enum class scklocVal {
            selectsSck0Functio=0x00000000,     ///<Selects SCK0 function in pin location SWCLK/PIO0_10/SCK0/CT16B0_MAT2 (see Table 129).
            selectsSck0Functio=0x00000001,     ///<Selects SCK0 function in pin location PIO2_11/SCK0 (see Table 131).
            selectsSck0Functio=0x00000002,     ///<Selects SCK0 function in pin location PIO0_6/SCK0 (see Table 122).
            reserved=0x00000003,     ///<Reserved.
        };
        namespace scklocValC{
            constexpr MPL::Value<scklocVal,scklocVal::selectsSck0Functio> selectsSck0Functio{};
            constexpr MPL::Value<scklocVal,scklocVal::selectsSck0Functio> selectsSck0Functio{};
            constexpr MPL::Value<scklocVal,scklocVal::selectsSck0Functio> selectsSck0Functio{};
            constexpr MPL::Value<scklocVal,scklocVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,scklocVal> sckloc{}; 
    }
    namespace NoneioconDsrLoc{    ///<DSR pin location select register
        using Addr = Register::Address<0x400440b4,0xfffffffc,0,unsigned>;
        ///Selects pin location for DSR function.
        enum class dsrlocVal {
            selectsDsrFunctio=0x00000000,     ///<Selects  DSR function in pin location PIO2_1/DSR/SCK1 (see Table 113).
            selectsDsrFunction=0x00000001,     ///<Selects DSR function in pin location PIO3_1/DSR (see Table 137).
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace dsrlocValC{
            constexpr MPL::Value<dsrlocVal,dsrlocVal::selectsDsrFunctio> selectsDsrFunctio{};
            constexpr MPL::Value<dsrlocVal,dsrlocVal::selectsDsrFunction> selectsDsrFunction{};
            constexpr MPL::Value<dsrlocVal,dsrlocVal::reserved> reserved{};
            constexpr MPL::Value<dsrlocVal,dsrlocVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dsrlocVal> dsrloc{}; 
    }
    namespace NoneioconDcdLoc{    ///<DCD pin location select register
        using Addr = Register::Address<0x400440b8,0xfffffffc,0,unsigned>;
        ///Selects pin location for DCD function.
        enum class dcdlocVal {
            selectsDcdFunctio=0x00000000,     ///<Selects  DCD function in pin location PIO2_2/DCD/MISO1 (see  Table 126).
            selectsDcdFunction=0x00000001,     ///<Selects DCD function in pin location PIO3_2/DCD (see  Table 142).
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace dcdlocValC{
            constexpr MPL::Value<dcdlocVal,dcdlocVal::selectsDcdFunctio> selectsDcdFunctio{};
            constexpr MPL::Value<dcdlocVal,dcdlocVal::selectsDcdFunction> selectsDcdFunction{};
            constexpr MPL::Value<dcdlocVal,dcdlocVal::reserved> reserved{};
            constexpr MPL::Value<dcdlocVal,dcdlocVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dcdlocVal> dcdloc{}; 
    }
    namespace NoneioconRiLoc{    ///<RI pin location select register
        using Addr = Register::Address<0x400440bc,0xfffffffc,0,unsigned>;
        ///Selects pin location for RI function.
        enum class rilocVal {
            selectsRiFunction=0x00000000,     ///<Selects  RI function in pin location PIO2_3/RI/MOSI1 (see Table 138).
            selectsRiFunction=0x00000001,     ///<Selects RI function in pin location PIO3_3/RI (see Table 146).
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace rilocValC{
            constexpr MPL::Value<rilocVal,rilocVal::selectsRiFunction> selectsRiFunction{};
            constexpr MPL::Value<rilocVal,rilocVal::selectsRiFunction> selectsRiFunction{};
            constexpr MPL::Value<rilocVal,rilocVal::reserved> reserved{};
            constexpr MPL::Value<rilocVal,rilocVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,rilocVal> riloc{}; 
    }
    namespace NoneioconSsel1Loc{    ///<SSEL1 pin location select register
        using Addr = Register::Address<0x40044018,0xfffffffc,0,unsigned>;
        ///Selects pin location for SSEL1 function.
        enum class ssel1locVal {
            selectsSsel1Functi=0x00000000,     ///<Selects SSEL1 function in pin location PIO2_2/DCD/MISO1 (see Table 126).
            selectsSsel1Functi=0x00000001,     ///<Selects SSEL1 function in pin location  PIO2_4/CT16B1_MAT1/SSEL1 (see Table 119).
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace ssel1locValC{
            constexpr MPL::Value<ssel1locVal,ssel1locVal::selectsSsel1Functi> selectsSsel1Functi{};
            constexpr MPL::Value<ssel1locVal,ssel1locVal::selectsSsel1Functi> selectsSsel1Functi{};
            constexpr MPL::Value<ssel1locVal,ssel1locVal::reserved> reserved{};
            constexpr MPL::Value<ssel1locVal,ssel1locVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ssel1locVal> ssel1loc{}; 
    }
    namespace NoneioconCt16b0Cap0Loc{    ///<CT16B0_CAP0 pin location select register
        using Addr = Register::Address<0x400440c0,0xfffffffc,0,unsigned>;
        ///Selects pin location for CT16B0_CAP0 function.
        enum class ct16b0Cap0locVal {
            selectsCt16b0Cap0=0x00000000,     ///<Selects CT16B0_CAP0 function in pin location PIO0_2/SSEL0/CT16B0_CAP0 (see  Table 110).
            selectsCt16b0Cap0=0x00000001,     ///<Selects CT16B0_CAP0 function in pin location PIO3_3/RI/CT16B0 (see Table 146).
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace ct16b0Cap0locValC{
            constexpr MPL::Value<ct16b0Cap0locVal,ct16b0Cap0locVal::selectsCt16b0Cap0> selectsCt16b0Cap0{};
            constexpr MPL::Value<ct16b0Cap0locVal,ct16b0Cap0locVal::selectsCt16b0Cap0> selectsCt16b0Cap0{};
            constexpr MPL::Value<ct16b0Cap0locVal,ct16b0Cap0locVal::reserved> reserved{};
            constexpr MPL::Value<ct16b0Cap0locVal,ct16b0Cap0locVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ct16b0Cap0locVal> ct16b0Cap0loc{}; 
    }
    namespace NoneioconSck1Loc{    ///<SCK1 pin location select register
        using Addr = Register::Address<0x400440c4,0xfffffffc,0,unsigned>;
        ///Selects pin location for SCK1 function.
        enum class sck1locVal {
            selectsSck1Functio=0x00000000,     ///<Selects SCK1 function in pin location PIO2_1/DSR/SCK1 (see Table 113).
            selectsSck1Functio=0x00000001,     ///<Selects SCK1 function in pin location PIO3_2/DCD/CT16B0_MAT2/SCK1 (see Table 142).
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace sck1locValC{
            constexpr MPL::Value<sck1locVal,sck1locVal::selectsSck1Functio> selectsSck1Functio{};
            constexpr MPL::Value<sck1locVal,sck1locVal::selectsSck1Functio> selectsSck1Functio{};
            constexpr MPL::Value<sck1locVal,sck1locVal::reserved> reserved{};
            constexpr MPL::Value<sck1locVal,sck1locVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sck1locVal> sck1loc{}; 
    }
    namespace NoneioconMiso1Loc{    ///<MISO1 pin location select register
        using Addr = Register::Address<0x400440c8,0xfffffffc,0,unsigned>;
        ///Selects pin location for the MISO1 function.
        enum class miso1locVal {
            selectsMiso1Functi=0x00000000,     ///<Selects MISO1 function in pin location PIO2_2/DCD/MISO1 (see Table 126).
            selectsMiso1Functi=0x00000001,     ///<Selects MISO1 function in pin location PIO1_10/AD6/CT16B1_MAT1/MISO1 (see  Table 130).
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace miso1locValC{
            constexpr MPL::Value<miso1locVal,miso1locVal::selectsMiso1Functi> selectsMiso1Functi{};
            constexpr MPL::Value<miso1locVal,miso1locVal::selectsMiso1Functi> selectsMiso1Functi{};
            constexpr MPL::Value<miso1locVal,miso1locVal::reserved> reserved{};
            constexpr MPL::Value<miso1locVal,miso1locVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,miso1locVal> miso1loc{}; 
    }
    namespace NoneioconMosi1Loc{    ///<MOSI1 pin location select register
        using Addr = Register::Address<0x400440cc,0xfffffffc,0,unsigned>;
        ///Selects pin location for the MOSI1 function.
        enum class mosi1locVal {
            selectsMosi1Functi=0x00000000,     ///<Selects MOSI1 function in pin location PIO2_3/RI/MOSI1 (see Table 138).
            selectsMosi1Functi=0x00000001,     ///<Selects MOSI1 function in pin location PIO1_9/CT16B1_MAT0/MOSI1 (see Table 117).
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace mosi1locValC{
            constexpr MPL::Value<mosi1locVal,mosi1locVal::selectsMosi1Functi> selectsMosi1Functi{};
            constexpr MPL::Value<mosi1locVal,mosi1locVal::selectsMosi1Functi> selectsMosi1Functi{};
            constexpr MPL::Value<mosi1locVal,mosi1locVal::reserved> reserved{};
            constexpr MPL::Value<mosi1locVal,mosi1locVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,mosi1locVal> mosi1loc{}; 
    }
    namespace NoneioconCt32b0Cap0Loc{    ///<CT32B0_CAP0 pin location select register
        using Addr = Register::Address<0x400440d0,0xfffffffc,0,unsigned>;
        ///Selects pin location for the CT32B0_CAP0 function.
        enum class ct32b0Cap0locVal {
            selectsCt32b0Cap0=0x00000000,     ///<Selects CT32B0_CAP0 function in pin location PIO1_5/RTS/CT32B0_CAP0 (see Table 143).
            selectsCt32b0Cap0=0x00000001,     ///<Selects CT32B0_CAP0 function in pin location PIO2_9/CT32B0_CAP0 (Table 124).
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace ct32b0Cap0locValC{
            constexpr MPL::Value<ct32b0Cap0locVal,ct32b0Cap0locVal::selectsCt32b0Cap0> selectsCt32b0Cap0{};
            constexpr MPL::Value<ct32b0Cap0locVal,ct32b0Cap0locVal::selectsCt32b0Cap0> selectsCt32b0Cap0{};
            constexpr MPL::Value<ct32b0Cap0locVal,ct32b0Cap0locVal::reserved> reserved{};
            constexpr MPL::Value<ct32b0Cap0locVal,ct32b0Cap0locVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ct32b0Cap0locVal> ct32b0Cap0loc{}; 
    }
    namespace NoneioconRxdLoc{    ///<RXD pin location select register
        using Addr = Register::Address<0x400440d4,0xfffffffc,0,unsigned>;
        ///Selects pin location for the RXD function.
        enum class rxdlocVal {
            selectsRxdFunction=0x00000000,     ///<Selects RXD function in pin location PIO1_6/RXD/CT32B0_MAT0 (see Table 144).
            selectsRxdFunction=0x00000001,     ///<Selects RXD function in pin location PIO2_7/CT32B0_MAT2/RXD (see Table 111).
            selectsRxdFunction=0x00000002,     ///<Selects RXD function in pin location PIO3_1/DSR/CT16B0_MAT1/RXD (see Table 137).
            selectsRxdFunction=0x00000003,     ///<Selects RXD function in pin location PIO3_4/CT16B0_CAP1/RXD (see Table 118).
        };
        namespace rxdlocValC{
            constexpr MPL::Value<rxdlocVal,rxdlocVal::selectsRxdFunction> selectsRxdFunction{};
            constexpr MPL::Value<rxdlocVal,rxdlocVal::selectsRxdFunction> selectsRxdFunction{};
            constexpr MPL::Value<rxdlocVal,rxdlocVal::selectsRxdFunction> selectsRxdFunction{};
            constexpr MPL::Value<rxdlocVal,rxdlocVal::selectsRxdFunction> selectsRxdFunction{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,rxdlocVal> rxdloc{}; 
    }
}
