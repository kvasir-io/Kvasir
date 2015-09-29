#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real-time counter
    namespace RtcSc{    ///<RTC Status and Control Register
        using Addr = Register::Address<0x4002d000,0xffff380f,0,unsigned>;
        ///Real-Time Counter Output
        enum class rtcoVal {
            v0=0x00000000,     ///<Real-time counter output disabled.
            v1=0x00000001,     ///<Real-time counter output enabled.
        };
        namespace rtcoValC{
            constexpr MPL::Value<rtcoVal,rtcoVal::v0> v0{};
            constexpr MPL::Value<rtcoVal,rtcoVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rtcoVal> rtco{}; 
        ///DMA Enable
        enum class dmaeVal {
            v0=0x00000000,     ///<DMA request is disabled. Software polling needed.
            v1=0x00000001,     ///<DMA request is enabled.
        };
        namespace dmaeValC{
            constexpr MPL::Value<dmaeVal,dmaeVal::v0> v0{};
            constexpr MPL::Value<dmaeVal,dmaeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,dmaeVal> dmae{}; 
        ///Real-Time Interrupt Enable
        enum class rtieVal {
            v0=0x00000000,     ///<Real-time interrupt requests are disabled. Use software polling.
            v1=0x00000001,     ///<Real-time interrupt requests are enabled.
        };
        namespace rtieValC{
            constexpr MPL::Value<rtieVal,rtieVal::v0> v0{};
            constexpr MPL::Value<rtieVal,rtieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rtieVal> rtie{}; 
        ///Real-Time Interrupt Flag
        enum class rtifVal {
            v0=0x00000000,     ///<RTC counter has not reached the value in the RTC modulo register.
            v1=0x00000001,     ///<RTC counter has reached the value in the RTC modulo register.
        };
        namespace rtifValC{
            constexpr MPL::Value<rtifVal,rtifVal::v0> v0{};
            constexpr MPL::Value<rtifVal,rtifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rtifVal> rtif{}; 
        ///Real-Time Clock Prescaler Select
        enum class rtcpsVal {
            v000=0x00000000,     ///<Off
            v001=0x00000001,     ///<If RTCLKS = x0, it is 1; if RTCLKS = x1, it is 128.
            v010=0x00000002,     ///<If RTCLKS = x0, it is 2; if RTCLKS = x1, it is 256.
            v011=0x00000003,     ///<If RTCLKS = x0, it is 4; if RTCLKS = x1, it is 512.
            v100=0x00000004,     ///<If RTCLKS = x0, it is 8; if RTCLKS = x1, it is 1024.
            v101=0x00000005,     ///<If RTCLKS = x0, it is 16; if RTCLKS = x1, it is 2048.
            v110=0x00000006,     ///<If RTCLKS = x0, it is 32; if RTCLKS = x1, it is 100.
            v111=0x00000007,     ///<If RTCLKS = x0, it is 64; if RTCLKS = x1, it is 1000.
        };
        namespace rtcpsValC{
            constexpr MPL::Value<rtcpsVal,rtcpsVal::v000> v000{};
            constexpr MPL::Value<rtcpsVal,rtcpsVal::v001> v001{};
            constexpr MPL::Value<rtcpsVal,rtcpsVal::v010> v010{};
            constexpr MPL::Value<rtcpsVal,rtcpsVal::v011> v011{};
            constexpr MPL::Value<rtcpsVal,rtcpsVal::v100> v100{};
            constexpr MPL::Value<rtcpsVal,rtcpsVal::v101> v101{};
            constexpr MPL::Value<rtcpsVal,rtcpsVal::v110> v110{};
            constexpr MPL::Value<rtcpsVal,rtcpsVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,rtcpsVal> rtcps{}; 
        ///Real-Time Clock Source Select
        enum class rtclksVal {
            v00=0x00000000,     ///<External clock source.
            v01=0x00000001,     ///<Real-time clock source is 1 kHz.
            v10=0x00000002,     ///<Internal clock.
            v11=0x00000003,     ///<Bus clock.
        };
        namespace rtclksValC{
            constexpr MPL::Value<rtclksVal,rtclksVal::v00> v00{};
            constexpr MPL::Value<rtclksVal,rtclksVal::v01> v01{};
            constexpr MPL::Value<rtclksVal,rtclksVal::v10> v10{};
            constexpr MPL::Value<rtclksVal,rtclksVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,rtclksVal> rtclks{}; 
    }
    namespace RtcMod{    ///<RTC Modulo Register
        using Addr = Register::Address<0x4002d004,0xffff0000,0,unsigned>;
        ///RTC Modulo
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
    }
    namespace RtcCnt{    ///<RTC Counter Register
        using Addr = Register::Address<0x4002d008,0xffff0000,0,unsigned>;
        ///RTC Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
}
