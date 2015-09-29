#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Core Platform Miscellaneous Control Module
    namespace McmPlasc{    ///<Crossbar Switch (AXBS) Slave Configuration
        using Addr = Register::Address<0xf0003008,0xffffff00,0,unsigned>;
        ///Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> asc{}; 
    }
    namespace McmPlamc{    ///<Crossbar Switch (AXBS) Master Configuration
        using Addr = Register::Address<0xf000300a,0xffffff00,0,unsigned>;
        ///Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> amc{}; 
    }
    namespace McmPlacr{    ///<Platform Control Register
        using Addr = Register::Address<0xf000300c,0xfffe01ff,0,unsigned>;
        ///Arbitration select
        enum class arbVal {
            v0=0x00000000,     ///<Fixed-priority arbitration for the crossbar masters
            v1=0x00000001,     ///<Round-robin arbitration for the crossbar masters
        };
        namespace arbValC{
            constexpr MPL::Value<arbVal,arbVal::v0> v0{};
            constexpr MPL::Value<arbVal,arbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,arbVal> arb{}; 
        ///Clear Flash Controller Cache
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cfcc{}; 
        ///Disable Flash Controller Data Caching
        enum class dfcdaVal {
            v0=0x00000000,     ///<Enable flash controller data caching
            v1=0x00000001,     ///<Disable flash controller data caching.
        };
        namespace dfcdaValC{
            constexpr MPL::Value<dfcdaVal,dfcdaVal::v0> v0{};
            constexpr MPL::Value<dfcdaVal,dfcdaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,dfcdaVal> dfcda{}; 
        ///Disable Flash Controller Instruction Caching
        enum class dfcicVal {
            v0=0x00000000,     ///<Enable flash controller instruction caching.
            v1=0x00000001,     ///<Disable flash controller instruction caching.
        };
        namespace dfcicValC{
            constexpr MPL::Value<dfcicVal,dfcicVal::v0> v0{};
            constexpr MPL::Value<dfcicVal,dfcicVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dfcicVal> dfcic{}; 
        ///Disable Flash Controller Cache
        enum class dfccVal {
            v0=0x00000000,     ///<Enable flash controller cache.
            v1=0x00000001,     ///<Disable flash controller cache.
        };
        namespace dfccValC{
            constexpr MPL::Value<dfccVal,dfccVal::v0> v0{};
            constexpr MPL::Value<dfccVal,dfccVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dfccVal> dfcc{}; 
        ///Enable Flash Data Speculation
        enum class efdsVal {
            v0=0x00000000,     ///<Disable flash data speculation.
            v1=0x00000001,     ///<Enable flash data speculation.
        };
        namespace efdsValC{
            constexpr MPL::Value<efdsVal,efdsVal::v0> v0{};
            constexpr MPL::Value<efdsVal,efdsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,efdsVal> efds{}; 
        ///Disable Flash Controller Speculation
        enum class dfcsVal {
            v0=0x00000000,     ///<Enable flash controller speculation.
            v1=0x00000001,     ///<Disable flash controller speculation.
        };
        namespace dfcsValC{
            constexpr MPL::Value<dfcsVal,dfcsVal::v0> v0{};
            constexpr MPL::Value<dfcsVal,dfcsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dfcsVal> dfcs{}; 
        ///Enable Stalling Flash Controller
        enum class esfcVal {
            v0=0x00000000,     ///<Disable stalling flash controller when flash is busy.
            v1=0x00000001,     ///<Enable stalling flash controller when flash is busy.
        };
        namespace esfcValC{
            constexpr MPL::Value<esfcVal,esfcVal::v0> v0{};
            constexpr MPL::Value<esfcVal,esfcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,esfcVal> esfc{}; 
    }
    namespace McmCpo{    ///<Compute Operation Control Register
        using Addr = Register::Address<0xf0003040,0xfffffff8,0,unsigned>;
        ///Compute Operation request
        enum class cporeqVal {
            v0=0x00000000,     ///<Request is cleared.
            v1=0x00000001,     ///<Request Compute Operation.
        };
        namespace cporeqValC{
            constexpr MPL::Value<cporeqVal,cporeqVal::v0> v0{};
            constexpr MPL::Value<cporeqVal,cporeqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cporeqVal> cporeq{}; 
        ///Compute Operation acknowledge
        enum class cpoackVal {
            v0=0x00000000,     ///<Compute operation entry has not completed or compute operation exit has completed.
            v1=0x00000001,     ///<Compute operation entry has completed or compute operation exit has not completed.
        };
        namespace cpoackValC{
            constexpr MPL::Value<cpoackVal,cpoackVal::v0> v0{};
            constexpr MPL::Value<cpoackVal,cpoackVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cpoackVal> cpoack{}; 
        ///Compute Operation wakeup on interrupt
        enum class cpowoiVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<When set, the CPOREQ is cleared on any interrupt or exception vector fetch.
        };
        namespace cpowoiValC{
            constexpr MPL::Value<cpowoiVal,cpowoiVal::v0> v0{};
            constexpr MPL::Value<cpowoiVal,cpowoiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cpowoiVal> cpowoi{}; 
    }
}
