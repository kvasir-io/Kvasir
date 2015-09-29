#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I/O pin configuration (IOCON) 
    namespace Nonepio00{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8000,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio01{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8004,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio02{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8008,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio03{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f800c,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio04{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8010,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio05{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8014,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio06{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8018,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio07{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f801c,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio08{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8020,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio09{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8024,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio010{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8028,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio011{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f802c,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio012{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8030,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio013{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8034,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio014{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8038,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio015{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f803c,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio016{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8040,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio017{    ///<Digital I/O control for port 0 pins PIO0_0 to PIO0_17. With glitch filter.
        using Addr = Register::Address<0x400f8044,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio018{    ///<Digital I/O control for port 0 pins PIO0_18 to PIO0_21. Without glitch filter.
        using Addr = Register::Address<0x400f8048,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio019{    ///<Digital I/O control for port 0 pins PIO0_18 to PIO0_21. Without glitch filter.
        using Addr = Register::Address<0x400f804c,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio020{    ///<Digital I/O control for port 0 pins PIO0_18 to PIO0_21. Without glitch filter.
        using Addr = Register::Address<0x400f8050,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio021{    ///<Digital I/O control for port 0 pins PIO0_18 to PIO0_21. Without glitch filter.
        using Addr = Register::Address<0x400f8054,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio022{    ///<I/O control for open-drain pin PIO0_22. This pin is used for the I2C-bus SCL function.
        using Addr = Register::Address<0x400f8058,0xffff04bf,0,unsigned>;
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
            standardIoFunctio=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
            reserved=0x00000003,     ///<Reserved.
        };
        namespace i2cmodeValC{
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardMode> standardMode{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardIoFunctio> standardIoFunctio{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,i2cmodeVal> i2cmode{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio023{    ///<I/O control for open-drain pin PIO0_22. This pin is used for the I2C-bus SCL function.
        using Addr = Register::Address<0x400f805c,0xffff04bf,0,unsigned>;
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
            standardIoFunctio=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
            reserved=0x00000003,     ///<Reserved.
        };
        namespace i2cmodeValC{
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardMode> standardMode{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardIoFunctio> standardIoFunctio{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,i2cmodeVal> i2cmode{}; 
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio024{    ///<Digital I/O control for port 0 pins PIO0_24. Without glitch filter.
        using Addr = Register::Address<0x400f8060,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio025{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f8064,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio026{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f8068,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio027{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f806c,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio028{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f8070,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio029{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f8074,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio030{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f8078,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio031{    ///<Digital I/O control for port 0 pins PIO0_25 to PIO0_31. With glitch filter.
        using Addr = Register::Address<0x400f807c,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio10{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8080,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio11{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8084,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio12{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8088,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio13{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f808c,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio14{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8090,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio15{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8094,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio16{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f8098,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio17{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f809c,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio18{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f80a0,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio19{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f80a4,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio110{    ///<Digital I/O control for port 1 pins PIO1_0 to PIO1_10. With glitch filter.
        using Addr = Register::Address<0x400f80a8,0xffff0287,0,unsigned>;
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
        ///Selects 10 ns input glitch filter.
        enum class filtrVal {
            filterEnabled=0x00000000,     ///<Filter enabled.
            filterDisabled=0x00000001,     ///<Filter disabled.
        };
        namespace filtrValC{
            constexpr MPL::Value<filtrVal,filtrVal::filterEnabled> filterEnabled{};
            constexpr MPL::Value<filtrVal,filtrVal::filterDisabled> filterDisabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,filtrVal> filtr{}; 
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio111{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80ac,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio112{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80b0,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio113{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80b4,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio114{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80b8,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio115{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80bc,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio116{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80c0,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio117{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80c4,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio118{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80c8,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio119{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80cc,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio120{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80d0,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio121{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80d4,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio122{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80d8,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio123{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80dc,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio124{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80e0,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio125{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80e4,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio126{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80e8,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio127{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80ec,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio128{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80f0,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio129{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80f4,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio130{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80f8,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio131{    ///<Digital I/O control for port 1 pins PIO1_11 to PIO1_31. Without glitch filter.
        using Addr = Register::Address<0x400f80fc,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio20{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8100,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio21{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8104,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio22{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8108,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio23{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f810c,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio24{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8110,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio25{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8114,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio26{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8118,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio27{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f811c,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio28{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8120,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio29{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8124,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio210{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8128,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio211{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f812c,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio212{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8130,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio213{    ///<Digital I/O control for port 2 pins PIO2_0 to PIO2_13. Without glitch filter.
        using Addr = Register::Address<0x400f8134,0xffff0387,0,unsigned>;
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
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select peripheral clock divider for input filter sampling clock IOCONCLKDIV. Value 0x7 is reserved.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
}
