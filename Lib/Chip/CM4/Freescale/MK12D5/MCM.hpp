#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Core Platform Miscellaneous Control Module
    namespace McmPlasc{    ///<Crossbar Switch (AXBS) Slave Configuration
        using Addr = Register::Address<0xe0080008,0xffffff00,0,unsigned>;
        ///Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> asc{}; 
    }
    namespace McmPlamc{    ///<Crossbar Switch (AXBS) Master Configuration
        using Addr = Register::Address<0xe008000a,0xffffff00,0,unsigned>;
        ///Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> amc{}; 
    }
    namespace McmPlacr{    ///<Crossbar Switch (AXBS) Control Register
        using Addr = Register::Address<0xe008000c,0xfffffdff,0,unsigned>;
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
    }
}
