#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I/O pin configuration (IOCON) 
    namespace Nonepio00{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8000,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio01{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8004,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio02{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8008,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio03{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f800c,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio04{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8010,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio05{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8014,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio06{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8018,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio07{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f801c,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio08{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8020,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio09{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8024,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio010{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8028,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio011{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f802c,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio012{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8030,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio013{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8034,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio014{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8038,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio015{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f803c,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio016{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8040,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio017{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8044,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio018{    ///<Digital I/O control for port 0 pins PIO0_18 to PIO0_21. Without glitch filter.
        using Addr = Register::Address<0x400f8048,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio019{    ///<Digital I/O control for port 0 pins PIO0_18 to PIO0_21. Without glitch filter.
        using Addr = Register::Address<0x400f804c,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio020{    ///<Digital I/O control for port 0 pins PIO0_18 to PIO0_21. Without glitch filter.
        using Addr = Register::Address<0x400f8050,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio021{    ///<Digital I/O control for port 0 pins PIO0_18 to PIO0_21. Without glitch filter.
        using Addr = Register::Address<0x400f8054,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio022{    ///<I/O control for open-drain pin PIO0_22. This pin is used for the I2C-bus SCL function.
        using Addr = Register::Address<0x400f8058,0xffff04bf,0,unsigned>;
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
        }
        ///Selects I2C mode.  Select Standard mode (I2CMODE = 00, default) or Standard I/O functionality (I2CMODE = 01) if the pin function is GPIO (FUNC = 000).
        enum class I2cmodeVal {
            standardMode=0x00000000,     ///<Standard mode/ Fast-mode I2C.
            standardIoFunctio=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,I2cmodeVal> i2cmode{}; 
        namespace I2cmodeValC{
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardIoFunctio> standardIoFunctio{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
        }
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio023{    ///<I/O control for open-drain pin PIO0_22. This pin is used for the I2C-bus SCL function.
        using Addr = Register::Address<0x400f805c,0xffff04bf,0,unsigned>;
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
        }
        ///Selects I2C mode.  Select Standard mode (I2CMODE = 00, default) or Standard I/O functionality (I2CMODE = 01) if the pin function is GPIO (FUNC = 000).
        enum class I2cmodeVal {
            standardMode=0x00000000,     ///<Standard mode/ Fast-mode I2C.
            standardIoFunctio=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,I2cmodeVal> i2cmode{}; 
        namespace I2cmodeValC{
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardIoFunctio> standardIoFunctio{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
        }
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio024{    ///<Digital I/O control for port 0 pins PIO0_24. Without glitch filter.
        using Addr = Register::Address<0x400f8060,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio025{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f8064,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio026{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f8068,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio027{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f806c,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio028{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f8070,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio029{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f8074,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio030{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f8078,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio031{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f807c,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio10{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8080,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio11{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8084,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio12{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8088,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio13{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f808c,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio14{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8090,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio15{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8094,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio16{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8098,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio17{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f809c,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio18{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f80a0,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio19{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f80a4,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio110{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f80a8,0xffff0287,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio111{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80ac,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio112{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80b0,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio113{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80b4,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio114{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80b8,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio115{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80bc,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio116{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80c0,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio117{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80c4,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio118{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80c8,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio119{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80cc,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio120{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80d0,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio121{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80d4,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio122{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80d8,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio123{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80dc,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio124{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80e0,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio125{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80e4,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio126{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80e8,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio127{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80ec,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio128{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80f0,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio129{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80f4,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio130{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80f8,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio131{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80fc,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio20{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8100,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio21{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8104,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio22{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8108,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio23{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f810c,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio24{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8110,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio25{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8114,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio26{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8118,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio27{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f811c,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio28{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8120,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio29{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8124,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio210{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8128,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio211{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f812c,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio212{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8130,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonepio213{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8134,0xffff0387,0,unsigned>;
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
        }
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
        }
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
}
