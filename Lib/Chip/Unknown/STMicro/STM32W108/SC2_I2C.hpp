#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial controller 2 (Serial peripheral
      interface)
    namespace Nonesc2I2csr{    ///<Serial controller I2C status
          register
        using Addr = Register::Address<0x4000c044,0xfffffff0,0,unsigned>;
        ///CMDFIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmdfin{}; 
        namespace CmdfinValC{
        }
        ///BRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> brf{}; 
        namespace BrfValC{
        }
        ///BTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btf{}; 
        namespace BtfValC{
        }
        ///NACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nack{}; 
        namespace NackValC{
        }
    }
    namespace Nonesc2I2ccr1{    ///<Serial controller I2C control register
          1
        using Addr = Register::Address<0x4000c04c,0xfffffff0,0,unsigned>;
        ///STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stop{}; 
        namespace StopValC{
        }
        ///START
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///BTE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bte{}; 
        namespace BteValC{
        }
        ///BRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bre{}; 
        namespace BreValC{
        }
    }
    namespace Nonesc2I2ccr2{    ///<Serial controller I2C control register
          2
        using Addr = Register::Address<0x4000c050,0xfffffffe,0,unsigned>;
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
    }
}
