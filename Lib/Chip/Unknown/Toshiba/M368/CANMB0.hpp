#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CAN Controller (TXCAN) Mailbox RAM
    namespace Noneid{    ///<CAN Mailbox Register
        using Addr = Register::Address<0x40005000,0x00000000,0,unsigned>;
        ///ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> id{}; 
        ///RFH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rfh{}; 
        ///GAME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> game{}; 
        ///IDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ide{}; 
    }
    namespace Nonetsvmcf{    ///<CAN Mailbox Register
        using Addr = Register::Address<0x40005008,0x0000ffe0,0,unsigned>;
        ///DLC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///RTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///TSV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace Nonedl{    ///<CAN Mailbox Register
        using Addr = Register::Address<0x40005010,0x00000000,0,unsigned>;
        ///D0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> d0{}; 
        ///D1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> d1{}; 
        ///D2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> d2{}; 
        ///D3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> d3{}; 
    }
    namespace Nonedh{    ///<CAN Mailbox Register
        using Addr = Register::Address<0x40005018,0x00000000,0,unsigned>;
        ///D4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> d4{}; 
        ///D5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> d5{}; 
        ///D6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> d6{}; 
        ///D7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> d7{}; 
    }
}
