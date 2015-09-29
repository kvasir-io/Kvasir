#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I/O pin configuration 
    namespace Nonepio00{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c000,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio01{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c004,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio02{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c008,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio03{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c00c,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio04{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c010,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio05{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c014,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio06{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c018,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio07{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c01c,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio08{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c020,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio09{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c024,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio010{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c028,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio011{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c02c,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio012{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c030,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio013{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c034,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio014{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c038,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio015{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c03c,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio016{    ///<Digital I/O control for port 0 pins PIO0_16 to
						PIO0_17.
        using Addr = Register::Address<0x4001c040,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio017{    ///<Digital I/O control for port 0 pins PIO0_16 to
						PIO0_17.
        using Addr = Register::Address<0x4001c044,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio018{    ///<Digital I/O control for port 0 pins PIO0_18 to
						PIO0_22.
        using Addr = Register::Address<0x4001c048,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio019{    ///<Digital I/O control for port 0 pins PIO0_18 to
						PIO0_22.
        using Addr = Register::Address<0x4001c04c,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio020{    ///<Digital I/O control for port 0 pins PIO0_18 to
						PIO0_22.
        using Addr = Register::Address<0x4001c050,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio021{    ///<Digital I/O control for port 0 pins PIO0_18 to
						PIO0_22.
        using Addr = Register::Address<0x4001c054,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio022{    ///<Digital I/O control for port 0 pins PIO0_18 to
						PIO0_22.
        using Addr = Register::Address<0x4001c058,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio023{    ///<Digital I/O control for port 0 pins PIO0_23 to PIO0_28. These pins
						support I2C with true open-drain, drive and filtering for modes up to
						Fast-mode Plus.
        using Addr = Register::Address<0x4001c05c,0xfffff818,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Controls slew rate of I2C pad.
        enum class i2cslewVal {
            i2cMode=0x00000000,     ///<I2C mode.
            gpioMode=0x00000001,     ///<GPIO mode.
        };
        namespace i2cslewValC{
            constexpr MPL::Value<i2cslewVal,i2cslewVal::i2cMode> i2cMode{};
            constexpr MPL::Value<i2cslewVal,i2cslewVal::gpioMode> gpioMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,i2cslewVal> i2cslew{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls the current sink capability of the
								pin.
        enum class i2cdriveVal {
            lowDrive=0x00000000,     ///<Low drive. Output drive sink is 4 mA. This is
										sufficient for standard and fast mode I2C.
            highDrive=0x00000001,     ///<High drive. Output drive sink is 20 mA. This is
										needed for Fast Mode Plus I 2C. Refer to the appropriate
										specific device data sheet for details.
        };
        namespace i2cdriveValC{
            constexpr MPL::Value<i2cdriveVal,i2cdriveVal::lowDrive> lowDrive{};
            constexpr MPL::Value<i2cdriveVal,i2cdriveVal::highDrive> highDrive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,i2cdriveVal> i2cdrive{}; 
        ///Configures I2C features for standard mode, fast mode, and
								Fast Mode Plus operation.
        enum class i2cfilterVal {
            enabled=0x00000000,     ///<Enabled. I2C 50 ns glitch filter
										enabled.
            disabled=0x00000001,     ///<Disabled. I2C 50 ns glitch filter
										disabled.
        };
        namespace i2cfilterValC{
            constexpr MPL::Value<i2cfilterVal,i2cfilterVal::enabled> enabled{};
            constexpr MPL::Value<i2cfilterVal,i2cfilterVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,i2cfilterVal> i2cfilter{}; 
    }
    namespace Nonepio024{    ///<Digital I/O control for port 0 pins PIO0_23 to PIO0_28. These pins
						support I2C with true open-drain, drive and filtering for modes up to
						Fast-mode Plus.
        using Addr = Register::Address<0x4001c060,0xfffff818,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Controls slew rate of I2C pad.
        enum class i2cslewVal {
            i2cMode=0x00000000,     ///<I2C mode.
            gpioMode=0x00000001,     ///<GPIO mode.
        };
        namespace i2cslewValC{
            constexpr MPL::Value<i2cslewVal,i2cslewVal::i2cMode> i2cMode{};
            constexpr MPL::Value<i2cslewVal,i2cslewVal::gpioMode> gpioMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,i2cslewVal> i2cslew{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls the current sink capability of the
								pin.
        enum class i2cdriveVal {
            lowDrive=0x00000000,     ///<Low drive. Output drive sink is 4 mA. This is
										sufficient for standard and fast mode I2C.
            highDrive=0x00000001,     ///<High drive. Output drive sink is 20 mA. This is
										needed for Fast Mode Plus I 2C. Refer to the appropriate
										specific device data sheet for details.
        };
        namespace i2cdriveValC{
            constexpr MPL::Value<i2cdriveVal,i2cdriveVal::lowDrive> lowDrive{};
            constexpr MPL::Value<i2cdriveVal,i2cdriveVal::highDrive> highDrive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,i2cdriveVal> i2cdrive{}; 
        ///Configures I2C features for standard mode, fast mode, and
								Fast Mode Plus operation.
        enum class i2cfilterVal {
            enabled=0x00000000,     ///<Enabled. I2C 50 ns glitch filter
										enabled.
            disabled=0x00000001,     ///<Disabled. I2C 50 ns glitch filter
										disabled.
        };
        namespace i2cfilterValC{
            constexpr MPL::Value<i2cfilterVal,i2cfilterVal::enabled> enabled{};
            constexpr MPL::Value<i2cfilterVal,i2cfilterVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,i2cfilterVal> i2cfilter{}; 
    }
    namespace Nonepio025{    ///<Digital I/O control for port 0 pins PIO0_23 to PIO0_28. These pins
						support I2C with true open-drain, drive and filtering for modes up to
						Fast-mode Plus.
        using Addr = Register::Address<0x4001c064,0xfffff818,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Controls slew rate of I2C pad.
        enum class i2cslewVal {
            i2cMode=0x00000000,     ///<I2C mode.
            gpioMode=0x00000001,     ///<GPIO mode.
        };
        namespace i2cslewValC{
            constexpr MPL::Value<i2cslewVal,i2cslewVal::i2cMode> i2cMode{};
            constexpr MPL::Value<i2cslewVal,i2cslewVal::gpioMode> gpioMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,i2cslewVal> i2cslew{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls the current sink capability of the
								pin.
        enum class i2cdriveVal {
            lowDrive=0x00000000,     ///<Low drive. Output drive sink is 4 mA. This is
										sufficient for standard and fast mode I2C.
            highDrive=0x00000001,     ///<High drive. Output drive sink is 20 mA. This is
										needed for Fast Mode Plus I 2C. Refer to the appropriate
										specific device data sheet for details.
        };
        namespace i2cdriveValC{
            constexpr MPL::Value<i2cdriveVal,i2cdriveVal::lowDrive> lowDrive{};
            constexpr MPL::Value<i2cdriveVal,i2cdriveVal::highDrive> highDrive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,i2cdriveVal> i2cdrive{}; 
        ///Configures I2C features for standard mode, fast mode, and
								Fast Mode Plus operation.
        enum class i2cfilterVal {
            enabled=0x00000000,     ///<Enabled. I2C 50 ns glitch filter
										enabled.
            disabled=0x00000001,     ///<Disabled. I2C 50 ns glitch filter
										disabled.
        };
        namespace i2cfilterValC{
            constexpr MPL::Value<i2cfilterVal,i2cfilterVal::enabled> enabled{};
            constexpr MPL::Value<i2cfilterVal,i2cfilterVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,i2cfilterVal> i2cfilter{}; 
    }
    namespace Nonepio026{    ///<Digital I/O control for port 0 pins PIO0_23 to PIO0_28. These pins
						support I2C with true open-drain, drive and filtering for modes up to
						Fast-mode Plus.
        using Addr = Register::Address<0x4001c068,0xfffff818,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Controls slew rate of I2C pad.
        enum class i2cslewVal {
            i2cMode=0x00000000,     ///<I2C mode.
            gpioMode=0x00000001,     ///<GPIO mode.
        };
        namespace i2cslewValC{
            constexpr MPL::Value<i2cslewVal,i2cslewVal::i2cMode> i2cMode{};
            constexpr MPL::Value<i2cslewVal,i2cslewVal::gpioMode> gpioMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,i2cslewVal> i2cslew{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls the current sink capability of the
								pin.
        enum class i2cdriveVal {
            lowDrive=0x00000000,     ///<Low drive. Output drive sink is 4 mA. This is
										sufficient for standard and fast mode I2C.
            highDrive=0x00000001,     ///<High drive. Output drive sink is 20 mA. This is
										needed for Fast Mode Plus I 2C. Refer to the appropriate
										specific device data sheet for details.
        };
        namespace i2cdriveValC{
            constexpr MPL::Value<i2cdriveVal,i2cdriveVal::lowDrive> lowDrive{};
            constexpr MPL::Value<i2cdriveVal,i2cdriveVal::highDrive> highDrive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,i2cdriveVal> i2cdrive{}; 
        ///Configures I2C features for standard mode, fast mode, and
								Fast Mode Plus operation.
        enum class i2cfilterVal {
            enabled=0x00000000,     ///<Enabled. I2C 50 ns glitch filter
										enabled.
            disabled=0x00000001,     ///<Disabled. I2C 50 ns glitch filter
										disabled.
        };
        namespace i2cfilterValC{
            constexpr MPL::Value<i2cfilterVal,i2cfilterVal::enabled> enabled{};
            constexpr MPL::Value<i2cfilterVal,i2cfilterVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,i2cfilterVal> i2cfilter{}; 
    }
    namespace Nonepio027{    ///<Digital I/O control for port 0 pins PIO0_23 to PIO0_28. These pins
						support I2C with true open-drain, drive and filtering for modes up to
						Fast-mode Plus.
        using Addr = Register::Address<0x4001c06c,0xfffff818,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Controls slew rate of I2C pad.
        enum class i2cslewVal {
            i2cMode=0x00000000,     ///<I2C mode.
            gpioMode=0x00000001,     ///<GPIO mode.
        };
        namespace i2cslewValC{
            constexpr MPL::Value<i2cslewVal,i2cslewVal::i2cMode> i2cMode{};
            constexpr MPL::Value<i2cslewVal,i2cslewVal::gpioMode> gpioMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,i2cslewVal> i2cslew{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls the current sink capability of the
								pin.
        enum class i2cdriveVal {
            lowDrive=0x00000000,     ///<Low drive. Output drive sink is 4 mA. This is
										sufficient for standard and fast mode I2C.
            highDrive=0x00000001,     ///<High drive. Output drive sink is 20 mA. This is
										needed for Fast Mode Plus I 2C. Refer to the appropriate
										specific device data sheet for details.
        };
        namespace i2cdriveValC{
            constexpr MPL::Value<i2cdriveVal,i2cdriveVal::lowDrive> lowDrive{};
            constexpr MPL::Value<i2cdriveVal,i2cdriveVal::highDrive> highDrive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,i2cdriveVal> i2cdrive{}; 
        ///Configures I2C features for standard mode, fast mode, and
								Fast Mode Plus operation.
        enum class i2cfilterVal {
            enabled=0x00000000,     ///<Enabled. I2C 50 ns glitch filter
										enabled.
            disabled=0x00000001,     ///<Disabled. I2C 50 ns glitch filter
										disabled.
        };
        namespace i2cfilterValC{
            constexpr MPL::Value<i2cfilterVal,i2cfilterVal::enabled> enabled{};
            constexpr MPL::Value<i2cfilterVal,i2cfilterVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,i2cfilterVal> i2cfilter{}; 
    }
    namespace Nonepio028{    ///<Digital I/O control for port 0 pins PIO0_23 to PIO0_28. These pins
						support I2C with true open-drain, drive and filtering for modes up to
						Fast-mode Plus.
        using Addr = Register::Address<0x4001c070,0xfffff818,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Controls slew rate of I2C pad.
        enum class i2cslewVal {
            i2cMode=0x00000000,     ///<I2C mode.
            gpioMode=0x00000001,     ///<GPIO mode.
        };
        namespace i2cslewValC{
            constexpr MPL::Value<i2cslewVal,i2cslewVal::i2cMode> i2cMode{};
            constexpr MPL::Value<i2cslewVal,i2cslewVal::gpioMode> gpioMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,i2cslewVal> i2cslew{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls the current sink capability of the
								pin.
        enum class i2cdriveVal {
            lowDrive=0x00000000,     ///<Low drive. Output drive sink is 4 mA. This is
										sufficient for standard and fast mode I2C.
            highDrive=0x00000001,     ///<High drive. Output drive sink is 20 mA. This is
										needed for Fast Mode Plus I 2C. Refer to the appropriate
										specific device data sheet for details.
        };
        namespace i2cdriveValC{
            constexpr MPL::Value<i2cdriveVal,i2cdriveVal::lowDrive> lowDrive{};
            constexpr MPL::Value<i2cdriveVal,i2cdriveVal::highDrive> highDrive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,i2cdriveVal> i2cdrive{}; 
        ///Configures I2C features for standard mode, fast mode, and
								Fast Mode Plus operation.
        enum class i2cfilterVal {
            enabled=0x00000000,     ///<Enabled. I2C 50 ns glitch filter
										enabled.
            disabled=0x00000001,     ///<Disabled. I2C 50 ns glitch filter
										disabled.
        };
        namespace i2cfilterValC{
            constexpr MPL::Value<i2cfilterVal,i2cfilterVal::enabled> enabled{};
            constexpr MPL::Value<i2cfilterVal,i2cfilterVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,i2cfilterVal> i2cfilter{}; 
    }
    namespace Nonepio029{    ///<Digital I/O control for port 0 pins PIO0_29 to PIO0_31. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c074,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio030{    ///<Digital I/O control for port 0 pins PIO0_29 to PIO0_31. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c078,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio031{    ///<Digital I/O control for port 0 pins PIO0_29 to PIO0_31. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c07c,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio10{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c080,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio11{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c084,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio12{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c088,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio13{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c08c,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio14{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c090,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio15{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c094,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio16{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c098,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio17{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c09c,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio18{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c0a0,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio19{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0a4,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio110{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0a8,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio111{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0ac,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio112{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0b0,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio113{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0b4,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio114{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0b8,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio115{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0bc,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio116{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0c0,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
    namespace Nonepio117{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0c4,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class modeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::inactive> inactive{};
            constexpr MPL::Value<modeVal,modeVal::pullDown> pullDown{};
            constexpr MPL::Value<modeVal,modeVal::pullUp> pullUp{};
            constexpr MPL::Value<modeVal,modeVal::repeater> repeater{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Input polarity.
        enum class invertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        namespace invertValC{
            constexpr MPL::Value<invertVal,invertVal::disabled> disabled{};
            constexpr MPL::Value<invertVal,invertVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invertVal> invert{}; 
        ///Select Analog/Digital mode.
        enum class digimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        namespace digimodeValC{
            constexpr MPL::Value<digimodeVal,digimodeVal::analogMode> analogMode{};
            constexpr MPL::Value<digimodeVal,digimodeVal::digitalMode> digitalMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,digimodeVal> digimode{}; 
        ///Controls input glitch filter.
        enum class filteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        namespace filteroffValC{
            constexpr MPL::Value<filteroffVal,filteroffVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filteroffVal,filteroffVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filteroffVal> filteroff{}; 
        ///Driver slew rate.
        enum class slewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        namespace slewValC{
            constexpr MPL::Value<slewVal,slewVal::standardMode> standardMode{};
            constexpr MPL::Value<slewVal,slewVal::fastMode> fastMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,slewVal> slew{}; 
        ///Controls open-drain mode.
        enum class odVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::normal> normal{};
            constexpr MPL::Value<odVal,odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
    }
}
