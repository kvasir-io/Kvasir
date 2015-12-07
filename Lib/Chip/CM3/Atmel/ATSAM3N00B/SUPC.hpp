#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Supply Controller
    namespace SupcCr{    ///<Supply Controller Control Register
        using Addr = Register::Address<0x400e1410,0x00fffff3,0,unsigned>;
        ///Voltage Regulator Off
        enum class VroffVal {
            noEffect=0x00000000,     ///<no effect.
            stopVreg=0x00000001,     ///<if KEY is correct, asserts vddcore_nreset and stops the voltage regulator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,VroffVal> vroff{}; 
        namespace VroffValC{
            constexpr Register::FieldValue<decltype(vroff),VroffVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(vroff),VroffVal::stopVreg> stopVreg{};
        }
        ///Crystal Oscillator Select
        enum class XtalselVal {
            noEffect=0x00000000,     ///<no effect.
            crystalSel=0x00000001,     ///<if KEY is correct, switches the slow clock on the crystal oscillator output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,XtalselVal> xtalsel{}; 
        namespace XtalselValC{
            constexpr Register::FieldValue<decltype(xtalsel),XtalselVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(xtalsel),XtalselVal::crystalSel> crystalSel{};
        }
        ///Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace SupcSmmr{    ///<Supply Controller Supply Monitor Mode Register
        using Addr = Register::Address<0x400e1414,0xffffc8f0,0,unsigned>;
        ///Supply Monitor Threshold
        enum class SmthVal {
            v19v=0x00000000,     ///<1.9 V
            v20v=0x00000001,     ///<2.0 V
            v21v=0x00000002,     ///<2.1 V
            v22v=0x00000003,     ///<2.2 V
            v23v=0x00000004,     ///<2.3 V
            v24v=0x00000005,     ///<2.4 V
            v25v=0x00000006,     ///<2.5 V
            v26v=0x00000007,     ///<2.6 V
            v27v=0x00000008,     ///<2.7 V
            v28v=0x00000009,     ///<2.8 V
            v29v=0x0000000a,     ///<2.9 V
            v30v=0x0000000b,     ///<3.0 V
            v31v=0x0000000c,     ///<3.1 V
            v32v=0x0000000d,     ///<3.2 V
            v33v=0x0000000e,     ///<3.3 V
            v34v=0x0000000f,     ///<3.4 V
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SmthVal> smth{}; 
        namespace SmthValC{
            constexpr Register::FieldValue<decltype(smth),SmthVal::v19v> v19v{};
            constexpr Register::FieldValue<decltype(smth),SmthVal::v20v> v20v{};
            constexpr Register::FieldValue<decltype(smth),SmthVal::v21v> v21v{};
            constexpr Register::FieldValue<decltype(smth),SmthVal::v22v> v22v{};
            constexpr Register::FieldValue<decltype(smth),SmthVal::v23v> v23v{};
            constexpr Register::FieldValue<decltype(smth),SmthVal::v24v> v24v{};
            constexpr Register::FieldValue<decltype(smth),SmthVal::v25v> v25v{};
            constexpr Register::FieldValue<decltype(smth),SmthVal::v26v> v26v{};
            constexpr Register::FieldValue<decltype(smth),SmthVal::v27v> v27v{};
            constexpr Register::FieldValue<decltype(smth),SmthVal::v28v> v28v{};
            constexpr Register::FieldValue<decltype(smth),SmthVal::v29v> v29v{};
            constexpr Register::FieldValue<decltype(smth),SmthVal::v30v> v30v{};
            constexpr Register::FieldValue<decltype(smth),SmthVal::v31v> v31v{};
            constexpr Register::FieldValue<decltype(smth),SmthVal::v32v> v32v{};
            constexpr Register::FieldValue<decltype(smth),SmthVal::v33v> v33v{};
            constexpr Register::FieldValue<decltype(smth),SmthVal::v34v> v34v{};
        }
        ///Supply Monitor Sampling Period
        enum class SmsmplVal {
            smd=0x00000000,     ///<Supply Monitor disabled
            csm=0x00000001,     ///<Continuous Supply Monitor
            v32slck=0x00000002,     ///<Supply Monitor enabled one SLCK period every 32 SLCK periods
            v256slck=0x00000003,     ///<Supply Monitor enabled one SLCK period every 256 SLCK periods
            v2048slck=0x00000004,     ///<Supply Monitor enabled one SLCK period every 2,048 SLCK periods
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SmsmplVal> smsmpl{}; 
        namespace SmsmplValC{
            constexpr Register::FieldValue<decltype(smsmpl),SmsmplVal::smd> smd{};
            constexpr Register::FieldValue<decltype(smsmpl),SmsmplVal::csm> csm{};
            constexpr Register::FieldValue<decltype(smsmpl),SmsmplVal::v32slck> v32slck{};
            constexpr Register::FieldValue<decltype(smsmpl),SmsmplVal::v256slck> v256slck{};
            constexpr Register::FieldValue<decltype(smsmpl),SmsmplVal::v2048slck> v2048slck{};
        }
        ///Supply Monitor Reset Enable
        enum class SmrstenVal {
            notEnable=0x00000000,     ///<the core reset signal "vddcore_nreset" is not affected when a supply monitor detection occurs.
            enable=0x00000001,     ///<the core reset signal, vddcore_nreset is asserted when a supply monitor detection occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,SmrstenVal> smrsten{}; 
        namespace SmrstenValC{
            constexpr Register::FieldValue<decltype(smrsten),SmrstenVal::notEnable> notEnable{};
            constexpr Register::FieldValue<decltype(smrsten),SmrstenVal::enable> enable{};
        }
        ///Supply Monitor Interrupt Enable
        enum class SmienVal {
            notEnable=0x00000000,     ///<the SUPC interrupt signal is not affected when a supply monitor detection occurs.
            enable=0x00000001,     ///<the SUPC interrupt signal is asserted when a supply monitor detection occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,SmienVal> smien{}; 
        namespace SmienValC{
            constexpr Register::FieldValue<decltype(smien),SmienVal::notEnable> notEnable{};
            constexpr Register::FieldValue<decltype(smien),SmienVal::enable> enable{};
        }
    }
    namespace SupcMr{    ///<Supply Controller Mode Register
        using Addr = Register::Address<0x400e1418,0x00ef8fff,0,unsigned>;
        ///Brownout Detector Reset Enable
        enum class BodrstenVal {
            notEnable=0x00000000,     ///<the core reset signal "vddcore_nreset" is not affected when a brownout detection occurs.
            enable=0x00000001,     ///<the core reset signal, vddcore_nreset is asserted when a brownout detection occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,BodrstenVal> bodrsten{}; 
        namespace BodrstenValC{
            constexpr Register::FieldValue<decltype(bodrsten),BodrstenVal::notEnable> notEnable{};
            constexpr Register::FieldValue<decltype(bodrsten),BodrstenVal::enable> enable{};
        }
        ///Brownout Detector Disable
        enum class BoddisVal {
            enable=0x00000000,     ///<the core brownout detector is enabled.
            disable=0x00000001,     ///<the core brownout detector is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,BoddisVal> boddis{}; 
        namespace BoddisValC{
            constexpr Register::FieldValue<decltype(boddis),BoddisVal::enable> enable{};
            constexpr Register::FieldValue<decltype(boddis),BoddisVal::disable> disable{};
        }
        ///Voltage Regulator enable
        enum class OnregVal {
            onregUnused=0x00000000,     ///<Voltage Regulator is not used
            onregUsed=0x00000001,     ///<Voltage Regulator is used
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,OnregVal> onreg{}; 
        namespace OnregValC{
            constexpr Register::FieldValue<decltype(onreg),OnregVal::onregUnused> onregUnused{};
            constexpr Register::FieldValue<decltype(onreg),OnregVal::onregUsed> onregUsed{};
        }
        ///Oscillator Bypass
        enum class OscbypassVal {
            noEffect=0x00000000,     ///<no effect. Clock selection depends on XTALSEL value.
            bypass=0x00000001,     ///<the 32-KHz XTAL oscillator is selected and is put in bypass mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OscbypassVal> oscbypass{}; 
        namespace OscbypassValC{
            constexpr Register::FieldValue<decltype(oscbypass),OscbypassVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(oscbypass),OscbypassVal::bypass> bypass{};
        }
        ///Password Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace SupcWumr{    ///<Supply Controller Wake Up Mode Register
        using Addr = Register::Address<0x400e141c,0xffff8ff1,0,unsigned>;
        ///Supply Monitor Wake Up Enable
        enum class SmenVal {
            notEnable=0x00000000,     ///<the supply monitor detection has no wake up effect.
            enable=0x00000001,     ///<the supply monitor detection forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SmenVal> smen{}; 
        namespace SmenValC{
            constexpr Register::FieldValue<decltype(smen),SmenVal::notEnable> notEnable{};
            constexpr Register::FieldValue<decltype(smen),SmenVal::enable> enable{};
        }
        ///Real Time Timer Wake Up Enable
        enum class RttenVal {
            notEnable=0x00000000,     ///<the RTT alarm signal has no wake up effect.
            enable=0x00000001,     ///<the RTT alarm signal forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RttenVal> rtten{}; 
        namespace RttenValC{
            constexpr Register::FieldValue<decltype(rtten),RttenVal::notEnable> notEnable{};
            constexpr Register::FieldValue<decltype(rtten),RttenVal::enable> enable{};
        }
        ///Real Time Clock Wake Up Enable
        enum class RtcenVal {
            notEnable=0x00000000,     ///<the RTC alarm signal has no wake up effect.
            enable=0x00000001,     ///<the RTC alarm signal forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RtcenVal> rtcen{}; 
        namespace RtcenValC{
            constexpr Register::FieldValue<decltype(rtcen),RtcenVal::notEnable> notEnable{};
            constexpr Register::FieldValue<decltype(rtcen),RtcenVal::enable> enable{};
        }
        ///Wake Up Inputs Debouncer Period
        enum class WkupdbcVal {
            immediate=0x00000000,     ///<Immediate, no debouncing, detected active at least on one Slow Clock edge.
            v3Sclk=0x00000001,     ///<WKUPx shall be in its active state for at least 3 SLCK periods
            v32Sclk=0x00000002,     ///<WKUPx shall be in its active state for at least 32 SLCK periods
            v512Sclk=0x00000003,     ///<WKUPx shall be in its active state for at least 512 SLCK periods
            v4096Sclk=0x00000004,     ///<WKUPx shall be in its active state for at least 4,096 SLCK periods
            v32768Sclk=0x00000005,     ///<WKUPx shall be in its active state for at least 32,768 SLCK periods
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,WkupdbcVal> wkupdbc{}; 
        namespace WkupdbcValC{
            constexpr Register::FieldValue<decltype(wkupdbc),WkupdbcVal::immediate> immediate{};
            constexpr Register::FieldValue<decltype(wkupdbc),WkupdbcVal::v3Sclk> v3Sclk{};
            constexpr Register::FieldValue<decltype(wkupdbc),WkupdbcVal::v32Sclk> v32Sclk{};
            constexpr Register::FieldValue<decltype(wkupdbc),WkupdbcVal::v512Sclk> v512Sclk{};
            constexpr Register::FieldValue<decltype(wkupdbc),WkupdbcVal::v4096Sclk> v4096Sclk{};
            constexpr Register::FieldValue<decltype(wkupdbc),WkupdbcVal::v32768Sclk> v32768Sclk{};
        }
    }
    namespace SupcWuir{    ///<Supply Controller Wake Up Inputs Register
        using Addr = Register::Address<0x400e1420,0x00000000,0,unsigned>;
        ///Wake Up Input Enable 0
        enum class Wkupen0Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Wkupen0Val> wkupen0{}; 
        namespace Wkupen0ValC{
            constexpr Register::FieldValue<decltype(wkupen0),Wkupen0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen0),Wkupen0Val::enable> enable{};
        }
        ///Wake Up Input Enable 1
        enum class Wkupen1Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wkupen1Val> wkupen1{}; 
        namespace Wkupen1ValC{
            constexpr Register::FieldValue<decltype(wkupen1),Wkupen1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen1),Wkupen1Val::enable> enable{};
        }
        ///Wake Up Input Enable 2
        enum class Wkupen2Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Wkupen2Val> wkupen2{}; 
        namespace Wkupen2ValC{
            constexpr Register::FieldValue<decltype(wkupen2),Wkupen2Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen2),Wkupen2Val::enable> enable{};
        }
        ///Wake Up Input Enable 3
        enum class Wkupen3Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Wkupen3Val> wkupen3{}; 
        namespace Wkupen3ValC{
            constexpr Register::FieldValue<decltype(wkupen3),Wkupen3Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen3),Wkupen3Val::enable> enable{};
        }
        ///Wake Up Input Enable 4
        enum class Wkupen4Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Wkupen4Val> wkupen4{}; 
        namespace Wkupen4ValC{
            constexpr Register::FieldValue<decltype(wkupen4),Wkupen4Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen4),Wkupen4Val::enable> enable{};
        }
        ///Wake Up Input Enable 5
        enum class Wkupen5Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wkupen5Val> wkupen5{}; 
        namespace Wkupen5ValC{
            constexpr Register::FieldValue<decltype(wkupen5),Wkupen5Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen5),Wkupen5Val::enable> enable{};
        }
        ///Wake Up Input Enable 6
        enum class Wkupen6Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Wkupen6Val> wkupen6{}; 
        namespace Wkupen6ValC{
            constexpr Register::FieldValue<decltype(wkupen6),Wkupen6Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen6),Wkupen6Val::enable> enable{};
        }
        ///Wake Up Input Enable 7
        enum class Wkupen7Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Wkupen7Val> wkupen7{}; 
        namespace Wkupen7ValC{
            constexpr Register::FieldValue<decltype(wkupen7),Wkupen7Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen7),Wkupen7Val::enable> enable{};
        }
        ///Wake Up Input Enable 8
        enum class Wkupen8Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Wkupen8Val> wkupen8{}; 
        namespace Wkupen8ValC{
            constexpr Register::FieldValue<decltype(wkupen8),Wkupen8Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen8),Wkupen8Val::enable> enable{};
        }
        ///Wake Up Input Enable 9
        enum class Wkupen9Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wkupen9Val> wkupen9{}; 
        namespace Wkupen9ValC{
            constexpr Register::FieldValue<decltype(wkupen9),Wkupen9Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen9),Wkupen9Val::enable> enable{};
        }
        ///Wake Up Input Enable 10
        enum class Wkupen10Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Wkupen10Val> wkupen10{}; 
        namespace Wkupen10ValC{
            constexpr Register::FieldValue<decltype(wkupen10),Wkupen10Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen10),Wkupen10Val::enable> enable{};
        }
        ///Wake Up Input Enable 11
        enum class Wkupen11Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Wkupen11Val> wkupen11{}; 
        namespace Wkupen11ValC{
            constexpr Register::FieldValue<decltype(wkupen11),Wkupen11Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen11),Wkupen11Val::enable> enable{};
        }
        ///Wake Up Input Enable 12
        enum class Wkupen12Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Wkupen12Val> wkupen12{}; 
        namespace Wkupen12ValC{
            constexpr Register::FieldValue<decltype(wkupen12),Wkupen12Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen12),Wkupen12Val::enable> enable{};
        }
        ///Wake Up Input Enable 13
        enum class Wkupen13Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wkupen13Val> wkupen13{}; 
        namespace Wkupen13ValC{
            constexpr Register::FieldValue<decltype(wkupen13),Wkupen13Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen13),Wkupen13Val::enable> enable{};
        }
        ///Wake Up Input Enable 14
        enum class Wkupen14Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Wkupen14Val> wkupen14{}; 
        namespace Wkupen14ValC{
            constexpr Register::FieldValue<decltype(wkupen14),Wkupen14Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen14),Wkupen14Val::enable> enable{};
        }
        ///Wake Up Input Enable 15
        enum class Wkupen15Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Wkupen15Val> wkupen15{}; 
        namespace Wkupen15ValC{
            constexpr Register::FieldValue<decltype(wkupen15),Wkupen15Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen15),Wkupen15Val::enable> enable{};
        }
        ///Wake Up Input Type 0
        enum class Wkupt0Val {
            highToLow=0x00000000,     ///<a high to low level transition for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            lowToHigh=0x00000001,     ///<a low to high level transition for a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Wkupt0Val> wkupt0{}; 
        namespace Wkupt0ValC{
            constexpr Register::FieldValue<decltype(wkupt0),Wkupt0Val::highToLow> highToLow{};
            constexpr Register::FieldValue<decltype(wkupt0),Wkupt0Val::lowToHigh> lowToHigh{};
        }
        ///Wake Up Input Type 1
        enum class Wkupt1Val {
            highToLow=0x00000000,     ///<a high to low level transition for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            lowToHigh=0x00000001,     ///<a low to high level transition for a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wkupt1Val> wkupt1{}; 
        namespace Wkupt1ValC{
            constexpr Register::FieldValue<decltype(wkupt1),Wkupt1Val::highToLow> highToLow{};
            constexpr Register::FieldValue<decltype(wkupt1),Wkupt1Val::lowToHigh> lowToHigh{};
        }
        ///Wake Up Input Type 2
        enum class Wkupt2Val {
            highToLow=0x00000000,     ///<a high to low level transition for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            lowToHigh=0x00000001,     ///<a low to high level transition for a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Wkupt2Val> wkupt2{}; 
        namespace Wkupt2ValC{
            constexpr Register::FieldValue<decltype(wkupt2),Wkupt2Val::highToLow> highToLow{};
            constexpr Register::FieldValue<decltype(wkupt2),Wkupt2Val::lowToHigh> lowToHigh{};
        }
        ///Wake Up Input Type 3
        enum class Wkupt3Val {
            highToLow=0x00000000,     ///<a high to low level transition for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            lowToHigh=0x00000001,     ///<a low to high level transition for a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Wkupt3Val> wkupt3{}; 
        namespace Wkupt3ValC{
            constexpr Register::FieldValue<decltype(wkupt3),Wkupt3Val::highToLow> highToLow{};
            constexpr Register::FieldValue<decltype(wkupt3),Wkupt3Val::lowToHigh> lowToHigh{};
        }
        ///Wake Up Input Type 4
        enum class Wkupt4Val {
            highToLow=0x00000000,     ///<a high to low level transition for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            lowToHigh=0x00000001,     ///<a low to high level transition for a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Wkupt4Val> wkupt4{}; 
        namespace Wkupt4ValC{
            constexpr Register::FieldValue<decltype(wkupt4),Wkupt4Val::highToLow> highToLow{};
            constexpr Register::FieldValue<decltype(wkupt4),Wkupt4Val::lowToHigh> lowToHigh{};
        }
        ///Wake Up Input Type 5
        enum class Wkupt5Val {
            highToLow=0x00000000,     ///<a high to low level transition for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            lowToHigh=0x00000001,     ///<a low to high level transition for a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wkupt5Val> wkupt5{}; 
        namespace Wkupt5ValC{
            constexpr Register::FieldValue<decltype(wkupt5),Wkupt5Val::highToLow> highToLow{};
            constexpr Register::FieldValue<decltype(wkupt5),Wkupt5Val::lowToHigh> lowToHigh{};
        }
        ///Wake Up Input Type 6
        enum class Wkupt6Val {
            highToLow=0x00000000,     ///<a high to low level transition for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            lowToHigh=0x00000001,     ///<a low to high level transition for a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Wkupt6Val> wkupt6{}; 
        namespace Wkupt6ValC{
            constexpr Register::FieldValue<decltype(wkupt6),Wkupt6Val::highToLow> highToLow{};
            constexpr Register::FieldValue<decltype(wkupt6),Wkupt6Val::lowToHigh> lowToHigh{};
        }
        ///Wake Up Input Type 7
        enum class Wkupt7Val {
            highToLow=0x00000000,     ///<a high to low level transition for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            lowToHigh=0x00000001,     ///<a low to high level transition for a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Wkupt7Val> wkupt7{}; 
        namespace Wkupt7ValC{
            constexpr Register::FieldValue<decltype(wkupt7),Wkupt7Val::highToLow> highToLow{};
            constexpr Register::FieldValue<decltype(wkupt7),Wkupt7Val::lowToHigh> lowToHigh{};
        }
        ///Wake Up Input Type 8
        enum class Wkupt8Val {
            highToLow=0x00000000,     ///<a high to low level transition for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            lowToHigh=0x00000001,     ///<a low to high level transition for a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Wkupt8Val> wkupt8{}; 
        namespace Wkupt8ValC{
            constexpr Register::FieldValue<decltype(wkupt8),Wkupt8Val::highToLow> highToLow{};
            constexpr Register::FieldValue<decltype(wkupt8),Wkupt8Val::lowToHigh> lowToHigh{};
        }
        ///Wake Up Input Type 9
        enum class Wkupt9Val {
            highToLow=0x00000000,     ///<a high to low level transition for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            lowToHigh=0x00000001,     ///<a low to high level transition for a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wkupt9Val> wkupt9{}; 
        namespace Wkupt9ValC{
            constexpr Register::FieldValue<decltype(wkupt9),Wkupt9Val::highToLow> highToLow{};
            constexpr Register::FieldValue<decltype(wkupt9),Wkupt9Val::lowToHigh> lowToHigh{};
        }
        ///Wake Up Input Type 10
        enum class Wkupt10Val {
            highToLow=0x00000000,     ///<a high to low level transition for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            lowToHigh=0x00000001,     ///<a low to high level transition for a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Wkupt10Val> wkupt10{}; 
        namespace Wkupt10ValC{
            constexpr Register::FieldValue<decltype(wkupt10),Wkupt10Val::highToLow> highToLow{};
            constexpr Register::FieldValue<decltype(wkupt10),Wkupt10Val::lowToHigh> lowToHigh{};
        }
        ///Wake Up Input Type 11
        enum class Wkupt11Val {
            highToLow=0x00000000,     ///<a high to low level transition for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            lowToHigh=0x00000001,     ///<a low to high level transition for a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Wkupt11Val> wkupt11{}; 
        namespace Wkupt11ValC{
            constexpr Register::FieldValue<decltype(wkupt11),Wkupt11Val::highToLow> highToLow{};
            constexpr Register::FieldValue<decltype(wkupt11),Wkupt11Val::lowToHigh> lowToHigh{};
        }
        ///Wake Up Input Type 12
        enum class Wkupt12Val {
            highToLow=0x00000000,     ///<a high to low level transition for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            lowToHigh=0x00000001,     ///<a low to high level transition for a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Wkupt12Val> wkupt12{}; 
        namespace Wkupt12ValC{
            constexpr Register::FieldValue<decltype(wkupt12),Wkupt12Val::highToLow> highToLow{};
            constexpr Register::FieldValue<decltype(wkupt12),Wkupt12Val::lowToHigh> lowToHigh{};
        }
        ///Wake Up Input Type 13
        enum class Wkupt13Val {
            highToLow=0x00000000,     ///<a high to low level transition for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            lowToHigh=0x00000001,     ///<a low to high level transition for a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wkupt13Val> wkupt13{}; 
        namespace Wkupt13ValC{
            constexpr Register::FieldValue<decltype(wkupt13),Wkupt13Val::highToLow> highToLow{};
            constexpr Register::FieldValue<decltype(wkupt13),Wkupt13Val::lowToHigh> lowToHigh{};
        }
        ///Wake Up Input Type 14
        enum class Wkupt14Val {
            highToLow=0x00000000,     ///<a high to low level transition for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            lowToHigh=0x00000001,     ///<a low to high level transition for a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Wkupt14Val> wkupt14{}; 
        namespace Wkupt14ValC{
            constexpr Register::FieldValue<decltype(wkupt14),Wkupt14Val::highToLow> highToLow{};
            constexpr Register::FieldValue<decltype(wkupt14),Wkupt14Val::lowToHigh> lowToHigh{};
        }
        ///Wake Up Input Type 15
        enum class Wkupt15Val {
            highToLow=0x00000000,     ///<a high to low level transition for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            lowToHigh=0x00000001,     ///<a low to high level transition for a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Wkupt15Val> wkupt15{}; 
        namespace Wkupt15ValC{
            constexpr Register::FieldValue<decltype(wkupt15),Wkupt15Val::highToLow> highToLow{};
            constexpr Register::FieldValue<decltype(wkupt15),Wkupt15Val::lowToHigh> lowToHigh{};
        }
    }
    namespace SupcSr{    ///<Supply Controller Status Register
        using Addr = Register::Address<0x400e1424,0x0000ff01,0,unsigned>;
        ///WKUP Wake Up Status
        enum class WkupsVal {
            no=0x00000000,     ///<no wake up due to the assertion of the WKUP pins has occurred since the last read of SUPC_SR.
            present=0x00000001,     ///<at least one wake up due to the assertion of the WKUP pins has occurred since the last read of SUPC_SR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WkupsVal> wkups{}; 
        namespace WkupsValC{
            constexpr Register::FieldValue<decltype(wkups),WkupsVal::no> no{};
            constexpr Register::FieldValue<decltype(wkups),WkupsVal::present> present{};
        }
        ///Supply Monitor Detection Wake Up Status
        enum class SmwsVal {
            no=0x00000000,     ///<no wake up due to a supply monitor detection has occurred since the last read of SUPC_SR.
            present=0x00000001,     ///<at least one wake up due to a supply monitor detection has occurred since the last read of SUPC_SR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SmwsVal> smws{}; 
        namespace SmwsValC{
            constexpr Register::FieldValue<decltype(smws),SmwsVal::no> no{};
            constexpr Register::FieldValue<decltype(smws),SmwsVal::present> present{};
        }
        ///Brownout Detector Reset Status
        enum class BodrstsVal {
            no=0x00000000,     ///<no core brownout rising edge event has been detected since the last read of the SUPC_SR.
            present=0x00000001,     ///<at least one brownout output rising edge event has been detected since the last read of the SUPC_SR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodrstsVal> bodrsts{}; 
        namespace BodrstsValC{
            constexpr Register::FieldValue<decltype(bodrsts),BodrstsVal::no> no{};
            constexpr Register::FieldValue<decltype(bodrsts),BodrstsVal::present> present{};
        }
        ///Supply Monitor Reset Status
        enum class SmrstsVal {
            no=0x00000000,     ///<no supply monitor detection has generated a core reset since the last read of the SUPC_SR.
            present=0x00000001,     ///<at least one supply monitor detection has generated a core reset since the last read of the SUPC_SR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SmrstsVal> smrsts{}; 
        namespace SmrstsValC{
            constexpr Register::FieldValue<decltype(smrsts),SmrstsVal::no> no{};
            constexpr Register::FieldValue<decltype(smrsts),SmrstsVal::present> present{};
        }
        ///Supply Monitor Status
        enum class SmsVal {
            no=0x00000000,     ///<no supply monitor detection since the last read of SUPC_SR.
            present=0x00000001,     ///<at least one supply monitor detection since the last read of SUPC_SR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SmsVal> sms{}; 
        namespace SmsValC{
            constexpr Register::FieldValue<decltype(sms),SmsVal::no> no{};
            constexpr Register::FieldValue<decltype(sms),SmsVal::present> present{};
        }
        ///Supply Monitor Output Status
        enum class SmosVal {
            high=0x00000000,     ///<the supply monitor detected VDDIO higher than its threshold at its last measurement.
            low=0x00000001,     ///<the supply monitor detected VDDIO lower than its threshold at its last measurement.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SmosVal> smos{}; 
        namespace SmosValC{
            constexpr Register::FieldValue<decltype(smos),SmosVal::high> high{};
            constexpr Register::FieldValue<decltype(smos),SmosVal::low> low{};
        }
        ///32-kHz Oscillator Selection Status
        enum class OscselVal {
            rc=0x00000000,     ///<the slow clock, SLCK is generated by the embedded 32-kHz RC oscillator.
            cryst=0x00000001,     ///<the slow clock, SLCK is generated by the 32-kHz crystal oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,OscselVal> oscsel{}; 
        namespace OscselValC{
            constexpr Register::FieldValue<decltype(oscsel),OscselVal::rc> rc{};
            constexpr Register::FieldValue<decltype(oscsel),OscselVal::cryst> cryst{};
        }
        ///WKUP Input Status 0
        enum class Wkupis0Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Wkupis0Val> wkupis0{}; 
        namespace Wkupis0ValC{
            constexpr Register::FieldValue<decltype(wkupis0),Wkupis0Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis0),Wkupis0Val::en> en{};
        }
        ///WKUP Input Status 1
        enum class Wkupis1Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wkupis1Val> wkupis1{}; 
        namespace Wkupis1ValC{
            constexpr Register::FieldValue<decltype(wkupis1),Wkupis1Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis1),Wkupis1Val::en> en{};
        }
        ///WKUP Input Status 2
        enum class Wkupis2Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Wkupis2Val> wkupis2{}; 
        namespace Wkupis2ValC{
            constexpr Register::FieldValue<decltype(wkupis2),Wkupis2Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis2),Wkupis2Val::en> en{};
        }
        ///WKUP Input Status 3
        enum class Wkupis3Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Wkupis3Val> wkupis3{}; 
        namespace Wkupis3ValC{
            constexpr Register::FieldValue<decltype(wkupis3),Wkupis3Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis3),Wkupis3Val::en> en{};
        }
        ///WKUP Input Status 4
        enum class Wkupis4Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Wkupis4Val> wkupis4{}; 
        namespace Wkupis4ValC{
            constexpr Register::FieldValue<decltype(wkupis4),Wkupis4Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis4),Wkupis4Val::en> en{};
        }
        ///WKUP Input Status 5
        enum class Wkupis5Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wkupis5Val> wkupis5{}; 
        namespace Wkupis5ValC{
            constexpr Register::FieldValue<decltype(wkupis5),Wkupis5Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis5),Wkupis5Val::en> en{};
        }
        ///WKUP Input Status 6
        enum class Wkupis6Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Wkupis6Val> wkupis6{}; 
        namespace Wkupis6ValC{
            constexpr Register::FieldValue<decltype(wkupis6),Wkupis6Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis6),Wkupis6Val::en> en{};
        }
        ///WKUP Input Status 7
        enum class Wkupis7Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Wkupis7Val> wkupis7{}; 
        namespace Wkupis7ValC{
            constexpr Register::FieldValue<decltype(wkupis7),Wkupis7Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis7),Wkupis7Val::en> en{};
        }
        ///WKUP Input Status 8
        enum class Wkupis8Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Wkupis8Val> wkupis8{}; 
        namespace Wkupis8ValC{
            constexpr Register::FieldValue<decltype(wkupis8),Wkupis8Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis8),Wkupis8Val::en> en{};
        }
        ///WKUP Input Status 9
        enum class Wkupis9Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wkupis9Val> wkupis9{}; 
        namespace Wkupis9ValC{
            constexpr Register::FieldValue<decltype(wkupis9),Wkupis9Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis9),Wkupis9Val::en> en{};
        }
        ///WKUP Input Status 10
        enum class Wkupis10Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Wkupis10Val> wkupis10{}; 
        namespace Wkupis10ValC{
            constexpr Register::FieldValue<decltype(wkupis10),Wkupis10Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis10),Wkupis10Val::en> en{};
        }
        ///WKUP Input Status 11
        enum class Wkupis11Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Wkupis11Val> wkupis11{}; 
        namespace Wkupis11ValC{
            constexpr Register::FieldValue<decltype(wkupis11),Wkupis11Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis11),Wkupis11Val::en> en{};
        }
        ///WKUP Input Status 12
        enum class Wkupis12Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Wkupis12Val> wkupis12{}; 
        namespace Wkupis12ValC{
            constexpr Register::FieldValue<decltype(wkupis12),Wkupis12Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis12),Wkupis12Val::en> en{};
        }
        ///WKUP Input Status 13
        enum class Wkupis13Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wkupis13Val> wkupis13{}; 
        namespace Wkupis13ValC{
            constexpr Register::FieldValue<decltype(wkupis13),Wkupis13Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis13),Wkupis13Val::en> en{};
        }
        ///WKUP Input Status 14
        enum class Wkupis14Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Wkupis14Val> wkupis14{}; 
        namespace Wkupis14ValC{
            constexpr Register::FieldValue<decltype(wkupis14),Wkupis14Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis14),Wkupis14Val::en> en{};
        }
        ///WKUP Input Status 15
        enum class Wkupis15Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Wkupis15Val> wkupis15{}; 
        namespace Wkupis15ValC{
            constexpr Register::FieldValue<decltype(wkupis15),Wkupis15Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis15),Wkupis15Val::en> en{};
        }
    }
}
