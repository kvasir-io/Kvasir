#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Clock recovery system
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40006c00,0xffffc010,0,unsigned>;
        ///HSI48 oscillator smooth
              trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> trim{}; 
        namespace TrimValC{
        }
        ///Generate software SYNC
              event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swsync{}; 
        namespace SwsyncValC{
        }
        ///Automatic trimming enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> autotrimen{}; 
        namespace AutotrimenValC{
        }
        ///Frequency error counter
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cen{}; 
        namespace CenValC{
        }
        ///Expected SYNC interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> esyncie{}; 
        namespace EsyncieValC{
        }
        ///Synchronization or trimming error
              interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errie{}; 
        namespace ErrieValC{
        }
        ///SYNC warning interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syncwarnie{}; 
        namespace SyncwarnieValC{
        }
        ///SYNC event OK interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syncokie{}; 
        namespace SyncokieValC{
        }
    }
    namespace Nonecfgr{    ///<configuration register
        using Addr = Register::Address<0x40006c04,0x48000000,0,unsigned>;
        ///SYNC polarity selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> syncpol{}; 
        namespace SyncpolValC{
        }
        ///SYNC signal source
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> syncsrc{}; 
        namespace SyncsrcValC{
        }
        ///SYNC divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> syncdiv{}; 
        namespace SyncdivValC{
        }
        ///Frequency error limit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> felim{}; 
        namespace FelimValC{
        }
        ///Counter reload value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reload{}; 
        namespace ReloadValC{
        }
    }
    namespace Noneisr{    ///<interrupt and status register
        using Addr = Register::Address<0x40006c08,0x000078f0,0,unsigned>;
        ///Frequency error capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> fecap{}; 
        namespace FecapValC{
        }
        ///Frequency error direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fedir{}; 
        namespace FedirValC{
        }
        ///Trimming overflow or
              underflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> trimovf{}; 
        namespace TrimovfValC{
        }
        ///SYNC missed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> syncmiss{}; 
        namespace SyncmissValC{
        }
        ///SYNC error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> syncerr{}; 
        namespace SyncerrValC{
        }
        ///Expected SYNC flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> esyncf{}; 
        namespace EsyncfValC{
        }
        ///Error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errf{}; 
        namespace ErrfValC{
        }
        ///SYNC warning flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syncwarnf{}; 
        namespace SyncwarnfValC{
        }
        ///SYNC event OK flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syncokf{}; 
        namespace SyncokfValC{
        }
    }
    namespace Noneicr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x40006c0c,0xfffffff0,0,unsigned>;
        ///Expected SYNC clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> esyncc{}; 
        namespace EsynccValC{
        }
        ///Error clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errc{}; 
        namespace ErrcValC{
        }
        ///SYNC warning clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syncwarnc{}; 
        namespace SyncwarncValC{
        }
        ///SYNC event OK clear flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syncokc{}; 
        namespace SyncokcValC{
        }
    }
}
