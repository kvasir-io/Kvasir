#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Serial controller 2 (Serial peripheral      interface)
    namespace Sc2I2cSc2I2csr{    ///<Serial controller I2C status          register
        using Addr = Register::Address<0x4000c044,0xfffffff0,0x00000000,unsigned>;
        ///CMDFIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmdfin{}; 
        ///BRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brf{}; 
        ///BTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btf{}; 
        ///NACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nack{}; 
    }
    namespace Sc2I2cSc2I2ccr1{    ///<Serial controller I2C control register          1
        using Addr = Register::Address<0x4000c04c,0xfffffff0,0x00000000,unsigned>;
        ///STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stop{}; 
        ///START
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> start{}; 
        ///BTE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bte{}; 
        ///BRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bre{}; 
    }
    namespace Sc2I2cSc2I2ccr2{    ///<Serial controller I2C control register          2
        using Addr = Register::Address<0x4000c050,0xfffffffe,0x00000000,unsigned>;
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ack{}; 
    }
}
