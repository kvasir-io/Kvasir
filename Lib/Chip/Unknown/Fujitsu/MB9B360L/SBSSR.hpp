#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Software-based Simultaneous Startup Register
    namespace Nonebtsssr{    ///<Software-based Simultaneous Startup Register
        using Addr = Register::Address<0x40025ffc,0xffff0000,0,unsigned>;
        ///Bit15 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sssr15{}; 
        namespace Sssr15ValC{
        }
        ///Bit14 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> sssr14{}; 
        namespace Sssr14ValC{
        }
        ///Bit13 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sssr13{}; 
        namespace Sssr13ValC{
        }
        ///Bit12 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sssr12{}; 
        namespace Sssr12ValC{
        }
        ///Bit11 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sssr11{}; 
        namespace Sssr11ValC{
        }
        ///Bit10 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sssr10{}; 
        namespace Sssr10ValC{
        }
        ///Bit9 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sssr9{}; 
        namespace Sssr9ValC{
        }
        ///Bit8 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sssr8{}; 
        namespace Sssr8ValC{
        }
        ///Bit7 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sssr7{}; 
        namespace Sssr7ValC{
        }
        ///Bit6 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sssr6{}; 
        namespace Sssr6ValC{
        }
        ///Bit5 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sssr5{}; 
        namespace Sssr5ValC{
        }
        ///Bit4 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sssr4{}; 
        namespace Sssr4ValC{
        }
        ///Bit3 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sssr3{}; 
        namespace Sssr3ValC{
        }
        ///Bit2 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sssr2{}; 
        namespace Sssr2ValC{
        }
        ///Bit1 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sssr1{}; 
        namespace Sssr1ValC{
        }
        ///Bit0 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sssr0{}; 
        namespace Sssr0ValC{
        }
    }
}
