#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Mode Controller
    namespace SmcPmprot{    ///<Power Mode Protection Register
        using Addr = Register::Address<0x4007e000,0xffffffd5,0,unsigned char>;
        ///Allow very low leakage stop mode
        enum class avllsVal {
            v0=0x00000000,     ///<Any VLLSx mode is not allowed
            v1=0x00000001,     ///<Any VLLSx mode is allowed
        };
        namespace avllsValC{
            constexpr MPL::Value<avllsVal,avllsVal::v0> v0{};
            constexpr MPL::Value<avllsVal,avllsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,avllsVal> avlls{}; 
        ///Allow low leakage stop mode
        enum class allsVal {
            v0=0x00000000,     ///<LLS is not allowed
            v1=0x00000001,     ///<LLS is allowed
        };
        namespace allsValC{
            constexpr MPL::Value<allsVal,allsVal::v0> v0{};
            constexpr MPL::Value<allsVal,allsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,allsVal> alls{}; 
        ///Allow very low power modes
        enum class avlpVal {
            v0=0x00000000,     ///<VLPR, VLPW and VLPS are not allowed
            v1=0x00000001,     ///<VLPR, VLPW and VLPS are allowed
        };
        namespace avlpValC{
            constexpr MPL::Value<avlpVal,avlpVal::v0> v0{};
            constexpr MPL::Value<avlpVal,avlpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,avlpVal> avlp{}; 
    }
    namespace SmcPmctrl{    ///<Power Mode Control Register
        using Addr = Register::Address<0x4007e001,0xffffff90,0,unsigned char>;
        ///Stop Mode Control
        enum class stopmVal {
            v000=0x00000000,     ///<Normal stop (STOP)
            v010=0x00000002,     ///<Very low power stop (VLPS)
            v011=0x00000003,     ///<Low leakage stop (LLS)
            v100=0x00000004,     ///<Very low leakage stop (VLLSx)
            v110=0x00000006,     ///<Reseved
        };
        namespace stopmValC{
            constexpr MPL::Value<stopmVal,stopmVal::v000> v000{};
            constexpr MPL::Value<stopmVal,stopmVal::v010> v010{};
            constexpr MPL::Value<stopmVal,stopmVal::v011> v011{};
            constexpr MPL::Value<stopmVal,stopmVal::v100> v100{};
            constexpr MPL::Value<stopmVal,stopmVal::v110> v110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,stopmVal> stopm{}; 
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
        ///Run Mode Control
        enum class runmVal {
            v00=0x00000000,     ///<Normal run mode (RUN)
            v10=0x00000002,     ///<Very low power run mode (VLPR)
        };
        namespace runmValC{
            constexpr MPL::Value<runmVal,runmVal::v00> v00{};
            constexpr MPL::Value<runmVal,runmVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,runmVal> runm{}; 
    }
    namespace SmcVllsctrl{    ///<VLLS Control Register
        using Addr = Register::Address<0x4007e002,0xfffffff8,0,unsigned char>;
        ///VLLS Mode Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> vllsm{}; 
    }
    namespace SmcPmstat{    ///<Power Mode Status Register
        using Addr = Register::Address<0x4007e003,0xffffff80,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pmstat{}; 
    }
}
