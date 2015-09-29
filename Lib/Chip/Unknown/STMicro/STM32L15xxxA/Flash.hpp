#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash
    namespace Noneacr{    ///<Access control register
        using Addr = Register::Address<0x40023c00,0xffffffe0,0,unsigned>;
        ///Latency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> latency{}; 
        ///Prefetch enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> prften{}; 
        ///64-bit access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> acc64{}; 
        ///Flash mode during Sleep
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sleepPd{}; 
        ///Flash mode during Run
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> runPd{}; 
    }
    namespace Nonepecr{    ///<Program/erase control register
        using Addr = Register::Address<0x40023c04,0xfff878e0,0,unsigned>;
        ///FLASH_PECR and data EEPROM               lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pelock{}; 
        ///Program memory lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> prglock{}; 
        ///Option bytes block lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> optlock{}; 
        ///Program memory selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> prog{}; 
        ///Data EEPROM selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> data{}; 
        ///Fixed time data write for Byte, Half               Word and Word programming
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ftdw{}; 
        ///Page or Double Word erase               mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> erase{}; 
        ///Half Page/Double Word programming               mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fprg{}; 
        ///Parallel bank mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> parallelbank{}; 
        ///End of programming interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eopie{}; 
        ///Error interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> errie{}; 
        ///Launch the option byte               loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> oblLaunch{}; 
    }
    namespace Nonepdkeyr{    ///<Power down key register
        using Addr = Register::Address<0x40023c08,0x00000000,0,unsigned>;
        ///RUN_PD in FLASH_ACR key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdkeyr{}; 
    }
    namespace Nonepekeyr{    ///<Program/erase key register
        using Addr = Register::Address<0x40023c0c,0x00000000,0,unsigned>;
        ///FLASH_PEC and data EEPROM               key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pekeyr{}; 
    }
    namespace Noneprgkeyr{    ///<Program memory key register
        using Addr = Register::Address<0x40023c10,0x00000000,0,unsigned>;
        ///Program memory key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> prgkeyr{}; 
    }
    namespace Noneoptkeyr{    ///<Option byte key register
        using Addr = Register::Address<0x40023c14,0x00000000,0,unsigned>;
        ///Option byte key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkeyr{}; 
    }
    namespace Nonesr{    ///<Status register
        using Addr = Register::Address<0x40023c18,0xffffe0f0,0,unsigned>;
        ///Write/erase operations in               progress
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bsy{}; 
        ///End of operation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eop{}; 
        ///End of high voltage
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endhv{}; 
        ///Flash memory module ready after low               power mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ready{}; 
        ///Write protected error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wrperr{}; 
        ///Programming alignment               error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pgaerr{}; 
        ///Size error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sizerr{}; 
        ///Option validity error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> optverr{}; 
        ///Option UserValidity Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> optverrusr{}; 
    }
    namespace Noneobr{    ///<Option byte register
        using Addr = Register::Address<0x40023c1c,0xff00ff00,0,unsigned>;
        ///Read protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdprt{}; 
        ///BOR_LEV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> borLev{}; 
        ///IWDG_SW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iwdgSw{}; 
        ///nRTS_STOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> nrtsStop{}; 
        ///nRST_STDBY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> nrstStdby{}; 
        ///Boot From Bank 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> bfb2{}; 
    }
    namespace Nonewrpr1{    ///<Write protection register
        using Addr = Register::Address<0x40023c20,0x00000000,0,unsigned>;
        ///Write protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrp1{}; 
    }
    namespace Nonewrpr2{    ///<Write protection register
        using Addr = Register::Address<0x40023c80,0x00000000,0,unsigned>;
        ///WRP2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrp2{}; 
    }
    namespace Nonewrpr3{    ///<Write protection register
        using Addr = Register::Address<0x40023c84,0x00000000,0,unsigned>;
        ///WRP3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrp3{}; 
    }
}
