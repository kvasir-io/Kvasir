#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40044000,0x3fffff88,0,unsigned>;
        ///Input 0 Range. 
        enum class in0rangeVal {
            v6Ma=0x00000000,     ///<Input range is 0-6 mA.
            v5Ma=0x00000001,     ///<Input range is 0-5 mA.
            v4Ma=0x00000002,     ///<Input range is 0-4 mA.
            v3Ma=0x00000003,     ///<Input range is 0-3 mA.
            v2Ma=0x00000004,     ///<Input range is 0-2 mA.
            v1Ma=0x00000005,     ///<Input range is 0-1 mA.
        };
        namespace in0rangeValC{
            constexpr MPL::Value<in0rangeVal,in0rangeVal::v6Ma> v6Ma{};
            constexpr MPL::Value<in0rangeVal,in0rangeVal::v5Ma> v5Ma{};
            constexpr MPL::Value<in0rangeVal,in0rangeVal::v4Ma> v4Ma{};
            constexpr MPL::Value<in0rangeVal,in0rangeVal::v3Ma> v3Ma{};
            constexpr MPL::Value<in0rangeVal,in0rangeVal::v2Ma> v2Ma{};
            constexpr MPL::Value<in0rangeVal,in0rangeVal::v1Ma> v1Ma{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,in0rangeVal> in0range{}; 
        ///Input 1 Range. 
        enum class in1rangeVal {
            v6Ma=0x00000000,     ///<Input range is 0-6 mA.
            v5Ma=0x00000001,     ///<Input range is 0-5 mA.
            v4Ma=0x00000002,     ///<Input range is 0-4 mA.
            v3Ma=0x00000003,     ///<Input range is 0-3 mA.
            v2Ma=0x00000004,     ///<Input range is 0-2 mA.
            v1Ma=0x00000005,     ///<Input range is 0-1 mA.
        };
        namespace in1rangeValC{
            constexpr MPL::Value<in1rangeVal,in1rangeVal::v6Ma> v6Ma{};
            constexpr MPL::Value<in1rangeVal,in1rangeVal::v5Ma> v5Ma{};
            constexpr MPL::Value<in1rangeVal,in1rangeVal::v4Ma> v4Ma{};
            constexpr MPL::Value<in1rangeVal,in1rangeVal::v3Ma> v3Ma{};
            constexpr MPL::Value<in1rangeVal,in1rangeVal::v2Ma> v2Ma{};
            constexpr MPL::Value<in1rangeVal,in1rangeVal::v1Ma> v1Ma{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,in1rangeVal> in1range{}; 
        ///Converter 0 Enable. 
        enum class c0enVal {
            disabled=0x00000000,     ///<Disable IVC channel 0.
            enabled=0x00000001,     ///<Enable IVC channel 0.
        };
        namespace c0enValC{
            constexpr MPL::Value<c0enVal,c0enVal::disabled> disabled{};
            constexpr MPL::Value<c0enVal,c0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,c0enVal> c0en{}; 
        ///Converter 1 Enable. 
        enum class c1enVal {
            disabled=0x00000000,     ///<Disable IVC channel 1.
            enabled=0x00000001,     ///<Enable IVC channel 1.
        };
        namespace c1enValC{
            constexpr MPL::Value<c1enVal,c1enVal::disabled> disabled{};
            constexpr MPL::Value<c1enVal,c1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,c1enVal> c1en{}; 
    }
}
