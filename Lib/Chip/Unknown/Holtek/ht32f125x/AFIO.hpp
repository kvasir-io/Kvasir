#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AFIO
    namespace NoneafioEssr0{    ///<AFIO_ESSR0
        using Addr = Register::Address<0x40022000,0x00000000,0,unsigned>;
        ///EXTI0PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti0pin{}; 
        namespace Exti0pinValC{
        }
        ///EXTI1PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti1pin{}; 
        namespace Exti1pinValC{
        }
        ///EXTI2PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti2pin{}; 
        namespace Exti2pinValC{
        }
        ///EXTI3PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti3pin{}; 
        namespace Exti3pinValC{
        }
        ///EXTI4PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> exti4pin{}; 
        namespace Exti4pinValC{
        }
        ///EXTI5PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> exti5pin{}; 
        namespace Exti5pinValC{
        }
        ///EXTI6PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> exti6pin{}; 
        namespace Exti6pinValC{
        }
        ///EXTI7PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> exti7pin{}; 
        namespace Exti7pinValC{
        }
    }
    namespace NoneafioEssr1{    ///<AFIO_ESSR1
        using Addr = Register::Address<0x40022004,0x00000000,0,unsigned>;
        ///EXTI8PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti8pin{}; 
        namespace Exti8pinValC{
        }
        ///EXTI9PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti9pin{}; 
        namespace Exti9pinValC{
        }
        ///EXTI10PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti10pin{}; 
        namespace Exti10pinValC{
        }
        ///EXTI11PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti11pin{}; 
        namespace Exti11pinValC{
        }
        ///EXTI12PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> exti12pin{}; 
        namespace Exti12pinValC{
        }
        ///EXTI13PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> exti13pin{}; 
        namespace Exti13pinValC{
        }
        ///EXTI14PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> exti14pin{}; 
        namespace Exti14pinValC{
        }
        ///EXTI15PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> exti15pin{}; 
        namespace Exti15pinValC{
        }
    }
    namespace NoneafioGpacfgr{    ///<AFIO_GPACFGR
        using Addr = Register::Address<0x40022008,0x00000000,0,unsigned>;
        ///PACFG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pacfg0{}; 
        namespace Pacfg0ValC{
        }
        ///PACFG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pacfg1{}; 
        namespace Pacfg1ValC{
        }
        ///PACFG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pacfg2{}; 
        namespace Pacfg2ValC{
        }
        ///PACFG3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pacfg3{}; 
        namespace Pacfg3ValC{
        }
        ///PACFG4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pacfg4{}; 
        namespace Pacfg4ValC{
        }
        ///PACFG5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pacfg5{}; 
        namespace Pacfg5ValC{
        }
        ///PACFG6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pacfg6{}; 
        namespace Pacfg6ValC{
        }
        ///PACFG7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pacfg7{}; 
        namespace Pacfg7ValC{
        }
        ///PACFG8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pacfg8{}; 
        namespace Pacfg8ValC{
        }
        ///PACFG9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pacfg9{}; 
        namespace Pacfg9ValC{
        }
        ///PACFG10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pacfg10{}; 
        namespace Pacfg10ValC{
        }
        ///PACFG11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pacfg11{}; 
        namespace Pacfg11ValC{
        }
        ///PACFG12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pacfg12{}; 
        namespace Pacfg12ValC{
        }
        ///PACFG13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pacfg13{}; 
        namespace Pacfg13ValC{
        }
        ///PACFG14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pacfg14{}; 
        namespace Pacfg14ValC{
        }
        ///PACFG15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pacfg15{}; 
        namespace Pacfg15ValC{
        }
    }
    namespace NoneafioGpbcfgr{    ///<AFIO_GPBCFGR
        using Addr = Register::Address<0x4002200c,0x00000000,0,unsigned>;
        ///PBCFG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pbcfg0{}; 
        namespace Pbcfg0ValC{
        }
        ///PBCFG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pbcfg1{}; 
        namespace Pbcfg1ValC{
        }
        ///PBCFG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pbcfg2{}; 
        namespace Pbcfg2ValC{
        }
        ///PBCFG3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pbcfg3{}; 
        namespace Pbcfg3ValC{
        }
        ///PBCFG4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pbcfg4{}; 
        namespace Pbcfg4ValC{
        }
        ///PBCFG5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pbcfg5{}; 
        namespace Pbcfg5ValC{
        }
        ///PBCFG6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pbcfg6{}; 
        namespace Pbcfg6ValC{
        }
        ///PBCFG7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pbcfg7{}; 
        namespace Pbcfg7ValC{
        }
        ///PBCFG8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pbcfg8{}; 
        namespace Pbcfg8ValC{
        }
        ///PBCFG9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pbcfg9{}; 
        namespace Pbcfg9ValC{
        }
        ///PBCFG10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pbcfg10{}; 
        namespace Pbcfg10ValC{
        }
        ///PBCFG11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pbcfg11{}; 
        namespace Pbcfg11ValC{
        }
        ///PBCFG12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pbcfg12{}; 
        namespace Pbcfg12ValC{
        }
        ///PBCFG13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pbcfg13{}; 
        namespace Pbcfg13ValC{
        }
        ///PBCFG14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pbcfg14{}; 
        namespace Pbcfg14ValC{
        }
        ///PBCFG15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pbcfg15{}; 
        namespace Pbcfg15ValC{
        }
    }
}
