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
}
