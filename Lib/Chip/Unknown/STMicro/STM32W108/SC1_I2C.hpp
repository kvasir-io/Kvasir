#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial controller 1 (Serial peripheral
      interface)
    namespace Nonesc1I2csr{    ///<Serial controller I2C status
          register
        using Addr = Register::Address<0x4000c844,0xfffffff0,0,unsigned>;
        ///CMDFIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmdfin{}; 
        ///BRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brf{}; 
        ///BTF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btf{}; 
        ///NACK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nack{}; 
    }
    namespace Nonesc1I2ccr1{    ///<Serial controller I2C control register
          1
        using Addr = Register::Address<0x4000c84c,0xfffffff0,0,unsigned>;
        ///STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stop{}; 
        ///START
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> start{}; 
        ///BTE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bte{}; 
        ///BRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bre{}; 
    }
    namespace Nonesc1I2ccr2{    ///<Serial controller I2C control register
          2
        using Addr = Register::Address<0x4000c850,0xfffffffe,0,unsigned>;
        ///ACK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ack{}; 
    }
}
