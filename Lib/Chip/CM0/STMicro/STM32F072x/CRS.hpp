#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Clock recovery system
    namespace CrsCr{    ///<control register
        using Addr = Register::Address<0x40006c00,0xffffc010,0x00000000,unsigned>;
        ///HSI48 oscillator smooth              trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> trim{}; 
        ///Generate software SYNC              event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swsync{}; 
        ///Automatic trimming enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> autotrimen{}; 
        ///Frequency error counter              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cen{}; 
        ///Expected SYNC interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> esyncie{}; 
        ///Synchronization or trimming error              interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errie{}; 
        ///SYNC warning interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syncwarnie{}; 
        ///SYNC event OK interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syncokie{}; 
    }
    namespace CrsCfgr{    ///<configuration register
        using Addr = Register::Address<0x40006c04,0x48000000,0x00000000,unsigned>;
        ///SYNC polarity selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> syncpol{}; 
        ///SYNC signal source              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> syncsrc{}; 
        ///SYNC divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> syncdiv{}; 
        ///Frequency error limit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> felim{}; 
        ///Counter reload value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reload{}; 
    }
    namespace CrsIsr{    ///<interrupt and status register
        using Addr = Register::Address<0x40006c08,0x000078f0,0x00000000,unsigned>;
        ///Frequency error capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> fecap{}; 
        ///Frequency error direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fedir{}; 
        ///Trimming overflow or              underflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> trimovf{}; 
        ///SYNC missed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> syncmiss{}; 
        ///SYNC error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> syncerr{}; 
        ///Expected SYNC flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> esyncf{}; 
        ///Error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errf{}; 
        ///SYNC warning flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syncwarnf{}; 
        ///SYNC event OK flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syncokf{}; 
    }
    namespace CrsIcr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x40006c0c,0xfffffff0,0x00000000,unsigned>;
        ///Expected SYNC clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> esyncc{}; 
        ///Error clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errc{}; 
        ///SYNC warning clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syncwarnc{}; 
        ///SYNC event OK clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syncokc{}; 
    }
}
