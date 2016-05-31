#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//I/O configuration (IOCON)
    namespace IoconPio017{    ///<I/O configuration for pin PIO0_17
        using Addr = Register::Address<0x40044000,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio013{    ///<I/O configuration for pin PIO0_13
        using Addr = Register::Address<0x40044004,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio012{    ///<I/O configuration for pin PIO0_12
        using Addr = Register::Address<0x40044008,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio05{    ///<I/O configuration for pin PIO0_5/RESET
        using Addr = Register::Address<0x4004400c,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio04{    ///<I/O configuration for pin PIO0_4
        using Addr = Register::Address<0x40044010,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio03{    ///<I/O configuration for pin PIO0_3/SWCLK
        using Addr = Register::Address<0x40044014,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Invert input.
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio02{    ///<I/O configuration for pin PIO0_2/SWDIO
        using Addr = Register::Address<0x40044018,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Invert input.
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio011{    ///<I/O configuration for pin PIO0_11. This is the pin configuration for the true open-drain pin.
        using Addr = Register::Address<0x4004401c,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Selects I2C mode.  Select Standard mode (I2CMODE = 00, default) or Standard I/O functionality (I2CMODE = 01) if the pin function is GPIO (FUNC = 000).
        enum class I2cmodeVal {
            standardMode=0x00000000,     ///<Standard mode/ Fast-mode I2C.
            standardIo=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,I2cmodeVal> i2cmode{}; 
        namespace I2cmodeValC{
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardIo> standardIo{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio010{    ///<I/O configuration for pin PIO0_10. This is the pin configuration for the true open-drain pin.
        using Addr = Register::Address<0x40044020,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Invert input
        enum class InvVal {
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Selects I2C mode.  Select Standard mode (I2CMODE = 00, default) or Standard I/O functionality (I2CMODE = 01) if the pin function is GPIO (FUNC = 000).
        enum class I2cmodeVal {
            standardMode=0x00000000,     ///<Standard mode/ Fast-mode I2C.
            standardIo=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,I2cmodeVal> i2cmode{}; 
        namespace I2cmodeValC{
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardIo> standardIo{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio016{    ///<I/O configuration for pin PIO0_16
        using Addr = Register::Address<0x40044024,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio015{    ///<I/O configuration for pin PIO0_15
        using Addr = Register::Address<0x40044028,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio01{    ///<I/O configuration for pin PIO0_1/ACMP_I1/CLKIN
        using Addr = Register::Address<0x4004402c,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio09{    ///<I/O configuration for pin PIO0_9/XTALOUT
        using Addr = Register::Address<0x40044034,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio08{    ///<I/O configuration for pin PIO0_8/XTALIN
        using Addr = Register::Address<0x40044038,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio07{    ///<I/O configuration for pin PIO0_7
        using Addr = Register::Address<0x4004403c,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio06{    ///<I/O configuration for pin PIO0_6/VDDCMP
        using Addr = Register::Address<0x40044040,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio00{    ///<I/O configuration for pin PIO0_0/ACMP_I0
        using Addr = Register::Address<0x40044044,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio014{    ///<I/O configuration for pin PIO0_14
        using Addr = Register::Address<0x40044048,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
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
            inputNotInverted=0x00000000,     ///<Input not inverted (HIGH on pin reads as 1; LOW on pin reads as 0).
            inputInvertedHigh=0x00000001,     ///<Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputNotInverted> inputNotInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInvertedHigh> inputInvertedHigh{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Open-drain mode.
        enum class OdVal {
            disable=0x00000000,     ///<Disable.
            openDrainModeEnab=0x00000001,     ///<Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::openDrainModeEnab> openDrainModeEnab{};
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycleInput=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCyclesInpu=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCyclesInpu=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycleInput> v1ClockCycleInput{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCyclesInpu> v2ClockCyclesInpu{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCyclesInpu> v3ClockCyclesInpu{};
        }
        ///Select peripheral clock divider for input filter sampling clock. Value 0x7 is reserved.
        enum class ClkdivVal {
            ioconfiltrclkdiv0=0x00000000,     ///<IOCONFILTRCLKDIV0.
            ioconfiltrclkdiv1=0x00000001,     ///<IOCONFILTRCLKDIV1.
            ioconfiltrclkdiv2=0x00000002,     ///<IOCONFILTRCLKDIV2.
            ioconfiltrclkdiv3=0x00000003,     ///<IOCONFILTRCLKDIV3.
            ioconfiltrclkdiv4=0x00000004,     ///<IOCONFILTRCLKDIV4.
            ioconfiltrclkdiv5=0x00000005,     ///<IOCONFILTRCLKDIV5.
            ioconfiltrclkdiv6=0x00000006,     ///<IOCONFILTRCLKDIV6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkDiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv0> ioconfiltrclkdiv0{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv1> ioconfiltrclkdiv1{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv2> ioconfiltrclkdiv2{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv3> ioconfiltrclkdiv3{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv4> ioconfiltrclkdiv4{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv5> ioconfiltrclkdiv5{};
            constexpr Register::FieldValue<decltype(clkDiv)::Type,ClkdivVal::ioconfiltrclkdiv6> ioconfiltrclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
