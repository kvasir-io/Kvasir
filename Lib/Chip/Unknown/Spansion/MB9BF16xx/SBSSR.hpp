#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral SBSSR 
    namespace Nonebtsssr{    ///< register BTSSSR 
        using Addr = Register::Address<0x40025ffc,0xffff0000,0,unsigned>;
        /// bitfield SSSR15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sssr15{}; 
        namespace Sssr15ValC{
        }
        /// bitfield SSSR14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> sssr14{}; 
        namespace Sssr14ValC{
        }
        /// bitfield SSSR13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sssr13{}; 
        namespace Sssr13ValC{
        }
        /// bitfield SSSR12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sssr12{}; 
        namespace Sssr12ValC{
        }
        /// bitfield SSSR11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sssr11{}; 
        namespace Sssr11ValC{
        }
        /// bitfield SSSR10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sssr10{}; 
        namespace Sssr10ValC{
        }
        /// bitfield SSSR9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sssr9{}; 
        namespace Sssr9ValC{
        }
        /// bitfield SSSR8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sssr8{}; 
        namespace Sssr8ValC{
        }
        /// bitfield SSSR7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sssr7{}; 
        namespace Sssr7ValC{
        }
        /// bitfield SSSR6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sssr6{}; 
        namespace Sssr6ValC{
        }
        /// bitfield SSSR5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sssr5{}; 
        namespace Sssr5ValC{
        }
        /// bitfield SSSR4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sssr4{}; 
        namespace Sssr4ValC{
        }
        /// bitfield SSSR3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sssr3{}; 
        namespace Sssr3ValC{
        }
        /// bitfield SSSR2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sssr2{}; 
        namespace Sssr2ValC{
        }
        /// bitfield SSSR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sssr1{}; 
        namespace Sssr1ValC{
        }
        /// bitfield SSSR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sssr0{}; 
        namespace Sssr0ValC{
        }
    }
}
