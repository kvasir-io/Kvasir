#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I/O pin configuration 
    namespace Nonepio00{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c000,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio01{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c004,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio02{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c008,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio03{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c00c,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio04{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c010,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio05{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c014,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio06{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c018,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio07{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c01c,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio08{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c020,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio09{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c024,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio010{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c028,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio011{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c02c,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio012{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c030,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio013{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c034,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio014{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c038,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio015{    ///<Digital I/O control for port 0 pins PIO0_0 to
						PIO0_15.
        using Addr = Register::Address<0x4001c03c,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio016{    ///<Digital I/O control for port 0 pins PIO0_16 to
						PIO0_17.
        using Addr = Register::Address<0x4001c040,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio017{    ///<Digital I/O control for port 0 pins PIO0_16 to
						PIO0_17.
        using Addr = Register::Address<0x4001c044,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio018{    ///<Digital I/O control for port 0 pins PIO0_18 to
						PIO0_22.
        using Addr = Register::Address<0x4001c048,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio019{    ///<Digital I/O control for port 0 pins PIO0_18 to
						PIO0_22.
        using Addr = Register::Address<0x4001c04c,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio020{    ///<Digital I/O control for port 0 pins PIO0_18 to
						PIO0_22.
        using Addr = Register::Address<0x4001c050,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio021{    ///<Digital I/O control for port 0 pins PIO0_18 to
						PIO0_22.
        using Addr = Register::Address<0x4001c054,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio022{    ///<Digital I/O control for port 0 pins PIO0_18 to
						PIO0_22.
        using Addr = Register::Address<0x4001c058,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio023{    ///<Digital I/O control for port 0 pins PIO0_23 to PIO0_28. These pins
						support I2C with true open-drain, drive and filtering for modes up to
						Fast-mode Plus.
        using Addr = Register::Address<0x4001c05c,0xfffff818,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Controls slew rate of I2C pad.
        enum class I2cslewVal {
            i2cMode=0x00000000,     ///<I2C mode.
            gpioMode=0x00000001,     ///<GPIO mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,I2cslewVal> i2cslew{}; 
        namespace I2cslewValC{
            constexpr Register::FieldValue<decltype(i2cslew)::Type,I2cslewVal::i2cMode> i2cMode{};
            constexpr Register::FieldValue<decltype(i2cslew)::Type,I2cslewVal::gpioMode> gpioMode{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls the current sink capability of the
								pin.
        enum class I2cdriveVal {
            lowDrive=0x00000000,     ///<Low drive. Output drive sink is 4 mA. This is
										sufficient for standard and fast mode I2C.
            highDrive=0x00000001,     ///<High drive. Output drive sink is 20 mA. This is
										needed for Fast Mode Plus I 2C. Refer to the appropriate
										specific device data sheet for details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,I2cdriveVal> i2cdrive{}; 
        namespace I2cdriveValC{
            constexpr Register::FieldValue<decltype(i2cdrive)::Type,I2cdriveVal::lowDrive> lowDrive{};
            constexpr Register::FieldValue<decltype(i2cdrive)::Type,I2cdriveVal::highDrive> highDrive{};
        }
        ///Configures I2C features for standard mode, fast mode, and
								Fast Mode Plus operation.
        enum class I2cfilterVal {
            enabled=0x00000000,     ///<Enabled. I2C 50 ns glitch filter
										enabled.
            disabled=0x00000001,     ///<Disabled. I2C 50 ns glitch filter
										disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,I2cfilterVal> i2cfilter{}; 
        namespace I2cfilterValC{
            constexpr Register::FieldValue<decltype(i2cfilter)::Type,I2cfilterVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(i2cfilter)::Type,I2cfilterVal::disabled> disabled{};
        }
    }
    namespace Nonepio024{    ///<Digital I/O control for port 0 pins PIO0_23 to PIO0_28. These pins
						support I2C with true open-drain, drive and filtering for modes up to
						Fast-mode Plus.
        using Addr = Register::Address<0x4001c060,0xfffff818,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Controls slew rate of I2C pad.
        enum class I2cslewVal {
            i2cMode=0x00000000,     ///<I2C mode.
            gpioMode=0x00000001,     ///<GPIO mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,I2cslewVal> i2cslew{}; 
        namespace I2cslewValC{
            constexpr Register::FieldValue<decltype(i2cslew)::Type,I2cslewVal::i2cMode> i2cMode{};
            constexpr Register::FieldValue<decltype(i2cslew)::Type,I2cslewVal::gpioMode> gpioMode{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls the current sink capability of the
								pin.
        enum class I2cdriveVal {
            lowDrive=0x00000000,     ///<Low drive. Output drive sink is 4 mA. This is
										sufficient for standard and fast mode I2C.
            highDrive=0x00000001,     ///<High drive. Output drive sink is 20 mA. This is
										needed for Fast Mode Plus I 2C. Refer to the appropriate
										specific device data sheet for details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,I2cdriveVal> i2cdrive{}; 
        namespace I2cdriveValC{
            constexpr Register::FieldValue<decltype(i2cdrive)::Type,I2cdriveVal::lowDrive> lowDrive{};
            constexpr Register::FieldValue<decltype(i2cdrive)::Type,I2cdriveVal::highDrive> highDrive{};
        }
        ///Configures I2C features for standard mode, fast mode, and
								Fast Mode Plus operation.
        enum class I2cfilterVal {
            enabled=0x00000000,     ///<Enabled. I2C 50 ns glitch filter
										enabled.
            disabled=0x00000001,     ///<Disabled. I2C 50 ns glitch filter
										disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,I2cfilterVal> i2cfilter{}; 
        namespace I2cfilterValC{
            constexpr Register::FieldValue<decltype(i2cfilter)::Type,I2cfilterVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(i2cfilter)::Type,I2cfilterVal::disabled> disabled{};
        }
    }
    namespace Nonepio025{    ///<Digital I/O control for port 0 pins PIO0_23 to PIO0_28. These pins
						support I2C with true open-drain, drive and filtering for modes up to
						Fast-mode Plus.
        using Addr = Register::Address<0x4001c064,0xfffff818,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Controls slew rate of I2C pad.
        enum class I2cslewVal {
            i2cMode=0x00000000,     ///<I2C mode.
            gpioMode=0x00000001,     ///<GPIO mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,I2cslewVal> i2cslew{}; 
        namespace I2cslewValC{
            constexpr Register::FieldValue<decltype(i2cslew)::Type,I2cslewVal::i2cMode> i2cMode{};
            constexpr Register::FieldValue<decltype(i2cslew)::Type,I2cslewVal::gpioMode> gpioMode{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls the current sink capability of the
								pin.
        enum class I2cdriveVal {
            lowDrive=0x00000000,     ///<Low drive. Output drive sink is 4 mA. This is
										sufficient for standard and fast mode I2C.
            highDrive=0x00000001,     ///<High drive. Output drive sink is 20 mA. This is
										needed for Fast Mode Plus I 2C. Refer to the appropriate
										specific device data sheet for details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,I2cdriveVal> i2cdrive{}; 
        namespace I2cdriveValC{
            constexpr Register::FieldValue<decltype(i2cdrive)::Type,I2cdriveVal::lowDrive> lowDrive{};
            constexpr Register::FieldValue<decltype(i2cdrive)::Type,I2cdriveVal::highDrive> highDrive{};
        }
        ///Configures I2C features for standard mode, fast mode, and
								Fast Mode Plus operation.
        enum class I2cfilterVal {
            enabled=0x00000000,     ///<Enabled. I2C 50 ns glitch filter
										enabled.
            disabled=0x00000001,     ///<Disabled. I2C 50 ns glitch filter
										disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,I2cfilterVal> i2cfilter{}; 
        namespace I2cfilterValC{
            constexpr Register::FieldValue<decltype(i2cfilter)::Type,I2cfilterVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(i2cfilter)::Type,I2cfilterVal::disabled> disabled{};
        }
    }
    namespace Nonepio026{    ///<Digital I/O control for port 0 pins PIO0_23 to PIO0_28. These pins
						support I2C with true open-drain, drive and filtering for modes up to
						Fast-mode Plus.
        using Addr = Register::Address<0x4001c068,0xfffff818,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Controls slew rate of I2C pad.
        enum class I2cslewVal {
            i2cMode=0x00000000,     ///<I2C mode.
            gpioMode=0x00000001,     ///<GPIO mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,I2cslewVal> i2cslew{}; 
        namespace I2cslewValC{
            constexpr Register::FieldValue<decltype(i2cslew)::Type,I2cslewVal::i2cMode> i2cMode{};
            constexpr Register::FieldValue<decltype(i2cslew)::Type,I2cslewVal::gpioMode> gpioMode{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls the current sink capability of the
								pin.
        enum class I2cdriveVal {
            lowDrive=0x00000000,     ///<Low drive. Output drive sink is 4 mA. This is
										sufficient for standard and fast mode I2C.
            highDrive=0x00000001,     ///<High drive. Output drive sink is 20 mA. This is
										needed for Fast Mode Plus I 2C. Refer to the appropriate
										specific device data sheet for details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,I2cdriveVal> i2cdrive{}; 
        namespace I2cdriveValC{
            constexpr Register::FieldValue<decltype(i2cdrive)::Type,I2cdriveVal::lowDrive> lowDrive{};
            constexpr Register::FieldValue<decltype(i2cdrive)::Type,I2cdriveVal::highDrive> highDrive{};
        }
        ///Configures I2C features for standard mode, fast mode, and
								Fast Mode Plus operation.
        enum class I2cfilterVal {
            enabled=0x00000000,     ///<Enabled. I2C 50 ns glitch filter
										enabled.
            disabled=0x00000001,     ///<Disabled. I2C 50 ns glitch filter
										disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,I2cfilterVal> i2cfilter{}; 
        namespace I2cfilterValC{
            constexpr Register::FieldValue<decltype(i2cfilter)::Type,I2cfilterVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(i2cfilter)::Type,I2cfilterVal::disabled> disabled{};
        }
    }
    namespace Nonepio027{    ///<Digital I/O control for port 0 pins PIO0_23 to PIO0_28. These pins
						support I2C with true open-drain, drive and filtering for modes up to
						Fast-mode Plus.
        using Addr = Register::Address<0x4001c06c,0xfffff818,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Controls slew rate of I2C pad.
        enum class I2cslewVal {
            i2cMode=0x00000000,     ///<I2C mode.
            gpioMode=0x00000001,     ///<GPIO mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,I2cslewVal> i2cslew{}; 
        namespace I2cslewValC{
            constexpr Register::FieldValue<decltype(i2cslew)::Type,I2cslewVal::i2cMode> i2cMode{};
            constexpr Register::FieldValue<decltype(i2cslew)::Type,I2cslewVal::gpioMode> gpioMode{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls the current sink capability of the
								pin.
        enum class I2cdriveVal {
            lowDrive=0x00000000,     ///<Low drive. Output drive sink is 4 mA. This is
										sufficient for standard and fast mode I2C.
            highDrive=0x00000001,     ///<High drive. Output drive sink is 20 mA. This is
										needed for Fast Mode Plus I 2C. Refer to the appropriate
										specific device data sheet for details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,I2cdriveVal> i2cdrive{}; 
        namespace I2cdriveValC{
            constexpr Register::FieldValue<decltype(i2cdrive)::Type,I2cdriveVal::lowDrive> lowDrive{};
            constexpr Register::FieldValue<decltype(i2cdrive)::Type,I2cdriveVal::highDrive> highDrive{};
        }
        ///Configures I2C features for standard mode, fast mode, and
								Fast Mode Plus operation.
        enum class I2cfilterVal {
            enabled=0x00000000,     ///<Enabled. I2C 50 ns glitch filter
										enabled.
            disabled=0x00000001,     ///<Disabled. I2C 50 ns glitch filter
										disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,I2cfilterVal> i2cfilter{}; 
        namespace I2cfilterValC{
            constexpr Register::FieldValue<decltype(i2cfilter)::Type,I2cfilterVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(i2cfilter)::Type,I2cfilterVal::disabled> disabled{};
        }
    }
    namespace Nonepio028{    ///<Digital I/O control for port 0 pins PIO0_23 to PIO0_28. These pins
						support I2C with true open-drain, drive and filtering for modes up to
						Fast-mode Plus.
        using Addr = Register::Address<0x4001c070,0xfffff818,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Controls slew rate of I2C pad.
        enum class I2cslewVal {
            i2cMode=0x00000000,     ///<I2C mode.
            gpioMode=0x00000001,     ///<GPIO mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,I2cslewVal> i2cslew{}; 
        namespace I2cslewValC{
            constexpr Register::FieldValue<decltype(i2cslew)::Type,I2cslewVal::i2cMode> i2cMode{};
            constexpr Register::FieldValue<decltype(i2cslew)::Type,I2cslewVal::gpioMode> gpioMode{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls the current sink capability of the
								pin.
        enum class I2cdriveVal {
            lowDrive=0x00000000,     ///<Low drive. Output drive sink is 4 mA. This is
										sufficient for standard and fast mode I2C.
            highDrive=0x00000001,     ///<High drive. Output drive sink is 20 mA. This is
										needed for Fast Mode Plus I 2C. Refer to the appropriate
										specific device data sheet for details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,I2cdriveVal> i2cdrive{}; 
        namespace I2cdriveValC{
            constexpr Register::FieldValue<decltype(i2cdrive)::Type,I2cdriveVal::lowDrive> lowDrive{};
            constexpr Register::FieldValue<decltype(i2cdrive)::Type,I2cdriveVal::highDrive> highDrive{};
        }
        ///Configures I2C features for standard mode, fast mode, and
								Fast Mode Plus operation.
        enum class I2cfilterVal {
            enabled=0x00000000,     ///<Enabled. I2C 50 ns glitch filter
										enabled.
            disabled=0x00000001,     ///<Disabled. I2C 50 ns glitch filter
										disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,I2cfilterVal> i2cfilter{}; 
        namespace I2cfilterValC{
            constexpr Register::FieldValue<decltype(i2cfilter)::Type,I2cfilterVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(i2cfilter)::Type,I2cfilterVal::disabled> disabled{};
        }
    }
    namespace Nonepio029{    ///<Digital I/O control for port 0 pins PIO0_29 to PIO0_31. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c074,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio030{    ///<Digital I/O control for port 0 pins PIO0_29 to PIO0_31. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c078,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio031{    ///<Digital I/O control for port 0 pins PIO0_29 to PIO0_31. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c07c,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio10{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c080,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio11{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c084,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio12{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c088,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio13{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c08c,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio14{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c090,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio15{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c094,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio16{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c098,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio17{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c09c,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio18{    ///<Digital I/O control for port 1 pins PIO0_0 to PIO0_8. These pins
						include an ADC input.
        using Addr = Register::Address<0x4001c0a0,0xfffffa20,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio19{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0a4,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio110{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0a8,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio111{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0ac,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio112{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0b0,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio113{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0b4,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio114{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0b8,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio115{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0bc,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio116{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0c0,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
    namespace Nonepio117{    ///<Digital I/O control for port 1 pins PIO1_9 to
						PIO1_17.
        using Addr = Register::Address<0x4001c0c4,0xfffff820,0,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects function mode (on-chip pull-up/pull-down resistor
								control).
        enum class ModeVal {
            inactive=0x00000000,     ///<Inactive. Inactive (no pull-down/pull-up resistor
										enabled).
            pullDown=0x00000001,     ///<Pull-down. Pull-down resistor
										enabled.
            pullUp=0x00000002,     ///<Pull-up. Pull-up resistor enabled.
            repeater=0x00000003,     ///<Repeater. Repeater mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullDown> pullDown{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::repeater> repeater{};
        }
        ///Input polarity.
        enum class InvertVal {
            disabled=0x00000000,     ///<Disabled. Input function is not
										inverted.
            enabled=0x00000001,     ///<Enabled. Input is function inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvertVal> invert{}; 
        namespace InvertValC{
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(invert)::Type,InvertVal::enabled> enabled{};
        }
        ///Select Analog/Digital mode.
        enum class DigimodeVal {
            analogMode=0x00000000,     ///<Analog mode.
            digitalMode=0x00000001,     ///<Digital mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DigimodeVal> digimode{}; 
        namespace DigimodeValC{
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::analogMode> analogMode{};
            constexpr Register::FieldValue<decltype(digimode)::Type,DigimodeVal::digitalMode> digitalMode{};
        }
        ///Controls input glitch filter.
        enum class FilteroffVal {
            filterEnabled=0x00000000,     ///<Filter enabled. Noise pulses below approximately 10
										ns are filtered out
            filterDisabled=0x00000001,     ///<Filter disabled. No input filtering is
										done
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FilteroffVal> filteroff{}; 
        namespace FilteroffValC{
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterEnabled> filterEnabled{};
            constexpr Register::FieldValue<decltype(filteroff)::Type,FilteroffVal::filterDisabled> filterDisabled{};
        }
        ///Driver slew rate.
        enum class SlewVal {
            standardMode=0x00000000,     ///<Standard mode, output slew rate control is enabled.
										More outputs can be switched simultaneously.
            fastMode=0x00000001,     ///<Fast mode, slew rate control is disabled. Refer to
										the appropriate specific device data sheet for
										details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,SlewVal> slew{}; 
        namespace SlewValC{
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(slew)::Type,SlewVal::fastMode> fastMode{};
        }
        ///Controls open-drain mode.
        enum class OdVal {
            normal=0x00000000,     ///<Normal. Normal push-pull output
            openDrain=0x00000001,     ///<Open-drain. Simulated open-drain output (high drive
										disabled)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrain> openDrain{};
        }
    }
}
