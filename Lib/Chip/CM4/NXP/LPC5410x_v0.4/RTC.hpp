#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real-Time Clock
    namespace Nonectrl{    ///<RTC control register
        using Addr = Register::Address<0x4003c000,0xffffff00,0,unsigned>;
        ///Software reset control
        enum class swresetVal {
            notInReset=0x00000000,     ///<Not in reset. The RTC is not held in reset. This
										bit must be cleared prior to configuring or initiating any
										operation of the RTC.
            inReset=0x00000001,     ///<In reset. The RTC is held in reset. All register
										bits within the RTC will be forced to their reset value
										except the OFD bit. This bit must be cleared before writing
										to any register in the RTC - including writes to set any of
										the other bits within this register. Do not attempt to write
										to any bits of this register at the same time that the reset
										bit is being cleared.
        };
        namespace swresetValC{
            constexpr MPL::Value<swresetVal,swresetVal::notInReset> notInReset{};
            constexpr MPL::Value<swresetVal,swresetVal::inReset> inReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,swresetVal> swreset{}; 
        ///Oscillator fail detect status.
        enum class ofdVal {
            run=0x00000000,     ///<Run. The RTC oscillator is running properly.
										Writing a 0 has no effect.
            fail=0x00000001,     ///<Fail. RTC oscillator fail detected. Clear this flag
										after the following power-up. Writing a 1 clears this
										bit.
        };
        namespace ofdValC{
            constexpr MPL::Value<ofdVal,ofdVal::run> run{};
            constexpr MPL::Value<ofdVal,ofdVal::fail> fail{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ofdVal> ofd{}; 
        ///RTC 1 Hz timer alarm flag status.
        enum class alarm1hzVal {
            noMatch=0x00000000,     ///<No match. No match has occurred on the 1 Hz RTC
										timer. Writing a 0 has no effect.
            match=0x00000001,     ///<Match. A match condition has occurred on the 1 Hz
										RTC timer. This flag generates an RTC alarm interrupt
										request RTC_ALARM which can also wake up the part from any
										low power mode. Writing a 1 clears this bit.
        };
        namespace alarm1hzValC{
            constexpr MPL::Value<alarm1hzVal,alarm1hzVal::noMatch> noMatch{};
            constexpr MPL::Value<alarm1hzVal,alarm1hzVal::match> match{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,alarm1hzVal> alarm1hz{}; 
        ///RTC 1 kHz timer wake-up flag status.
        enum class wake1khzVal {
            run=0x00000000,     ///<Run. The RTC 1 kHz timer is running. Writing a 0
										has no effect.
            timeOut=0x00000001,     ///<Time-out. The 1 kHz high-resolution/wake-up timer
										has timed out. This flag generates an RTC wake-up interrupt
										request RTC-WAKE which can also wake up the part from any
										low power mode. Writing a 1 clears this bit.
        };
        namespace wake1khzValC{
            constexpr MPL::Value<wake1khzVal,wake1khzVal::run> run{};
            constexpr MPL::Value<wake1khzVal,wake1khzVal::timeOut> timeOut{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,wake1khzVal> wake1khz{}; 
        ///RTC 1 Hz timer alarm enable for Deep
								power-down.
        enum class alarmdpdEnVal {
            disable=0x00000000,     ///<Disable. A match on the 1 Hz RTC timer will not
										bring the part out of Deep power-down mode.
            enable=0x00000001,     ///<Enable. A match on the 1 Hz RTC timer bring the
										part out of Deep power-down mode.
        };
        namespace alarmdpdEnValC{
            constexpr MPL::Value<alarmdpdEnVal,alarmdpdEnVal::disable> disable{};
            constexpr MPL::Value<alarmdpdEnVal,alarmdpdEnVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,alarmdpdEnVal> alarmdpdEn{}; 
        ///RTC 1 kHz timer wake-up enable for Deep
								power-down.
        enum class wakedpdEnVal {
            disable=0x00000000,     ///<Disable. A match on the 1 kHz RTC timer will not
										bring the part out of Deep power-down mode.
            enable=0x00000001,     ///<Enable. A match on the 1 kHz RTC timer bring the
										part out of Deep power-down mode.
        };
        namespace wakedpdEnValC{
            constexpr MPL::Value<wakedpdEnVal,wakedpdEnVal::disable> disable{};
            constexpr MPL::Value<wakedpdEnVal,wakedpdEnVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wakedpdEnVal> wakedpdEn{}; 
        ///RTC 1 kHz clock enable. This bit can be set to 0 to
								conserve power if the 1 kHz timer is not used. This bit has no
								effect when the RTC is disabled (bit 7 of this register is
								0).
        enum class rtc1khzEnVal {
            disable=0x00000000,     ///<Disable. A match on the 1 kHz RTC timer will not
										bring the part out of Deep power-down mode.
            enable=0x00000001,     ///<Enable. The 1 kHz RTC timer is
										enabled.
        };
        namespace rtc1khzEnValC{
            constexpr MPL::Value<rtc1khzEnVal,rtc1khzEnVal::disable> disable{};
            constexpr MPL::Value<rtc1khzEnVal,rtc1khzEnVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rtc1khzEnVal> rtc1khzEn{}; 
        ///RTC enable.
        enum class rtcEnVal {
            disable=0x00000000,     ///<Disable. The RTC 1 Hz and 1 kHz clocks are shut
										down and the RTC operation is disabled. This bit should be 0
										when writing to load a value in the RTC counter
										register.
            enable=0x00000001,     ///<Enable. The 1 Hz RTC clock is running and RTC
										operation is enabled. This bit must be set to initiate
										operation of the RTC. The first clock to the RTC counter
										occurs 1 s after this bit is set. To also enable the
										high-resolution, 1 kHz clock, set bit 6 in this
										register.
        };
        namespace rtcEnValC{
            constexpr MPL::Value<rtcEnVal,rtcEnVal::disable> disable{};
            constexpr MPL::Value<rtcEnVal,rtcEnVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rtcEnVal> rtcEn{}; 
    }
    namespace Nonematch{    ///<RTC match register
        using Addr = Register::Address<0x4003c004,0x00000000,0,unsigned>;
        ///Contains the match value against which the 1 Hz RTC timer
								will be compared to generate set the alarm flag RTC_ALARM and
								generate an alarm interrupt/wake-up if enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> matval{}; 
    }
    namespace Nonecount{    ///<RTC counter register
        using Addr = Register::Address<0x4003c008,0x00000000,0,unsigned>;
        ///A read reflects the current value of the main, 1 Hz RTC
								timer. A write loads a new initial value into the timer. The RTC
								counter will count up continuously at a 1 Hz rate once the RTC
								Software Reset is removed (by clearing bit 0 of the CTRL register).
								Only write to this register when the RTC_EN bit in the RTC CTRL
								Register is 0. The counter increments one second after the RTC_EN
								bit is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace Nonewake{    ///<RTC high-resolution/wake-up timer control register
        using Addr = Register::Address<0x4003c00c,0xffff0000,0,unsigned>;
        ///A read reflects the current value of the
								high-resolution/wake-up timer. A write pre-loads a start count value
								into the wake-up timer and initializes a count-down sequence. Do not
								write to this register while counting is in progress.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
}
