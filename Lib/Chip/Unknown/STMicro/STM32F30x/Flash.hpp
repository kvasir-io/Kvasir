#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Flash
    namespace FlashAcr{    ///<Flash access control register
        using Addr = Register::Address<0x40022000,0xffffffc8,0x00000000,unsigned>;
        ///LATENCY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> latency{}; 
        ///PRFTBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> prftbe{}; 
        ///PRFTBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> prftbs{}; 
    }
    namespace FlashKeyr{    ///<Flash key register
        using Addr = Register::Address<0x40022004,0x00000000,0x00000000,unsigned>;
        ///Flash Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fkeyr{}; 
    }
    namespace FlashOptkeyr{    ///<Flash option key register
        using Addr = Register::Address<0x40022008,0x00000000,0x00000000,unsigned>;
        ///Option byte key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkeyr{}; 
    }
    namespace FlashSr{    ///<Flash status register
        using Addr = Register::Address<0x4002200c,0xffffffca,0x00000000,unsigned>;
        ///End of operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eop{}; 
        ///Write protection error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wrprt{}; 
        ///Programming error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pgerr{}; 
        ///Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bsy{}; 
    }
    namespace FlashCr{    ///<Flash control register
        using Addr = Register::Address<0x40022010,0xffffc908,0x00000000,unsigned>;
        ///Force option byte loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> forceOptload{}; 
        ///End of operation interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eopie{}; 
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> errie{}; 
        ///Option bytes write enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> optwre{}; 
        ///Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lock{}; 
        ///Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> strt{}; 
        ///Option byte erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> opter{}; 
        ///Option byte programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> optpg{}; 
        ///Mass erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mer{}; 
        ///Page erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per{}; 
        ///Programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg{}; 
    }
    namespace FlashAr{    ///<Flash address register
        using Addr = Register::Address<0x40022014,0x00000000,0x00000000,unsigned>;
        ///Flash address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> far{}; 
    }
    namespace FlashObr{    ///<Option byte register
        using Addr = Register::Address<0x4002201c,0x000088f8,0x00000000,unsigned>;
        ///Option byte error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opterr{}; 
        ///Level 1 protection status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> level1Prot{}; 
        ///Level 2 protection status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> level2Prot{}; 
        ///WDG_SW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wdgSw{}; 
        ///nRST_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> nrstStop{}; 
        ///nRST_STDBY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nrstStdby{}; 
        ///BOOT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> boot1{}; 
        ///VDDA_MONITOR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> vddaMonitor{}; 
        ///SRAM_PARITY_CHECK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> sramParityCheck{}; 
        ///Data0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data0{}; 
        ///Data1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace FlashWrpr{    ///<Write protection register
        using Addr = Register::Address<0x40022020,0x00000000,0x00000000,unsigned>;
        ///Write protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrp{}; 
    }
}
