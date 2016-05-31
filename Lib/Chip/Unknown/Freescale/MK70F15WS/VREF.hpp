#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Voltage Reference
    namespace VrefTrm{    ///<VREF Trim Register
        using Addr = Register::Address<0x40074000,0xffffff00,0x00000000,unsigned char>;
        ///Trim bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> trim{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VrefSc{    ///<VREF Status and Control Register
        using Addr = Register::Address<0x40074001,0xffffff00,0x00000000,unsigned char>;
        ///Buffer Mode selection
        enum class ModelvVal {
            v00=0x00000000,     ///<Bandgap on only, for stabilization and startup
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<Tight-regulation buffer enabled
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModelvVal> modeLv{}; 
        namespace ModelvValC{
            constexpr Register::FieldValue<decltype(modeLv)::Type,ModelvVal::v00> v00{};
            constexpr Register::FieldValue<decltype(modeLv)::Type,ModelvVal::v01> v01{};
            constexpr Register::FieldValue<decltype(modeLv)::Type,ModelvVal::v10> v10{};
            constexpr Register::FieldValue<decltype(modeLv)::Type,ModelvVal::v11> v11{};
        }
        ///Internal Voltage Reference has settled
        enum class VrefstVal {
            v0=0x00000000,     ///<The bandgap is disabled or not ready.
            v1=0x00000001,     ///<The bandgap is ready.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,VrefstVal> vrefst{}; 
        namespace VrefstValC{
            constexpr Register::FieldValue<decltype(vrefst)::Type,VrefstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vrefst)::Type,VrefstVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Regulator enable
        enum class RegenVal {
            v0=0x00000000,     ///<Internal 1.75 V regulator is disabled.
            v1=0x00000001,     ///<Internal 1.75 V regulator is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RegenVal> regen{}; 
        namespace RegenValC{
            constexpr Register::FieldValue<decltype(regen)::Type,RegenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(regen)::Type,RegenVal::v1> v1{};
        }
        ///Internal Voltage Reference enable
        enum class VrefenVal {
            v0=0x00000000,     ///<The module is disabled.
            v1=0x00000001,     ///<The module is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,VrefenVal> vrefen{}; 
        namespace VrefenValC{
            constexpr Register::FieldValue<decltype(vrefen)::Type,VrefenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vrefen)::Type,VrefenVal::v1> v1{};
        }
    }
}
