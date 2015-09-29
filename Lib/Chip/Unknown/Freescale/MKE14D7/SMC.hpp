#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System mode controller
    namespace SmcPmprot{    ///<SMC Power Mode Protection Register
        using Addr = Register::Address<0x40056000,0xffffffdf,0,unsigned char>;
        ///Allow Very Low Power Stop Mode
        enum class avlpVal {
            v0=0x00000000,     ///<VLPS is not allowed.
            v1=0x00000001,     ///<VLPS is allowed.
        };
        namespace avlpValC{
            constexpr MPL::Value<avlpVal,avlpVal::v0> v0{};
            constexpr MPL::Value<avlpVal,avlpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,avlpVal> avlp{}; 
    }
    namespace SmcPmctrl{    ///<SMC Power Mode Control Register
        using Addr = Register::Address<0x40056001,0xfffffff0,0,unsigned char>;
        ///Stop Mode Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> stopm{}; 
        ///Stop Aborted
        enum class stopaVal {
            v0=0x00000000,     ///<The previous stop mode entry was successsful.
            v1=0x00000001,     ///<The previous stop mode entry was aborted.
        };
        namespace stopaValC{
            constexpr MPL::Value<stopaVal,stopaVal::v0> v0{};
            constexpr MPL::Value<stopaVal,stopaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,stopaVal> stopa{}; 
    }
    namespace SmcPmstat{    ///<SMC Power Mode Status Register
        using Addr = Register::Address<0x40056003,0xffffffec,0,unsigned char>;
        ///CurrCurrent Power mode is run
        enum class runVal {
            v0=0x00000000,     ///<Current Power mode is not run.
            v1=0x00000001,     ///<Current Power mode is run.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::v0> v0{};
            constexpr MPL::Value<runVal,runVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,runVal> run{}; 
        ///Current Power mode is STOP
        enum class stopVal {
            v0=0x00000000,     ///<Current Power mode is not stop.
            v1=0x00000001,     ///<Current Power mode is stop.
        };
        namespace stopValC{
            constexpr MPL::Value<stopVal,stopVal::v0> v0{};
            constexpr MPL::Value<stopVal,stopVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,stopVal> stop{}; 
        ///Current Power mode is VLPS
        enum class vlpsVal {
            v0=0x00000000,     ///<Current Power mode is not VLPS.
            v1=0x00000001,     ///<Current Power mode is VLPS.
        };
        namespace vlpsValC{
            constexpr MPL::Value<vlpsVal,vlpsVal::v0> v0{};
            constexpr MPL::Value<vlpsVal,vlpsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,vlpsVal> vlps{}; 
    }
}
