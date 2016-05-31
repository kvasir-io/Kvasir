#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Ivc0Control{    ///<Module Control
        using Addr = Register::Address<0x40044000,0x3fffff88,0x00000000,unsigned>;
        ///Input 0 Range. 
        enum class In0rangeVal {
            v6Ma=0x00000000,     ///<Input range is 0-6 mA.
            v5Ma=0x00000001,     ///<Input range is 0-5 mA.
            v4Ma=0x00000002,     ///<Input range is 0-4 mA.
            v3Ma=0x00000003,     ///<Input range is 0-3 mA.
            v2Ma=0x00000004,     ///<Input range is 0-2 mA.
            v1Ma=0x00000005,     ///<Input range is 0-1 mA.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,In0rangeVal> in0range{}; 
        namespace In0rangeValC{
            constexpr Register::FieldValue<decltype(in0range)::Type,In0rangeVal::v6Ma> v6Ma{};
            constexpr Register::FieldValue<decltype(in0range)::Type,In0rangeVal::v5Ma> v5Ma{};
            constexpr Register::FieldValue<decltype(in0range)::Type,In0rangeVal::v4Ma> v4Ma{};
            constexpr Register::FieldValue<decltype(in0range)::Type,In0rangeVal::v3Ma> v3Ma{};
            constexpr Register::FieldValue<decltype(in0range)::Type,In0rangeVal::v2Ma> v2Ma{};
            constexpr Register::FieldValue<decltype(in0range)::Type,In0rangeVal::v1Ma> v1Ma{};
        }
        ///Input 1 Range. 
        enum class In1rangeVal {
            v6Ma=0x00000000,     ///<Input range is 0-6 mA.
            v5Ma=0x00000001,     ///<Input range is 0-5 mA.
            v4Ma=0x00000002,     ///<Input range is 0-4 mA.
            v3Ma=0x00000003,     ///<Input range is 0-3 mA.
            v2Ma=0x00000004,     ///<Input range is 0-2 mA.
            v1Ma=0x00000005,     ///<Input range is 0-1 mA.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,In1rangeVal> in1range{}; 
        namespace In1rangeValC{
            constexpr Register::FieldValue<decltype(in1range)::Type,In1rangeVal::v6Ma> v6Ma{};
            constexpr Register::FieldValue<decltype(in1range)::Type,In1rangeVal::v5Ma> v5Ma{};
            constexpr Register::FieldValue<decltype(in1range)::Type,In1rangeVal::v4Ma> v4Ma{};
            constexpr Register::FieldValue<decltype(in1range)::Type,In1rangeVal::v3Ma> v3Ma{};
            constexpr Register::FieldValue<decltype(in1range)::Type,In1rangeVal::v2Ma> v2Ma{};
            constexpr Register::FieldValue<decltype(in1range)::Type,In1rangeVal::v1Ma> v1Ma{};
        }
        ///Converter 0 Enable. 
        enum class C0enVal {
            disabled=0x00000000,     ///<Disable IVC channel 0.
            enabled=0x00000001,     ///<Enable IVC channel 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,C0enVal> c0en{}; 
        namespace C0enValC{
            constexpr Register::FieldValue<decltype(c0en)::Type,C0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(c0en)::Type,C0enVal::enabled> enabled{};
        }
        ///Converter 1 Enable. 
        enum class C1enVal {
            disabled=0x00000000,     ///<Disable IVC channel 1.
            enabled=0x00000001,     ///<Enable IVC channel 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,C1enVal> c1en{}; 
        namespace C1enValC{
            constexpr Register::FieldValue<decltype(c1en)::Type,C1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(c1en)::Type,C1enVal::enabled> enabled{};
        }
    }
}
