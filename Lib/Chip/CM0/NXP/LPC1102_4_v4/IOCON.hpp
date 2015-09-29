#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I/O Configuration 
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
        ///Selects pseudo open-drain mode. See Section 7.1 for part specific details.
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
        ///Selects pseudo open-drain mode. See Section 7.1 for part specific details.
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
        ///Selects pseudo open-drain mode. See Section 7.1 for part specific details.
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
        ///Selects pseudo open-drain mode. See Section 7.1 for part specific details.
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
        ///Selects pseudo open-drain mode. See Section 7.1 for part specific details.
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
        ///Selects pseudo open-drain mode. See Section 7.1 for part specific details.
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
        ///Selects pseudo open-drain mode. See Section 7.1 for part specific details.
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
        ///Selects pseudo open-drain mode. See Section 7.1 for part specific details.
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
}
