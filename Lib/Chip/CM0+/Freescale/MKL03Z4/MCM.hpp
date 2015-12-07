#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Core Platform Miscellaneous Control Module
    namespace McmPlasc{    ///<Crossbar Switch (AXBS) Slave Configuration
        using Addr = Register::Address<0xf0003008,0xffffff00,0,unsigned>;
        ///Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> asc{}; 
        namespace AscValC{
        }
    }
    namespace McmPlamc{    ///<Crossbar Switch (AXBS) Master Configuration
        using Addr = Register::Address<0xf000300a,0xffffff00,0,unsigned>;
        ///Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> amc{}; 
        namespace AmcValC{
        }
    }
    namespace McmPlacr{    ///<Platform Control Register
        using Addr = Register::Address<0xf000300c,0xfffe3fff,0,unsigned>;
        ///Enable Flash Data Speculation
        enum class EfdsVal {
            v0=0x00000000,     ///<Disable flash data speculation.
            v1=0x00000001,     ///<Enable flash data speculation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,EfdsVal> efds{}; 
        namespace EfdsValC{
            constexpr Register::FieldValue<decltype(efds),EfdsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(efds),EfdsVal::v1> v1{};
        }
        ///Disable Flash Controller Speculation
        enum class DfcsVal {
            v0=0x00000000,     ///<Enable flash controller speculation.
            v1=0x00000001,     ///<Disable flash controller speculation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DfcsVal> dfcs{}; 
        namespace DfcsValC{
            constexpr Register::FieldValue<decltype(dfcs),DfcsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dfcs),DfcsVal::v1> v1{};
        }
        ///Enable Stalling Flash Controller
        enum class EsfcVal {
            v0=0x00000000,     ///<Disable stalling flash controller when flash is busy.
            v1=0x00000001,     ///<Enable stalling flash controller when flash is busy.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,EsfcVal> esfc{}; 
        namespace EsfcValC{
            constexpr Register::FieldValue<decltype(esfc),EsfcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(esfc),EsfcVal::v1> v1{};
        }
    }
    namespace McmCpo{    ///<Compute Operation Control Register
        using Addr = Register::Address<0xf0003040,0xfffffff8,0,unsigned>;
        ///Compute Operation Request
        enum class CporeqVal {
            v0=0x00000000,     ///<Request is cleared.
            v1=0x00000001,     ///<Request Compute Operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CporeqVal> cporeq{}; 
        namespace CporeqValC{
            constexpr Register::FieldValue<decltype(cporeq),CporeqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cporeq),CporeqVal::v1> v1{};
        }
        ///Compute Operation Acknowledge
        enum class CpoackVal {
            v0=0x00000000,     ///<Compute operation entry has not completed or compute operation exit has completed.
            v1=0x00000001,     ///<Compute operation entry has completed or compute operation exit has not completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CpoackVal> cpoack{}; 
        namespace CpoackValC{
            constexpr Register::FieldValue<decltype(cpoack),CpoackVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpoack),CpoackVal::v1> v1{};
        }
        ///Compute Operation Wake-up on Interrupt
        enum class CpowoiVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<When set, the CPOREQ is cleared on any interrupt or exception vector fetch.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CpowoiVal> cpowoi{}; 
        namespace CpowoiValC{
            constexpr Register::FieldValue<decltype(cpowoi),CpowoiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpowoi),CpowoiVal::v1> v1{};
        }
    }
}
