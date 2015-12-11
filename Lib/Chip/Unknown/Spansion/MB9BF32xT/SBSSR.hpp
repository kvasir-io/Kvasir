#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral SBSSR 
    namespace Nonebtsssr{    ///< register BTSSSR 
        using Addr = Register::Address<0x40025ffc,0xffff0000,0,unsigned>;
        /// bitfield SSSR15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sssr15{}; 
        /// bitfield SSSR14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> sssr14{}; 
        /// bitfield SSSR13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sssr13{}; 
        /// bitfield SSSR12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sssr12{}; 
        /// bitfield SSSR11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sssr11{}; 
        /// bitfield SSSR10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sssr10{}; 
        /// bitfield SSSR9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sssr9{}; 
        /// bitfield SSSR8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sssr8{}; 
        /// bitfield SSSR7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sssr7{}; 
        /// bitfield SSSR6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sssr6{}; 
        /// bitfield SSSR5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sssr5{}; 
        /// bitfield SSSR4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sssr4{}; 
        /// bitfield SSSR3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sssr3{}; 
        /// bitfield SSSR2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sssr2{}; 
        /// bitfield SSSR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sssr1{}; 
        /// bitfield SSSR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sssr0{}; 
    }
}
