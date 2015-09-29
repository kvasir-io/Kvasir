#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10375 Chapter title=LPC13xx I/O configuration Modification date=4/20/2011 Major revision=2 Minor revision=1 
    namespace Nonepio26{    ///<I/O configuration for pin PIO2_6
        using Addr = Register::Address<0x40044000,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control).
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio01{    ///<I/O configuration for pin PIO0_1/CLKOUT/ CT32B0_MAT2/USB_FTOGGLE
        using Addr = Register::Address<0x40044010,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio02{    ///<I/O configuration for pin PIO0_2/SSEL0/ CT16B0_CAP0
        using Addr = Register::Address<0x4004401c,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio27{    ///<I/O configuration for pin PIO2_7
        using Addr = Register::Address<0x40044020,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio28{    ///<I/O configuration for pin PIO2_8
        using Addr = Register::Address<0x40044024,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio03{    ///<I/O configuration for pin PIO0_3/USB_VBUS
        using Addr = Register::Address<0x4004402c,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
        ///Selects I2C mode. Selects I2C mode. Select Standard mode (I2CMODE = 00, default) or Standard I/O functionality (I2CMODE = 01) if the pin function is GPIO (FUNC = 000).
        enum class i2cmodeVal {
            standardModeFast=0x00000000,     ///<Standard mode/ Fast-mode I2C
            standardIoFunctio=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
            reserved=0x00000003,     ///<Reserved
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
        using Addr = Register::Address<0x40044034,0xfffffcf8,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects I2C mode. Select Standard mode (I2CMODE = 00, default) or Standard I/O functionality (I2CMODE = 01) if the pin function is GPIO (FUNC = 000).
        enum class i2cmodeVal {
            standardModeFast=0x00000000,     ///<Standard mode/ Fast-mode I2C
            standardIoFunctio=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
            reserved=0x00000003,     ///<Reserved
        };
        namespace i2cmodeValC{
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardModeFast> standardModeFast{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardIoFunctio> standardIoFunctio{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,i2cmodeVal> i2cmode{}; 
    }
    namespace Nonepio19{    ///<I/O configuration for pin PIO1_9/CT16B1_MAT0
        using Addr = Register::Address<0x40044038,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio34{    ///<I/O configuration for pin PIO3_4
        using Addr = Register::Address<0x4004403c,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio24{    ///<I/O configuration for pin PIO2_4
        using Addr = Register::Address<0x40044040,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio25{    ///<I/O configuration for pin PIO2_5
        using Addr = Register::Address<0x40044044,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio35{    ///<I/O configuration for pin PIO3_5
        using Addr = Register::Address<0x40044048,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio06{    ///<I/O configuration for pin PIO0_6/USB_CONNECT/SCK
        using Addr = Register::Address<0x4004404c,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio29{    ///<I/O configuration for pin PIO2_9
        using Addr = Register::Address<0x40044054,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio09{    ///<I/O configuration for pin PIO0_9/MOSI0/ CT16B0_MAT1/SWO
        using Addr = Register::Address<0x40044064,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace NoneswclkPio010{    ///<I/O configuration for pin SWCLK/PIO0_10/ SCK/CT16B0_MAT2
        using Addr = Register::Address<0x40044068,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio110{    ///<I/O configuration for pin PIO1_10/AD6/ CT16B1_MAT1
        using Addr = Register::Address<0x4004406c,0xfffffb40,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio211{    ///<I/O configuration for pin PIO2_11/SCK
        using Addr = Register::Address<0x40044070,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace NonerPio10{    ///<I/O configuration for pin R/PIO1_0/AD1/ CT32B1_CAP0
        using Addr = Register::Address<0x40044078,0xfffffb40,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace NonerPio12{    ///<I/O configuration for pin R/PIO1_2/AD3/ CT32B1_MAT1
        using Addr = Register::Address<0x40044080,0xfffffb40,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio30{    ///<I/O configuration for pin PIO3_0/DTR
        using Addr = Register::Address<0x40044084,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio31{    ///<I/O configuration for pin PIO3_1/DSR
        using Addr = Register::Address<0x40044088,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace NoneswdioPio13{    ///<I/O configuration for pin SWDIO/PIO1_3/AD4/ CT32B1_MAT2
        using Addr = Register::Address<0x40044090,0xfffffb40,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
        ///Selects pin function. This pin functions as WAKEUP pin if the LPC13xx is in Deep power-down mode regardless of the value of FUNC. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio111{    ///<I/O configuration for pin PIO1_11/AD7
        using Addr = Register::Address<0x40044098,0xfffffb40,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio32{    ///<I/O configuration for pin PIO3_2/DCD
        using Addr = Register::Address<0x4004409c,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonepio33{    ///<I/O configuration for pin PIO3_3/RI
        using Addr = Register::Address<0x400440ac,0xfffffbc0,0,unsigned>;
        ///Selects pin function. All other values are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor control)
        enum class modeVal {
            inactiveNoPullDo=0x00000000,     ///<Inactive (no pull-down/pull-up resistor enabled)
            pullDownResistorE=0x00000001,     ///<Pull-down resistor enabled
            pullUpResistorEna=0x00000002,     ///<Pull-up resistor enabled
            repeaterMode=0x00000003,     ///<Repeater mode
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactiveNoPullDo> inactiveNoPullDo{};
            constexpr MPL::Value<modeVal,modeVal::pullDownResistorE> pullDownResistorE{};
            constexpr MPL::Value<modeVal,modeVal::pullUpResistorEna> pullUpResistorEna{};
            constexpr MPL::Value<modeVal,modeVal::repeaterMode> repeaterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Hysteresis
        enum class hysVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
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
    namespace Nonesck0Loc{    ///<SCK0 pin location register
        using Addr = Register::Address<0x400440b0,0xfffffffc,0,unsigned>;
        ///Selects pin location for SCK0 pin.
        enum class scklocVal {
            selectsSck0Functio=0x00000000,     ///<Selects SCK0 function for pin SWCLK/PIO0_10/SCK0/CT16B0_MAT2 (see Table 121).
            selectsSck0Functio=0x00000001,     ///<Selects SCK0 function for pin PIO2_11/SCK0 (see Table 123
            selectsSck0Functio=0x00000002,     ///<Selects SCK0 function for pin PIO0_6/USB_CONNECT/SCK0 (see Table 114).
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
    namespace NonedsrLoc{    ///<DSR pin location select register
        using Addr = Register::Address<0x400440b4,0xfffffffc,0,unsigned>;
        ///Selects pin location for DSR0 pin (this register is only used for parts LPC1311/01 and LPC1313/01).
        enum class dsrlocVal {
            selectsDsrFunction=0x00000000,     ///<Selects DSR function in pin location PIO2_1/DSR/SCK1.
            selectsDsrFunction=0x00000001,     ///<Selects DSR function in pin location PIO3_1/DSR.
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace dsrlocValC{
            constexpr MPL::Value<dsrlocVal,dsrlocVal::selectsDsrFunction> selectsDsrFunction{};
            constexpr MPL::Value<dsrlocVal,dsrlocVal::selectsDsrFunction> selectsDsrFunction{};
            constexpr MPL::Value<dsrlocVal,dsrlocVal::reserved> reserved{};
            constexpr MPL::Value<dsrlocVal,dsrlocVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dsrlocVal> dsrloc{}; 
    }
    namespace NonedcdLoc{    ///<DCD pin location select register
        using Addr = Register::Address<0x400440b8,0xfffffffc,0,unsigned>;
        ///Selects pin location for DCD pin (this register is only used for parts LPC1311/01 and LPC1313/01).
        enum class dcdlocVal {
            selectsDcdFunction=0x00000000,     ///<Selects DCD function in pin location PIO2_2/DCD/MISO1.
            selectsDcdFunctio=0x00000001,     ///<Selects  DCD function in pin location PIO3_2/DCD.
            reserved=0x00000002,     ///<Reserved.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace dcdlocValC{
            constexpr MPL::Value<dcdlocVal,dcdlocVal::selectsDcdFunction> selectsDcdFunction{};
            constexpr MPL::Value<dcdlocVal,dcdlocVal::selectsDcdFunctio> selectsDcdFunctio{};
            constexpr MPL::Value<dcdlocVal,dcdlocVal::reserved> reserved{};
            constexpr MPL::Value<dcdlocVal,dcdlocVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dcdlocVal> dcdloc{}; 
    }
    namespace NoneriLoc{    ///<RI pin location register
        using Addr = Register::Address<0x400440bc,0xfffffffc,0,unsigned>;
        ///Selects pin location for RI pin (this register is only used for parts LPC1311/01 and LPC1313/01)
        enum class rilocVal {
            selectsRiFunction=0x00000000,     ///<Selects RI function in pin location PIO2_3/RI/MOSI1.
            selectsRiFunction=0x00000001,     ///<Selects RI function in pin location PIO3_3/RI.
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
}
