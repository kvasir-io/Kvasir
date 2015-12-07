#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CAN Controller (TXCAN) Mailbox RAM
    namespace Noneid{    ///<CAN Mailbox Register
        using Addr = Register::Address<0x40005000,0x00000000,0,unsigned>;
        ///ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
        ///RFH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rfh{}; 
        namespace RfhValC{
        }
        ///GAME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> game{}; 
        namespace GameValC{
        }
        ///IDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ide{}; 
        namespace IdeValC{
        }
    }
    namespace Nonetsvmcf{    ///<CAN Mailbox Register
        using Addr = Register::Address<0x40005008,0x0000ffe0,0,unsigned>;
        ///DLC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///RTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rtr{}; 
        namespace RtrValC{
        }
        ///TSV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tsv{}; 
        namespace TsvValC{
        }
    }
    namespace Nonedl{    ///<CAN Mailbox Register
        using Addr = Register::Address<0x40005010,0x00000000,0,unsigned>;
        ///D0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> d0{}; 
        namespace D0ValC{
        }
        ///D1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> d1{}; 
        namespace D1ValC{
        }
        ///D2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> d2{}; 
        namespace D2ValC{
        }
        ///D3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> d3{}; 
        namespace D3ValC{
        }
    }
    namespace Nonedh{    ///<CAN Mailbox Register
        using Addr = Register::Address<0x40005018,0x00000000,0,unsigned>;
        ///D4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> d4{}; 
        namespace D4ValC{
        }
        ///D5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> d5{}; 
        namespace D5ValC{
        }
        ///D6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> d6{}; 
        namespace D6ValC{
        }
        ///D7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> d7{}; 
        namespace D7ValC{
        }
    }
}
