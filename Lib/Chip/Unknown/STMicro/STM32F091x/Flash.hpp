#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash
    namespace Noneacr{    ///<Flash access control register
        using Addr = Register::Address<0x40022000,0xffffffc8,0,unsigned>;
        ///LATENCY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> latency{}; 
        ///PRFTBE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> prftbe{}; 
        ///PRFTBS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> prftbs{}; 
    }
    namespace Nonekeyr{    ///<Flash key register
        using Addr = Register::Address<0x40022004,0x00000000,0,unsigned>;
        ///Flash Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fkeyr{}; 
    }
    namespace Noneoptkeyr{    ///<Flash option key register
        using Addr = Register::Address<0x40022008,0x00000000,0,unsigned>;
        ///Option byte key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkeyr{}; 
    }
    namespace Nonesr{    ///<Flash status register
        using Addr = Register::Address<0x4002200c,0xffffffca,0,unsigned>;
        ///End of operation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eop{}; 
        ///Write protection error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wrprt{}; 
        ///Programming error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pgerr{}; 
        ///Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bsy{}; 
    }
    namespace Nonecr{    ///<Flash control register
        using Addr = Register::Address<0x40022010,0xffffc908,0,unsigned>;
        ///Force option byte loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> forceOptload{}; 
        ///End of operation interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eopie{}; 
        ///Error interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> errie{}; 
        ///Option bytes write enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> optwre{}; 
        ///Lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lock{}; 
        ///Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> strt{}; 
        ///Option byte erase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> opter{}; 
        ///Option byte programming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> optpg{}; 
        ///Mass erase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mer{}; 
        ///Page erase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per{}; 
        ///Programming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg{}; 
    }
    namespace Nonear{    ///<Flash address register
        using Addr = Register::Address<0x40022014,0x00000000,0,unsigned>;
        ///Flash address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> far{}; 
    }
    namespace Noneobr{    ///<Option byte register
        using Addr = Register::Address<0x4002201c,0x0000c8f8,0,unsigned>;
        ///Data1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data1{}; 
        ///Data0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data0{}; 
        ///VDDA_MONITOR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> vddaMonitor{}; 
        ///BOOT1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> boot1{}; 
        ///nRST_STDBY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nrstStdby{}; 
        ///nRST_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> nrstStop{}; 
        ///WDG_SW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wdgSw{}; 
        ///Level 2 protection status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> level2Prot{}; 
        ///Level 1 protection status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> level1Prot{}; 
        ///Option byte error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opterr{}; 
    }
    namespace Nonewrpr{    ///<Write protection register
        using Addr = Register::Address<0x40022020,0x00000000,0,unsigned>;
        ///Write protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrp{}; 
    }
}
