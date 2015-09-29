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
        using Addr = Register::Address<0x4007e001,0xffffff10,0,unsigned char>;
        ///Stop Mode Control
        enum class stopmVal {
            v000=0x00000000,     ///<Normal stop (STOP)
            v001=0x00000001,     ///<Reserved
            v010=0x00000002,     ///<Very low power stop (VLPS)
            v011=0x00000003,     ///<Low leakage stop (LLS)
            v100=0x00000004,     ///<Very low leakage stop (VLLSx)
            v101=0x00000005,     ///<Reserved
            v110=0x00000006,     ///<Reseved
            v111=0x00000007,     ///<Reserved
        };
        namespace stopmValC{
            constexpr MPL::Value<stopmVal,stopmVal::v000> v000{};
            constexpr MPL::Value<stopmVal,stopmVal::v001> v001{};
            constexpr MPL::Value<stopmVal,stopmVal::v010> v010{};
            constexpr MPL::Value<stopmVal,stopmVal::v011> v011{};
            constexpr MPL::Value<stopmVal,stopmVal::v100> v100{};
            constexpr MPL::Value<stopmVal,stopmVal::v101> v101{};
            constexpr MPL::Value<stopmVal,stopmVal::v110> v110{};
            constexpr MPL::Value<stopmVal,stopmVal::v111> v111{};
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
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<Very low power run mode (VLPR)
            v11=0x00000003,     ///<Reserved
        };
        namespace runmValC{
            constexpr MPL::Value<runmVal,runmVal::v00> v00{};
            constexpr MPL::Value<runmVal,runmVal::v01> v01{};
            constexpr MPL::Value<runmVal,runmVal::v10> v10{};
            constexpr MPL::Value<runmVal,runmVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,runmVal> runm{}; 
        ///Low Power Wake Up on Interrupt
        enum class lpwuiVal {
            v0=0x00000000,     ///<The system remains in a VLP mode on an interrupt
            v1=0x00000001,     ///<The system exits to normal RUN mode on an interrupt
        };
        namespace lpwuiValC{
            constexpr MPL::Value<lpwuiVal,lpwuiVal::v0> v0{};
            constexpr MPL::Value<lpwuiVal,lpwuiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lpwuiVal> lpwui{}; 
    }
    namespace SmcVllsctrl{    ///<VLLS Control Register
        using Addr = Register::Address<0x4007e002,0xfffffff8,0,unsigned char>;
        ///VLLS Mode Control
        enum class vllsmVal {
            v000=0x00000000,     ///<Reserved
            v001=0x00000001,     ///<VLLS1
            v010=0x00000002,     ///<VLLS2
            v011=0x00000003,     ///<VLLS3
            v100=0x00000004,     ///<Reserved
            v101=0x00000005,     ///<Reserved
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        namespace vllsmValC{
            constexpr MPL::Value<vllsmVal,vllsmVal::v000> v000{};
            constexpr MPL::Value<vllsmVal,vllsmVal::v001> v001{};
            constexpr MPL::Value<vllsmVal,vllsmVal::v010> v010{};
            constexpr MPL::Value<vllsmVal,vllsmVal::v011> v011{};
            constexpr MPL::Value<vllsmVal,vllsmVal::v100> v100{};
            constexpr MPL::Value<vllsmVal,vllsmVal::v101> v101{};
            constexpr MPL::Value<vllsmVal,vllsmVal::v110> v110{};
            constexpr MPL::Value<vllsmVal,vllsmVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,vllsmVal> vllsm{}; 
    }
    namespace SmcPmstat{    ///<Power Mode Status Register
        using Addr = Register::Address<0x4007e003,0xffffff80,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pmstat{}; 
    }
}
