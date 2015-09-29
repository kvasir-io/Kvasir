#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Mode Controller
    namespace SmcPmprot{    ///<Power Mode Protection register
        using Addr = Register::Address<0x4007e000,0xffffff55,0,unsigned char>;
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
            v0=0x00000000,     ///<Any LLSx mode is not allowed
            v1=0x00000001,     ///<Any LLSx mode is allowed
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
        ///Allow High Speed Run mode
        enum class ahsrunVal {
            v0=0x00000000,     ///<HSRUN is not allowed
            v1=0x00000001,     ///<HSRUN is allowed
        };
        namespace ahsrunValC{
            constexpr MPL::Value<ahsrunVal,ahsrunVal::v0> v0{};
            constexpr MPL::Value<ahsrunVal,ahsrunVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ahsrunVal> ahsrun{}; 
    }
    namespace SmcPmctrl{    ///<Power Mode Control register
        using Addr = Register::Address<0x4007e001,0xffffff90,0,unsigned char>;
        ///Stop Mode Control
        enum class stopmVal {
            v000=0x00000000,     ///<Normal Stop (STOP)
            v001=0x00000001,     ///<Reserved
            v010=0x00000002,     ///<Very-Low-Power Stop (VLPS)
            v011=0x00000003,     ///<Low-Leakage Stop (LLSx)
            v100=0x00000004,     ///<Very-Low-Leakage Stop (VLLSx)
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
            v00=0x00000000,     ///<Normal Run mode (RUN)
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<Very-Low-Power Run mode (VLPR)
            v11=0x00000003,     ///<High Speed Run mode (HSRUN)
        };
        namespace runmValC{
            constexpr MPL::Value<runmVal,runmVal::v00> v00{};
            constexpr MPL::Value<runmVal,runmVal::v01> v01{};
            constexpr MPL::Value<runmVal,runmVal::v10> v10{};
            constexpr MPL::Value<runmVal,runmVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,runmVal> runm{}; 
    }
    namespace SmcStopctrl{    ///<Stop Control Register
        using Addr = Register::Address<0x4007e002,0xffffff08,0,unsigned char>;
        ///LLS or VLLS Mode Control
        enum class llsmVal {
            v000=0x00000000,     ///<VLLS0 if PMCTRL[STOPM]=VLLSx, reserved if PMCTRL[STOPM]=LLSx
            v001=0x00000001,     ///<VLLS1 if PMCTRL[STOPM]=VLLSx, reserved if PMCTRL[STOPM]=LLSx
            v010=0x00000002,     ///<VLLS2 if PMCTRL[STOPM]=VLLSx, LLS2 if PMCTRL[STOPM]=LLSx
            v011=0x00000003,     ///<VLLS3 if PMCTRL[STOPM]=VLLSx, LLS3 if PMCTRL[STOPM]=LLSx
            v100=0x00000004,     ///<Reserved
            v101=0x00000005,     ///<Reserved
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        namespace llsmValC{
            constexpr MPL::Value<llsmVal,llsmVal::v000> v000{};
            constexpr MPL::Value<llsmVal,llsmVal::v001> v001{};
            constexpr MPL::Value<llsmVal,llsmVal::v010> v010{};
            constexpr MPL::Value<llsmVal,llsmVal::v011> v011{};
            constexpr MPL::Value<llsmVal,llsmVal::v100> v100{};
            constexpr MPL::Value<llsmVal,llsmVal::v101> v101{};
            constexpr MPL::Value<llsmVal,llsmVal::v110> v110{};
            constexpr MPL::Value<llsmVal,llsmVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,llsmVal> llsm{}; 
        ///RAM2 Power Option
        enum class ram2poVal {
            v0=0x00000000,     ///<RAM2 not powered in LLS2/VLLS2
            v1=0x00000001,     ///<RAM2 powered in LLS2/VLLS2
        };
        namespace ram2poValC{
            constexpr MPL::Value<ram2poVal,ram2poVal::v0> v0{};
            constexpr MPL::Value<ram2poVal,ram2poVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ram2poVal> ram2po{}; 
        ///POR Power Option
        enum class porpoVal {
            v0=0x00000000,     ///<POR detect circuit is enabled in VLLS0
            v1=0x00000001,     ///<POR detect circuit is disabled in VLLS0
        };
        namespace porpoValC{
            constexpr MPL::Value<porpoVal,porpoVal::v0> v0{};
            constexpr MPL::Value<porpoVal,porpoVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,porpoVal> porpo{}; 
        ///Partial Stop Option
        enum class pstopoVal {
            v00=0x00000000,     ///<STOP - Normal Stop mode
            v01=0x00000001,     ///<PSTOP1 - Partial Stop with both system and bus clocks disabled
            v10=0x00000002,     ///<PSTOP2 - Partial Stop with system clock disabled and bus clock enabled
            v11=0x00000003,     ///<Reserved
        };
        namespace pstopoValC{
            constexpr MPL::Value<pstopoVal,pstopoVal::v00> v00{};
            constexpr MPL::Value<pstopoVal,pstopoVal::v01> v01{};
            constexpr MPL::Value<pstopoVal,pstopoVal::v10> v10{};
            constexpr MPL::Value<pstopoVal,pstopoVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pstopoVal> pstopo{}; 
    }
    namespace SmcPmstat{    ///<Power Mode Status register
        using Addr = Register::Address<0x4007e003,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pmstat{}; 
    }
}
