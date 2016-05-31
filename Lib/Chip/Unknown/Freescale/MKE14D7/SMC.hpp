#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System mode controller
    namespace SmcPmprot{    ///<SMC Power Mode Protection Register
        using Addr = Register::Address<0x40056000,0xffffff00,0x00000000,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Allow Very Low Power Stop Mode
        enum class AvlpVal {
            v0=0x00000000,     ///<VLPS is not allowed.
            v1=0x00000001,     ///<VLPS is allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AvlpVal> avlp{}; 
        namespace AvlpValC{
            constexpr Register::FieldValue<decltype(avlp)::Type,AvlpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avlp)::Type,AvlpVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace SmcPmctrl{    ///<SMC Power Mode Control Register
        using Addr = Register::Address<0x40056001,0xffffff00,0x00000000,unsigned char>;
        ///Stop Mode Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> stopm{}; 
        ///Stop Aborted
        enum class StopaVal {
            v0=0x00000000,     ///<The previous stop mode entry was successsful.
            v1=0x00000001,     ///<The previous stop mode entry was aborted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,StopaVal> stopa{}; 
        namespace StopaValC{
            constexpr Register::FieldValue<decltype(stopa)::Type,StopaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stopa)::Type,StopaVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace SmcPmstat{    ///<SMC Power Mode Status Register
        using Addr = Register::Address<0x40056003,0xffffff00,0x00000000,unsigned char>;
        ///CurrCurrent Power mode is run
        enum class RunVal {
            v0=0x00000000,     ///<Current Power mode is not run.
            v1=0x00000001,     ///<Current Power mode is run.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::v0> v0{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::v1> v1{};
        }
        ///Current Power mode is STOP
        enum class StopVal {
            v0=0x00000000,     ///<Current Power mode is not stop.
            v1=0x00000001,     ///<Current Power mode is stop.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,StopVal> stop{}; 
        namespace StopValC{
            constexpr Register::FieldValue<decltype(stop)::Type,StopVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stop)::Type,StopVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Current Power mode is VLPS
        enum class VlpsVal {
            v0=0x00000000,     ///<Current Power mode is not VLPS.
            v1=0x00000001,     ///<Current Power mode is VLPS.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,VlpsVal> vlps{}; 
        namespace VlpsValC{
            constexpr Register::FieldValue<decltype(vlps)::Type,VlpsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vlps)::Type,VlpsVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
}
