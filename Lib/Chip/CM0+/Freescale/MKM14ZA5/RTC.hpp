#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real Time Clock
    namespace RtcYearmon{    ///<RTC Year and Month Counters Register
        using Addr = Register::Address<0x40050000,0xffff00f0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> monCnt{}; 
        ///Year Offset Count Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> yrofst{}; 
    }
    namespace RtcDays{    ///<RTC Days and Day-of-Week Counters Register
        using Addr = Register::Address<0x40050002,0xfffff8e0,0,unsigned>;
        ///Days Counter Value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dayCnt{}; 
        ///Day of Week Counter Value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> dow{}; 
    }
    namespace RtcHourmin{    ///<RTC Hours and Minutes Counters Register
        using Addr = Register::Address<0x40050004,0xffffe0c0,0,unsigned>;
        ///Minutes Counter Value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> minCnt{}; 
        ///Hours Counter Value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> hourCnt{}; 
    }
    namespace RtcSeconds{    ///<RTC Seconds Counters Register
        using Addr = Register::Address<0x40050006,0xffffffc0,0,unsigned>;
        ///Seconds Counter Value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> secCnt{}; 
    }
    namespace RtcAlmYearmon{    ///<RTC Year and Months Alarm Register
        using Addr = Register::Address<0x40050008,0xffff00f0,0,unsigned>;
        ///Months Value for Alarm.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> almMon{}; 
        ///Year Value for Alarm.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> almYear{}; 
    }
    namespace RtcAlmDays{    ///<RTC Days Alarm Register
        using Addr = Register::Address<0x4005000a,0xffffffe0,0,unsigned>;
        ///Days Value for Alarm.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> almDay{}; 
    }
    namespace RtcAlmHourmin{    ///<RTC Hours and Minutes Alarm Register
        using Addr = Register::Address<0x4005000c,0xffffe0c0,0,unsigned>;
        ///Minutes Value for Alarm.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> almMin{}; 
        ///Hours Value for Alarm.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> almHour{}; 
    }
    namespace RtcAlmSeconds{    ///<RTC Seconds Alarm Register
        using Addr = Register::Address<0x4005000e,0xfffffcc0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> almSec{}; 
        ///Decrement Seconds Counter by 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> decSec{}; 
        ///Increment Seconds Counter by 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> incSec{}; 
    }
    namespace RtcCtrl{    ///<RTC Control Register
        using Addr = Register::Address<0x40050010,0xffff9ea0,0,unsigned>;
        ///Fine compensation enable bit
        enum class fineenVal {
            v1=0x00000001,     ///<Fine compensation is enabled.
            v0=0x00000000,     ///<Fine compensation is disabled
        };
        namespace fineenValC{
            constexpr MPL::Value<fineenVal,fineenVal::v1> v1{};
            constexpr MPL::Value<fineenVal,fineenVal::v0> v0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,fineenVal> fineen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> compEn{}; 
        ///Alarm Match bits.
        enum class almMatchVal {
            v00=0x00000000,     ///<Only Seconds, Minutes, and Hours matched.
            v01=0x00000001,     ///<Only Seconds, Minutes, Hours, and Days matched.
            v10=0x00000002,     ///<Only Seconds, Minutes, Hours, Days, and Months matched.
        };
        namespace almMatchValC{
            constexpr MPL::Value<almMatchVal,almMatchVal::v00> v00{};
            constexpr MPL::Value<almMatchVal,almMatchVal::v01> v01{};
            constexpr MPL::Value<almMatchVal,almMatchVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,almMatchVal> almMatch{}; 
        ///Sampling timer clocks mask
        enum class timerStbMaskVal {
            v1=0x00000001,     ///<Sampling clocks are gated in standby mode
            v0=0x00000000,     ///<Sampling clocks are not gated when in standby mode
        };
        namespace timerStbMaskValC{
            constexpr MPL::Value<timerStbMaskVal,timerStbMaskVal::v1> v1{};
            constexpr MPL::Value<timerStbMaskVal,timerStbMaskVal::v0> v0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,timerStbMaskVal> timerStbMask{}; 
        ///Daylight Saving Enable.
        enum class dstEnVal {
            v0=0x00000000,     ///<Disabled. Daylight saving changes are not applied. Daylight saving registers can be modified.
            v1=0x00000001,     ///<Enabled. Daylight saving changes are applied.
        };
        namespace dstEnValC{
            constexpr MPL::Value<dstEnVal,dstEnVal::v0> v0{};
            constexpr MPL::Value<dstEnVal,dstEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dstEnVal> dstEn{}; 
        ///Software Reset bit.
        enum class swrVal {
            v0=0x00000000,     ///<Software Reset cleared.
            v1=0x00000001,     ///<Software Reset asserted.
        };
        namespace swrValC{
            constexpr MPL::Value<swrVal,swrVal::v0> v0{};
            constexpr MPL::Value<swrVal,swrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,swrVal> swr{}; 
        ///RTC Clock Output Selection.
        enum class clkoutVal {
            v00=0x00000000,     ///<No Output Clock
            v01=0x00000001,     ///<Fine 1 Hz Clock
            v10=0x00000002,     ///<32.768 kHz Clock
            v11=0x00000003,     ///<Coarse 1 Hz Clock
        };
        namespace clkoutValC{
            constexpr MPL::Value<clkoutVal,clkoutVal::v00> v00{};
            constexpr MPL::Value<clkoutVal,clkoutVal::v01> v01{};
            constexpr MPL::Value<clkoutVal,clkoutVal::v10> v10{};
            constexpr MPL::Value<clkoutVal,clkoutVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,clkoutVal> clkout{}; 
    }
    namespace RtcStatus{    ///<RTC Status Register
        using Addr = Register::Address<0x40050012,0xfffff610,0,unsigned>;
        ///Invalidate CPU read/write access bit.
        enum class invalBitVal {
            v0=0x00000000,     ///<Time /Date Counters can be read/written. Time /Date is valid.
            v1=0x00000001,     ///<Time /Date Counter values are changing or Time /Date is invalid and cannot be read or written.
        };
        namespace invalBitValC{
            constexpr MPL::Value<invalBitVal,invalBitVal::v0> v0{};
            constexpr MPL::Value<invalBitVal,invalBitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invalBitVal> invalBit{}; 
        ///Write Protect Enable status bit.
        enum class writeProtEnVal {
            v0=0x00000000,     ///<Registers are unlocked and can be accessed.
            v1=0x00000001,     ///<Registers are locked and in read-only mode.
        };
        namespace writeProtEnValC{
            constexpr MPL::Value<writeProtEnVal,writeProtEnVal::v0> v0{};
            constexpr MPL::Value<writeProtEnVal,writeProtEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,writeProtEnVal> writeProtEn{}; 
        ///CPU Low Voltage Warning status bit.
        enum class cpuLowVoltVal {
            v0=0x00000000,     ///<CPU in Normal Operating Voltage.
            v1=0x00000001,     ///<CPU Voltage is below Normal Operating Voltage. RTC Registers in read-only mode.
        };
        namespace cpuLowVoltValC{
            constexpr MPL::Value<cpuLowVoltVal,cpuLowVoltVal::v0> v0{};
            constexpr MPL::Value<cpuLowVoltVal,cpuLowVoltVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cpuLowVoltVal> cpuLowVolt{}; 
        ///Reset Source bit.
        enum class rstSrcVal {
            v0=0x00000000,     ///<Part was reset due to Standby Mode Exit (that is when VDD is powered up and VBAT was not powered down at all).
            v1=0x00000001,     ///<Part was reset due to Power-On Reset (that is Power On Reset when both VBAT and VDD are powered up).
        };
        namespace rstSrcValC{
            constexpr MPL::Value<rstSrcVal,rstSrcVal::v0> v0{};
            constexpr MPL::Value<rstSrcVal,rstSrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rstSrcVal> rstSrc{}; 
        ///Compensation Interval bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpInt{}; 
        ///Write Enable bits.
        enum class weVal {
            v10=0x00000002,     ///<Enable Write Protection - Registers are locked.
        };
        namespace weValC{
            constexpr MPL::Value<weVal,weVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,weVal> we{}; 
        ///Bus Error bit.
        enum class busErrVal {
            v0=0x00000000,     ///<Read and Write accesses are normal.
            v1=0x00000001,     ///<Read or Write accesses occurred when INVAL_BIT was asserted.
        };
        namespace busErrValC{
            constexpr MPL::Value<busErrVal,busErrVal::v0> v0{};
            constexpr MPL::Value<busErrVal,busErrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,busErrVal> busErr{}; 
        ///Compensation Done bit.
        enum class cmpDoneVal {
            v0=0x00000000,     ///<Compensation busy or not enabled.
            v1=0x00000001,     ///<Compensation completed.
        };
        namespace cmpDoneValC{
            constexpr MPL::Value<cmpDoneVal,cmpDoneVal::v0> v0{};
            constexpr MPL::Value<cmpDoneVal,cmpDoneVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,cmpDoneVal> cmpDone{}; 
    }
    namespace RtcIsr{    ///<RTC Interrupt Status Register
        using Addr = Register::Address<0x40050014,0xffff0002,0,unsigned>;
        ///Tamper Interrupt Status bit.
        enum class tamperIsVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted (Default on reset) .
        };
        namespace tamperIsValC{
            constexpr MPL::Value<tamperIsVal,tamperIsVal::v0> v0{};
            constexpr MPL::Value<tamperIsVal,tamperIsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tamperIsVal> tamperIs{}; 
        ///Alarm Interrupt Status bit.
        enum class almIsVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        namespace almIsValC{
            constexpr MPL::Value<almIsVal,almIsVal::v0> v0{};
            constexpr MPL::Value<almIsVal,almIsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,almIsVal> almIs{}; 
        ///Days Interrupt Status bit.
        enum class dayIsVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        namespace dayIsValC{
            constexpr MPL::Value<dayIsVal,dayIsVal::v0> v0{};
            constexpr MPL::Value<dayIsVal,dayIsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dayIsVal> dayIs{}; 
        ///Hours Interrupt Status bit.
        enum class hourIsVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        namespace hourIsValC{
            constexpr MPL::Value<hourIsVal,hourIsVal::v0> v0{};
            constexpr MPL::Value<hourIsVal,hourIsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,hourIsVal> hourIs{}; 
        ///Minutes Interrupt Status bit.
        enum class minIsVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        namespace minIsValC{
            constexpr MPL::Value<minIsVal,minIsVal::v0> v0{};
            constexpr MPL::Value<minIsVal,minIsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,minIsVal> minIs{}; 
        ///1 Hz Interval Interrupt Status bit.
        enum class is1hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        namespace is1hzValC{
            constexpr MPL::Value<is1hzVal,is1hzVal::v0> v0{};
            constexpr MPL::Value<is1hzVal,is1hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,is1hzVal> is1hz{}; 
        ///2 Hz Interval Interrupt Status bit.
        enum class is2hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        namespace is2hzValC{
            constexpr MPL::Value<is2hzVal,is2hzVal::v0> v0{};
            constexpr MPL::Value<is2hzVal,is2hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,is2hzVal> is2hz{}; 
        ///4 Hz Interval Interrupt Status bit.
        enum class is4hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        namespace is4hzValC{
            constexpr MPL::Value<is4hzVal,is4hzVal::v0> v0{};
            constexpr MPL::Value<is4hzVal,is4hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,is4hzVal> is4hz{}; 
        ///8 Hz Interval Interrupt Status bit.
        enum class is8hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        namespace is8hzValC{
            constexpr MPL::Value<is8hzVal,is8hzVal::v0> v0{};
            constexpr MPL::Value<is8hzVal,is8hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,is8hzVal> is8hz{}; 
        ///16 Hz Interval Interrupt Status bit.
        enum class is16hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        namespace is16hzValC{
            constexpr MPL::Value<is16hzVal,is16hzVal::v0> v0{};
            constexpr MPL::Value<is16hzVal,is16hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,is16hzVal> is16hz{}; 
        ///32 Hz Interval Interrupt Status bit.
        enum class is32hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        namespace is32hzValC{
            constexpr MPL::Value<is32hzVal,is32hzVal::v0> v0{};
            constexpr MPL::Value<is32hzVal,is32hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,is32hzVal> is32hz{}; 
        ///64 Hz Interval Interrupt Status bit.
        enum class is64hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        namespace is64hzValC{
            constexpr MPL::Value<is64hzVal,is64hzVal::v0> v0{};
            constexpr MPL::Value<is64hzVal,is64hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,is64hzVal> is64hz{}; 
        ///128 Hz Interval Interrupt Status bit.
        enum class is128hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        namespace is128hzValC{
            constexpr MPL::Value<is128hzVal,is128hzVal::v0> v0{};
            constexpr MPL::Value<is128hzVal,is128hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,is128hzVal> is128hz{}; 
        ///256 Hz Interval Interrupt Status bit.
        enum class is256hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        namespace is256hzValC{
            constexpr MPL::Value<is256hzVal,is256hzVal::v0> v0{};
            constexpr MPL::Value<is256hzVal,is256hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,is256hzVal> is256hz{}; 
        ///512 Hz Interval Interrupt Status bit.
        enum class is512hzVal {
            v0=0x00000000,     ///<Interrupt is de-asserted.
            v1=0x00000001,     ///<Interrupt is asserted.
        };
        namespace is512hzValC{
            constexpr MPL::Value<is512hzVal,is512hzVal::v0> v0{};
            constexpr MPL::Value<is512hzVal,is512hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,is512hzVal> is512hz{}; 
    }
    namespace RtcIer{    ///<RTC Interrupt Enable Register
        using Addr = Register::Address<0x40050016,0xffff0002,0,unsigned>;
        ///Tamper Interrupt Enable bit.
        enum class tamperIeVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled (Default on reset).
        };
        namespace tamperIeValC{
            constexpr MPL::Value<tamperIeVal,tamperIeVal::v0> v0{};
            constexpr MPL::Value<tamperIeVal,tamperIeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tamperIeVal> tamperIe{}; 
        ///Alarm Interrupt Enable bit.
        enum class almIeVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace almIeValC{
            constexpr MPL::Value<almIeVal,almIeVal::v0> v0{};
            constexpr MPL::Value<almIeVal,almIeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,almIeVal> almIe{}; 
        ///Days Interrupt Enable bit.
        enum class dayIeVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace dayIeValC{
            constexpr MPL::Value<dayIeVal,dayIeVal::v0> v0{};
            constexpr MPL::Value<dayIeVal,dayIeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dayIeVal> dayIe{}; 
        ///Hours Interrupt Enable bit.
        enum class hourIeVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace hourIeValC{
            constexpr MPL::Value<hourIeVal,hourIeVal::v0> v0{};
            constexpr MPL::Value<hourIeVal,hourIeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,hourIeVal> hourIe{}; 
        ///Minutes Interrupt Enable bit.
        enum class minIeVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace minIeValC{
            constexpr MPL::Value<minIeVal,minIeVal::v0> v0{};
            constexpr MPL::Value<minIeVal,minIeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,minIeVal> minIe{}; 
        ///1 Hz Interval Interrupt Enable bit.
        enum class ie1hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace ie1hzValC{
            constexpr MPL::Value<ie1hzVal,ie1hzVal::v0> v0{};
            constexpr MPL::Value<ie1hzVal,ie1hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ie1hzVal> ie1hz{}; 
        ///2 Hz Interval Interrupt Enable bit.
        enum class ie2hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace ie2hzValC{
            constexpr MPL::Value<ie2hzVal,ie2hzVal::v0> v0{};
            constexpr MPL::Value<ie2hzVal,ie2hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ie2hzVal> ie2hz{}; 
        ///4 Hz Interval Interrupt Enable bit.
        enum class ie4hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace ie4hzValC{
            constexpr MPL::Value<ie4hzVal,ie4hzVal::v0> v0{};
            constexpr MPL::Value<ie4hzVal,ie4hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ie4hzVal> ie4hz{}; 
        ///8 Hz Interval Interrupt Enable bit.
        enum class ie8hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace ie8hzValC{
            constexpr MPL::Value<ie8hzVal,ie8hzVal::v0> v0{};
            constexpr MPL::Value<ie8hzVal,ie8hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ie8hzVal> ie8hz{}; 
        ///16 Hz Interval Interrupt Enable bit.
        enum class ie16hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace ie16hzValC{
            constexpr MPL::Value<ie16hzVal,ie16hzVal::v0> v0{};
            constexpr MPL::Value<ie16hzVal,ie16hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ie16hzVal> ie16hz{}; 
        ///32 Hz Interval Interrupt Enable bit.
        enum class ie32hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace ie32hzValC{
            constexpr MPL::Value<ie32hzVal,ie32hzVal::v0> v0{};
            constexpr MPL::Value<ie32hzVal,ie32hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ie32hzVal> ie32hz{}; 
        ///64 Hz Interval Interrupt Enable bit.
        enum class ie64hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace ie64hzValC{
            constexpr MPL::Value<ie64hzVal,ie64hzVal::v0> v0{};
            constexpr MPL::Value<ie64hzVal,ie64hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ie64hzVal> ie64hz{}; 
        ///128 Hz Interval Interrupt Enable bit.
        enum class ie128hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace ie128hzValC{
            constexpr MPL::Value<ie128hzVal,ie128hzVal::v0> v0{};
            constexpr MPL::Value<ie128hzVal,ie128hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ie128hzVal> ie128hz{}; 
        ///256 Hz Interval Interrupt Enable bit.
        enum class ie256hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace ie256hzValC{
            constexpr MPL::Value<ie256hzVal,ie256hzVal::v0> v0{};
            constexpr MPL::Value<ie256hzVal,ie256hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ie256hzVal> ie256hz{}; 
        ///512 Hz Interval Interrupt Enable bit.
        enum class ie512hzVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        namespace ie512hzValC{
            constexpr MPL::Value<ie512hzVal,ie512hzVal::v0> v0{};
            constexpr MPL::Value<ie512hzVal,ie512hzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ie512hzVal> ie512hz{}; 
    }
    namespace RtcGpDataReg{    ///<RTC General Purpose Data Register
        using Addr = Register::Address<0x40050020,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpDataReg{}; 
    }
    namespace RtcDstHour{    ///<RTC Daylight Saving Hour Register
        using Addr = Register::Address<0x40050022,0xffffe0e0,0,unsigned>;
        ///Daylight Saving Time (DST) Hours End Value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dstEndHour{}; 
        ///Daylight Saving Time (DST) Hours Start Value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> dstStartHour{}; 
    }
    namespace RtcDstMonth{    ///<RTC Daylight Saving Month Register
        using Addr = Register::Address<0x40050024,0xfffff0f0,0,unsigned>;
        ///Daylight Saving Time (DST) Month End Value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dstEndMonth{}; 
        ///Daylight Saving Time (DST) Month Start Value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> dstStartMonth{}; 
    }
    namespace RtcDstDay{    ///<RTC Daylight Saving Day Register
        using Addr = Register::Address<0x40050026,0xffffe0e0,0,unsigned>;
        ///Daylight Saving Time (DST) Day End Value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dstEndDay{}; 
        ///Daylight Saving Time (DST) Day Start Value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> dstStartDay{}; 
    }
    namespace RtcCompen{    ///<RTC Compensation Register
        using Addr = Register::Address<0x40050028,0xffff0000,0,unsigned>;
        ///Compensation Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> compenVal{}; 
    }
    namespace RtcTamperDirection{    ///<Tamper Direction Register
        using Addr = Register::Address<0x4005002c,0xfffff0f0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> aPTamp{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> iOTamp{}; 
    }
    namespace RtcTamperQscr{    ///<Tamper Queue Status and Control Register
        using Addr = Register::Address<0x4005002e,0xffff08f8,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qFull{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> qFullIntEn{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qClear{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> lfsrClkSel{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> lfsrDuration{}; 
    }
    namespace RtcTamperScr{    ///<RTC Tamper Status and Control Register
        using Addr = Register::Address<0x40050032,0xfffff0f0,0,unsigned>;
        ///Tamper Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tmprEn{}; 
        ///Tamper Status Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tmprSts{}; 
    }
    namespace RtcFilter01Cfg{    ///<RTC Tamper 0 1 Filter Configuration Register
        using Addr = Register::Address<0x40050034,0xffff0000,0,unsigned>;
        ///Tamper Detect Bit 1 Filter Duration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> filDur1{}; 
        ///Tamper Filter 1 Clock Select
        enum class clkSel1Val {
            v000=0x00000000,     ///<32 kHz clock
            v001=0x00000001,     ///<512 Hz clock
            v010=0x00000002,     ///<128 Hz clock
            v011=0x00000003,     ///<64 Hz clock
            v100=0x00000004,     ///<16 Hz clock
            v101=0x00000005,     ///<8 Hz clock
            v110=0x00000006,     ///<4 Hz clock
            v111=0x00000007,     ///<2 Hz clock
        };
        namespace clkSel1ValC{
            constexpr MPL::Value<clkSel1Val,clkSel1Val::v000> v000{};
            constexpr MPL::Value<clkSel1Val,clkSel1Val::v001> v001{};
            constexpr MPL::Value<clkSel1Val,clkSel1Val::v010> v010{};
            constexpr MPL::Value<clkSel1Val,clkSel1Val::v011> v011{};
            constexpr MPL::Value<clkSel1Val,clkSel1Val::v100> v100{};
            constexpr MPL::Value<clkSel1Val,clkSel1Val::v101> v101{};
            constexpr MPL::Value<clkSel1Val,clkSel1Val::v110> v110{};
            constexpr MPL::Value<clkSel1Val,clkSel1Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,clkSel1Val> clkSel1{}; 
        ///Tamper Detect Input Bit 1 Polarity Control
        enum class pol1Val {
            v0=0x00000000,     ///<Tamper detect input bit 1 is active high.
            v1=0x00000001,     ///<Tamper detect input bit 1 is active low.
        };
        namespace pol1ValC{
            constexpr MPL::Value<pol1Val,pol1Val::v0> v0{};
            constexpr MPL::Value<pol1Val,pol1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pol1Val> pol1{}; 
        ///Tamper Detect Bit 0 Filter Duration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> filDur0{}; 
        ///Tamper Filter 0 Clock Select
        enum class clkSel0Val {
            v000=0x00000000,     ///<32 kHz clock
            v001=0x00000001,     ///<512 Hz clock
            v010=0x00000002,     ///<128 Hz clock
            v011=0x00000003,     ///<64 Hz clock
            v100=0x00000004,     ///<16 Hz clock
            v101=0x00000005,     ///<8 Hz clock
            v110=0x00000006,     ///<4 Hz clock
            v111=0x00000007,     ///<2 Hz clock
        };
        namespace clkSel0ValC{
            constexpr MPL::Value<clkSel0Val,clkSel0Val::v000> v000{};
            constexpr MPL::Value<clkSel0Val,clkSel0Val::v001> v001{};
            constexpr MPL::Value<clkSel0Val,clkSel0Val::v010> v010{};
            constexpr MPL::Value<clkSel0Val,clkSel0Val::v011> v011{};
            constexpr MPL::Value<clkSel0Val,clkSel0Val::v100> v100{};
            constexpr MPL::Value<clkSel0Val,clkSel0Val::v101> v101{};
            constexpr MPL::Value<clkSel0Val,clkSel0Val::v110> v110{};
            constexpr MPL::Value<clkSel0Val,clkSel0Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,clkSel0Val> clkSel0{}; 
        ///Tamper Detect Input Bit 0 Polarity Control
        enum class pol0Val {
            v0=0x00000000,     ///<Tamper detect input bit 0 is active high.
            v1=0x00000001,     ///<Tamper detect input bit 0 is active low.
        };
        namespace pol0ValC{
            constexpr MPL::Value<pol0Val,pol0Val::v0> v0{};
            constexpr MPL::Value<pol0Val,pol0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pol0Val> pol0{}; 
    }
    namespace RtcFilter2Cfg{    ///<RTC Tamper 2 Filter Configuration Register
        using Addr = Register::Address<0x40050036,0xffff00ff,0,unsigned>;
        ///Tamper Detect Bit 2 Filter Duration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> filDur2{}; 
        ///Tamper Filter 2 Clock Select
        enum class clkSel2Val {
            v000=0x00000000,     ///<32 kHz clock
            v001=0x00000001,     ///<512 Hz clock
            v010=0x00000002,     ///<128 Hz clock
            v011=0x00000003,     ///<64 Hz clock
            v100=0x00000004,     ///<16 Hz clock
            v101=0x00000005,     ///<8 Hz clock
            v110=0x00000006,     ///<4 Hz clock
            v111=0x00000007,     ///<2 Hz clock
        };
        namespace clkSel2ValC{
            constexpr MPL::Value<clkSel2Val,clkSel2Val::v000> v000{};
            constexpr MPL::Value<clkSel2Val,clkSel2Val::v001> v001{};
            constexpr MPL::Value<clkSel2Val,clkSel2Val::v010> v010{};
            constexpr MPL::Value<clkSel2Val,clkSel2Val::v011> v011{};
            constexpr MPL::Value<clkSel2Val,clkSel2Val::v100> v100{};
            constexpr MPL::Value<clkSel2Val,clkSel2Val::v101> v101{};
            constexpr MPL::Value<clkSel2Val,clkSel2Val::v110> v110{};
            constexpr MPL::Value<clkSel2Val,clkSel2Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,clkSel2Val> clkSel2{}; 
        ///Tamper Detect Input Bit 2 Polarity Control
        enum class pol2Val {
            v0=0x00000000,     ///<Tamper detect input bit 2 is active high.
            v1=0x00000001,     ///<Tamper detect input bit 2 is active low.
        };
        namespace pol2ValC{
            constexpr MPL::Value<pol2Val,pol2Val::v0> v0{};
            constexpr MPL::Value<pol2Val,pol2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pol2Val> pol2{}; 
    }
    namespace RtcTamperQueue{    ///<Tamper Queue Register
        using Addr = Register::Address<0x40050040,0xffff0000,0,unsigned>;
        ///Tamper type stamp and pin number information register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tamperData{}; 
    }
    namespace RtcCtrl2{    ///<RTC Control 2 Register
        using Addr = Register::Address<0x40050042,0xffffff1e,0,unsigned>;
        ///Tamper Configuration Over
        enum class tampCfgOverVal {
            v0=0x00000000,     ///<Tamper filter processing disabled.
            v1=0x00000001,     ///<Tamper filter processing enabled.
        };
        namespace tampCfgOverValC{
            constexpr MPL::Value<tampCfgOverVal,tampCfgOverVal::v0> v0{};
            constexpr MPL::Value<tampCfgOverVal,tampCfgOverVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tampCfgOverVal> tampCfgOver{}; 
        ///Wakeup Status
        enum class wakeupStatusVal {
            v00=0x00000000,     ///<The wakeup/hibernation pin is in HiZ mode.
            v01=0x00000001,     ///<The wakeup/hibernation pin is at logic 0. MCU is in sleep mode.
            v10=0x00000002,     ///<The wakeup/ hibernation pin is at logic 1. MCU is in sleep mode.
        };
        namespace wakeupStatusValC{
            constexpr MPL::Value<wakeupStatusVal,wakeupStatusVal::v00> v00{};
            constexpr MPL::Value<wakeupStatusVal,wakeupStatusVal::v01> v01{};
            constexpr MPL::Value<wakeupStatusVal,wakeupStatusVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,wakeupStatusVal> wakeupStatus{}; 
        ///Wakeup Mode
        enum class wakeupModeVal {
            v0=0x00000000,     ///<Tamper pin 0 is used as the tamper pin.
            v1=0x00000001,     ///<Tamper pin 0 is used as a wakeup/hibernation pin.
        };
        namespace wakeupModeValC{
            constexpr MPL::Value<wakeupModeVal,wakeupModeVal::v0> v0{};
            constexpr MPL::Value<wakeupModeVal,wakeupModeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,wakeupModeVal> wakeupMode{}; 
    }
}
