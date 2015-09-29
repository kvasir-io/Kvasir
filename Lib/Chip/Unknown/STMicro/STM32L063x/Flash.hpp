#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash
    namespace Noneacr{    ///<Access control register
        using Addr = Register::Address<0x40022000,0xffffff84,0,unsigned>;
        ///Latency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> latency{}; 
        ///Prefetch enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> prften{}; 
        ///Flash mode during Sleep
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sleepPd{}; 
        ///Flash mode during Run
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> runPd{}; 
        ///Disable Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> desabBuf{}; 
        ///Pre-read data address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> preRead{}; 
    }
    namespace Nonepecr{    ///<Program/erase control register
        using Addr = Register::Address<0x40022004,0xfff878e0,0,unsigned>;
        ///FLASH_PECR and data EEPROM
              lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pelock{}; 
        ///Program memory lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> prglock{}; 
        ///Option bytes block lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> optlock{}; 
        ///Program memory selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> prog{}; 
        ///Data EEPROM selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> data{}; 
        ///Fixed time data write for Byte, Half
              Word and Word programming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ftdw{}; 
        ///Page or Double Word erase
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> erase{}; 
        ///Half Page/Double Word programming
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fprg{}; 
        ///Parallel bank mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> parallelbank{}; 
        ///End of programming interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eopie{}; 
        ///Error interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> errie{}; 
        ///Launch the option byte
              loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> oblLaunch{}; 
    }
    namespace Nonepdkeyr{    ///<Power down key register
        using Addr = Register::Address<0x40022008,0x00000000,0,unsigned>;
        ///RUN_PD in FLASH_ACR key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdkeyr{}; 
    }
    namespace Nonepekeyr{    ///<Program/erase key register
        using Addr = Register::Address<0x4002200c,0x00000000,0,unsigned>;
        ///FLASH_PEC and data EEPROM
              key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pekeyr{}; 
    }
    namespace Noneprgkeyr{    ///<Program memory key register
        using Addr = Register::Address<0x40022010,0x00000000,0,unsigned>;
        ///Program memory key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> prgkeyr{}; 
    }
    namespace Noneoptkeyr{    ///<Option byte key register
        using Addr = Register::Address<0x40022014,0x00000000,0,unsigned>;
        ///Option byte key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkeyr{}; 
    }
    namespace Nonesr{    ///<Status register
        using Addr = Register::Address<0x40022018,0xfffcb0f0,0,unsigned>;
        ///Write/erase operations in
              progress
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bsy{}; 
        ///End of operation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eop{}; 
        ///End of high voltage
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endhv{}; 
        ///Flash memory module ready after low
              power mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ready{}; 
        ///Write protected error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wrperr{}; 
        ///Programming alignment
              error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pgaerr{}; 
        ///Size error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sizerr{}; 
        ///Option validity error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> optverr{}; 
        ///RDERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rderr{}; 
        ///NOTZEROERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notzeroerr{}; 
        ///FWWERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fwwerr{}; 
    }
    namespace Noneobr{    ///<Option byte register
        using Addr = Register::Address<0x4002201c,0xfff0fe00,0,unsigned>;
        ///Read protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdprt{}; 
        ///BOR_LEV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> borLev{}; 
        ///Selection of protection mode of WPR
              bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sprmod{}; 
    }
    namespace Nonewrpr{    ///<Write protection register
        using Addr = Register::Address<0x40022020,0xffff0000,0,unsigned>;
        ///Write protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wrp{}; 
    }
}
