#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I/O control (IOCON) 
    namespace Nonepio00{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044000,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio01{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044004,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio02{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044008,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio03{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x4004400c,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio04{    ///<I/O configuration for open-drain pin PIO0_4
        using Addr = Register::Address<0x40044010,0xfffffcf8,0,unsigned>;
        ///Selects pin function. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects I2C mode (see  Section 7.3.8).  Select Standard mode (I2CMODE = 00, default) or Standard I/O functionality (I2CMODE = 01) if the pin function is GPIO (FUNC = 000).
        enum class i2cmodeVal {
            standardModeFast=0x00000000,     ///<Standard mode/ Fast-mode I2C.
            standardIoFunctio=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
            reserved=0x00000003,     ///<Reserved.
        };
        namespace i2cmodeValC{
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardModeFast> standardModeFast{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardIoFunctio> standardIoFunctio{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,i2cmodeVal> i2cmode{}; 
    }
    namespace Nonepio05{    ///<I/O configuration for open-drain pin PIO0_5
        using Addr = Register::Address<0x40044014,0xfffffcf8,0,unsigned>;
        ///Selects pin function. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Selects I2C mode (see  Section 7.3.8).  Select Standard mode (I2CMODE = 00, default) or Standard I/O functionality (I2CMODE = 01) if the pin function is GPIO (FUNC = 000).
        enum class i2cmodeVal {
            standardModeFast=0x00000000,     ///<Standard mode/ Fast-mode I2C.
            standardIoFunctio=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
            reserved=0x00000003,     ///<Reserved.
        };
        namespace i2cmodeValC{
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardModeFast> standardModeFast{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::standardIoFunctio> standardIoFunctio{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
            constexpr MPL::Value<i2cmodeVal,i2cmodeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,i2cmodeVal> i2cmode{}; 
    }
    namespace Nonepio06{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044018,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio07{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x4004401c,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio08{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044020,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio09{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044024,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio010{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044028,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio011{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x4004402c,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio012{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044030,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio013{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044034,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio014{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044038,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio015{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x4004403c,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio016{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044040,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio017{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044044,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio018{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044048,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio019{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x4004404c,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio020{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044050,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio021{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044054,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio022{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044058,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio023{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x4004405c,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio10{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044060,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio11{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044064,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio12{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044068,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio13{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x4004406c,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio14{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044070,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio15{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044074,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio16{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044078,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio17{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x4004407c,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio18{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044080,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio19{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044084,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio110{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044088,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio111{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x4004408c,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio112{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044090,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio113{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044094,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio114{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044098,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio115{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x4004409c,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio116{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440a0,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio117{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440a4,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio118{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440a8,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio119{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440ac,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio120{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440b0,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio121{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440b4,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio122{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440b8,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio123{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440bc,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio124{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440c0,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio125{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440c4,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio126{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440c8,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio127{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440cc,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio128{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440d0,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio129{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440d4,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio130{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440d8,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio131{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440dc,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio20{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x400440f0,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio21{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x400440f4,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio22{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x400440fc,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio23{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044100,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio24{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044104,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio25{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044108,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio26{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x4004410c,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio27{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044110,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio28{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044114,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio29{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044118,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio210{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x4004411c,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio211{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044120,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio212{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044124,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio213{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044128,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio214{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x4004412c,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio215{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044130,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio216{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044134,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio217{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044138,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio218{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x4004413c,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio219{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044140,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio220{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044144,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio221{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044148,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio222{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x4004414c,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonepio223{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044150,0xffff0380,0,unsigned>;
        ///Selects pin function.
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        namespace odValC{
            constexpr MPL::Value<odVal,odVal::disable> disable{};
            constexpr MPL::Value<odVal,odVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr MPL::Value<clkdivVal,clkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
}
