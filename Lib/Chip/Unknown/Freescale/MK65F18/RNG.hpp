#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Random Number Generator Accelerator
    namespace RngCr{    ///<RNGA Control Register
        using Addr = Register::Address<0x400a0000,0x00000000,0x00000000,unsigned>;
        ///Go
        enum class GoVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,GoVal> go{}; 
        namespace GoValC{
            constexpr Register::FieldValue<decltype(go)::Type,GoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(go)::Type,GoVal::v1> v1{};
        }
        ///High Assurance
        enum class HaVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HaVal> ha{}; 
        namespace HaValC{
            constexpr Register::FieldValue<decltype(ha)::Type,HaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ha)::Type,HaVal::v1> v1{};
        }
        ///Interrupt Mask
        enum class IntmVal {
            v0=0x00000000,     ///<Not masked
            v1=0x00000001,     ///<Masked
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IntmVal> intm{}; 
        namespace IntmValC{
            constexpr Register::FieldValue<decltype(intm)::Type,IntmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intm)::Type,IntmVal::v1> v1{};
        }
        ///Clear Interrupt
        enum class ClriVal {
            v0=0x00000000,     ///<Do not clear the interrupt.
            v1=0x00000001,     ///<Clear the interrupt. When you write 1 to this field, RNGA then resets the error-interrupt indicator (SR[ERRI]). This bit always reads as 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ClriVal> clri{}; 
        namespace ClriValC{
            constexpr Register::FieldValue<decltype(clri)::Type,ClriVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clri)::Type,ClriVal::v1> v1{};
        }
        ///Sleep
        enum class SlpVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<Sleep (low-power) mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SlpVal> slp{}; 
        namespace SlpValC{
            constexpr Register::FieldValue<decltype(slp)::Type,SlpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(slp)::Type,SlpVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace RngSr{    ///<RNGA Status Register
        using Addr = Register::Address<0x400a0004,0x00000000,0x00000000,unsigned>;
        ///Security Violation
        enum class SecvVal {
            v0=0x00000000,     ///<No security violation
            v1=0x00000001,     ///<Security violation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SecvVal> secv{}; 
        namespace SecvValC{
            constexpr Register::FieldValue<decltype(secv)::Type,SecvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(secv)::Type,SecvVal::v1> v1{};
        }
        ///Last Read Status
        enum class LrsVal {
            v0=0x00000000,     ///<No underflow
            v1=0x00000001,     ///<Underflow
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,LrsVal> lrs{}; 
        namespace LrsValC{
            constexpr Register::FieldValue<decltype(lrs)::Type,LrsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lrs)::Type,LrsVal::v1> v1{};
        }
        ///Output Register Underflow
        enum class OruVal {
            v0=0x00000000,     ///<No underflow
            v1=0x00000001,     ///<Underflow
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,OruVal> oru{}; 
        namespace OruValC{
            constexpr Register::FieldValue<decltype(oru)::Type,OruVal::v0> v0{};
            constexpr Register::FieldValue<decltype(oru)::Type,OruVal::v1> v1{};
        }
        ///Error Interrupt
        enum class ErriVal {
            v0=0x00000000,     ///<No underflow
            v1=0x00000001,     ///<Underflow
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ErriVal> erri{}; 
        namespace ErriValC{
            constexpr Register::FieldValue<decltype(erri)::Type,ErriVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erri)::Type,ErriVal::v1> v1{};
        }
        ///Sleep
        enum class SlpVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<Sleep (low-power) mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SlpVal> slp{}; 
        namespace SlpValC{
            constexpr Register::FieldValue<decltype(slp)::Type,SlpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(slp)::Type,SlpVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Output Register Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oregLvl{}; 
        ///Output Register Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oregSize{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace RngEr{    ///<RNGA Entropy Register
        using Addr = Register::Address<0x400a0008,0x00000000,0x00000000,unsigned>;
        ///External Entropy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extEnt{}; 
    }
    namespace RngOr{    ///<RNGA Output Register
        using Addr = Register::Address<0x400a000c,0x00000000,0x00000000,unsigned>;
        ///Random Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> randout{}; 
    }
}
