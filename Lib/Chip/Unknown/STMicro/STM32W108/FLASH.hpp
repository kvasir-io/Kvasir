#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//FLASH
    namespace FlashFlashAcr{    ///<FLASH access control register
        using Addr = Register::Address<0x40008000,0xffffffc0,0x00000000,unsigned>;
        ///Prefetch Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> prftbs{}; 
        ///PRFTBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> prftbe{}; 
        ///HLFCYA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hlfcya{}; 
        ///LATENCY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> latency{}; 
    }
    namespace FlashFlashKeyr{    ///<FLASH key register
        using Addr = Register::Address<0x40008004,0x00000000,0x00000000,unsigned>;
        ///FKEYR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fkeyr{}; 
    }
    namespace FlashFlashOptkeyr{    ///<FLASH OPT key register
        using Addr = Register::Address<0x40008008,0x00000000,0x00000000,unsigned>;
        ///OPTKEYR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkeyr{}; 
    }
    namespace FlashFlashSr{    ///<FLASH status register
        using Addr = Register::Address<0x4000800c,0xffffffca,0x00000000,unsigned>;
        ///EOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eop{}; 
        ///WRPRTERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wrprterr{}; 
        ///PGERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pgerr{}; 
        ///BSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bsy{}; 
    }
    namespace FlashFlashCr{    ///<FLASH control register
        using Addr = Register::Address<0x40008010,0xffffe908,0x00000000,unsigned>;
        ///EOPIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> eopie{}; 
        ///ERRIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> errie{}; 
        ///OPTWRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> optwre{}; 
        ///LOCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lock{}; 
        ///STRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> strt{}; 
        ///OPTER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> opter{}; 
        ///OPTPG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> optpg{}; 
        ///MER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mer{}; 
        ///PER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per{}; 
        ///PG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg{}; 
    }
    namespace FlashFlashAr{    ///<FLASH address register
        using Addr = Register::Address<0x40008014,0x00000000,0x00000000,unsigned>;
        ///FAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> far{}; 
    }
    namespace FlashFlashObr{    ///<FLASH option bytes register
        using Addr = Register::Address<0x4000801c,0xfffffffc,0x00000000,unsigned>;
        ///RDPRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rdprt{}; 
        ///OPTERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opterr{}; 
    }
    namespace FlashFlashWrpr{    ///<FLASH write protection          register
        using Addr = Register::Address<0x40008020,0x00000000,0x00000000,unsigned>;
        ///WRP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrp{}; 
    }
    namespace FlashFlashClker{    ///<FLASH controller clock enable          register
        using Addr = Register::Address<0x4000402c,0xfffffffe,0x00000000,unsigned>;
        ///EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace FlashFlashClksr{    ///<FLASH controller clock status          register
        using Addr = Register::Address<0x40004030,0xfffffffc,0x00000000,unsigned>;
        ///BSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bsy{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ack{}; 
    }
}
