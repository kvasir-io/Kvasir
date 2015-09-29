#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AFIO
    namespace NoneafioEssr0{    ///<AFIO_ESSR0
        using Addr = Register::Address<0x40022000,0x00000000,0,unsigned>;
        ///EXTI0PIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti0pin{}; 
        ///EXTI1PIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti1pin{}; 
        ///EXTI2PIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti2pin{}; 
        ///EXTI3PIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti3pin{}; 
        ///EXTI4PIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> exti4pin{}; 
        ///EXTI5PIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> exti5pin{}; 
        ///EXTI6PIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> exti6pin{}; 
        ///EXTI7PIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> exti7pin{}; 
    }
    namespace NoneafioEssr1{    ///<AFIO_ESSR1
        using Addr = Register::Address<0x40022004,0x00000000,0,unsigned>;
        ///EXTI8PIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti8pin{}; 
        ///EXTI9PIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti9pin{}; 
        ///EXTI10PIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti10pin{}; 
        ///EXTI11PIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti11pin{}; 
        ///EXTI12PIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> exti12pin{}; 
        ///EXTI13PIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> exti13pin{}; 
        ///EXTI14PIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> exti14pin{}; 
        ///EXTI15PIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> exti15pin{}; 
    }
    namespace NoneafioGpacfgr{    ///<AFIO_GPACFGR
        using Addr = Register::Address<0x40022008,0x00000000,0,unsigned>;
        ///PACFG0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pacfg0{}; 
        ///PACFG1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pacfg1{}; 
        ///PACFG2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pacfg2{}; 
        ///PACFG3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pacfg3{}; 
        ///PACFG4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pacfg4{}; 
        ///PACFG5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pacfg5{}; 
        ///PACFG6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pacfg6{}; 
        ///PACFG7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pacfg7{}; 
        ///PACFG8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pacfg8{}; 
        ///PACFG9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pacfg9{}; 
        ///PACFG10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pacfg10{}; 
        ///PACFG11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pacfg11{}; 
        ///PACFG12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pacfg12{}; 
        ///PACFG13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pacfg13{}; 
        ///PACFG14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pacfg14{}; 
        ///PACFG15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pacfg15{}; 
    }
    namespace NoneafioGpbcfgr{    ///<AFIO_GPBCFGR
        using Addr = Register::Address<0x4002200c,0x00000000,0,unsigned>;
        ///PBCFG0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pbcfg0{}; 
        ///PBCFG1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pbcfg1{}; 
        ///PBCFG2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pbcfg2{}; 
        ///PBCFG3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pbcfg3{}; 
        ///PBCFG4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pbcfg4{}; 
        ///PBCFG5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pbcfg5{}; 
        ///PBCFG6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pbcfg6{}; 
        ///PBCFG7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pbcfg7{}; 
        ///PBCFG8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pbcfg8{}; 
        ///PBCFG9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pbcfg9{}; 
        ///PBCFG10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pbcfg10{}; 
        ///PBCFG11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pbcfg11{}; 
        ///PBCFG12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pbcfg12{}; 
        ///PBCFG13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pbcfg13{}; 
        ///PBCFG14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pbcfg14{}; 
        ///PBCFG15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pbcfg15{}; 
    }
    namespace NoneafioGpccfgr{    ///<AFIO_GPCCFGR
        using Addr = Register::Address<0x40022010,0x00000000,0,unsigned>;
        ///PCCFG0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pccfg0{}; 
        ///PCCFG1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pccfg1{}; 
        ///PCCFG2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pccfg2{}; 
        ///PCCFG3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pccfg3{}; 
        ///PCCFG4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pccfg4{}; 
        ///PCCFG5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pccfg5{}; 
        ///PCCFG6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pccfg6{}; 
        ///PCCFG7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pccfg7{}; 
        ///PCCFG8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pccfg8{}; 
        ///PCCFG9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pccfg9{}; 
        ///PCCFG10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pccfg10{}; 
        ///PCCFG11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pccfg11{}; 
        ///PCCFG12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pccfg12{}; 
        ///PCCFG13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pccfg13{}; 
        ///PCCFG14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pccfg14{}; 
        ///PCCFG15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pccfg15{}; 
    }
    namespace NoneafioGpdcfgr{    ///<AFIO_GPDCFGR
        using Addr = Register::Address<0x40022014,0x00000000,0,unsigned>;
        ///PDCFG0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pdcfg0{}; 
        ///PDCFG1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pdcfg1{}; 
        ///PDCFG2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pdcfg2{}; 
        ///PDCFG3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pdcfg3{}; 
        ///PDCFG4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pdcfg4{}; 
        ///PDCFG5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pdcfg5{}; 
        ///PDCFG6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pdcfg6{}; 
        ///PDCFG7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pdcfg7{}; 
        ///PDCFG8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pdcfg8{}; 
        ///PDCFG9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pdcfg9{}; 
        ///PDCFG10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pdcfg10{}; 
        ///PDCFG11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pdcfg11{}; 
        ///PDCFG12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pdcfg12{}; 
        ///PDCFG13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pdcfg13{}; 
        ///PDCFG14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pdcfg14{}; 
        ///PDCFG15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pdcfg15{}; 
    }
    namespace NoneafioGpecfgr{    ///<AFIO_GPECFGR
        using Addr = Register::Address<0x40022018,0x00000000,0,unsigned>;
        ///PECFG0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pecfg0{}; 
        ///PECFG1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pecfg1{}; 
        ///PECFG2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pecfg2{}; 
        ///PECFG3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pecfg3{}; 
        ///PECFG4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pecfg4{}; 
        ///PECFG5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pecfg5{}; 
        ///PECFG6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pecfg6{}; 
        ///PECFG7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pecfg7{}; 
        ///PECFG8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pecfg8{}; 
        ///PECFG9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pecfg9{}; 
        ///PECFG10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pecfg10{}; 
        ///PECFG11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pecfg11{}; 
        ///PECFG12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pecfg12{}; 
        ///PECFG13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pecfg13{}; 
        ///PECFG14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pecfg14{}; 
        ///PECFG15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pecfg15{}; 
    }
}
