#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System mode controller
    namespace SmcPmprot{    ///<SMC Power Mode Protection Register
        using Addr = Register::Address<0x40056000,0xffffffdf,0,unsigned char>;
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
    }
    namespace SmcPmctrl{    ///<SMC Power Mode Control Register
        using Addr = Register::Address<0x40056001,0xfffffff0,0,unsigned char>;
        ///Stop Mode Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> stopm{}; 
        ///Stop Aborted
        enum class StopaVal {
            v0=0x00000000,     ///<The previous stop mode entry was successsful.
            v1=0x00000001,     ///<The previous stop mode entry was aborted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,StopaVal> stopa{}; 
        namespace StopaValC{
            constexpr Register::FieldValue<decltype(stopa)::Type,StopaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stopa)::Type,StopaVal::v1> v1{};
        }
    }
    namespace SmcPmstat{    ///<SMC Power Mode Status Register
        using Addr = Register::Address<0x40056003,0xffffffec,0,unsigned char>;
        ///CurrCurrent Power mode is run
        enum class RunVal {
            v0=0x00000000,     ///<Current Power mode is not run.
            v1=0x00000001,     ///<Current Power mode is run.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::v0> v0{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::v1> v1{};
        }
        ///Current Power mode is STOP
        enum class StopVal {
            v0=0x00000000,     ///<Current Power mode is not stop.
            v1=0x00000001,     ///<Current Power mode is stop.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StopVal> stop{}; 
        namespace StopValC{
            constexpr Register::FieldValue<decltype(stop)::Type,StopVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stop)::Type,StopVal::v1> v1{};
        }
        ///Current Power mode is VLPS
        enum class VlpsVal {
            v0=0x00000000,     ///<Current Power mode is not VLPS.
            v1=0x00000001,     ///<Current Power mode is VLPS.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,VlpsVal> vlps{}; 
        namespace VlpsValC{
            constexpr Register::FieldValue<decltype(vlps)::Type,VlpsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vlps)::Type,VlpsVal::v1> v1{};
        }
    }
}
