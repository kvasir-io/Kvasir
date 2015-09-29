#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FLASH
    namespace NoneflashAcr{    ///<FLASH access control register
        using Addr = Register::Address<0x40008000,0xffffffc0,0,unsigned>;
        ///Prefetch Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> prftbs{}; 
        ///PRFTBE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> prftbe{}; 
        ///HLFCYA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hlfcya{}; 
        ///LATENCY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> latency{}; 
    }
    namespace NoneflashKeyr{    ///<FLASH key register
        using Addr = Register::Address<0x40008004,0x00000000,0,unsigned>;
        ///FKEYR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fkeyr{}; 
    }
    namespace NoneflashOptkeyr{    ///<FLASH OPT key register
        using Addr = Register::Address<0x40008008,0x00000000,0,unsigned>;
        ///OPTKEYR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkeyr{}; 
    }
    namespace NoneflashSr{    ///<FLASH status register
        using Addr = Register::Address<0x4000800c,0xffffffca,0,unsigned>;
        ///EOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eop{}; 
        ///WRPRTERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wrprterr{}; 
        ///PGERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pgerr{}; 
        ///BSY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bsy{}; 
    }
    namespace NoneflashCr{    ///<FLASH control register
        using Addr = Register::Address<0x40008010,0xffffe908,0,unsigned>;
        ///EOPIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eopie{}; 
        ///ERRIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> errie{}; 
        ///OPTWRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> optwre{}; 
        ///LOCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lock{}; 
        ///STRT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> strt{}; 
        ///OPTER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> opter{}; 
        ///OPTPG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> optpg{}; 
        ///MER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mer{}; 
        ///PER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per{}; 
        ///PG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg{}; 
    }
    namespace NoneflashAr{    ///<FLASH address register
        using Addr = Register::Address<0x40008014,0x00000000,0,unsigned>;
        ///FAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> far{}; 
    }
    namespace NoneflashObr{    ///<FLASH option bytes register
        using Addr = Register::Address<0x4000801c,0xfffffffc,0,unsigned>;
        ///RDPRT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rdprt{}; 
        ///OPTERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opterr{}; 
    }
    namespace NoneflashWrpr{    ///<FLASH write protection
          register
        using Addr = Register::Address<0x40008020,0x00000000,0,unsigned>;
        ///WRP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrp{}; 
    }
    namespace NoneflashClker{    ///<FLASH controller clock enable
          register
        using Addr = Register::Address<0x4000402c,0xfffffffe,0,unsigned>;
        ///EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace NoneflashClksr{    ///<FLASH controller clock status
          register
        using Addr = Register::Address<0x40004030,0xfffffffc,0,unsigned>;
        ///BSY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bsy{}; 
        ///ACK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ack{}; 
    }
}
