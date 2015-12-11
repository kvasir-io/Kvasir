#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Software-based Simultaneous Startup Register
    namespace Nonebtsssr{    ///<Software-based Simultaneous Startup Register
        using Addr = Register::Address<0x40025ffc,0xffff0000,0,unsigned>;
        ///Bit15 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sssr15{}; 
        ///Bit14 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> sssr14{}; 
        ///Bit13 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sssr13{}; 
        ///Bit12 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sssr12{}; 
        ///Bit11 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sssr11{}; 
        ///Bit10 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sssr10{}; 
        ///Bit9 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sssr9{}; 
        ///Bit8 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sssr8{}; 
        ///Bit7 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sssr7{}; 
        ///Bit6 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sssr6{}; 
        ///Bit5 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sssr5{}; 
        ///Bit4 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sssr4{}; 
        ///Bit3 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sssr3{}; 
        ///Bit2 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sssr2{}; 
        ///Bit1 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sssr1{}; 
        ///Bit0 of BTSSSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sssr0{}; 
    }
}
