#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FLASH
    namespace Noneacr{    ///<Flash access control register
        using Addr = Register::Address<0x40023c00,0xffffe0f8,0,unsigned>;
        ///Latency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> latency{}; 
        ///Prefetch enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> prften{}; 
        ///Instruction cache enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> icen{}; 
        ///Data cache enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dcen{}; 
        ///Instruction cache reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> icrst{}; 
        ///Data cache reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dcrst{}; 
    }
    namespace Nonekeyr{    ///<Flash key register
        using Addr = Register::Address<0x40023c04,0x00000000,0,unsigned>;
        ///FPEC key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace Noneoptkeyr{    ///<Flash option key register
        using Addr = Register::Address<0x40023c08,0x00000000,0,unsigned>;
        ///Option byte key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkey{}; 
    }
    namespace Nonesr{    ///<Status register
        using Addr = Register::Address<0x40023c0c,0xfffeff0c,0,unsigned>;
        ///End of operation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eop{}; 
        ///Operation error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> operr{}; 
        ///Write protection error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wrperr{}; 
        ///Programming alignment
              error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pgaerr{}; 
        ///Programming parallelism
              error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pgperr{}; 
        ///Programming sequence error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pgserr{}; 
        ///Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> bsy{}; 
    }
    namespace Nonecr{    ///<Control register
        using Addr = Register::Address<0x40023c10,0x7cfefc80,0,unsigned>;
        ///Programming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg{}; 
        ///Sector Erase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ser{}; 
        ///Mass Erase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mer{}; 
        ///Sector number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,unsigned> snb{}; 
        ///Program size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> strt{}; 
        ///End of operation interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eopie{}; 
        ///Error interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> errie{}; 
        ///Lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace Noneoptcr{    ///<Flash option control register
        using Addr = Register::Address<0x40023c14,0xf0000010,0,unsigned>;
        ///Option lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> optlock{}; 
        ///Option start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> optstrt{}; 
        ///BOR reset Level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> borLev{}; 
        ///WDG_SW User option bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wdgSw{}; 
        ///nRST_STOP User option
              bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nrstStop{}; 
        ///nRST_STDBY User option
              bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nrstStdby{}; 
        ///Read protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rdp{}; 
        ///Not write protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> nwrp{}; 
    }
}
