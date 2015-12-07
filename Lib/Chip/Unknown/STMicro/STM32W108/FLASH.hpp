#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FLASH
    namespace NoneflashAcr{    ///<FLASH access control register
        using Addr = Register::Address<0x40008000,0xffffffc0,0,unsigned>;
        ///Prefetch Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> prftbs{}; 
        namespace PrftbsValC{
        }
        ///PRFTBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> prftbe{}; 
        namespace PrftbeValC{
        }
        ///HLFCYA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hlfcya{}; 
        namespace HlfcyaValC{
        }
        ///LATENCY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> latency{}; 
        namespace LatencyValC{
        }
    }
    namespace NoneflashKeyr{    ///<FLASH key register
        using Addr = Register::Address<0x40008004,0x00000000,0,unsigned>;
        ///FKEYR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fkeyr{}; 
        namespace FkeyrValC{
        }
    }
    namespace NoneflashOptkeyr{    ///<FLASH OPT key register
        using Addr = Register::Address<0x40008008,0x00000000,0,unsigned>;
        ///OPTKEYR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkeyr{}; 
        namespace OptkeyrValC{
        }
    }
    namespace NoneflashSr{    ///<FLASH status register
        using Addr = Register::Address<0x4000800c,0xffffffca,0,unsigned>;
        ///EOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eop{}; 
        namespace EopValC{
        }
        ///WRPRTERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wrprterr{}; 
        namespace WrprterrValC{
        }
        ///PGERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pgerr{}; 
        namespace PgerrValC{
        }
        ///BSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bsy{}; 
        namespace BsyValC{
        }
    }
    namespace NoneflashCr{    ///<FLASH control register
        using Addr = Register::Address<0x40008010,0xffffe908,0,unsigned>;
        ///EOPIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eopie{}; 
        namespace EopieValC{
        }
        ///ERRIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> errie{}; 
        namespace ErrieValC{
        }
        ///OPTWRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> optwre{}; 
        namespace OptwreValC{
        }
        ///LOCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
        ///STRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> strt{}; 
        namespace StrtValC{
        }
        ///OPTER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> opter{}; 
        namespace OpterValC{
        }
        ///OPTPG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> optpg{}; 
        namespace OptpgValC{
        }
        ///MER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mer{}; 
        namespace MerValC{
        }
        ///PER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per{}; 
        namespace PerValC{
        }
        ///PG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg{}; 
        namespace PgValC{
        }
    }
    namespace NoneflashAr{    ///<FLASH address register
        using Addr = Register::Address<0x40008014,0x00000000,0,unsigned>;
        ///FAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> far{}; 
        namespace FarValC{
        }
    }
    namespace NoneflashObr{    ///<FLASH option bytes register
        using Addr = Register::Address<0x4000801c,0xfffffffc,0,unsigned>;
        ///RDPRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rdprt{}; 
        namespace RdprtValC{
        }
        ///OPTERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opterr{}; 
        namespace OpterrValC{
        }
    }
    namespace NoneflashWrpr{    ///<FLASH write protection
          register
        using Addr = Register::Address<0x40008020,0x00000000,0,unsigned>;
        ///WRP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrp{}; 
        namespace WrpValC{
        }
    }
    namespace NoneflashClker{    ///<FLASH controller clock enable
          register
        using Addr = Register::Address<0x4000402c,0xfffffffe,0,unsigned>;
        ///EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace NoneflashClksr{    ///<FLASH controller clock status
          register
        using Addr = Register::Address<0x40004030,0xfffffffc,0,unsigned>;
        ///BSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bsy{}; 
        namespace BsyValC{
        }
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
    }
}
