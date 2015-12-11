#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real-time counter
    namespace RtcSc{    ///<RTC Status and Control Register
        using Addr = Register::Address<0x4003d000,0xffff382f,0,unsigned>;
        ///Real-Time Counter Output
        enum class RtcoVal {
            v0=0x00000000,     ///<Real-time counter output disabled.
            v1=0x00000001,     ///<Real-time counter output enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RtcoVal> rtco{}; 
        namespace RtcoValC{
            constexpr Register::FieldValue<decltype(rtco)::Type,RtcoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtco)::Type,RtcoVal::v1> v1{};
        }
        ///Real-Time Interrupt Enable
        enum class RtieVal {
            v0=0x00000000,     ///<Real-time interrupt requests are disabled. Use software polling.
            v1=0x00000001,     ///<Real-time interrupt requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RtieVal> rtie{}; 
        namespace RtieValC{
            constexpr Register::FieldValue<decltype(rtie)::Type,RtieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtie)::Type,RtieVal::v1> v1{};
        }
        ///Real-Time Interrupt Flag
        enum class RtifVal {
            v0=0x00000000,     ///<RTC counter has not reached the value in the RTC modulo register.
            v1=0x00000001,     ///<RTC counter has reached the value in the RTC modulo register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RtifVal> rtif{}; 
        namespace RtifValC{
            constexpr Register::FieldValue<decltype(rtif)::Type,RtifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtif)::Type,RtifVal::v1> v1{};
        }
        ///Real-Time Clock Prescaler Select
        enum class RtcpsVal {
            v000=0x00000000,     ///<Off
            v001=0x00000001,     ///<If RTCLKS = x0, it is 1; if RTCLKS = x1, it is 128.
            v010=0x00000002,     ///<If RTCLKS = x0, it is 2; if RTCLKS = x1, it is 256.
            v011=0x00000003,     ///<If RTCLKS = x0, it is 4; if RTCLKS = x1, it is 512.
            v100=0x00000004,     ///<If RTCLKS = x0, it is 8; if RTCLKS = x1, it is 1024.
            v101=0x00000005,     ///<If RTCLKS = x0, it is 16; if RTCLKS = x1, it is 2048.
            v110=0x00000006,     ///<If RTCLKS = x0, it is 32; if RTCLKS = x1, it is 100.
            v111=0x00000007,     ///<If RTCLKS = x0, it is 64; if RTCLKS = x1, it is 1000.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,RtcpsVal> rtcps{}; 
        namespace RtcpsValC{
            constexpr Register::FieldValue<decltype(rtcps)::Type,RtcpsVal::v000> v000{};
            constexpr Register::FieldValue<decltype(rtcps)::Type,RtcpsVal::v001> v001{};
            constexpr Register::FieldValue<decltype(rtcps)::Type,RtcpsVal::v010> v010{};
            constexpr Register::FieldValue<decltype(rtcps)::Type,RtcpsVal::v011> v011{};
            constexpr Register::FieldValue<decltype(rtcps)::Type,RtcpsVal::v100> v100{};
            constexpr Register::FieldValue<decltype(rtcps)::Type,RtcpsVal::v101> v101{};
            constexpr Register::FieldValue<decltype(rtcps)::Type,RtcpsVal::v110> v110{};
            constexpr Register::FieldValue<decltype(rtcps)::Type,RtcpsVal::v111> v111{};
        }
        ///Real-Time Clock Source Select
        enum class RtclksVal {
            v00=0x00000000,     ///<External clock source.
            v01=0x00000001,     ///<Real-time clock source is 1 kHz (LPOCLK).
            v10=0x00000002,     ///<Internal reference clock (ICSIRCLK).
            v11=0x00000003,     ///<Bus clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,RtclksVal> rtclks{}; 
        namespace RtclksValC{
            constexpr Register::FieldValue<decltype(rtclks)::Type,RtclksVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rtclks)::Type,RtclksVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rtclks)::Type,RtclksVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rtclks)::Type,RtclksVal::v11> v11{};
        }
    }
    namespace RtcMod{    ///<RTC Modulo Register
        using Addr = Register::Address<0x4003d004,0xffff0000,0,unsigned>;
        ///RTC Modulo
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
    }
    namespace RtcCnt{    ///<RTC Counter Register
        using Addr = Register::Address<0x4003d008,0xffff0000,0,unsigned>;
        ///RTC Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
}
