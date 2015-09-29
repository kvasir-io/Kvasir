#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I/O configuration (IOCON)
    namespace Nonepio017{    ///<I/O configuration for pin PIO0_17
        using Addr = Register::Address<0x40044000,0xffff0387,0,unsigned>;
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
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
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio013{    ///<I/O configuration for pin PIO0_13
        using Addr = Register::Address<0x40044004,0xffff0387,0,unsigned>;
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
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
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio012{    ///<I/O configuration for pin PIO0_12
        using Addr = Register::Address<0x40044008,0xffff0387,0,unsigned>;
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
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
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio05{    ///<I/O configuration for pin PIO0_5/RESET
        using Addr = Register::Address<0x4004400c,0xffff0387,0,unsigned>;
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
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
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio04{    ///<I/O configuration for pin PIO0_4
        using Addr = Register::Address<0x40044010,0xffff0387,0,unsigned>;
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
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
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio03{    ///<I/O configuration for pin PIO0_3/SWCLK
        using Addr = Register::Address<0x40044014,0xffff0387,0,unsigned>;
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
        ///Invert input.
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
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
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio02{    ///<I/O configuration for pin PIO0_2/SWDIO
        using Addr = Register::Address<0x40044018,0xffff0387,0,unsigned>;
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
        ///Invert input.
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
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
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio011{    ///<I/O configuration for pin PIO0_11. This is the pin configuration for the true open-drain pin.
        using Addr = Register::Address<0x4004401c,0xffff04bf,0,unsigned>;
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Selects I2C mode.  Select Standard mode (I2CMODE = 00, default) or Standard I/O functionality (I2CMODE = 01) if the pin function is GPIO (FUNC = 000).
        enum class i2cmodeVal {
            standardMode=0x00000000,     ///<Standard mode/ Fast-mode I2C.
            standardIo=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
            reserved=0x00000003,     ///<Reserved.
        };
        namespace i2cmodeValC{
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardMode> standardMode{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardIo> standardIo{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,i2cmodeVal> i2cmode{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio010{    ///<I/O configuration for pin PIO0_10. This is the pin configuration for the true open-drain pin.
        using Addr = Register::Address<0x40044020,0xffff04bf,0,unsigned>;
        ///Invert input
        enum class invVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::inputNotInverted> inputNotInverted{};
            constexpr MPL::Value<invVal,invVal::inputInvertedHigh> inputInvertedHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,invVal> inv{}; 
        ///Selects I2C mode.  Select Standard mode (I2CMODE = 00, default) or Standard I/O functionality (I2CMODE = 01) if the pin function is GPIO (FUNC = 000).
        enum class i2cmodeVal {
            standardMode=0x00000000,     ///<Standard mode/ Fast-mode I2C.
            standardIo=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
            reserved=0x00000003,     ///<Reserved.
        };
        namespace i2cmodeValC{
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardMode> standardMode{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardIo> standardIo{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,i2cmodeVal> i2cmode{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio016{    ///<I/O configuration for pin PIO0_16
        using Addr = Register::Address<0x40044024,0xffff0387,0,unsigned>;
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
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
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio015{    ///<I/O configuration for pin PIO0_15
        using Addr = Register::Address<0x40044028,0xffff0387,0,unsigned>;
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
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
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio01{    ///<I/O configuration for pin PIO0_1/ACMP_I1/CLKIN
        using Addr = Register::Address<0x4004402c,0xffff0387,0,unsigned>;
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
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
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio09{    ///<I/O configuration for pin PIO0_9/XTALOUT
        using Addr = Register::Address<0x40044034,0xffff0387,0,unsigned>;
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
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
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio08{    ///<I/O configuration for pin PIO0_8/XTALIN
        using Addr = Register::Address<0x40044038,0xffff0387,0,unsigned>;
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
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
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio07{    ///<I/O configuration for pin PIO0_7
        using Addr = Register::Address<0x4004403c,0xffff0387,0,unsigned>;
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
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
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio06{    ///<I/O configuration for pin PIO0_6/VDDCMP
        using Addr = Register::Address<0x40044040,0xffff0387,0,unsigned>;
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
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
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio00{    ///<I/O configuration for pin PIO0_0/ACMP_I0
        using Addr = Register::Address<0x40044044,0xffff0387,0,unsigned>;
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
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
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
    namespace Nonepio014{    ///<I/O configuration for pin PIO0_14
        using Addr = Register::Address<0x40044048,0xffff0387,0,unsigned>;
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
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
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::openDrainModeEnab> openDrainModeEnab{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,odVal> od{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class clkDivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        namespace clkDivValC{
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr MPL::Value<clkDivVal,clkDivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkDivVal> clkDiv{}; 
    }
}
