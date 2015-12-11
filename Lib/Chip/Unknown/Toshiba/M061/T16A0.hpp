#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//16-bit TimerA
    namespace Noneen{    ///<Enable Register
        using Addr = Register::Address<0x4008d000,0xfffffffc,0,unsigned>;
        ///I2T16A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> i2t16a{}; 
        ///HALT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> halt{}; 
    }
    namespace Nonerun{    ///<RUN Register
        using Addr = Register::Address<0x4008d004,0xfffffffe,0,unsigned>;
        ///RUN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
    }
    namespace Nonecr{    ///<Control Register
        using Addr = Register::Address<0x4008d008,0xffffff4e,0,unsigned>;
        ///CLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clk{}; 
        ///FFCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ffcr{}; 
        ///FFEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ffen{}; 
    }
    namespace Nonerg{    ///<Timer Register
        using Addr = Register::Address<0x4008d00c,0xffff0000,0,unsigned>;
        ///RG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rg{}; 
    }
    namespace Nonecp{    ///<Capture Register
        using Addr = Register::Address<0x4008d010,0xffff0000,0,unsigned>;
        ///CP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cp{}; 
    }
}
