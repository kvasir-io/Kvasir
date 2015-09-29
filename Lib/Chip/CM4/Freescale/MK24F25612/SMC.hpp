#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Mode Controller
    namespace SmcPmprot{    ///<Power Mode Protection register
        using Addr = Register::Address<0x4007e000,0xffffffd5,0,unsigned char>;
        ///Allow Very-Low-Leakage Stop Mode
        enum class avllsVal {
            v0=0x00000000,     ///<Any VLLSx mode is not allowed
            v1=0x00000001,     ///<Any VLLSx mode is allowed
        };
        namespace avllsValC{
            constexpr MPL::Value<avllsVal,avllsVal::v0> v0{};
            constexpr MPL::Value<avllsVal,avllsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,avllsVal> avlls{}; 
        ///Allow Low-Leakage Stop Mode
        enum class allsVal {
            v0=0x00000000,     ///<LLS is not allowed
            v1=0x00000001,     ///<LLS is allowed
        };
        namespace allsValC{
            constexpr MPL::Value<allsVal,allsVal::v0> v0{};
            constexpr MPL::Value<allsVal,allsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,allsVal> alls{}; 
        ///Allow Very-Low-Power Modes
        enum class avlpVal {
            v0=0x00000000,     ///<VLPR, VLPW, and VLPS are not allowed.
            v1=0x00000001,     ///<VLPR, VLPW, and VLPS are allowed.
        };
        namespace avlpValC{
            constexpr MPL::Value<avlpVal,avlpVal::v0> v0{};
            constexpr MPL::Value<avlpVal,avlpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,avlpVal> avlp{}; 
    }
    namespace SmcPmctrl{    ///<Power Mode Control register
        using Addr = Register::Address<0x4007e001,0xffffff10,0,unsigned char>;
        ///Stop Mode Control
        enum class stopmVal {
            v000=0x00000000,     ///<Normal Stop (STOP)
            v010=0x00000002,     ///<Very-Low-Power Stop (VLPS)
            v011=0x00000003,     ///<Low-Leakage Stop (LLS)
            v100=0x00000004,     ///<Very-Low-Leakage Stop (VLLSx)
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
            v00=0x00000000,     ///<Normal Run mode (RUN)
            v10=0x00000002,     ///<Very-Low-Power Run mode (VLPR)
        };
        namespace runmValC{
            constexpr MPL::Value<runmVal,runmVal::v00> v00{};
            constexpr MPL::Value<runmVal,runmVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,runmVal> runm{}; 
        ///Low-Power Wake Up On Interrupt
        enum class lpwuiVal {
            v0=0x00000000,     ///<The system remains in a VLP mode on an interrupt
            v1=0x00000001,     ///<The system exits to Normal RUN mode on an interrupt
        };
        namespace lpwuiValC{
            constexpr MPL::Value<lpwuiVal,lpwuiVal::v0> v0{};
            constexpr MPL::Value<lpwuiVal,lpwuiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lpwuiVal> lpwui{}; 
    }
    namespace SmcVllsctrl{    ///<VLLS Control register
        using Addr = Register::Address<0x4007e002,0xffffffd8,0,unsigned char>;
        ///VLLS Mode Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> vllsm{}; 
        ///POR Power Option
        enum class porpoVal {
            v0=0x00000000,     ///<POR detect circuit is enabled in VLLS0.
            v1=0x00000001,     ///<POR detect circuit is disabled in VLLS0.
        };
        namespace porpoValC{
            constexpr MPL::Value<porpoVal,porpoVal::v0> v0{};
            constexpr MPL::Value<porpoVal,porpoVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,porpoVal> porpo{}; 
    }
    namespace SmcPmstat{    ///<Power Mode Status register
        using Addr = Register::Address<0x4007e003,0xffffff80,0,unsigned char>;
        ///Power Mode Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pmstat{}; 
    }
}
