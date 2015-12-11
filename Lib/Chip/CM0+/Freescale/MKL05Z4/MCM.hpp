#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Core Platform Miscellaneous Control Module
    namespace McmPlasc{    ///<Crossbar Switch (AXBS) Slave Configuration
        using Addr = Register::Address<0xf0003008,0xffffff00,0,unsigned>;
        ///Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> asc{}; 
    }
    namespace McmPlamc{    ///<Crossbar Switch (AXBS) Master Configuration
        using Addr = Register::Address<0xf000300a,0xffffff00,0,unsigned>;
        ///Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> amc{}; 
    }
    namespace McmPlacr{    ///<Platform Control Register
        using Addr = Register::Address<0xf000300c,0xfffe01ff,0,unsigned>;
        ///Arbitration select
        enum class ArbVal {
            v0=0x00000000,     ///<Fixed-priority arbitration for the crossbar masters
            v1=0x00000001,     ///<Round-robin arbitration for the crossbar masters
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ArbVal> arb{}; 
        namespace ArbValC{
            constexpr Register::FieldValue<decltype(arb)::Type,ArbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(arb)::Type,ArbVal::v1> v1{};
        }
        }
        ///Clear Flash Controller Cache
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cfcc{}; 
        ///Disable Flash Controller Data Caching
        enum class DfcdaVal {
            v0=0x00000000,     ///<Enable flash controller data caching
            v1=0x00000001,     ///<Disable flash controller data caching.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,DfcdaVal> dfcda{}; 
        namespace DfcdaValC{
            constexpr Register::FieldValue<decltype(dfcda)::Type,DfcdaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dfcda)::Type,DfcdaVal::v1> v1{};
        }
        }
        ///Disable Flash Controller Instruction Caching
        enum class DfcicVal {
            v0=0x00000000,     ///<Enable flash controller instruction caching.
            v1=0x00000001,     ///<Disable flash controller instruction caching.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DfcicVal> dfcic{}; 
        namespace DfcicValC{
            constexpr Register::FieldValue<decltype(dfcic)::Type,DfcicVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dfcic)::Type,DfcicVal::v1> v1{};
        }
        }
        ///Disable Flash Controller Cache
        enum class DfccVal {
            v0=0x00000000,     ///<Enable flash controller cache.
            v1=0x00000001,     ///<Disable flash controller cache.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DfccVal> dfcc{}; 
        namespace DfccValC{
            constexpr Register::FieldValue<decltype(dfcc)::Type,DfccVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dfcc)::Type,DfccVal::v1> v1{};
        }
        }
        ///Enable Flash Data Speculation
        enum class EfdsVal {
            v0=0x00000000,     ///<Disable flash data speculation.
            v1=0x00000001,     ///<Enable flash data speculation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,EfdsVal> efds{}; 
        namespace EfdsValC{
            constexpr Register::FieldValue<decltype(efds)::Type,EfdsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(efds)::Type,EfdsVal::v1> v1{};
        }
        }
        ///Disable Flash Controller Speculation
        enum class DfcsVal {
            v0=0x00000000,     ///<Enable flash controller speculation.
            v1=0x00000001,     ///<Disable flash controller speculation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DfcsVal> dfcs{}; 
        namespace DfcsValC{
            constexpr Register::FieldValue<decltype(dfcs)::Type,DfcsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dfcs)::Type,DfcsVal::v1> v1{};
        }
        }
        ///Enable Stalling Flash Controller
        enum class EsfcVal {
            v0=0x00000000,     ///<Disable stalling flash controller when flash is busy.
            v1=0x00000001,     ///<Enable stalling flash controller when flash is busy.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,EsfcVal> esfc{}; 
        namespace EsfcValC{
            constexpr Register::FieldValue<decltype(esfc)::Type,EsfcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esfc)::Type,EsfcVal::v1> v1{};
        }
        }
    }
    namespace McmCpo{    ///<Compute Operation Control Register
        using Addr = Register::Address<0xf0003040,0xfffffff8,0,unsigned>;
        ///Compute Operation request
        enum class CporeqVal {
            v0=0x00000000,     ///<Request is cleared.
            v1=0x00000001,     ///<Request Compute Operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CporeqVal> cporeq{}; 
        namespace CporeqValC{
            constexpr Register::FieldValue<decltype(cporeq)::Type,CporeqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cporeq)::Type,CporeqVal::v1> v1{};
        }
        }
        ///Compute Operation acknowledge
        enum class CpoackVal {
            v0=0x00000000,     ///<Compute operation entry has not completed or compute operation exit has completed.
            v1=0x00000001,     ///<Compute operation entry has completed or compute operation exit has not completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CpoackVal> cpoack{}; 
        namespace CpoackValC{
            constexpr Register::FieldValue<decltype(cpoack)::Type,CpoackVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpoack)::Type,CpoackVal::v1> v1{};
        }
        }
        ///Compute Operation wakeup on interrupt
        enum class CpowoiVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<When set, the CPOREQ is cleared on any interrupt or exception vector fetch.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CpowoiVal> cpowoi{}; 
        namespace CpowoiValC{
            constexpr Register::FieldValue<decltype(cpowoi)::Type,CpowoiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpowoi)::Type,CpowoiVal::v1> v1{};
        }
        }
    }
}
