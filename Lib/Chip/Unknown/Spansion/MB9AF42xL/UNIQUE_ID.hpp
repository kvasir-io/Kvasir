#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral UNIQUE_ID 
    namespace Noneuidr0{    ///< register UIDR0 
        using Addr = Register::Address<0x40000200,0x0000000f,0,unsigned>;
        /// bitfield UID27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> uid27{}; 
        /// bitfield UID26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> uid26{}; 
        /// bitfield UID25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> uid25{}; 
        /// bitfield UID24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> uid24{}; 
        /// bitfield UID23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> uid23{}; 
        /// bitfield UID22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> uid22{}; 
        /// bitfield UID21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uid21{}; 
        /// bitfield UID20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> uid20{}; 
        /// bitfield UID19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> uid19{}; 
        /// bitfield UID18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> uid18{}; 
        /// bitfield UID17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> uid17{}; 
        /// bitfield UID16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uid16{}; 
        /// bitfield UID15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uid15{}; 
        /// bitfield UID14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uid14{}; 
        /// bitfield UID13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> uid13{}; 
        /// bitfield UID12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> uid12{}; 
        /// bitfield UID11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> uid11{}; 
        /// bitfield UID10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> uid10{}; 
        /// bitfield UID9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> uid9{}; 
        /// bitfield UID8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uid8{}; 
        /// bitfield UID7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> uid7{}; 
        /// bitfield UID6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> uid6{}; 
        /// bitfield UID5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> uid5{}; 
        /// bitfield UID4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uid4{}; 
        /// bitfield UID3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uid3{}; 
        /// bitfield UID2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uid2{}; 
        /// bitfield UID1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> uid1{}; 
        /// bitfield UID0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uid0{}; 
    }
    namespace Noneuidr1{    ///< register UIDR1 
        using Addr = Register::Address<0x40000204,0xffffe000,0,unsigned>;
        /// bitfield UID40 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uid40{}; 
        /// bitfield UID39 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> uid39{}; 
        /// bitfield UID38 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> uid38{}; 
        /// bitfield UID37 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> uid37{}; 
        /// bitfield UID36 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uid36{}; 
        /// bitfield UID35 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uid35{}; 
        /// bitfield UID34 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uid34{}; 
        /// bitfield UID33 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> uid33{}; 
        /// bitfield UID32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uid32{}; 
        /// bitfield UID31 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uid31{}; 
        /// bitfield UID30 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> uid30{}; 
        /// bitfield UID29 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uid29{}; 
        /// bitfield UID28 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uid28{}; 
    }
}
