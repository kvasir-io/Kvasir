#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FLASH
    namespace Noneacr{    ///<Flash access control register
        using Addr = Register::Address<0x40023c00,0xffffe0f8,0,unsigned>;
        ///Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> latency{}; 
        namespace LatencyValC{
        }
        ///Prefetch enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> prften{}; 
        namespace PrftenValC{
        }
        ///Instruction cache enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> icen{}; 
        namespace IcenValC{
        }
        ///Data cache enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dcen{}; 
        namespace DcenValC{
        }
        ///Instruction cache reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> icrst{}; 
        namespace IcrstValC{
        }
        ///Data cache reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dcrst{}; 
        namespace DcrstValC{
        }
    }
    namespace Nonekeyr{    ///<Flash key register
        using Addr = Register::Address<0x40023c04,0x00000000,0,unsigned>;
        ///FPEC key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace Noneoptkeyr{    ///<Flash option key register
        using Addr = Register::Address<0x40023c08,0x00000000,0,unsigned>;
        ///Option byte key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkey{}; 
        namespace OptkeyValC{
        }
    }
    namespace Nonesr{    ///<Status register
        using Addr = Register::Address<0x40023c0c,0xfffefe0c,0,unsigned>;
        ///End of operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eop{}; 
        namespace EopValC{
        }
        ///Operation error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> operr{}; 
        namespace OperrValC{
        }
        ///Write protection error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wrperr{}; 
        namespace WrperrValC{
        }
        ///Programming alignment
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pgaerr{}; 
        namespace PgaerrValC{
        }
        ///Programming parallelism
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pgperr{}; 
        namespace PgperrValC{
        }
        ///Programming sequence error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pgserr{}; 
        namespace PgserrValC{
        }
        ///Read Protection Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rderr{}; 
        namespace RderrValC{
        }
        ///Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> bsy{}; 
        namespace BsyValC{
        }
    }
    namespace Nonecr{    ///<Control register
        using Addr = Register::Address<0x40023c10,0x7cfefc80,0,unsigned>;
        ///Programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg{}; 
        namespace PgValC{
        }
        ///Sector Erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ser{}; 
        namespace SerValC{
        }
        ///Mass Erase of sectors 0 to
              11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mer{}; 
        namespace MerValC{
        }
        ///Sector number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,unsigned> snb{}; 
        namespace SnbValC{
        }
        ///Program size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        namespace PsizeValC{
        }
        ///Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> strt{}; 
        namespace StrtValC{
        }
        ///End of operation interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eopie{}; 
        namespace EopieValC{
        }
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> errie{}; 
        namespace ErrieValC{
        }
        ///Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
    }
    namespace Noneoptcr{    ///<Flash option control register
        using Addr = Register::Address<0x40023c14,0x7f000010,0,unsigned>;
        ///Option lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> optlock{}; 
        namespace OptlockValC{
        }
        ///Option start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> optstrt{}; 
        namespace OptstrtValC{
        }
        ///BOR reset Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> borLev{}; 
        namespace BorlevValC{
        }
        ///WDG_SW User option bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wdgSw{}; 
        namespace WdgswValC{
        }
        ///nRST_STOP User option
              bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nrstStop{}; 
        namespace NrststopValC{
        }
        ///nRST_STDBY User option
              bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nrstStdby{}; 
        namespace NrststdbyValC{
        }
        ///Read protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rdp{}; 
        namespace RdpValC{
        }
        ///Not write protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nwrp{}; 
        namespace NwrpValC{
        }
        ///Selection of Protection Mode of nWPRi
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> sprmod{}; 
        namespace SprmodValC{
        }
    }
}
