#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FLASH
    namespace Noneacr{    ///<Flash access control register
        using Addr = Register::Address<0x40022000,0xffffffc0,0,unsigned>;
        ///Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> latency{}; 
        namespace LatencyValC{
        }
        ///Flash half cycle access
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hlfcya{}; 
        namespace HlfcyaValC{
        }
        ///Prefetch buffer enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> prftbe{}; 
        namespace PrftbeValC{
        }
        ///Prefetch buffer status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> prftbs{}; 
        namespace PrftbsValC{
        }
    }
    namespace Nonekeyr{    ///<Flash key register
        using Addr = Register::Address<0x40022004,0x00000000,0,unsigned>;
        ///FPEC key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace Noneoptkeyr{    ///<Flash option key register
        using Addr = Register::Address<0x40022008,0x00000000,0,unsigned>;
        ///Option byte key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkey{}; 
        namespace OptkeyValC{
        }
    }
    namespace Nonesr{    ///<Status register
        using Addr = Register::Address<0x4002200c,0xffffffca,0,unsigned>;
        ///End of operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eop{}; 
        namespace EopValC{
        }
        ///Write protection error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wrprterr{}; 
        namespace WrprterrValC{
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
    namespace Nonecr{    ///<Control register
        using Addr = Register::Address<0x40022010,0xffffe908,0,unsigned>;
        ///Programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg{}; 
        namespace PgValC{
        }
        ///Page Erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per{}; 
        namespace PerValC{
        }
        ///Mass Erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mer{}; 
        namespace MerValC{
        }
        ///Option byte programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> optpg{}; 
        namespace OptpgValC{
        }
        ///Option byte erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> opter{}; 
        namespace OpterValC{
        }
        ///Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> strt{}; 
        namespace StrtValC{
        }
        ///Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
        ///Option bytes write enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> optwre{}; 
        namespace OptwreValC{
        }
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> errie{}; 
        namespace ErrieValC{
        }
        ///End of operation interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eopie{}; 
        namespace EopieValC{
        }
    }
    namespace Nonear{    ///<Flash address register
        using Addr = Register::Address<0x40022014,0x00000000,0,unsigned>;
        ///Flash Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> far{}; 
        namespace FarValC{
        }
    }
    namespace Noneobr{    ///<Option byte register
        using Addr = Register::Address<0x4002201c,0xfc0003e0,0,unsigned>;
        ///Option byte error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opterr{}; 
        namespace OpterrValC{
        }
        ///Read protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rdprt{}; 
        namespace RdprtValC{
        }
        ///WDG_SW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdgSw{}; 
        namespace WdgswValC{
        }
        ///nRST_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nrstStop{}; 
        namespace NrststopValC{
        }
        ///nRST_STDBY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nrstStdby{}; 
        namespace NrststdbyValC{
        }
        ///Data0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,10),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
        ///Data1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,18),Register::ReadWriteAccess,unsigned> data1{}; 
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
