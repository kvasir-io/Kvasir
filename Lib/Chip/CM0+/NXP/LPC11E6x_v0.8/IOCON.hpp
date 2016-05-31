#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//I/O control (IOCON) 
    namespace IoconPio04{    ///<I/O configuration for open-drain pin PIO0_4
        using Addr = Register::Address<0x40044010,0x00000000,0x00000000,unsigned>;
        ///Selects pin function. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Selects I2C mode (see  Section 7.3.8).  Select Standard mode (I2CMODE = 00, default) or Standard I/O functionality (I2CMODE = 01) if the pin function is GPIO (FUNC = 000).
        enum class I2cmodeVal {
            standardModeFast=0x00000000,     ///<Standard mode/ Fast-mode I2C.
            standardIoFunctio=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,I2cmodeVal> i2cmode{}; 
        namespace I2cmodeValC{
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardModeFast> standardModeFast{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardIoFunctio> standardIoFunctio{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio05{    ///<I/O configuration for open-drain pin PIO0_5
        using Addr = Register::Address<0x40044014,0x00000000,0x00000000,unsigned>;
        ///Selects pin function. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Selects I2C mode (see  Section 7.3.8).  Select Standard mode (I2CMODE = 00, default) or Standard I/O functionality (I2CMODE = 01) if the pin function is GPIO (FUNC = 000).
        enum class I2cmodeVal {
            standardModeFast=0x00000000,     ///<Standard mode/ Fast-mode I2C.
            standardIoFunctio=0x00000001,     ///<Standard I/O functionality
            fastModePlusI2c=0x00000002,     ///<Fast-mode Plus I2C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,I2cmodeVal> i2cmode{}; 
        namespace I2cmodeValC{
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardModeFast> standardModeFast{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::standardIoFunctio> standardIoFunctio{};
            constexpr Register::FieldValue<decltype(i2cmode)::Type,I2cmodeVal::fastModePlusI2c> fastModePlusI2c{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio00{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044000,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio01{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044004,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio02{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044008,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio03{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x4004400c,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio06{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044018,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio07{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x4004401c,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio08{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044020,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio09{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044024,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio010{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044028,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio011{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x4004402c,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio012{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044030,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio013{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044034,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio014{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044038,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio015{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x4004403c,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio016{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044040,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio017{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044044,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio018{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044048,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio019{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x4004404c,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio020{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044050,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio021{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044054,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio022{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x40044058,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio023{    ///<I/O configuration for  port PIO0
        using Addr = Register::Address<0x4004405c,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enable=0x00000001,     ///<Enable. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enable> enable{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio10{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044060,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio11{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044064,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio12{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044068,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio13{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x4004406c,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio14{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044070,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio15{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044074,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio16{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044078,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio17{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x4004407c,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio18{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044080,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio19{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044084,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio110{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044088,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio111{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x4004408c,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio112{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044090,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio113{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044094,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio114{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x40044098,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio115{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x4004409c,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio116{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440a0,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio117{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440a4,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio118{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440a8,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio119{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440ac,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio120{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440b0,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio121{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440b4,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio122{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440b8,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio123{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440bc,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio124{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440c0,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio125{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440c4,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio126{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440c8,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio127{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440cc,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio128{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440d0,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio129{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440d4,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio130{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440d8,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio131{    ///<I/O configuration for port PIO1
        using Addr = Register::Address<0x400440dc,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio20{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x400440f0,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio21{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x400440f4,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio22{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x400440fc,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio23{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044100,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio24{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044104,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio25{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044108,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio26{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x4004410c,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio27{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044110,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio28{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044114,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio29{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044118,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio210{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x4004411c,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio211{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044120,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio212{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044124,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio213{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044128,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio214{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x4004412c,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio215{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044130,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio216{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044134,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio217{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044138,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio218{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x4004413c,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio219{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044140,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio220{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044144,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio221{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044148,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio222{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x4004414c,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace IoconPio223{    ///<I/O configuration for port PIO2
        using Addr = Register::Address<0x40044150,0x00000000,0x00000000,unsigned>;
        ///Selects pin function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> func{}; 
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
            enabled=0x00000001,     ///<Enabled. Open-drain mode enabled.  This is not a true open-drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,OdVal> od{}; 
        namespace OdValC{
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::disable> disable{};
            constexpr Register::FieldValue<decltype(od)::Type,OdVal::enabled> enabled{};
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
            ioconclkdiv0=0x00000000,     ///<IOCONCLKDIV0. Use IOCON clock divider 0.
            ioconclkdiv1=0x00000001,     ///<IOCONCLKDIV1. Use IOCON clock divider 1.
            ioconclkdiv2=0x00000002,     ///<IOCONCLKDIV2 Use IOCON clock divider 2.
            ioconclkdiv3=0x00000003,     ///<IOCONCLKDIV3. Use IOCON clock divider 3.
            ioconclkdiv4=0x00000004,     ///<IOCONCLKDIV4. Use IOCON clock divider 4.
            ioconclkdiv5=0x00000005,     ///<IOCONCLKDIV5. Use IOCON clock divider 5.
            ioconclkdiv6=0x00000006,     ///<IOCONCLKDIV6. Use IOCON clock divider 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv0> ioconclkdiv0{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv1> ioconclkdiv1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv2> ioconclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv3> ioconclkdiv3{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv4> ioconclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv5> ioconclkdiv5{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::ioconclkdiv6> ioconclkdiv6{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
