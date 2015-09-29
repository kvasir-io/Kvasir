#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Mode Controller
    namespace SmcPmprot{    ///<Power Mode Protection register
        using Addr = Register::Address<0x4007e000,0xffffff5d,0,unsigned char>;
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
        ///Run Mode Control
        enum class runmVal {
            v00=0x00000000,     ///<Normal Run mode (RUN)
            v10=0x00000002,     ///<Very-Low-Power Run mode (VLPR)
            v11=0x00000003,     ///<High Speed Run mode (HSRUN)
        };
        namespace runmValC{
            constexpr MPL::Value<runmVal,runmVal::v00> v00{};
            constexpr MPL::Value<runmVal,runmVal::v10> v10{};
            constexpr MPL::Value<runmVal,runmVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,runmVal> runm{}; 
    }
    namespace SmcStopctrl{    ///<Stop Control Register
        using Addr = Register::Address<0x4007e002,0xffffff00,0,unsigned char>;
        ///VLLS Mode Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> vllsm{}; 
        ///LPO Power Option
        enum class lpopoVal {
            v0=0x00000000,     ///<LPO clock is enabled in LLS/VLLSx
            v1=0x00000001,     ///<LPO clock is disabled in LLS/VLLSx
        };
        namespace lpopoValC{
            constexpr MPL::Value<lpopoVal,lpopoVal::v0> v0{};
            constexpr MPL::Value<lpopoVal,lpopoVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,lpopoVal> lpopo{}; 
        ///RAM2 Power Option
        enum class ram2poVal {
            v0=0x00000000,     ///<RAM2 not powered in VLLS2
            v1=0x00000001,     ///<RAM2 powered in VLLS2
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
        };
        namespace pstopoValC{
            constexpr MPL::Value<pstopoVal,pstopoVal::v00> v00{};
            constexpr MPL::Value<pstopoVal,pstopoVal::v01> v01{};
            constexpr MPL::Value<pstopoVal,pstopoVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pstopoVal> pstopo{}; 
    }
    namespace SmcPmstat{    ///<Power Mode Status register
        using Addr = Register::Address<0x4007e003,0xffffff00,0,unsigned char>;
        ///Power Mode Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pmstat{}; 
    }
}
