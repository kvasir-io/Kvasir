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
    namespace NoneafioGpccfgr{    ///<AFIO_GPCCFGR
        using Addr = Register::Address<0x40022010,0x00000000,0,unsigned>;
        ///PCCFG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pccfg0{}; 
        namespace Pccfg0ValC{
        }
        ///PCCFG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pccfg1{}; 
        namespace Pccfg1ValC{
        }
        ///PCCFG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pccfg2{}; 
        namespace Pccfg2ValC{
        }
        ///PCCFG3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pccfg3{}; 
        namespace Pccfg3ValC{
        }
        ///PCCFG4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pccfg4{}; 
        namespace Pccfg4ValC{
        }
        ///PCCFG5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pccfg5{}; 
        namespace Pccfg5ValC{
        }
        ///PCCFG6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pccfg6{}; 
        namespace Pccfg6ValC{
        }
        ///PCCFG7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pccfg7{}; 
        namespace Pccfg7ValC{
        }
        ///PCCFG8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pccfg8{}; 
        namespace Pccfg8ValC{
        }
        ///PCCFG9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pccfg9{}; 
        namespace Pccfg9ValC{
        }
        ///PCCFG10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pccfg10{}; 
        namespace Pccfg10ValC{
        }
        ///PCCFG11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pccfg11{}; 
        namespace Pccfg11ValC{
        }
        ///PCCFG12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pccfg12{}; 
        namespace Pccfg12ValC{
        }
        ///PCCFG13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pccfg13{}; 
        namespace Pccfg13ValC{
        }
        ///PCCFG14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pccfg14{}; 
        namespace Pccfg14ValC{
        }
        ///PCCFG15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pccfg15{}; 
        namespace Pccfg15ValC{
        }
    }
    namespace NoneafioGpdcfgr{    ///<AFIO_GPDCFGR
        using Addr = Register::Address<0x40022014,0x00000000,0,unsigned>;
        ///PDCFG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pdcfg0{}; 
        namespace Pdcfg0ValC{
        }
        ///PDCFG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pdcfg1{}; 
        namespace Pdcfg1ValC{
        }
        ///PDCFG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pdcfg2{}; 
        namespace Pdcfg2ValC{
        }
        ///PDCFG3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pdcfg3{}; 
        namespace Pdcfg3ValC{
        }
        ///PDCFG4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pdcfg4{}; 
        namespace Pdcfg4ValC{
        }
        ///PDCFG5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pdcfg5{}; 
        namespace Pdcfg5ValC{
        }
        ///PDCFG6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pdcfg6{}; 
        namespace Pdcfg6ValC{
        }
        ///PDCFG7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pdcfg7{}; 
        namespace Pdcfg7ValC{
        }
        ///PDCFG8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pdcfg8{}; 
        namespace Pdcfg8ValC{
        }
        ///PDCFG9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pdcfg9{}; 
        namespace Pdcfg9ValC{
        }
        ///PDCFG10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pdcfg10{}; 
        namespace Pdcfg10ValC{
        }
        ///PDCFG11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pdcfg11{}; 
        namespace Pdcfg11ValC{
        }
        ///PDCFG12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pdcfg12{}; 
        namespace Pdcfg12ValC{
        }
        ///PDCFG13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pdcfg13{}; 
        namespace Pdcfg13ValC{
        }
        ///PDCFG14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pdcfg14{}; 
        namespace Pdcfg14ValC{
        }
        ///PDCFG15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pdcfg15{}; 
        namespace Pdcfg15ValC{
        }
    }
    namespace NoneafioGpecfgr{    ///<AFIO_GPECFGR
        using Addr = Register::Address<0x40022018,0x00000000,0,unsigned>;
        ///PECFG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pecfg0{}; 
        namespace Pecfg0ValC{
        }
        ///PECFG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pecfg1{}; 
        namespace Pecfg1ValC{
        }
        ///PECFG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pecfg2{}; 
        namespace Pecfg2ValC{
        }
        ///PECFG3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pecfg3{}; 
        namespace Pecfg3ValC{
        }
        ///PECFG4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pecfg4{}; 
        namespace Pecfg4ValC{
        }
        ///PECFG5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pecfg5{}; 
        namespace Pecfg5ValC{
        }
        ///PECFG6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pecfg6{}; 
        namespace Pecfg6ValC{
        }
        ///PECFG7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pecfg7{}; 
        namespace Pecfg7ValC{
        }
        ///PECFG8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pecfg8{}; 
        namespace Pecfg8ValC{
        }
        ///PECFG9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> pecfg9{}; 
        namespace Pecfg9ValC{
        }
        ///PECFG10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> pecfg10{}; 
        namespace Pecfg10ValC{
        }
        ///PECFG11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pecfg11{}; 
        namespace Pecfg11ValC{
        }
        ///PECFG12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> pecfg12{}; 
        namespace Pecfg12ValC{
        }
        ///PECFG13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> pecfg13{}; 
        namespace Pecfg13ValC{
        }
        ///PECFG14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> pecfg14{}; 
        namespace Pecfg14ValC{
        }
        ///PECFG15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pecfg15{}; 
        namespace Pecfg15ValC{
        }
    }
}
