#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//I/O pin configuration (IOCON) 
    namespace IoconPio00{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8000,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio01{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8004,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio02{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8008,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio03{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f800c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio04{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8010,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio05{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8014,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio06{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8018,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio07{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f801c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio08{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8020,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio09{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8024,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio010{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8028,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio011{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f802c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio012{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8030,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio013{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8034,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio014{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8038,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio015{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f803c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio016{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8040,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio017{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8044,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio018{    ///<Digital I/O control for port 0 pins PIO0_18 to PIO0_21. Without glitch filter.
        using Addr = Register::Address<0x400f8048,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio019{    ///<Digital I/O control for port 0 pins PIO0_18 to PIO0_21. Without glitch filter.
        using Addr = Register::Address<0x400f804c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio020{    ///<Digital I/O control for port 0 pins PIO0_18 to PIO0_21. Without glitch filter.
        using Addr = Register::Address<0x400f8050,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio021{    ///<Digital I/O control for port 0 pins PIO0_18 to PIO0_21. Without glitch filter.
        using Addr = Register::Address<0x400f8054,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio022{    ///<I/O control for open-drain pin PIO0_22. This pin is used for the I2C-bus SCL function.
        using Addr = Register::Address<0x400f8058,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
            standardIoFunctio=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,I2cmodeVal> i2cmode{}; 
        namespace I2cmodeValC{
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardIoFunctio> standardIoFunctio{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio023{    ///<I/O control for open-drain pin PIO0_22. This pin is used for the I2C-bus SCL function.
        using Addr = Register::Address<0x400f805c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
            standardIoFunctio=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,I2cmodeVal> i2cmode{}; 
        namespace I2cmodeValC{
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardMode> standardMode{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardIoFunctio> standardIoFunctio{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio024{    ///<Digital I/O control for port 0 pins PIO0_24. Without glitch filter.
        using Addr = Register::Address<0x400f8060,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio025{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f8064,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio026{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f8068,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio027{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f806c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio028{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f8070,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio029{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f8074,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio030{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f8078,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio031{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f807c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio10{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8080,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio11{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8084,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio12{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8088,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio13{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f808c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio14{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8090,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio15{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8094,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio16{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8098,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio17{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f809c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio18{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f80a0,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio19{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f80a4,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio110{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f80a8,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio111{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80ac,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio112{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80b0,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio113{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80b4,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio114{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80b8,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio115{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80bc,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio116{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80c0,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio117{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80c4,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio118{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80c8,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio119{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80cc,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio120{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80d0,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio121{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80d4,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio122{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80d8,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio123{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80dc,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio124{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80e0,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio125{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80e4,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio126{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80e8,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio127{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80ec,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio128{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80f0,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio129{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80f4,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio130{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80f8,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio131{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80fc,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio20{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8100,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio21{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8104,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio22{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8108,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio23{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f810c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio24{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8110,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio25{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8114,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio26{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8118,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio27{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f811c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio28{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8120,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio29{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8124,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio210{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8128,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio211{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f812c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio212{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8130,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio213{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8134,0x00000000,0x00000000,unsigned>;
        ///Reserved. Only write 0 to these bits.
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
