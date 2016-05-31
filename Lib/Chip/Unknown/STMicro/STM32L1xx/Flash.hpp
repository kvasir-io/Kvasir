#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Flash
    namespace FlashAcr{    ///<Access control register
        using Addr = Register::Address<0x40023c00,0xffffffe0,0x00000000,unsigned>;
        ///Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> latency{}; 
        ///Prefetch enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> prften{}; 
        ///64-bit access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> acc64{}; 
        ///Flash mode during Sleep
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sleepPd{}; 
        ///Flash mode during Run
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> runPd{}; 
    }
    namespace FlashPecr{    ///<Program/erase control register
        using Addr = Register::Address<0x40023c04,0xfff878e0,0x00000000,unsigned>;
        ///FLASH_PECR and data EEPROM              lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pelock{}; 
        ///Program memory lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> prglock{}; 
        ///Option bytes block lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> optlock{}; 
        ///Program memory selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> prog{}; 
        ///Data EEPROM selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> data{}; 
        ///Fixed time data write for Byte, Half              Word and Word programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ftdw{}; 
        ///Page or Double Word erase              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> erase{}; 
        ///Half Page/Double Word programming              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fprg{}; 
        ///Parallel bank mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> parallelbank{}; 
        ///End of programming interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eopie{}; 
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> errie{}; 
        ///Launch the option byte              loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> oblLaunch{}; 
    }
    namespace FlashPdkeyr{    ///<Power down key register
        using Addr = Register::Address<0x40023c08,0x00000000,0x00000000,unsigned>;
        ///RUN_PD in FLASH_ACR key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdkeyr{}; 
    }
    namespace FlashPekeyr{    ///<Program/erase key register
        using Addr = Register::Address<0x40023c0c,0x00000000,0x00000000,unsigned>;
        ///FLASH_PEC and data EEPROM              key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pekeyr{}; 
    }
    namespace FlashPrgkeyr{    ///<Program memory key register
        using Addr = Register::Address<0x40023c10,0x00000000,0x00000000,unsigned>;
        ///Program memory key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> prgkeyr{}; 
    }
    namespace FlashOptkeyr{    ///<Option byte key register
        using Addr = Register::Address<0x40023c14,0x00000000,0x00000000,unsigned>;
        ///Option byte key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkeyr{}; 
    }
    namespace FlashSr{    ///<Status register
        using Addr = Register::Address<0x40023c18,0xffffe0f0,0x00000000,unsigned>;
        ///Write/erase operations in              progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bsy{}; 
        ///End of operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eop{}; 
        ///End of high voltage
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endhv{}; 
        ///Flash memory module ready after low              power mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ready{}; 
        ///Write protected error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wrperr{}; 
        ///Programming alignment              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pgaerr{}; 
        ///Size error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sizerr{}; 
        ///Option validity error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> optverr{}; 
        ///Option UserValidity Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> optverrusr{}; 
    }
    namespace FlashObr{    ///<Option byte register
        using Addr = Register::Address<0x40023c1c,0xff00ff00,0x00000000,unsigned>;
        ///Read protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdprt{}; 
        ///BOR_LEV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> borLev{}; 
        ///IWDG_SW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iwdgSw{}; 
        ///nRTS_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> nrtsStop{}; 
        ///nRST_STDBY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> nrstStdby{}; 
        ///Boot From Bank 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> bfb2{}; 
    }
    namespace FlashWrpr1{    ///<Write protection register
        using Addr = Register::Address<0x40023c20,0x00000000,0x00000000,unsigned>;
        ///Write protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrp1{}; 
    }
    namespace FlashWrpr2{    ///<Write protection register
        using Addr = Register::Address<0x40023c80,0x00000000,0x00000000,unsigned>;
        ///WRP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrp2{}; 
    }
    namespace FlashWrpr3{    ///<Write protection register
        using Addr = Register::Address<0x40023c84,0x00000000,0x00000000,unsigned>;
        ///WRP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrp3{}; 
    }
}
