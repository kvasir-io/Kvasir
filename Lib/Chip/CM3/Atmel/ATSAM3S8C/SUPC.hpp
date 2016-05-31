#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Supply Controller
    namespace SupcCr{    ///<Supply Controller Control Register
        using Addr = Register::Address<0x400e1410,0x00fffff3,0x00000000,unsigned>;
        ///Voltage Regulator Off
        enum class VroffVal {
            noEffect=0x00000000,     ///<no effect.
            stopVreg=0x00000001,     ///<if KEY is correct, asserts vddcore_nreset and stops the voltage regulator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,VroffVal> vroff{}; 
        namespace VroffValC{
            constexpr Register::FieldValue<decltype(vroff)::Type,VroffVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(vroff)::Type,VroffVal::stopVreg> stopVreg{};
        }
        ///Crystal Oscillator Select
        enum class XtalselVal {
            noEffect=0x00000000,     ///<no effect.
            crystalSel=0x00000001,     ///<if KEY is correct, switches the slow clock on the crystal oscillator output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,XtalselVal> xtalsel{}; 
        namespace XtalselValC{
            constexpr Register::FieldValue<decltype(xtalsel)::Type,XtalselVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(xtalsel)::Type,XtalselVal::crystalSel> crystalSel{};
        }
        ///Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> key{}; 
    }
    namespace SupcSmmr{    ///<Supply Controller Supply Monitor Mode Register
        using Addr = Register::Address<0x400e1414,0xffffc8f0,0x00000000,unsigned>;
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
            constexpr Register::FieldValue<decltype(smth)::Type,SmthVal::v19v> v19v{};
            constexpr Register::FieldValue<decltype(smth)::Type,SmthVal::v20v> v20v{};
            constexpr Register::FieldValue<decltype(smth)::Type,SmthVal::v21v> v21v{};
            constexpr Register::FieldValue<decltype(smth)::Type,SmthVal::v22v> v22v{};
            constexpr Register::FieldValue<decltype(smth)::Type,SmthVal::v23v> v23v{};
            constexpr Register::FieldValue<decltype(smth)::Type,SmthVal::v24v> v24v{};
            constexpr Register::FieldValue<decltype(smth)::Type,SmthVal::v25v> v25v{};
            constexpr Register::FieldValue<decltype(smth)::Type,SmthVal::v26v> v26v{};
            constexpr Register::FieldValue<decltype(smth)::Type,SmthVal::v27v> v27v{};
            constexpr Register::FieldValue<decltype(smth)::Type,SmthVal::v28v> v28v{};
            constexpr Register::FieldValue<decltype(smth)::Type,SmthVal::v29v> v29v{};
            constexpr Register::FieldValue<decltype(smth)::Type,SmthVal::v30v> v30v{};
            constexpr Register::FieldValue<decltype(smth)::Type,SmthVal::v31v> v31v{};
            constexpr Register::FieldValue<decltype(smth)::Type,SmthVal::v32v> v32v{};
            constexpr Register::FieldValue<decltype(smth)::Type,SmthVal::v33v> v33v{};
            constexpr Register::FieldValue<decltype(smth)::Type,SmthVal::v34v> v34v{};
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
            constexpr Register::FieldValue<decltype(smsmpl)::Type,SmsmplVal::smd> smd{};
            constexpr Register::FieldValue<decltype(smsmpl)::Type,SmsmplVal::csm> csm{};
            constexpr Register::FieldValue<decltype(smsmpl)::Type,SmsmplVal::v32slck> v32slck{};
            constexpr Register::FieldValue<decltype(smsmpl)::Type,SmsmplVal::v256slck> v256slck{};
            constexpr Register::FieldValue<decltype(smsmpl)::Type,SmsmplVal::v2048slck> v2048slck{};
        }
        ///Supply Monitor Reset Enable
        enum class SmrstenVal {
            notEnable=0x00000000,     ///<the core reset signal "vddcore_nreset" is not affected when a supply monitor detection occurs.
            enable=0x00000001,     ///<the core reset signal, vddcore_nreset is asserted when a supply monitor detection occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,SmrstenVal> smrsten{}; 
        namespace SmrstenValC{
            constexpr Register::FieldValue<decltype(smrsten)::Type,SmrstenVal::notEnable> notEnable{};
            constexpr Register::FieldValue<decltype(smrsten)::Type,SmrstenVal::enable> enable{};
        }
        ///Supply Monitor Interrupt Enable
        enum class SmienVal {
            notEnable=0x00000000,     ///<the SUPC interrupt signal is not affected when a supply monitor detection occurs.
            enable=0x00000001,     ///<the SUPC interrupt signal is asserted when a supply monitor detection occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,SmienVal> smien{}; 
        namespace SmienValC{
            constexpr Register::FieldValue<decltype(smien)::Type,SmienVal::notEnable> notEnable{};
            constexpr Register::FieldValue<decltype(smien)::Type,SmienVal::enable> enable{};
        }
    }
    namespace SupcMr{    ///<Supply Controller Mode Register
        using Addr = Register::Address<0x400e1418,0x00ef8fff,0x00000000,unsigned>;
        ///Brownout Detector Reset Enable
        enum class BodrstenVal {
            notEnable=0x00000000,     ///<the core reset signal "vddcore_nreset" is not affected when a brownout detection occurs.
            enable=0x00000001,     ///<the core reset signal, vddcore_nreset is asserted when a brownout detection occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,BodrstenVal> bodrsten{}; 
        namespace BodrstenValC{
            constexpr Register::FieldValue<decltype(bodrsten)::Type,BodrstenVal::notEnable> notEnable{};
            constexpr Register::FieldValue<decltype(bodrsten)::Type,BodrstenVal::enable> enable{};
        }
        ///Brownout Detector Disable
        enum class BoddisVal {
            enable=0x00000000,     ///<the core brownout detector is enabled.
            disable=0x00000001,     ///<the core brownout detector is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,BoddisVal> boddis{}; 
        namespace BoddisValC{
            constexpr Register::FieldValue<decltype(boddis)::Type,BoddisVal::enable> enable{};
            constexpr Register::FieldValue<decltype(boddis)::Type,BoddisVal::disable> disable{};
        }
        ///Voltage Regulator enable
        enum class OnregVal {
            onregUnused=0x00000000,     ///<Voltage Regulator is not used
            onregUsed=0x00000001,     ///<Voltage Regulator is used
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,OnregVal> onreg{}; 
        namespace OnregValC{
            constexpr Register::FieldValue<decltype(onreg)::Type,OnregVal::onregUnused> onregUnused{};
            constexpr Register::FieldValue<decltype(onreg)::Type,OnregVal::onregUsed> onregUsed{};
        }
        ///Oscillator Bypass
        enum class OscbypassVal {
            noEffect=0x00000000,     ///<no effect. Clock selection depends on XTALSEL value.
            bypass=0x00000001,     ///<the 32-KHz XTAL oscillator is selected and is put in bypass mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OscbypassVal> oscbypass{}; 
        namespace OscbypassValC{
            constexpr Register::FieldValue<decltype(oscbypass)::Type,OscbypassVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(oscbypass)::Type,OscbypassVal::bypass> bypass{};
        }
        ///Password Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace SupcWumr{    ///<Supply Controller Wake Up Mode Register
        using Addr = Register::Address<0x400e141c,0xfff88f11,0x00000000,unsigned>;
        ///Supply Monitor Wake Up Enable
        enum class SmenVal {
            notEnable=0x00000000,     ///<the supply monitor detection has no wake up effect.
            enable=0x00000001,     ///<the supply monitor detection forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SmenVal> smen{}; 
        namespace SmenValC{
            constexpr Register::FieldValue<decltype(smen)::Type,SmenVal::notEnable> notEnable{};
            constexpr Register::FieldValue<decltype(smen)::Type,SmenVal::enable> enable{};
        }
        ///Real Time Timer Wake Up Enable
        enum class RttenVal {
            notEnable=0x00000000,     ///<the RTT alarm signal has no wake up effect.
            enable=0x00000001,     ///<the RTT alarm signal forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RttenVal> rtten{}; 
        namespace RttenValC{
            constexpr Register::FieldValue<decltype(rtten)::Type,RttenVal::notEnable> notEnable{};
            constexpr Register::FieldValue<decltype(rtten)::Type,RttenVal::enable> enable{};
        }
        ///Real Time Clock Wake Up Enable
        enum class RtcenVal {
            notEnable=0x00000000,     ///<the RTC alarm signal has no wake up effect.
            enable=0x00000001,     ///<the RTC alarm signal forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RtcenVal> rtcen{}; 
        namespace RtcenValC{
            constexpr Register::FieldValue<decltype(rtcen)::Type,RtcenVal::notEnable> notEnable{};
            constexpr Register::FieldValue<decltype(rtcen)::Type,RtcenVal::enable> enable{};
        }
        ///Low power Debouncer ENable WKUP0
        enum class Lpdbcen0Val {
            notEnable=0x00000000,     ///<the WKUP0 input pin is not connected with low power debouncer.
            enable=0x00000001,     ///<the WKUP0 input pin is connected with low power debouncer and can force a core wake up.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Lpdbcen0Val> lpdbcen0{}; 
        namespace Lpdbcen0ValC{
            constexpr Register::FieldValue<decltype(lpdbcen0)::Type,Lpdbcen0Val::notEnable> notEnable{};
            constexpr Register::FieldValue<decltype(lpdbcen0)::Type,Lpdbcen0Val::enable> enable{};
        }
        ///Low power Debouncer ENable WKUP1
        enum class Lpdbcen1Val {
            notEnable=0x00000000,     ///<the WKUP1input pin is not connected with low power debouncer.
            enable=0x00000001,     ///<the WKUP1 input pin is connected with low power debouncer and can force a core wake up.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Lpdbcen1Val> lpdbcen1{}; 
        namespace Lpdbcen1ValC{
            constexpr Register::FieldValue<decltype(lpdbcen1)::Type,Lpdbcen1Val::notEnable> notEnable{};
            constexpr Register::FieldValue<decltype(lpdbcen1)::Type,Lpdbcen1Val::enable> enable{};
        }
        ///Low power Debouncer Clear
        enum class LpdbcclrVal {
            notEnable=0x00000000,     ///<a low power debounce event does not create an immediate clear on first half GPBR registers.
            enable=0x00000001,     ///<a low power debounce event on WKUP0 or WKUP1 generates an immediate clear on first half GPBR registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LpdbcclrVal> lpdbcclr{}; 
        namespace LpdbcclrValC{
            constexpr Register::FieldValue<decltype(lpdbcclr)::Type,LpdbcclrVal::notEnable> notEnable{};
            constexpr Register::FieldValue<decltype(lpdbcclr)::Type,LpdbcclrVal::enable> enable{};
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
            constexpr Register::FieldValue<decltype(wkupdbc)::Type,WkupdbcVal::immediate> immediate{};
            constexpr Register::FieldValue<decltype(wkupdbc)::Type,WkupdbcVal::v3Sclk> v3Sclk{};
            constexpr Register::FieldValue<decltype(wkupdbc)::Type,WkupdbcVal::v32Sclk> v32Sclk{};
            constexpr Register::FieldValue<decltype(wkupdbc)::Type,WkupdbcVal::v512Sclk> v512Sclk{};
            constexpr Register::FieldValue<decltype(wkupdbc)::Type,WkupdbcVal::v4096Sclk> v4096Sclk{};
            constexpr Register::FieldValue<decltype(wkupdbc)::Type,WkupdbcVal::v32768Sclk> v32768Sclk{};
        }
        ///Low Power DeBounCer Period
        enum class LpdbcVal {
            disable=0x00000000,     ///<Disable the low power debouncer.
            v2Rtcout0=0x00000001,     ///<WKUP0/1 in its active state for at least 2 RTCOUT0 periods
            v3Rtcout0=0x00000002,     ///<WKUP0/1 in its active state for at least 3 RTCOUT0 periods
            v4Rtcout0=0x00000003,     ///<WKUP0/1 in its active state for at least 4 RTCOUT0 periods
            v5Rtcout0=0x00000004,     ///<WKUP0/1 in its active state for at least 5 RTCOUT0 periods
            v6Rtcout0=0x00000005,     ///<WKUP0/1 in its active state for at least 6 RTCOUT0 periods
            v7Rtcout0=0x00000006,     ///<WKUP0/1 in its active state for at least 7 RTCOUT0 periods
            v8Rtcout0=0x00000007,     ///<WKUP0/1 in its active state for at least 8 RTCOUT0 periods
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,LpdbcVal> lpdbc{}; 
        namespace LpdbcValC{
            constexpr Register::FieldValue<decltype(lpdbc)::Type,LpdbcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lpdbc)::Type,LpdbcVal::v2Rtcout0> v2Rtcout0{};
            constexpr Register::FieldValue<decltype(lpdbc)::Type,LpdbcVal::v3Rtcout0> v3Rtcout0{};
            constexpr Register::FieldValue<decltype(lpdbc)::Type,LpdbcVal::v4Rtcout0> v4Rtcout0{};
            constexpr Register::FieldValue<decltype(lpdbc)::Type,LpdbcVal::v5Rtcout0> v5Rtcout0{};
            constexpr Register::FieldValue<decltype(lpdbc)::Type,LpdbcVal::v6Rtcout0> v6Rtcout0{};
            constexpr Register::FieldValue<decltype(lpdbc)::Type,LpdbcVal::v7Rtcout0> v7Rtcout0{};
            constexpr Register::FieldValue<decltype(lpdbc)::Type,LpdbcVal::v8Rtcout0> v8Rtcout0{};
        }
    }
    namespace SupcWuir{    ///<Supply Controller Wake Up Inputs Register
        using Addr = Register::Address<0x400e1420,0x00000000,0x00000000,unsigned>;
        ///Wake Up Input Enable 0
        enum class Wkupen0Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Wkupen0Val> wkupen0{}; 
        namespace Wkupen0ValC{
            constexpr Register::FieldValue<decltype(wkupen0)::Type,Wkupen0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen0)::Type,Wkupen0Val::enable> enable{};
        }
        ///Wake Up Input Enable 1
        enum class Wkupen1Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wkupen1Val> wkupen1{}; 
        namespace Wkupen1ValC{
            constexpr Register::FieldValue<decltype(wkupen1)::Type,Wkupen1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen1)::Type,Wkupen1Val::enable> enable{};
        }
        ///Wake Up Input Enable 2
        enum class Wkupen2Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Wkupen2Val> wkupen2{}; 
        namespace Wkupen2ValC{
            constexpr Register::FieldValue<decltype(wkupen2)::Type,Wkupen2Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen2)::Type,Wkupen2Val::enable> enable{};
        }
        ///Wake Up Input Enable 3
        enum class Wkupen3Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Wkupen3Val> wkupen3{}; 
        namespace Wkupen3ValC{
            constexpr Register::FieldValue<decltype(wkupen3)::Type,Wkupen3Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen3)::Type,Wkupen3Val::enable> enable{};
        }
        ///Wake Up Input Enable 4
        enum class Wkupen4Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Wkupen4Val> wkupen4{}; 
        namespace Wkupen4ValC{
            constexpr Register::FieldValue<decltype(wkupen4)::Type,Wkupen4Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen4)::Type,Wkupen4Val::enable> enable{};
        }
        ///Wake Up Input Enable 5
        enum class Wkupen5Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wkupen5Val> wkupen5{}; 
        namespace Wkupen5ValC{
            constexpr Register::FieldValue<decltype(wkupen5)::Type,Wkupen5Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen5)::Type,Wkupen5Val::enable> enable{};
        }
        ///Wake Up Input Enable 6
        enum class Wkupen6Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Wkupen6Val> wkupen6{}; 
        namespace Wkupen6ValC{
            constexpr Register::FieldValue<decltype(wkupen6)::Type,Wkupen6Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen6)::Type,Wkupen6Val::enable> enable{};
        }
        ///Wake Up Input Enable 7
        enum class Wkupen7Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Wkupen7Val> wkupen7{}; 
        namespace Wkupen7ValC{
            constexpr Register::FieldValue<decltype(wkupen7)::Type,Wkupen7Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen7)::Type,Wkupen7Val::enable> enable{};
        }
        ///Wake Up Input Enable 8
        enum class Wkupen8Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Wkupen8Val> wkupen8{}; 
        namespace Wkupen8ValC{
            constexpr Register::FieldValue<decltype(wkupen8)::Type,Wkupen8Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen8)::Type,Wkupen8Val::enable> enable{};
        }
        ///Wake Up Input Enable 9
        enum class Wkupen9Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Wkupen9Val> wkupen9{}; 
        namespace Wkupen9ValC{
            constexpr Register::FieldValue<decltype(wkupen9)::Type,Wkupen9Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen9)::Type,Wkupen9Val::enable> enable{};
        }
        ///Wake Up Input Enable 10
        enum class Wkupen10Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Wkupen10Val> wkupen10{}; 
        namespace Wkupen10ValC{
            constexpr Register::FieldValue<decltype(wkupen10)::Type,Wkupen10Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen10)::Type,Wkupen10Val::enable> enable{};
        }
        ///Wake Up Input Enable 11
        enum class Wkupen11Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Wkupen11Val> wkupen11{}; 
        namespace Wkupen11ValC{
            constexpr Register::FieldValue<decltype(wkupen11)::Type,Wkupen11Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen11)::Type,Wkupen11Val::enable> enable{};
        }
        ///Wake Up Input Enable 12
        enum class Wkupen12Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Wkupen12Val> wkupen12{}; 
        namespace Wkupen12ValC{
            constexpr Register::FieldValue<decltype(wkupen12)::Type,Wkupen12Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen12)::Type,Wkupen12Val::enable> enable{};
        }
        ///Wake Up Input Enable 13
        enum class Wkupen13Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Wkupen13Val> wkupen13{}; 
        namespace Wkupen13ValC{
            constexpr Register::FieldValue<decltype(wkupen13)::Type,Wkupen13Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen13)::Type,Wkupen13Val::enable> enable{};
        }
        ///Wake Up Input Enable 14
        enum class Wkupen14Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Wkupen14Val> wkupen14{}; 
        namespace Wkupen14ValC{
            constexpr Register::FieldValue<decltype(wkupen14)::Type,Wkupen14Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen14)::Type,Wkupen14Val::enable> enable{};
        }
        ///Wake Up Input Enable 15
        enum class Wkupen15Val {
            disable=0x00000000,     ///<the corresponding wake-up input has no wake up effect.
            enable=0x00000001,     ///<the corresponding wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Wkupen15Val> wkupen15{}; 
        namespace Wkupen15ValC{
            constexpr Register::FieldValue<decltype(wkupen15)::Type,Wkupen15Val::disable> disable{};
            constexpr Register::FieldValue<decltype(wkupen15)::Type,Wkupen15Val::enable> enable{};
        }
        ///Wake Up Input Type 0
        enum class Wkupt0Val {
            low=0x00000000,     ///<a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            high=0x00000001,     ///<a high levelfor a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Wkupt0Val> wkupt0{}; 
        namespace Wkupt0ValC{
            constexpr Register::FieldValue<decltype(wkupt0)::Type,Wkupt0Val::low> low{};
            constexpr Register::FieldValue<decltype(wkupt0)::Type,Wkupt0Val::high> high{};
        }
        ///Wake Up Input Type 1
        enum class Wkupt1Val {
            low=0x00000000,     ///<a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            high=0x00000001,     ///<a high levelfor a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Wkupt1Val> wkupt1{}; 
        namespace Wkupt1ValC{
            constexpr Register::FieldValue<decltype(wkupt1)::Type,Wkupt1Val::low> low{};
            constexpr Register::FieldValue<decltype(wkupt1)::Type,Wkupt1Val::high> high{};
        }
        ///Wake Up Input Type 2
        enum class Wkupt2Val {
            low=0x00000000,     ///<a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            high=0x00000001,     ///<a high levelfor a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Wkupt2Val> wkupt2{}; 
        namespace Wkupt2ValC{
            constexpr Register::FieldValue<decltype(wkupt2)::Type,Wkupt2Val::low> low{};
            constexpr Register::FieldValue<decltype(wkupt2)::Type,Wkupt2Val::high> high{};
        }
        ///Wake Up Input Type 3
        enum class Wkupt3Val {
            low=0x00000000,     ///<a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            high=0x00000001,     ///<a high levelfor a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Wkupt3Val> wkupt3{}; 
        namespace Wkupt3ValC{
            constexpr Register::FieldValue<decltype(wkupt3)::Type,Wkupt3Val::low> low{};
            constexpr Register::FieldValue<decltype(wkupt3)::Type,Wkupt3Val::high> high{};
        }
        ///Wake Up Input Type 4
        enum class Wkupt4Val {
            low=0x00000000,     ///<a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            high=0x00000001,     ///<a high levelfor a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Wkupt4Val> wkupt4{}; 
        namespace Wkupt4ValC{
            constexpr Register::FieldValue<decltype(wkupt4)::Type,Wkupt4Val::low> low{};
            constexpr Register::FieldValue<decltype(wkupt4)::Type,Wkupt4Val::high> high{};
        }
        ///Wake Up Input Type 5
        enum class Wkupt5Val {
            low=0x00000000,     ///<a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            high=0x00000001,     ///<a high levelfor a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Wkupt5Val> wkupt5{}; 
        namespace Wkupt5ValC{
            constexpr Register::FieldValue<decltype(wkupt5)::Type,Wkupt5Val::low> low{};
            constexpr Register::FieldValue<decltype(wkupt5)::Type,Wkupt5Val::high> high{};
        }
        ///Wake Up Input Type 6
        enum class Wkupt6Val {
            low=0x00000000,     ///<a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            high=0x00000001,     ///<a high levelfor a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Wkupt6Val> wkupt6{}; 
        namespace Wkupt6ValC{
            constexpr Register::FieldValue<decltype(wkupt6)::Type,Wkupt6Val::low> low{};
            constexpr Register::FieldValue<decltype(wkupt6)::Type,Wkupt6Val::high> high{};
        }
        ///Wake Up Input Type 7
        enum class Wkupt7Val {
            low=0x00000000,     ///<a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            high=0x00000001,     ///<a high levelfor a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Wkupt7Val> wkupt7{}; 
        namespace Wkupt7ValC{
            constexpr Register::FieldValue<decltype(wkupt7)::Type,Wkupt7Val::low> low{};
            constexpr Register::FieldValue<decltype(wkupt7)::Type,Wkupt7Val::high> high{};
        }
        ///Wake Up Input Type 8
        enum class Wkupt8Val {
            low=0x00000000,     ///<a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            high=0x00000001,     ///<a high levelfor a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Wkupt8Val> wkupt8{}; 
        namespace Wkupt8ValC{
            constexpr Register::FieldValue<decltype(wkupt8)::Type,Wkupt8Val::low> low{};
            constexpr Register::FieldValue<decltype(wkupt8)::Type,Wkupt8Val::high> high{};
        }
        ///Wake Up Input Type 9
        enum class Wkupt9Val {
            low=0x00000000,     ///<a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            high=0x00000001,     ///<a high levelfor a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Wkupt9Val> wkupt9{}; 
        namespace Wkupt9ValC{
            constexpr Register::FieldValue<decltype(wkupt9)::Type,Wkupt9Val::low> low{};
            constexpr Register::FieldValue<decltype(wkupt9)::Type,Wkupt9Val::high> high{};
        }
        ///Wake Up Input Type 10
        enum class Wkupt10Val {
            low=0x00000000,     ///<a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            high=0x00000001,     ///<a high levelfor a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Wkupt10Val> wkupt10{}; 
        namespace Wkupt10ValC{
            constexpr Register::FieldValue<decltype(wkupt10)::Type,Wkupt10Val::low> low{};
            constexpr Register::FieldValue<decltype(wkupt10)::Type,Wkupt10Val::high> high{};
        }
        ///Wake Up Input Type 11
        enum class Wkupt11Val {
            low=0x00000000,     ///<a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            high=0x00000001,     ///<a high levelfor a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Wkupt11Val> wkupt11{}; 
        namespace Wkupt11ValC{
            constexpr Register::FieldValue<decltype(wkupt11)::Type,Wkupt11Val::low> low{};
            constexpr Register::FieldValue<decltype(wkupt11)::Type,Wkupt11Val::high> high{};
        }
        ///Wake Up Input Type 12
        enum class Wkupt12Val {
            low=0x00000000,     ///<a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            high=0x00000001,     ///<a high levelfor a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Wkupt12Val> wkupt12{}; 
        namespace Wkupt12ValC{
            constexpr Register::FieldValue<decltype(wkupt12)::Type,Wkupt12Val::low> low{};
            constexpr Register::FieldValue<decltype(wkupt12)::Type,Wkupt12Val::high> high{};
        }
        ///Wake Up Input Type 13
        enum class Wkupt13Val {
            low=0x00000000,     ///<a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            high=0x00000001,     ///<a high levelfor a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Wkupt13Val> wkupt13{}; 
        namespace Wkupt13ValC{
            constexpr Register::FieldValue<decltype(wkupt13)::Type,Wkupt13Val::low> low{};
            constexpr Register::FieldValue<decltype(wkupt13)::Type,Wkupt13Val::high> high{};
        }
        ///Wake Up Input Type 14
        enum class Wkupt14Val {
            low=0x00000000,     ///<a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            high=0x00000001,     ///<a high levelfor a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Wkupt14Val> wkupt14{}; 
        namespace Wkupt14ValC{
            constexpr Register::FieldValue<decltype(wkupt14)::Type,Wkupt14Val::low> low{};
            constexpr Register::FieldValue<decltype(wkupt14)::Type,Wkupt14Val::high> high{};
        }
        ///Wake Up Input Type 15
        enum class Wkupt15Val {
            low=0x00000000,     ///<a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake up of the core power supply.
            high=0x00000001,     ///<a high levelfor a period defined by WKUPDBC on the correspond-ing wake-up input forces the wake up of the core power supply.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Wkupt15Val> wkupt15{}; 
        namespace Wkupt15ValC{
            constexpr Register::FieldValue<decltype(wkupt15)::Type,Wkupt15Val::low> low{};
            constexpr Register::FieldValue<decltype(wkupt15)::Type,Wkupt15Val::high> high{};
        }
    }
    namespace SupcSr{    ///<Supply Controller Status Register
        using Addr = Register::Address<0x400e1424,0x00009f01,0x00000000,unsigned>;
        ///WKUP Wake Up Status
        enum class WkupsVal {
            no=0x00000000,     ///<no wake up due to the assertion of the WKUP pins has occurred since the last read of SUPC_SR.
            present=0x00000001,     ///<at least one wake up due to the assertion of the WKUP pins has occurred since the last read of SUPC_SR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,WkupsVal> wkups{}; 
        namespace WkupsValC{
            constexpr Register::FieldValue<decltype(wkups)::Type,WkupsVal::no> no{};
            constexpr Register::FieldValue<decltype(wkups)::Type,WkupsVal::present> present{};
        }
        ///Supply Monitor Detection Wake Up Status
        enum class SmwsVal {
            no=0x00000000,     ///<no wake up due to a supply monitor detection has occurred since the last read of SUPC_SR.
            present=0x00000001,     ///<at least one wake up due to a supply monitor detection has occurred since the last read of SUPC_SR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SmwsVal> smws{}; 
        namespace SmwsValC{
            constexpr Register::FieldValue<decltype(smws)::Type,SmwsVal::no> no{};
            constexpr Register::FieldValue<decltype(smws)::Type,SmwsVal::present> present{};
        }
        ///Brownout Detector Reset Status
        enum class BodrstsVal {
            no=0x00000000,     ///<no core brownout rising edge event has been detected since the last read of the SUPC_SR.
            present=0x00000001,     ///<at least one brownout output rising edge event has been detected since the last read of the SUPC_SR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BodrstsVal> bodrsts{}; 
        namespace BodrstsValC{
            constexpr Register::FieldValue<decltype(bodrsts)::Type,BodrstsVal::no> no{};
            constexpr Register::FieldValue<decltype(bodrsts)::Type,BodrstsVal::present> present{};
        }
        ///Supply Monitor Reset Status
        enum class SmrstsVal {
            no=0x00000000,     ///<no supply monitor detection has generated a core reset since the last read of the SUPC_SR.
            present=0x00000001,     ///<at least one supply monitor detection has generated a core reset since the last read of the SUPC_SR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SmrstsVal> smrsts{}; 
        namespace SmrstsValC{
            constexpr Register::FieldValue<decltype(smrsts)::Type,SmrstsVal::no> no{};
            constexpr Register::FieldValue<decltype(smrsts)::Type,SmrstsVal::present> present{};
        }
        ///Supply Monitor Status
        enum class SmsVal {
            no=0x00000000,     ///<no supply monitor detection since the last read of SUPC_SR.
            present=0x00000001,     ///<at least one supply monitor detection since the last read of SUPC_SR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SmsVal> sms{}; 
        namespace SmsValC{
            constexpr Register::FieldValue<decltype(sms)::Type,SmsVal::no> no{};
            constexpr Register::FieldValue<decltype(sms)::Type,SmsVal::present> present{};
        }
        ///Supply Monitor Output Status
        enum class SmosVal {
            high=0x00000000,     ///<the supply monitor detected VDDIO higher than its threshold at its last measurement.
            low=0x00000001,     ///<the supply monitor detected VDDIO lower than its threshold at its last measurement.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SmosVal> smos{}; 
        namespace SmosValC{
            constexpr Register::FieldValue<decltype(smos)::Type,SmosVal::high> high{};
            constexpr Register::FieldValue<decltype(smos)::Type,SmosVal::low> low{};
        }
        ///32-kHz Oscillator Selection Status
        enum class OscselVal {
            rc=0x00000000,     ///<the slow clock, SLCK is generated by the embedded 32-kHz RC oscillator.
            cryst=0x00000001,     ///<the slow clock, SLCK is generated by the 32-kHz crystal oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,OscselVal> oscsel{}; 
        namespace OscselValC{
            constexpr Register::FieldValue<decltype(oscsel)::Type,OscselVal::rc> rc{};
            constexpr Register::FieldValue<decltype(oscsel)::Type,OscselVal::cryst> cryst{};
        }
        ///Low Power Debouncer Wake Up Status on WKUP0
        enum class Lpdbcs0Val {
            no=0x00000000,     ///<no wake up due to the assertion of the WKUP0 pin has occurred since the last read of SUPC_SR.
            present=0x00000001,     ///<at least one wake up due to the assertion of the WKUP0 pin has occurred since the last read of SUPC_SR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Lpdbcs0Val> lpdbcs0{}; 
        namespace Lpdbcs0ValC{
            constexpr Register::FieldValue<decltype(lpdbcs0)::Type,Lpdbcs0Val::no> no{};
            constexpr Register::FieldValue<decltype(lpdbcs0)::Type,Lpdbcs0Val::present> present{};
        }
        ///Low Power Debouncer Wake Up Status on WKUP1
        enum class Lpdbcs1Val {
            no=0x00000000,     ///<no wake up due to the assertion of the WKUP1 pin has occurred since the last read of SUPC_SR.
            present=0x00000001,     ///<at least one wake up due to the assertion of the WKUP1 pin has occurred since the last read of SUPC_SR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Lpdbcs1Val> lpdbcs1{}; 
        namespace Lpdbcs1ValC{
            constexpr Register::FieldValue<decltype(lpdbcs1)::Type,Lpdbcs1Val::no> no{};
            constexpr Register::FieldValue<decltype(lpdbcs1)::Type,Lpdbcs1Val::present> present{};
        }
        ///WKUP Input Status 0
        enum class Wkupis0Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Wkupis0Val> wkupis0{}; 
        namespace Wkupis0ValC{
            constexpr Register::FieldValue<decltype(wkupis0)::Type,Wkupis0Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis0)::Type,Wkupis0Val::en> en{};
        }
        ///WKUP Input Status 1
        enum class Wkupis1Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Wkupis1Val> wkupis1{}; 
        namespace Wkupis1ValC{
            constexpr Register::FieldValue<decltype(wkupis1)::Type,Wkupis1Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis1)::Type,Wkupis1Val::en> en{};
        }
        ///WKUP Input Status 2
        enum class Wkupis2Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Wkupis2Val> wkupis2{}; 
        namespace Wkupis2ValC{
            constexpr Register::FieldValue<decltype(wkupis2)::Type,Wkupis2Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis2)::Type,Wkupis2Val::en> en{};
        }
        ///WKUP Input Status 3
        enum class Wkupis3Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Wkupis3Val> wkupis3{}; 
        namespace Wkupis3ValC{
            constexpr Register::FieldValue<decltype(wkupis3)::Type,Wkupis3Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis3)::Type,Wkupis3Val::en> en{};
        }
        ///WKUP Input Status 4
        enum class Wkupis4Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Wkupis4Val> wkupis4{}; 
        namespace Wkupis4ValC{
            constexpr Register::FieldValue<decltype(wkupis4)::Type,Wkupis4Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis4)::Type,Wkupis4Val::en> en{};
        }
        ///WKUP Input Status 5
        enum class Wkupis5Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Wkupis5Val> wkupis5{}; 
        namespace Wkupis5ValC{
            constexpr Register::FieldValue<decltype(wkupis5)::Type,Wkupis5Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis5)::Type,Wkupis5Val::en> en{};
        }
        ///WKUP Input Status 6
        enum class Wkupis6Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Wkupis6Val> wkupis6{}; 
        namespace Wkupis6ValC{
            constexpr Register::FieldValue<decltype(wkupis6)::Type,Wkupis6Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis6)::Type,Wkupis6Val::en> en{};
        }
        ///WKUP Input Status 7
        enum class Wkupis7Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Wkupis7Val> wkupis7{}; 
        namespace Wkupis7ValC{
            constexpr Register::FieldValue<decltype(wkupis7)::Type,Wkupis7Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis7)::Type,Wkupis7Val::en> en{};
        }
        ///WKUP Input Status 8
        enum class Wkupis8Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Wkupis8Val> wkupis8{}; 
        namespace Wkupis8ValC{
            constexpr Register::FieldValue<decltype(wkupis8)::Type,Wkupis8Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis8)::Type,Wkupis8Val::en> en{};
        }
        ///WKUP Input Status 9
        enum class Wkupis9Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Wkupis9Val> wkupis9{}; 
        namespace Wkupis9ValC{
            constexpr Register::FieldValue<decltype(wkupis9)::Type,Wkupis9Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis9)::Type,Wkupis9Val::en> en{};
        }
        ///WKUP Input Status 10
        enum class Wkupis10Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Wkupis10Val> wkupis10{}; 
        namespace Wkupis10ValC{
            constexpr Register::FieldValue<decltype(wkupis10)::Type,Wkupis10Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis10)::Type,Wkupis10Val::en> en{};
        }
        ///WKUP Input Status 11
        enum class Wkupis11Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Wkupis11Val> wkupis11{}; 
        namespace Wkupis11ValC{
            constexpr Register::FieldValue<decltype(wkupis11)::Type,Wkupis11Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis11)::Type,Wkupis11Val::en> en{};
        }
        ///WKUP Input Status 12
        enum class Wkupis12Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Wkupis12Val> wkupis12{}; 
        namespace Wkupis12ValC{
            constexpr Register::FieldValue<decltype(wkupis12)::Type,Wkupis12Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis12)::Type,Wkupis12Val::en> en{};
        }
        ///WKUP Input Status 13
        enum class Wkupis13Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Wkupis13Val> wkupis13{}; 
        namespace Wkupis13ValC{
            constexpr Register::FieldValue<decltype(wkupis13)::Type,Wkupis13Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis13)::Type,Wkupis13Val::en> en{};
        }
        ///WKUP Input Status 14
        enum class Wkupis14Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Wkupis14Val> wkupis14{}; 
        namespace Wkupis14ValC{
            constexpr Register::FieldValue<decltype(wkupis14)::Type,Wkupis14Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis14)::Type,Wkupis14Val::en> en{};
        }
        ///WKUP Input Status 15
        enum class Wkupis15Val {
            dis=0x00000000,     ///<the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event.
            en=0x00000001,     ///<the corresponding wake-up input was active at the time the debouncer triggered a wake up event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Wkupis15Val> wkupis15{}; 
        namespace Wkupis15ValC{
            constexpr Register::FieldValue<decltype(wkupis15)::Type,Wkupis15Val::dis> dis{};
            constexpr Register::FieldValue<decltype(wkupis15)::Type,Wkupis15Val::en> en{};
        }
    }
}
