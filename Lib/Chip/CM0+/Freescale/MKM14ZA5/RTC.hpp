#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real Time Clock
    namespace RtcYearmon{    ///<RTC Year and Month Counters Register
        using Addr = Register::Address<0x40050000,0xffff00f0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> monCnt{}; 
        ///Year Offset Count Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> yrofst{}; 
    }
    namespace RtcDays{    ///<RTC Days and Day-of-Week Counters Register
        using Addr = Register::Address<0x40050002,0xfffff8e0,0,unsigned>;
        ///Days Counter Value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dayCnt{}; 
        ///Day of Week Counter Value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> dow{}; 
    }
    namespace RtcHourmin{    ///<RTC Hours and Minutes Counters Register
        using Addr = Register::Address<0x40050004,0xffffe0c0,0,unsigned>;
        ///Minutes Counter Value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> minCnt{}; 
        ///Hours Counter Value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> hourCnt{}; 
    }
    namespace RtcSeconds{    ///<RTC Seconds Counters Register
        using Addr = Register::Address<0x40050006,0xffffffc0,0,unsigned>;
        ///Seconds Counter Value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> secCnt{}; 
    }
    namespace RtcAlmYearmon{    ///<RTC Year and Months Alarm Register
        using Addr = Register::Address<0x40050008,0xffff00f0,0,unsigned>;
        ///Months Value for Alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> almMon{}; 
        ///Year Value for Alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> almYear{}; 
    }
    namespace RtcAlmDays{    ///<RTC Days Alarm Register
        using Addr = Register::Address<0x4005000a,0xffffffe0,0,unsigned>;
        ///Days Value for Alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> almDay{}; 
    }
    namespace RtcAlmHourmin{    ///<RTC Hours and Minutes Alarm Register
        using Addr = Register::Address<0x4005000c,0xffffe0c0,0,unsigned>;
        ///Minutes Value for Alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> almMin{}; 
        ///Hours Value for Alarm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> almHour{}; 
    }
    namespace RtcAlmSeconds{    ///<RTC Seconds Alarm Register
        using Addr = Register::Address<0x4005000e,0xfffffcc0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> almSec{}; 
        ///Decrement Seconds Counter by 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> decSec{}; 
        ///Increment Seconds Counter by 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> incSec{}; 
    }
    namespace RtcCtrl{    ///<RTC Control Register
        using Addr = Register::Address<0x40050010,0xffff9ea0,0,unsigned>;
        ///Fine compensation enable bit
        enum class FineenVal {
            v1=0x00000001,     ///<Fine compensation is enabled.
            v0=0x00000000,     ///<Fine compensation is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FineenVal> fineen{}; 
        namespace FineenValC{
            constexpr Register::FieldValue<decltype(fineen)::Type,FineenVal::v1> v1{};
            constexpr Register::FieldValue<decltype(fineen)::Type,FineenVal::v0> v0{};
        }
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> compEn{}; 
        ///Alarm Match bits.
        enum class AlmmatchVal {
            v00=0x00000000,     ///<Only Seconds, Minutes, and Hours matched.
            v01=0x00000001,     ///<Only Seconds, Minutes, Hours, and Days matched.
            v10=0x00000002,     ///<Only Seconds, Minutes, Hours, Days, and Months matched.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,AlmmatchVal> almMatch{}; 
        namespace AlmmatchValC{
            constexpr Register::FieldValue<decltype(almMatch)::Type,AlmmatchVal::v00> v00{};
            constexpr Register::FieldValue<decltype(almMatch)::Type,AlmmatchVal::v01> v01{};
            constexpr Register::FieldValue<decltype(almMatch)::Type,AlmmatchVal::v10> v10{};
        }
        }
        ///Sampling timer clocks mask
        enum class TimerstbmaskVal {
            v1=0x00000001,     ///<Sampling clocks are gated in standby mode
            v0=0x00000000,     ///<Sampling clocks are not gated when in standby mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TimerstbmaskVal> timerStbMask{}; 
        namespace TimerstbmaskValC{
            constexpr Register::FieldValue<decltype(timerStbMask)::Type,TimerstbmaskVal::v1> v1{};
            constexpr Register::FieldValue<decltype(timerStbMask)::Type,TimerstbmaskVal::v0> v0{};
        }
        }
        ///Daylight Saving Enable.
        enum class DstenVal {
            v0=0x00000000,     ///<Disabled. Daylight saving changes are not applied. Daylight saving registers can be modified.
            v1=0x00000001,     ///<Enabled. Daylight saving changes are applied.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DstenVal> dstEn{}; 
        namespace DstenValC{
            constexpr Register::FieldValue<decltype(dstEn)::Type,DstenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dstEn)::Type,DstenVal::v1> v1{};
        }
        }
        ///Software Reset bit.
        enum class SwrVal {
            v0=0x00000000,     ///<Software Reset cleared.
            v1=0x00000001,     ///<Software Reset asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SwrVal> swr{}; 
        namespace SwrValC{
            constexpr Register::FieldValue<decltype(swr)::Type,SwrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swr)::Type,SwrVal::v1> v1{};
        }
        }
        ///RTC Clock Output Selection.
        enum class ClkoutVal {
            v00=0x00000000,     ///<No Output Clock
            v01=0x00000001,     ///<Fine 1 Hz Clock
            v10=0x00000002,     ///<32.768 kHz Clock
            v11=0x00000003,     ///<Coarse 1 Hz Clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,ClkoutVal> clkout{}; 
        namespace ClkoutValC{
            constexpr Register::FieldValue<decltype(clkout)::Type,ClkoutVal::v00> v00{};
            constexpr Register::FieldValue<decltype(clkout)::Type,ClkoutVal::v01> v01{};
            constexpr Register::FieldValue<decltype(clkout)::Type,ClkoutVal::v10> v10{};
            constexpr Register::FieldValue<decltype(clkout)::Type,ClkoutVal::v11> v11{};
        }
        }
    }
    namespace RtcStatus{    ///<RTC Status Register
        using Addr = Register::Address<0x40050012,0xfffff610,0,unsigned>;
        ///Invalidate CPU read/write access bit.
        enum class InvalbitVal {
            v0=0x00000000,     ///<Time /Date Counters can be read/written. Time /Date is valid.
            v1=0x00000001,     ///<Time /Date Counter values are changing or Time /Date is invalid and cannot be read or written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvalbitVal> invalBit{}; 
        namespace InvalbitValC{
            constexpr Register::FieldValue<decltype(invalBit)::Type,InvalbitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(invalBit)::Type,InvalbitVal::v1> v1{};
        }
        }
        ///Write Protect Enable status bit.
        enum class WriteprotenVal {
            v0=0x00000000,     ///<Registers are unlocked and can be accessed.
            v1=0x00000001,     ///<Registers are locked and in read-only mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WriteprotenVal> writeProtEn{}; 
        namespace WriteprotenValC{
            constexpr Register::FieldValue<decltype(writeProtEn)::Type,WriteprotenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(writeProtEn)::Type,WriteprotenVal::v1> v1{};
        }
        }
        ///CPU Low Voltage Warning status bit.
        enum class CpulowvoltVal {
            v0=0x00000000,     ///<CPU in Normal Operating Voltage.
            v1=0x00000001,     ///<CPU Voltage is below Normal Operating Voltage. RTC Registers in read-only mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CpulowvoltVal> cpuLowVolt{}; 
        namespace CpulowvoltValC{
            constexpr Register::FieldValue<decltype(cpuLowVolt)::Type,CpulowvoltVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpuLowVolt)::Type,CpulowvoltVal::v1> v1{};
        }
        }
        ///Reset Source bit.
        enum class RstsrcVal {
            v0=0x00000000,     ///<Part was reset due to Standby Mode Exit (that is when VDD is powered up and VBAT was not powered down at all).
            v1=0x00000001,     ///<Part was reset due to Power-On Reset (that is Power On Reset when both VBAT and VDD are powered up).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RstsrcVal> rstSrc{}; 
        namespace RstsrcValC{
            constexpr Register::FieldValue<decltype(rstSrc)::Type,RstsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rstSrc)::Type,RstsrcVal::v1> v1{};
        }
        }
        ///Compensation Interval bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpInt{}; 
        ///Write Enable bits.
        enum class WeVal {
            v10=0x00000002,     ///<Enable Write Protection - Registers are locked.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,WeVal> we{}; 
        namespace WeValC{
            constexpr Register::FieldValue<decltype(we)::Type,WeVal::v10> v10{};
        }
        }
        ///Bus Error bit.
        enum class BuserrVal {
            v0=0x00000000,     ///<Read and Write accesses are normal.
            v1=0x00000001,     ///<Read or Write accesses occurred when INVAL_BIT was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,BuserrVal> busErr{}; 
        namespace BuserrValC{
            constexpr Register::FieldValue<decltype(busErr)::Type,BuserrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(busErr)::Type,BuserrVal::v1> v1{};
        }
        }
        ///Compensation Done bit.
        enum class CmpdoneVal {
            v0=0x00000000,     ///<Compensation busy or not enabled.
            v1=0x00000001,     ///<Compensation completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,CmpdoneVal> cmpDone{}; 
        namespace CmpdoneValC{
            constexpr Register::FieldValue<decltype(cmpDone)::Type,CmpdoneVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmpDone)::Type,CmpdoneVal::v1> v1{};
        }
        }
    }
    namespace RtcIsr{    ///<RTC Interrupt Status Register
        using Addr = Register::Address<0x40050014,0xffff0002,0,unsigned>;
        ///Tamper Interrupt Status bit.
        enum class TamperisVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted (Default on reset) .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TamperisVal> tamperIs{}; 
        namespace TamperisValC{
            constexpr Register::FieldValue<decltype(tamperIs)::Type,TamperisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tamperIs)::Type,TamperisVal::v1> v1{};
        }
        }
        ///Alarm Interrupt Status bit.
        enum class AlmisVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AlmisVal> almIs{}; 
        namespace AlmisValC{
            constexpr Register::FieldValue<decltype(almIs)::Type,AlmisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(almIs)::Type,AlmisVal::v1> v1{};
        }
        }
        ///Days Interrupt Status bit.
        enum class DayisVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DayisVal> dayIs{}; 
        namespace DayisValC{
            constexpr Register::FieldValue<decltype(dayIs)::Type,DayisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dayIs)::Type,DayisVal::v1> v1{};
        }
        }
        ///Hours Interrupt Status bit.
        enum class HourisVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HourisVal> hourIs{}; 
        namespace HourisValC{
            constexpr Register::FieldValue<decltype(hourIs)::Type,HourisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hourIs)::Type,HourisVal::v1> v1{};
        }
        }
        ///Minutes Interrupt Status bit.
        enum class MinisVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MinisVal> minIs{}; 
        namespace MinisValC{
            constexpr Register::FieldValue<decltype(minIs)::Type,MinisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(minIs)::Type,MinisVal::v1> v1{};
        }
        }
        ///1 Hz Interval Interrupt Status bit.
        enum class Is1hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Is1hzVal> is1hz{}; 
        namespace Is1hzValC{
            constexpr Register::FieldValue<decltype(is1hz)::Type,Is1hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(is1hz)::Type,Is1hzVal::v1> v1{};
        }
        }
        ///2 Hz Interval Interrupt Status bit.
        enum class Is2hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Is2hzVal> is2hz{}; 
        namespace Is2hzValC{
            constexpr Register::FieldValue<decltype(is2hz)::Type,Is2hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(is2hz)::Type,Is2hzVal::v1> v1{};
        }
        }
        ///4 Hz Interval Interrupt Status bit.
        enum class Is4hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Is4hzVal> is4hz{}; 
        namespace Is4hzValC{
            constexpr Register::FieldValue<decltype(is4hz)::Type,Is4hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(is4hz)::Type,Is4hzVal::v1> v1{};
        }
        }
        ///8 Hz Interval Interrupt Status bit.
        enum class Is8hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Is8hzVal> is8hz{}; 
        namespace Is8hzValC{
            constexpr Register::FieldValue<decltype(is8hz)::Type,Is8hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(is8hz)::Type,Is8hzVal::v1> v1{};
        }
        }
        ///16 Hz Interval Interrupt Status bit.
        enum class Is16hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Is16hzVal> is16hz{}; 
        namespace Is16hzValC{
            constexpr Register::FieldValue<decltype(is16hz)::Type,Is16hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(is16hz)::Type,Is16hzVal::v1> v1{};
        }
        }
        ///32 Hz Interval Interrupt Status bit.
        enum class Is32hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Is32hzVal> is32hz{}; 
        namespace Is32hzValC{
            constexpr Register::FieldValue<decltype(is32hz)::Type,Is32hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(is32hz)::Type,Is32hzVal::v1> v1{};
        }
        }
        ///64 Hz Interval Interrupt Status bit.
        enum class Is64hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Is64hzVal> is64hz{}; 
        namespace Is64hzValC{
            constexpr Register::FieldValue<decltype(is64hz)::Type,Is64hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(is64hz)::Type,Is64hzVal::v1> v1{};
        }
        }
        ///128 Hz Interval Interrupt Status bit.
        enum class Is128hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Is128hzVal> is128hz{}; 
        namespace Is128hzValC{
            constexpr Register::FieldValue<decltype(is128hz)::Type,Is128hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(is128hz)::Type,Is128hzVal::v1> v1{};
        }
        }
        ///256 Hz Interval Interrupt Status bit.
        enum class Is256hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Is256hzVal> is256hz{}; 
        namespace Is256hzValC{
            constexpr Register::FieldValue<decltype(is256hz)::Type,Is256hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(is256hz)::Type,Is256hzVal::v1> v1{};
        }
        }
        ///512 Hz Interval Interrupt Status bit.
        enum class Is512hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Is512hzVal> is512hz{}; 
        namespace Is512hzValC{
            constexpr Register::FieldValue<decltype(is512hz)::Type,Is512hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(is512hz)::Type,Is512hzVal::v1> v1{};
        }
        }
    }
    namespace RtcIer{    ///<RTC Interrupt Enable Register
        using Addr = Register::Address<0x40050016,0xffff0002,0,unsigned>;
        ///Tamper Interrupt Enable bit.
        enum class TamperieVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled (Default on reset).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TamperieVal> tamperIe{}; 
        namespace TamperieValC{
            constexpr Register::FieldValue<decltype(tamperIe)::Type,TamperieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tamperIe)::Type,TamperieVal::v1> v1{};
        }
        }
        ///Alarm Interrupt Enable bit.
        enum class AlmieVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AlmieVal> almIe{}; 
        namespace AlmieValC{
            constexpr Register::FieldValue<decltype(almIe)::Type,AlmieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(almIe)::Type,AlmieVal::v1> v1{};
        }
        }
        ///Days Interrupt Enable bit.
        enum class DayieVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DayieVal> dayIe{}; 
        namespace DayieValC{
            constexpr Register::FieldValue<decltype(dayIe)::Type,DayieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dayIe)::Type,DayieVal::v1> v1{};
        }
        }
        ///Hours Interrupt Enable bit.
        enum class HourieVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HourieVal> hourIe{}; 
        namespace HourieValC{
            constexpr Register::FieldValue<decltype(hourIe)::Type,HourieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hourIe)::Type,HourieVal::v1> v1{};
        }
        }
        ///Minutes Interrupt Enable bit.
        enum class MinieVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MinieVal> minIe{}; 
        namespace MinieValC{
            constexpr Register::FieldValue<decltype(minIe)::Type,MinieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(minIe)::Type,MinieVal::v1> v1{};
        }
        }
        ///1 Hz Interval Interrupt Enable bit.
        enum class Ie1hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ie1hzVal> ie1hz{}; 
        namespace Ie1hzValC{
            constexpr Register::FieldValue<decltype(ie1hz)::Type,Ie1hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ie1hz)::Type,Ie1hzVal::v1> v1{};
        }
        }
        ///2 Hz Interval Interrupt Enable bit.
        enum class Ie2hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ie2hzVal> ie2hz{}; 
        namespace Ie2hzValC{
            constexpr Register::FieldValue<decltype(ie2hz)::Type,Ie2hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ie2hz)::Type,Ie2hzVal::v1> v1{};
        }
        }
        ///4 Hz Interval Interrupt Enable bit.
        enum class Ie4hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ie4hzVal> ie4hz{}; 
        namespace Ie4hzValC{
            constexpr Register::FieldValue<decltype(ie4hz)::Type,Ie4hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ie4hz)::Type,Ie4hzVal::v1> v1{};
        }
        }
        ///8 Hz Interval Interrupt Enable bit.
        enum class Ie8hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ie8hzVal> ie8hz{}; 
        namespace Ie8hzValC{
            constexpr Register::FieldValue<decltype(ie8hz)::Type,Ie8hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ie8hz)::Type,Ie8hzVal::v1> v1{};
        }
        }
        ///16 Hz Interval Interrupt Enable bit.
        enum class Ie16hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ie16hzVal> ie16hz{}; 
        namespace Ie16hzValC{
            constexpr Register::FieldValue<decltype(ie16hz)::Type,Ie16hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ie16hz)::Type,Ie16hzVal::v1> v1{};
        }
        }
        ///32 Hz Interval Interrupt Enable bit.
        enum class Ie32hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ie32hzVal> ie32hz{}; 
        namespace Ie32hzValC{
            constexpr Register::FieldValue<decltype(ie32hz)::Type,Ie32hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ie32hz)::Type,Ie32hzVal::v1> v1{};
        }
        }
        ///64 Hz Interval Interrupt Enable bit.
        enum class Ie64hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ie64hzVal> ie64hz{}; 
        namespace Ie64hzValC{
            constexpr Register::FieldValue<decltype(ie64hz)::Type,Ie64hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ie64hz)::Type,Ie64hzVal::v1> v1{};
        }
        }
        ///128 Hz Interval Interrupt Enable bit.
        enum class Ie128hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ie128hzVal> ie128hz{}; 
        namespace Ie128hzValC{
            constexpr Register::FieldValue<decltype(ie128hz)::Type,Ie128hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ie128hz)::Type,Ie128hzVal::v1> v1{};
        }
        }
        ///256 Hz Interval Interrupt Enable bit.
        enum class Ie256hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ie256hzVal> ie256hz{}; 
        namespace Ie256hzValC{
            constexpr Register::FieldValue<decltype(ie256hz)::Type,Ie256hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ie256hz)::Type,Ie256hzVal::v1> v1{};
        }
        }
        ///512 Hz Interval Interrupt Enable bit.
        enum class Ie512hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ie512hzVal> ie512hz{}; 
        namespace Ie512hzValC{
            constexpr Register::FieldValue<decltype(ie512hz)::Type,Ie512hzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ie512hz)::Type,Ie512hzVal::v1> v1{};
        }
        }
    }
    namespace RtcGpDataReg{    ///<RTC General Purpose Data Register
        using Addr = Register::Address<0x40050020,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpDataReg{}; 
    }
    namespace RtcDstHour{    ///<RTC Daylight Saving Hour Register
        using Addr = Register::Address<0x40050022,0xffffe0e0,0,unsigned>;
        ///Daylight Saving Time (DST) Hours End Value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dstEndHour{}; 
        ///Daylight Saving Time (DST) Hours Start Value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> dstStartHour{}; 
    }
    namespace RtcDstMonth{    ///<RTC Daylight Saving Month Register
        using Addr = Register::Address<0x40050024,0xfffff0f0,0,unsigned>;
        ///Daylight Saving Time (DST) Month End Value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dstEndMonth{}; 
        ///Daylight Saving Time (DST) Month Start Value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> dstStartMonth{}; 
    }
    namespace RtcDstDay{    ///<RTC Daylight Saving Day Register
        using Addr = Register::Address<0x40050026,0xffffe0e0,0,unsigned>;
        ///Daylight Saving Time (DST) Day End Value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dstEndDay{}; 
        ///Daylight Saving Time (DST) Day Start Value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> dstStartDay{}; 
    }
    namespace RtcCompen{    ///<RTC Compensation Register
        using Addr = Register::Address<0x40050028,0xffff0000,0,unsigned>;
        ///Compensation Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> compenVal{}; 
    }
    namespace RtcTamperDirection{    ///<Tamper Direction Register
        using Addr = Register::Address<0x4005002c,0xfffff0f0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> aPTamp{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> iOTamp{}; 
    }
    namespace RtcTamperQscr{    ///<Tamper Queue Status and Control Register
        using Addr = Register::Address<0x4005002e,0xffff08f8,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qFull{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> qFullIntEn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qClear{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> lfsrClkSel{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> lfsrDuration{}; 
    }
    namespace RtcTamperScr{    ///<RTC Tamper Status and Control Register
        using Addr = Register::Address<0x40050032,0xfffff0f0,0,unsigned>;
        ///Tamper Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tmprEn{}; 
        ///Tamper Status Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tmprSts{}; 
    }
    namespace RtcFilter01Cfg{    ///<RTC Tamper 0 1 Filter Configuration Register
        using Addr = Register::Address<0x40050034,0xffff0000,0,unsigned>;
        ///Tamper Detect Bit 1 Filter Duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> filDur1{}; 
        ///Tamper Filter 1 Clock Select
        enum class Clksel1Val {
            v000=0x00000000,     ///<32 kHz clock
            v001=0x00000001,     ///<512 Hz clock
            v010=0x00000002,     ///<128 Hz clock
            v011=0x00000003,     ///<64 Hz clock
            v100=0x00000004,     ///<16 Hz clock
            v101=0x00000005,     ///<8 Hz clock
            v110=0x00000006,     ///<4 Hz clock
            v111=0x00000007,     ///<2 Hz clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,Clksel1Val> clkSel1{}; 
        namespace Clksel1ValC{
            constexpr Register::FieldValue<decltype(clkSel1)::Type,Clksel1Val::v000> v000{};
            constexpr Register::FieldValue<decltype(clkSel1)::Type,Clksel1Val::v001> v001{};
            constexpr Register::FieldValue<decltype(clkSel1)::Type,Clksel1Val::v010> v010{};
            constexpr Register::FieldValue<decltype(clkSel1)::Type,Clksel1Val::v011> v011{};
            constexpr Register::FieldValue<decltype(clkSel1)::Type,Clksel1Val::v100> v100{};
            constexpr Register::FieldValue<decltype(clkSel1)::Type,Clksel1Val::v101> v101{};
            constexpr Register::FieldValue<decltype(clkSel1)::Type,Clksel1Val::v110> v110{};
            constexpr Register::FieldValue<decltype(clkSel1)::Type,Clksel1Val::v111> v111{};
        }
        }
        ///Tamper Detect Input Bit 1 Polarity Control
        enum class Pol1Val {
            v0=0x00000000,     ///<Tamper detect input bit 1 is active high.
            v1=0x00000001,     ///<Tamper detect input bit 1 is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pol1Val> pol1{}; 
        namespace Pol1ValC{
            constexpr Register::FieldValue<decltype(pol1)::Type,Pol1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pol1)::Type,Pol1Val::v1> v1{};
        }
        }
        ///Tamper Detect Bit 0 Filter Duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> filDur0{}; 
        ///Tamper Filter 0 Clock Select
        enum class Clksel0Val {
            v000=0x00000000,     ///<32 kHz clock
            v001=0x00000001,     ///<512 Hz clock
            v010=0x00000002,     ///<128 Hz clock
            v011=0x00000003,     ///<64 Hz clock
            v100=0x00000004,     ///<16 Hz clock
            v101=0x00000005,     ///<8 Hz clock
            v110=0x00000006,     ///<4 Hz clock
            v111=0x00000007,     ///<2 Hz clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,Clksel0Val> clkSel0{}; 
        namespace Clksel0ValC{
            constexpr Register::FieldValue<decltype(clkSel0)::Type,Clksel0Val::v000> v000{};
            constexpr Register::FieldValue<decltype(clkSel0)::Type,Clksel0Val::v001> v001{};
            constexpr Register::FieldValue<decltype(clkSel0)::Type,Clksel0Val::v010> v010{};
            constexpr Register::FieldValue<decltype(clkSel0)::Type,Clksel0Val::v011> v011{};
            constexpr Register::FieldValue<decltype(clkSel0)::Type,Clksel0Val::v100> v100{};
            constexpr Register::FieldValue<decltype(clkSel0)::Type,Clksel0Val::v101> v101{};
            constexpr Register::FieldValue<decltype(clkSel0)::Type,Clksel0Val::v110> v110{};
            constexpr Register::FieldValue<decltype(clkSel0)::Type,Clksel0Val::v111> v111{};
        }
        }
        ///Tamper Detect Input Bit 0 Polarity Control
        enum class Pol0Val {
            v0=0x00000000,     ///<Tamper detect input bit 0 is active high.
            v1=0x00000001,     ///<Tamper detect input bit 0 is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Pol0Val> pol0{}; 
        namespace Pol0ValC{
            constexpr Register::FieldValue<decltype(pol0)::Type,Pol0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pol0)::Type,Pol0Val::v1> v1{};
        }
        }
    }
    namespace RtcFilter2Cfg{    ///<RTC Tamper 2 Filter Configuration Register
        using Addr = Register::Address<0x40050036,0xffff00ff,0,unsigned>;
        ///Tamper Detect Bit 2 Filter Duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> filDur2{}; 
        ///Tamper Filter 2 Clock Select
        enum class Clksel2Val {
            v000=0x00000000,     ///<32 kHz clock
            v001=0x00000001,     ///<512 Hz clock
            v010=0x00000002,     ///<128 Hz clock
            v011=0x00000003,     ///<64 Hz clock
            v100=0x00000004,     ///<16 Hz clock
            v101=0x00000005,     ///<8 Hz clock
            v110=0x00000006,     ///<4 Hz clock
            v111=0x00000007,     ///<2 Hz clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,Clksel2Val> clkSel2{}; 
        namespace Clksel2ValC{
            constexpr Register::FieldValue<decltype(clkSel2)::Type,Clksel2Val::v000> v000{};
            constexpr Register::FieldValue<decltype(clkSel2)::Type,Clksel2Val::v001> v001{};
            constexpr Register::FieldValue<decltype(clkSel2)::Type,Clksel2Val::v010> v010{};
            constexpr Register::FieldValue<decltype(clkSel2)::Type,Clksel2Val::v011> v011{};
            constexpr Register::FieldValue<decltype(clkSel2)::Type,Clksel2Val::v100> v100{};
            constexpr Register::FieldValue<decltype(clkSel2)::Type,Clksel2Val::v101> v101{};
            constexpr Register::FieldValue<decltype(clkSel2)::Type,Clksel2Val::v110> v110{};
            constexpr Register::FieldValue<decltype(clkSel2)::Type,Clksel2Val::v111> v111{};
        }
        }
        ///Tamper Detect Input Bit 2 Polarity Control
        enum class Pol2Val {
            v0=0x00000000,     ///<Tamper detect input bit 2 is active high.
            v1=0x00000001,     ///<Tamper detect input bit 2 is active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Pol2Val> pol2{}; 
        namespace Pol2ValC{
            constexpr Register::FieldValue<decltype(pol2)::Type,Pol2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pol2)::Type,Pol2Val::v1> v1{};
        }
        }
    }
    namespace RtcTamperQueue{    ///<Tamper Queue Register
        using Addr = Register::Address<0x40050040,0xffff0000,0,unsigned>;
        ///Tamper type stamp and pin number information register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tamperData{}; 
    }
    namespace RtcCtrl2{    ///<RTC Control 2 Register
        using Addr = Register::Address<0x40050042,0xffffff1e,0,unsigned>;
        ///Tamper Configuration Over
        enum class TampcfgoverVal {
            v0=0x00000000,     ///<Tamper filter processing disabled.
            v1=0x00000001,     ///<Tamper filter processing enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TampcfgoverVal> tampCfgOver{}; 
        namespace TampcfgoverValC{
            constexpr Register::FieldValue<decltype(tampCfgOver)::Type,TampcfgoverVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tampCfgOver)::Type,TampcfgoverVal::v1> v1{};
        }
        }
        ///Wakeup Status
        enum class WakeupstatusVal {
            v00=0x00000000,     ///<The wakeup/hibernation pin is in HiZ mode.
            v01=0x00000001,     ///<The wakeup/hibernation pin is at logic 0. MCU is in sleep mode.
            v10=0x00000002,     ///<The wakeup/ hibernation pin is at logic 1. MCU is in sleep mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,WakeupstatusVal> wakeupStatus{}; 
        namespace WakeupstatusValC{
            constexpr Register::FieldValue<decltype(wakeupStatus)::Type,WakeupstatusVal::v00> v00{};
            constexpr Register::FieldValue<decltype(wakeupStatus)::Type,WakeupstatusVal::v01> v01{};
            constexpr Register::FieldValue<decltype(wakeupStatus)::Type,WakeupstatusVal::v10> v10{};
        }
        }
        ///Wakeup Mode
        enum class WakeupmodeVal {
            v0=0x00000000,     ///<Tamper pin 0 is used as the tamper pin.
            v1=0x00000001,     ///<Tamper pin 0 is used as a wakeup/hibernation pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,WakeupmodeVal> wakeupMode{}; 
        namespace WakeupmodeValC{
            constexpr Register::FieldValue<decltype(wakeupMode)::Type,WakeupmodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wakeupMode)::Type,WakeupmodeVal::v1> v1{};
        }
        }
    }
}
