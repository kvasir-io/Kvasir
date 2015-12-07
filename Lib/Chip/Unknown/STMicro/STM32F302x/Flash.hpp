#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash
    namespace Noneacr{    ///<Flash access control register
        using Addr = Register::Address<0x40022000,0xffffffc8,0,unsigned>;
        ///LATENCY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> latency{}; 
        namespace LatencyValC{
        }
        ///PRFTBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> prftbe{}; 
        namespace PrftbeValC{
        }
        ///PRFTBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> prftbs{}; 
        namespace PrftbsValC{
        }
    }
    namespace Nonekeyr{    ///<Flash key register
        using Addr = Register::Address<0x40022004,0x00000000,0,unsigned>;
        ///Flash Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fkeyr{}; 
        namespace FkeyrValC{
        }
    }
    namespace Noneoptkeyr{    ///<Flash option key register
        using Addr = Register::Address<0x40022008,0x00000000,0,unsigned>;
        ///Option byte key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkeyr{}; 
        namespace OptkeyrValC{
        }
    }
    namespace Nonesr{    ///<Flash status register
        using Addr = Register::Address<0x4002200c,0xffffffca,0,unsigned>;
        ///End of operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eop{}; 
        namespace EopValC{
        }
        ///Write protection error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wrprt{}; 
        namespace WrprtValC{
        }
        ///Programming error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pgerr{}; 
        namespace PgerrValC{
        }
        ///Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bsy{}; 
        namespace BsyValC{
        }
    }
    namespace Nonecr{    ///<Flash control register
        using Addr = Register::Address<0x40022010,0xffffc908,0,unsigned>;
        ///Force option byte loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> forceOptload{}; 
        namespace ForceoptloadValC{
        }
        ///End of operation interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eopie{}; 
        namespace EopieValC{
        }
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> errie{}; 
        namespace ErrieValC{
        }
        ///Option bytes write enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> optwre{}; 
        namespace OptwreValC{
        }
        ///Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
        ///Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> strt{}; 
        namespace StrtValC{
        }
        ///Option byte erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> opter{}; 
        namespace OpterValC{
        }
        ///Option byte programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> optpg{}; 
        namespace OptpgValC{
        }
        ///Mass erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mer{}; 
        namespace MerValC{
        }
        ///Page erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per{}; 
        namespace PerValC{
        }
        ///Programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg{}; 
        namespace PgValC{
        }
    }
    namespace Nonear{    ///<Flash address register
        using Addr = Register::Address<0x40022014,0x00000000,0,unsigned>;
        ///Flash address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> far{}; 
        namespace FarValC{
        }
    }
    namespace Noneobr{    ///<Option byte register
        using Addr = Register::Address<0x4002201c,0x000088f8,0,unsigned>;
        ///Option byte error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opterr{}; 
        namespace OpterrValC{
        }
        ///Level 1 protection status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> level1Prot{}; 
        namespace Level1protValC{
        }
        ///Level 2 protection status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> level2Prot{}; 
        namespace Level2protValC{
        }
        ///WDG_SW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wdgSw{}; 
        namespace WdgswValC{
        }
        ///nRST_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> nrstStop{}; 
        namespace NrststopValC{
        }
        ///nRST_STDBY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nrstStdby{}; 
        namespace NrststdbyValC{
        }
        ///BOOT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> boot1{}; 
        namespace Boot1ValC{
        }
        ///VDDA_MONITOR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> vddaMonitor{}; 
        namespace VddamonitorValC{
        }
        ///SRAM_PARITY_CHECK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> sramParityCheck{}; 
        namespace SramparitycheckValC{
        }
        ///Data0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
        ///Data1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
    }
    namespace Nonewrpr{    ///<Write protection register
        using Addr = Register::Address<0x40022020,0x00000000,0,unsigned>;
        ///Write protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrp{}; 
        namespace WrpValC{
        }
    }
}
